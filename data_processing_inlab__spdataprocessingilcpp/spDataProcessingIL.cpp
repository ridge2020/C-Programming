/**********************************************************************
 * @file    spDataProcessingIL.cpp
 * @brief   This program is a modular program that will use
 *          functions to calculate average of vector, then
 *          drop lowest score, then caluclate average of 
 *          remaining scores, adn display all data to screen.
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  08
 *      Due Date:      10/25/18
 *      Instructor:    MS. Serviner
 *
 *      Input:       none
 *
 *      Output:       will display average, grades in vector, and
 *                    all perfect scores.
 * 
 * @author        Ridge Diffine
 * @date          10/25/18
 **********************************************************************
 */

#include<iostream>
    using std::cout;
    using std::endl;
    
#include<vector>
    using std::vector;
    
#include<algorithm>
 
    
    
double calculateAverage(vector<double>& x){
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

vector<double> dropLowestScore(vector<double>& x){
    vector<double>::iterator index = std::min_element(x.begin(), x.end());
    x.erase(index);
    
    return x;
}
 
void displayData(vector<double> averages)
{
    for (int currentAverage : averages)
        cout << currentAverage << endl;
}

int main(){
    cout << "Current grades" << endl;
    //vector<double> testScores = {55, 67, 84, 92, 100, 23};
    //vector<double> testScores = {55, 67, 84, 92, 100, 100};
    vector<double> testScores = {55, 67, 84, 92, 10, 23};
    
    int element, perfectScores = 0;
    
    
    displayData(testScores);
    cout << "The current overall average is: " << calculateAverage(testScores)   << endl;
    
    dropLowestScore(testScores);
    
    displayData(testScores);
    cout << "The current overall average is: " << calculateAverage(testScores)   << endl;

    for(int index = 0, size = testScores.size(); index <= (size - 1); index++){
        element = testScores.at(index);
        if(element == 100){
           perfectScores = perfectScores + 1;
        }   
    }
    cout << "The number of perfect scores is: " << perfectScores << endl;

    
    
    
    return 0;
}



