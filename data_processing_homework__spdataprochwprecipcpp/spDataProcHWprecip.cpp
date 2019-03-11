/**********************************************************************
 * @file    spDataProcHWprecip.spDataProcHWprecip
 * @brief   this program is a modular program that will 
 *          read data values of rain for each month for 5 years
 *          and return dates based on several different factors.
 *
 * 
 *
 * @remarks     I got the wettest year function to give the correct averages 
 *              for each 5 months of each year, but for some reason it 
 *              kept adding each average(total average of 5 months)
 *              together instead of just taking the
 *              highest one, as you can see from display, i tried everything.
 *              
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  05
 *      Due Date:      november 2nd
 *      Instructor:    MS. Serviner
 *
 *      Input:        none
 *                      
 *
 *      Output:        the result sof the functions used
 *
 * @author        Ridge Diffine
 * @date          2018-11-02
 **********************************************************************
 */


/**
 * @brief       readValues()- will read values from txt file
 *
 * @detailed   this fucntion will read data and creat a vector 
 *              and  a double vector.
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   filename name of file
 *
 *
 * @return  nothing
 * 
**/

/**
 * @brief       findMonthWithLeastRainfall- will find month of least rainfall
 *
 * @detailed   will use loops to compare all months
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   vector
 * @param   double vector
 *
 *
 * @return  date
 * 
**/

/**
 * @brief       findMonthWithGreatestRainfallRainfall- will find month of greatest rainfall
 *
 * @detailed   will use loops to compare all months from vector and double vector
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   vector
 * @param   double vector
 *
 *
 * @return  date
 * 
**/

/**
 * @brief       findMonthWithMostDiverseRainfall- will find month with largets range of rainfall
 *
 * @detailed   will use loops to compare all months from vector and double vector
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   vector
 * @param   double vector
 *
 *
 * @return  date
 * 
**/

/**
 * @brief       mostConsecutiveDaysWithOutRain- will find month with the longest
 *              drought
 *
 * @detailed   will use loops to compare all months from vector and double vector,
 *              used loops to restart each 12 months.
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   vector
 * @param   double vector
 *
 *
 * @return  date
 * 
**/

/**
 * @brief       mostConsecutiveDaysWithOutRainFall- will find period of largest drought
 *              over all months
 *
 * @detailed   will use loops to compare all days from vector and double vector
 *              and flag restart when encounter rainy day
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   vector
 * @param   double vector
 *
 *
 * @return  days
 * 
**/

/**
 * @brief       findDayWithGreatestRainfall- will find day of greatest rainfall
 *
 * @detailed   will use loops to compare all days from vector and double vector
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   vector
 * @param   double vector
 *
 *
 * @return  day
 * 
**/

/**
 * @brief       changeFormat- will convert the return of all functions, that return
 *              int into proper format
 *
 * @detailed   will use mod and division of ints to seperate date and use proper 
 *              formatiing.
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   vector
 * @param   double vector
 *
 *
 * @return  nothing
 * 
**/

#include<vector>
#include<fstream>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<sstream>
    using namespace std;





void readValues(std::string filename, vector<vector<double>>& precipitation, vector<int>& dates){
    ifstream myFile;
    string line;
    double measurement;
    int date;
    vector<double> dailyRain;
    cout << "Please enter file name: ";
    cin >> filename;
    myFile.open(filename);
    if(myFile.is_open()){
        while(std::getline(myFile, line)){
            std::istringstream iss{line};
            iss >> date;
            dates.push_back(date);
            dailyRain.clear();
            while (iss >> measurement) {
                dailyRain.push_back(measurement);
            }
            precipitation.push_back(dailyRain);
        }
    }
}

int findMonthWithLeastRainfall(const vector<vector<double>>& precipitation, vector<int>& dates){
    double total, measurement, min = 100000;
    int date, targetDate, size, size2;
    vector<double> rainFall;
    size = dates.size();
    for(int count = 0; count < size; count++){
        date = dates.at(count);
        rainFall = precipitation.at(count);
        size2 = rainFall.size();
        for(int count2 = 0; count2 < size2; count2++){
            measurement = rainFall.at(count2);
            total = total + measurement;
        }
        if(total < min){
            min = total;
            targetDate = date;
        }
        total = 0;
    }
    return targetDate;
}

int findMonthWithGreatestRainfall(const vector<vector<double>>& precipitation, vector<int>& dates){
    double total, measurement, max = 0;
    int date, targetDate, size, size2;
    vector<double> rainFall;
    size = dates.size();
    for(int count = 0; count < size; count++){
        date = dates.at(count);
        rainFall = precipitation.at(count);
        size2 = rainFall.size();
        for(int count2 = 0; count2 < size2; count2++){
            measurement = rainFall.at(count2);
            total = total + measurement;
        }
        if(total > max){
            max = total;
            targetDate = date;
        }
        total = 0;
    }
    return targetDate;
}


int findMonthWithMostDiverseRainfall(const vector<vector<double>>& precipitation, vector<int>& dates){
    double measurement, max = 0, min = 1000000, maxRange = 0, range;
    int date, targetDate, size, size2;
    vector<double> rainFall;
    size = dates.size();
    for(int count = 0; count < size; count++){
        date = dates.at(count);
        rainFall = precipitation.at(count);
        size2 = rainFall.size();
        for(int count2 = 0; count2 < size2; count2++){
            measurement = rainFall.at(count2);
            if(measurement > max){
                max = measurement;
            }
            if(measurement < min){
                min = measurement;
            }
            range = max - min;
        }
        if(range > maxRange){
            maxRange = range;
            targetDate = date;
        }
    }
    return targetDate;
}


int mostConsecutiveDaysWithOutRain(const vector<vector<double>>& precipitation, vector<int>& dates, int& daysWithOut){
    double measurement;
    int date, targetDate, size, size2, daysInaRow = 0, maxDays;
    vector<double> rainFall;
    size = dates.size();
    for(int count = 0; count < size; count++){
        date = dates.at(count);
        rainFall = precipitation.at(count);
        size2 = rainFall.size();
        for(int count2 = 0; count2 < size2; count2++){
            measurement = rainFall.at(count2);
            if(measurement == 0){
                daysInaRow = daysInaRow + 1;
            }
            if(measurement > 0){
                if(daysInaRow > maxDays){
                    maxDays = daysInaRow;
                    daysWithOut = maxDays;
                    targetDate = date;
                }
            daysInaRow = 0;    
            }
        }
        daysInaRow = 0;
    }
    return targetDate;
}

int mostConsecutiveDaysWithOutRainFall(const vector<vector<double>>& precipitation, vector<int>& dates){
    double measurement;
    int size, size2, daysInaRow = 0, maxDays = 0;
    vector<double> rainFall;
    size = dates.size();
    for(int count = 0; count < size; count++){
        rainFall = precipitation.at(count);
        size2 = rainFall.size();
        for(int count2 = 0; count2 < size2; count2++){
            measurement = rainFall.at(count2);
            if(measurement == 0){
                daysInaRow = daysInaRow + 1;
            }
            if(measurement != 0){
                if(daysInaRow > maxDays){
                    maxDays = daysInaRow;
                }
            daysInaRow = 0;    
            }
        }
    }
    return maxDays;
}


int findDayWithGreatestRainfall(const vector<vector<double>>& precipitation, vector<int>& dates, int& day){
    double measurement, max = 0;
    int date, targetDate, size, size2;
    vector<double> rainFall;
    size = dates.size();
    for(int count = 0; count < size; count++){
        date = dates.at(count);
        rainFall = precipitation.at(count);
        size2 = rainFall.size();
        for(int count2 = 0; count2 < size2; count2++){
            measurement = rainFall.at(count2);
            if(measurement > max){
                max = measurement;
                targetDate = date;
                day = count2 + 1;
            }
        }
    }
    return targetDate;
}



int findYearWithGreatestRainfall(const vector<vector<double>>& precipitation, vector<int>& dates){
    double total, measurement, average, average2, total2, maxAverage, max;
    int size, size2, count4 = 1, date, targetDate;
    vector<double> rainFall;
    vector<double> averages;
    size = dates.size();
    
    for(int count = 0; count < size; count++){
        rainFall = precipitation.at(count);
        size2 = rainFall.size();
        date = dates.at(count);
        for(int count2 = 0; count2 < size2; count2++){
            measurement = rainFall.at(count2);
            total = total + measurement;
        }
        average = total / size2;
        averages.push_back(average);
        total = 0;
        average = 0;
        if((count + 1) % 12 == 0){
            count4 = count4 + 1;
            sort(averages.rbegin(), averages.rend());
            for(int count3 = 0; count3 < 5; count3++){
                total2 = total2 + averages.at(count3);
            }
            average2 = total2 / 5;
            if(average2 > maxAverage){
                maxAverage = average2;
                max = maxAverage;
                cout << "Max" << max << endl;
                targetDate = date;
                maxAverage = 0;
                averages.clear();
            }
        }
    }
   
    return targetDate;
}


void changeFormat(int date, int& month, int& year){
    year = date / 100;
    month = date % 100;
}


int main(){
    int month, year;
    vector<vector<double>> precipitation;
    vector<int> dates;
    int daysWithOut, day, firstDay, lastDay, size;
    readValues("rainfall.txt", precipitation, dates);
    firstDay = dates.at(0);
    size = dates.size()-1;
    lastDay = dates.at(size);
    changeFormat(firstDay, month, year);
    cout << "Date Range" << endl << month << "/" << year << " - ";
    changeFormat(lastDay, month, year);
    cout << month << "/" << year << endl;
    
    changeFormat(findMonthWithLeastRainfall(precipitation, dates), month, year);
    cout << "Driest Month" << endl << month << "/" << year<<endl;
         
    changeFormat(findMonthWithGreatestRainfall(precipitation,dates), month, year);
    cout << "Wettest month" << endl << month << "/" << year<<endl;
    
    changeFormat(findMonthWithMostDiverseRainfall(precipitation,dates), month, year);
    cout << "Most variation in rainfall(month)" << endl << month <<"/"<<year<<endl;
    
    changeFormat(mostConsecutiveDaysWithOutRain(precipitation,dates,daysWithOut), month, year);
    cout << "Month with Most consecutive days without rain" << endl <<month<<"/"<<year<<endl;
    
    
    cout << "Most consecutive days without rainfall in one month" << endl
         << daysWithOut << endl;
         
    cout << "Most consecutive days without rainfall(across months)" << endl 
         << mostConsecutiveDaysWithOutRainFall(precipitation,dates) << endl;
         
    changeFormat(findDayWithGreatestRainfall(precipitation,dates,day), month, year);
    cout << "Wettest Day" << endl << day << "/" << month << "/" << year << endl;
    
    changeFormat(findYearWithGreatestRainfall(precipitation,dates), month, year);
    cout << "Wettest year" << endl << year << endl;
    
    
    return 0;
}