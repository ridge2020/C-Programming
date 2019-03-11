#include <iostream>
   using std::cin;
   using std::cout;
   using std::endl;
   using std::istream;
   using std::ostream;

#include <fstream>
   using std::ofstream;
   using std::ifstream;

#include <iomanip>
   using std::setprecision;
   using std::fixed;

#include <string>
   using std::string;

#include <vector>
   using std::vector;

#include <algorithm>
   using std::swap;

#include <limits>

// define MovieData structure here
struct MovieData{
    string name;
    string director;
    string year;
    int runningTime;
    int cost;
    int revenue;
    int profit;
};

void readAndCalculate(istream&, vector<MovieData>&);
void bubbleSortByName(vector<MovieData>&);
void bubbleSortByProfit(vector<MovieData>&);
void write(ostream&, const vector<MovieData>&);
void displaySingleMovie(const MovieData&);
MovieData determineHighestProfitMovie(const vector<MovieData>&);

int main()
{
	string filename;
	cout << "Enter the name of the file containing the movie data (include file extension):  ";
	getline(cin,filename);
	
	ifstream fin(filename);
	if (!fin)
	{
		cout << "Unable to open " << filename << endl;
		cout << "Exiting...\n\n";
	}
	else
	{
		vector<MovieData> allMovies;
		readAndCalculate(fin,allMovies);
		fin.close();
		if (allMovies.size() > 0)
		{
			bubbleSortByName(allMovies);
			ofstream fout("sortedAlpha.txt");
			write(fout,allMovies);
			fout.close();
			
			bubbleSortByProfit(allMovies);
			fout.open("sortedProfitLoss.txt");
			write(fout,allMovies);
			fout.close();
			
			cout << "\n\nMovie with highest profit:  ";
			displaySingleMovie(determineHighestProfitMovie(allMovies));
		}
	}		
	return 0;
}

void readAndCalculate(istream& infile, vector<MovieData>& allMovies)
{
    MovieData info;
	while (getline(infile, info.name,';'))
	{
		getline(infile, info.director, ';');
		getline(infile, info.year, ';');
		infile >> info.runningTime;
		infile.ignore(1);
		infile >> info.cost;
		infile.ignore(1);
	    infile >> info.revenue;
	    info.profit = (info.revenue - info.cost);
	    allMovies.push_back(info);
	}
}

void bubbleSortByName(vector<MovieData>& allMovies)
{
    int passes = 0;
    bool swapOccured;
    do{
        swapOccured = false;
        for(vector<MovieData>::size_type i = 0; i < (allMovies.size() - 1 - passes); ++i){
            if(allMovies.at(i).name > allMovies.at(i + 1).name){
                MovieData movie = allMovies.at(i);
                allMovies.at(i) = allMovies.at(i + 1);
                allMovies.at(i + 1) = movie;
                swapOccured = true;
            }
        }
        passes++;
    }while(swapOccured);
// similar to bubbleSortByName from tutorial
}

void bubbleSortByProfit(vector<MovieData>& movies)
{
    int passes = 0;
    bool swapOccured;
    do{
        swapOccured = false;
        for(vector<MovieData>::size_type i = 0; i < (movies.size() - 1 - passes); ++i){
            if(movies.at(i).profit < movies.at(i + 1).profit){
                MovieData profit = movies.at(i);
                movies.at(i) = movies.at(i + 1);
                movies.at(i + 1) = profit;
                swapOccured = true;
            }
        }
        passes++;
    }while(swapOccured);
// copy/paste code from bubbleSortByName and modify for sorting by the profit field
}

void write(ostream& outfile, const vector<MovieData>& movies)
{
    for(vector<MovieData>::size_type i = 0; i < (movies.size()); ++i){
	    outfile << fixed << setprecision(2);
	    outfile << movies.at(i).name << ";"; 
	    outfile << movies.at(i).director << ";"; 
	    outfile << movies.at(i).year << ";";
	    outfile << movies.at(i).runningTime << ";"; 
	    outfile << movies.at(i).cost << ";"; 
	    outfile << movies.at(i).revenue << ";"; 
	    outfile << movies.at(i).profit;
    }
// fill in code to output all the movie data to the outfile
}

void displaySingleMovie(const MovieData& singleMovie)
{
	cout.imbue(std::locale("en_US"));
	cout << fixed << setprecision(2);
	cout << singleMovie.name << endl;
    cout << "Directed by " << singleMovie.director << endl;
    cout << "Released in " << singleMovie.year << endl;
    cout << "Running " << singleMovie.runningTime << " minutes" << endl;
    cout << "Cost $" << singleMovie.cost << " to produce" << endl;
    cout << "Generated $" << singleMovie.revenue << " in revenue" << endl;
    cout << "For a profit of $" << singleMovie.profit << endl;
// fill in code to output the fields of a single movie's structure to the screen
}

MovieData determineHighestProfitMovie(const vector<MovieData>& movies)
{
    int profit;
    int index;
    int maxProfit = 0;
    for(vector<MovieData>::size_type i = 0; i < (movies.size()); ++i){
        profit = movies.at(i).profit;
        if(profit > maxProfit){
            profit = maxProfit;
            index = i;
        }
    }

    
// this function may either
// assume the movies have been sorted by the profit field using bubbleSortByProfit
// OR
// find the movie with the highest profit regardless of how the data is stored
    return movies.at(index);
}
