/**********************************************************************
 * @file    spDecisionsIL.cpp
 * @brief   This program pormpts user for integer and dive score, and
 *          outputs wether the number is even or odd, or dive score 
 *          is in parameters.
 *
 * 
 *
 * @remarks  used if statements and or operator 
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  11
 *      Due Date:      september 13th
 *      Instructor:    MS. Serviner
 *
 *      Input:       an integer and a double
 *
 *      Output:        even or odd, true or false
 * 
 * @author        Ridge Diffine
 * @date          2018-09-13
 **********************************************************************
 */
 
 
 #include<iostream>
    using namespace std;
    
    
int main()
{
    int integer1;
    cout << "Enter an integer: ";
    cin >> integer1;
    
    if(integer1 % 2 == 0)
    cout << integer1 << " is an even number." << endl;
    else
    cout << integer1 << " is an odd number." << endl;
    
    double diveScore;
    cout << "Enter diving score: ";
    cin >> diveScore;
    
    if(diveScore > 10 || diveScore < 0)
    cout << diveScore << " is not a valid score." << endl;
    else
    cout << diveScore << " is a valid dive score." << endl;
    
    
    return 0;
    
}