/**********************************************************************
 * @file    spHWmathWizard.cpp
 * @brief   this program will guess the total of 5 5 integr numbers
 *
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  06
 *      Due Date:      september 4
 *      Instructor:    MS. Serviner
 *
 *      Input:         2 5 integer numbers
 *
 *      Output:        the correct total and "i am a math wizard"
 *
 * @author        Ridge Diffine
 * @date          2018-09-3
 **********************************************************************
 */
 
 #include<iostream>
 using std::cout;
 using std::cin;
 using std::endl;
 
 int main()
 {
    cout << "I am a Math Wizard program.  I can predict the sum of"
         << "five (5) five-digit positive integers after seeing only"
         << "the first of the five numbers.";
    
    cout << "Please enter your first five-digit psoitive integer: ";
    int firstNumber;
    cin >> firstNumber;
    
    int sumguess;
    sumguess = ((firstnumber - 2) + 200000);
    cout << "I predict the sum will be " << sumguess;
    
    cout << "Please enter the second five-digit psositve integer: ";
    int secondNumber;
    cin >> secondNumber;
    
    int thirdNumber;
    thirdNumber = 99999 - secondNumber;
    cout << "I will provide the third five-digit positive integer: ";
         << thirdNUmber;
    
    int fourthNumber;
    cout << "Please enter the fourth five-digit positive integer: ";
    cin >> fourthNumber;
    
    int lastNumber;
    lastNumber = 99999 - fourthNumber;
    cout << "I will provide the final five-digit positive integer: ";
         << lastNumber;
         
    cout << firstNumber << "+" << secondNumber << "+" << thirdNumber
         << "+" << fourthNumber << "+" << lastNUmber << "=" << sumguess;
    
    cout << "I am a Math Wizard";
    
    return 0;
    
    
    
          
 }