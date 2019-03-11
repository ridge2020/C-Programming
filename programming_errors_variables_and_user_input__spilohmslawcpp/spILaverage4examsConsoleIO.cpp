/**********************************************************************
 * @file    spILaverage4examsConsoleIO.cpp
 * @brief   program that will avaerage 4 scores on a test, 
 *            with different point ratios
 *
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  04
 *      Due Date:      august 30
 *      Instructor:    MS. Serviner
 *
 *      Input:         4 test scores, and total points possible 
 *                      for test
 *
 *      Output:        display average of scores  
 *
 * @author        Ridge Diffine
 * @date          2018-08-30
 **********************************************************************
 */
 
#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    int testScore1, testScore2, testScore3, testScore4;
    cout << "Please enter test score 1: ";
    cin >> testScore1;
    cout << "Please enter test score 2: "; 
    cin >> testScore2;
    cout << "Please enter test score 3: ";    
    cin >> testScore3;
    cout << "Please enter test score 4: ";    
    cin >> testScore4;
    
    int total1, total2, total3, total4;
    cout << "Please enter the total points possible for test 1: ";
    cin >> total1;
    cout << "Please enter the total points possible for test 2: ";
    cin >> total2;
    cout << "Please enter the total points possible for test 3: ";    
    cin >> total3;
    cout << "Please enter the total points possible for test 4: ";    
    cin >> total4;
    
    double sum1;
    double sum2;
    sum1 = testScore1 + testScore2 + testScore3 + testScore4;
    sum2 = total1 + total2 + total3 + total4;
    
    double averageTotal;
    averageTotal = ((sum1 / sum2) * 100);
    
    
    cout << "The average grade is " << averageTotal << endl;
    return 0;
}