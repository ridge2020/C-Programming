/**********************************************************************
 * @file    spVectorHWstatisitics.cpp
 * 
 * @brief  This function is a modular function, that develops a vector 
 *         from reading a txt file, then finds the maxes, and mins.
 *         Then the file finds mean and sd. The file will display
 *         all the values of the vector 16 a line, and display the oulier.
 * 
 *
 * @remarks
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  08
 *      Due Date:      10/23/18
 *      Instructor:    MS. Serviner
 *
 *      Input:      
 *
 *      Output:      
 * 
 * @author        Ridge Diffine
 * @date          10/23/18
 **********************************************************************

 /**
 * @brief       double calcMean() - will find mean of a vector
 *
 * @detailed   this function uses a at() loop to find total of all 
 *              vector elements, then get the average.
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   const vector<int&  reference  vector  
 *
 *
 * @return  average
**/


/**
 * @brief       double calcStandardDeviation() - will find standadr 
 *              deviation of a vector
 *
 * @detailed   this function uses calcMean to find average then use 
 *              that
 *              to total all differeences and find standard deviation
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   const vector<int&  reference  vector  
 *
 *
 * @return  standard deviation
**/


/**
 * @brief       void displayValues()- displays a vectors elements
 *
 * @detailed   this function will cout each element in order 
 *              untill 16 numbers have been printed then it will
 *              move to next line
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   const vector<int&  reference  vector  
 *
 *
 * @return  none
**/


/**
 * @brief       int findMaximum(const vector<int>7) -  this function
 *              will find the maxium of a vector.
 *
 * @detailed   This function will use .at() to compare each
 *              element to the largest one so far to find max.
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   const vector<int&  reference  vector  
 *
 *
 * @return  max
**/


/**
 * @brief       int findMinimum(const vector<int>7) -  this function
 *              will find the minimum of a vector.
 *
 * @detailed   This function will use .at() to compare each
 *              element to the smallest one so far to find max.
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   const vector<int&  reference  vector  
 *
 *
 * @return  min
**/


/**
 * @brief       int findSecondMaximum(const vector<int>7) -  this function
 *              will find the second maxium of a vector.
 *
 * @detailed   This function will use .at() to compare each
 *              element to the largest one, so far to find second max.
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   const vector<int&  reference  vector  
 *
 *
 * @return  2ndmax
**/


/**
 * @brief       int findSecondMinimum(const vector<int>7) -  this 
 *              function will find the 2nd minimum of a vector.
 *
 * @detailed   This function will use .at() to compare each
 *              element to the largest one so far to find 2nd minimum.
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   const vector<int&  reference  vector  
 *
 *
 * @return  2ndmin
**/


/**
 * @brief       vector<int> readValues(string)- this function will 
 *              create vector from txt file.
 * 
 * @detailed   This function will use a loop to get each digit
 *              from a file and then use push-back to make a 
 *              vector.
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   string  file name  
 *
 *
 * @return  x vector
**/


/**
 * @brief       bool findMostExtremeOutlier(const vector<int>&, int&)- 
 *              this function will return true or false if there is a
 *              outlier
 *
 * @detailed   This function finds extreme outliers by comparing the 
 *          difference to standard deviation, then making reference 
 *          paramter for outlier.
 * 
 * 
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   const vector<int&  reference  vector  
 * @param   outlier   int
 *
 * @return  true or false
**/




#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<cmath>
    using namespace std;
    
    
    
    
    
double calcMean(const vector<int>& x){
    int index = 0, element, total = 0, size = x.size();
    double average;
    while(index <= (size - 1)){
        element = x.at(index);
        total = total + element;
        index = index + 1;
    }
    average = (total / size);
    return average;
}

double calcStandardDeviation(const vector<int>& x){
    int index = 0, element, total = 0, difference, squaredDifference, 
    size = x.size();
    double average, newAverage;
    average = calcMean(x);
    while(index <= (size - 1)){
        element = x.at(index);
        difference = (average - element);
        squaredDifference = pow(difference, 2);
        total = total + squaredDifference;
        index = index + 1;
    }
    newAverage = sqrt((total / size));
    
    return newAverage;
}

void displayValues(const vector<int>& x){
    int size = x.size(), element, count = 0;
    for(int index = 0; index <= (size - 1); index++){
        element = x.at(index);
        cout << setw(5) << element;
        count = count + 1;
        if(count == 15){
           count = 0;
           cout << endl;
        }
        
    }
    cout << endl;
}

int findMaximum(const vector<int>& x){
    int size = x.size(), element, max = 0;
    for(int index = 0; index <= (size - 1); index++){
        element = x.at(index);
        if(element > max){
           max = element;
        }
    }
    return max;
}

int findMinimum(const vector<int>& x){
    int size = x.size(), element, min = findMaximum(x);
    for(int index = 0; index <= (size - 1); index++){
        element = x.at(index);
        if(element < min && element > 0){
           min = element;
        }
    }
    return min;
}

int findSecondMaximum(const vector<int>& x){
    int size = x.size(), element, max2 = 0;
    for(int index = 0; index <= (size - 1); index++){
        element = x.at(index);
        if(element > max2 && element < findMaximum(x)){
           max2 = element;
        }
    }
    return max2;
}

int findSecondMinimum(const vector<int>& x){
    int size = x.size(), element, min2 = findMaximum(x);
    for(int index = 0; index <= (size - 1); index++){
        element = x.at(index);
        if(element > findMinimum(x) && element < min2){
           min2 = element;
        }
    }
    return min2;
}

vector<int> readValues(string name){
    int digit;
    vector<int> x;
    ifstream myFile;
    myFile.open(name);
    if(myFile){
        while(!myFile.eof()){
            myFile >> digit;
            x.push_back(digit);
        }
    }
    else{
        cout << "The file with that name does not exist." << endl;
    }
    return x;
}

bool findMostExtremeOutlier(const vector<int>& x, int& outlier){
    outlier = 0;
    int index = 0, element, difference, average = calcMean(x), size;
    size = x.size();
    while(index <= (size - 1)){
        element = x.at(index);
        difference = (average - element);
        if(abs(difference) > (3 * calcStandardDeviation(x))){
            outlier = element;
        }
        index = index + 1;
    }
    if(outlier == 0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    vector<int> x = readValues("vectorTestData.txt");
    double average, standardDeviation;
    int max, min, outlier, max2, min2;
    
    max = findMaximum(x);
    max2 = findSecondMaximum(x);
    min = findMinimum(x);
    min2 = findSecondMinimum(x);
    average = calcMean(x);
    standardDeviation = calcStandardDeviation(x);
    cout << "Max" << setw(10) << "2ndMax" << setw(10) << "Min" <<
    setw(10) 
    << "2ndMin" << setw(15) << "Average" << setw(30) << "standard Deviation" 
    << endl;
    cout << max << setw(10) << max2 << setw(10) << min << setw(10) 
    << min2 
    << setw(15) << average << setw(30) << standardDeviation << 
    endl;
    findMostExtremeOutlier(x, outlier);
    if(outlier != 0){
    cout << "The outlier is ";
    cout << outlier << endl;
    }
    else{
        cout << "There is no extreme outlier." << endl;
    }
    cout << "_________________________________________________________" << endl;
    displayValues(x);
    readValues("vectorTestData2.txt");
    
   
   return 0;
    

}