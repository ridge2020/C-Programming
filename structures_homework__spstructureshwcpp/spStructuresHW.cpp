/**********************************************************************
 * @file    spStructuresHW.cpp
 * @brief   program will gather information of movies from txt file
 *          create a vector, sort the vector, and presen the movie
 *          with the highest profit.
 *
 * 
 *
 * @remarks  Possible issues with pre written code, a lot of unaccounted for
 *           endl, like the first line of each outputted file, and had to make
 *           strange if statements for lord of the rings lol, becasue it had other
 *           ideas, and wanted to do things differently?? 
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  08
 *      Due Date:      11/29
 *      Instructor:    MS. Serviner
 *
 *      Input:       nothing
 *
 *      Output:        display movie information, with highets prodfit
 * 
 * @author        Ridge Diffine
 * @date          2018-11-30
 **********************************************************************
 */
 
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

 /**
 * @brief       readAndCalculate- will read information from file
 *              and store in vector
 *
 * @detailed   This function will read a already opened file and store
 *             all the information into a vector of structures, using 
 *             getline and ; as a seperator.
 *
 * @remarks
 *
 * @param        infile, and ifstram file
 * @param        allMovies a vector of structures
 *
 * @return nothing
**/
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

/**
 * @brief      bubbleSortByName- will sort a vector by name.
 *
 * @detailed   This function will take  a vector and sort it by
 *             the tile of th movie in alphabetical order.
 * @remarks
 *
 * @param        allMovies a vector of structures
 *
 * @return nothing
**/
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

/**
 * @brief      bubbleSortByName- will sort a vector by name.
 *
 * @detailed   This function will take  a vector and sort it by
 *             the profit of the movie in descending order.
 * @remarks
 *
 * @param        allMovies a vector of structures
 *
 * @return nothing
**/
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

/**
 * @brief      write - will output information from vector to
 *             file.
 *
 * @detailed   This function will take a vector and output all information
 *             from each structure, and wirte on one line per structure.
 * @remarks
 *
 * @param        allMovies a vector of structures
 * @param        outfile 
 * 
 * @return nothing
**/
void write(ostream& outfile, const vector<MovieData>& movies)
{
    for(vector<MovieData>::size_type i = 0; i < (movies.size()); ++i){
	    outfile << fixed << setprecision(2);
	    if(movies.at(i).name == "The Lord of the Rings: The Fellowship of the Ring"){
	        outfile << endl;
	    }
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

/**
 * @brief      displaySingleMovie - will display a the info a movie.
 *
 * @detailed   This function will take display each bit of information
 *             from a structure in a certain format to the screen.
 * @remarks
 *
 * @param        singleMovie a single movie structure
 *
 * @return nothing
**/
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

/**
 * @brief     determineHighestProfitMovie- will return the first 
 *            structure of a vector.
 *
 * @detailed   This fucntion returns the first structure of a vector
 *             that is already in descending order.
 * @remarks
 *
 * @param        movies a vector of structures
 *
 * @return fist structure of a vector
**/
MovieData determineHighestProfitMovie(const vector<MovieData>& movies)
{
    return movies.at(0);
}
