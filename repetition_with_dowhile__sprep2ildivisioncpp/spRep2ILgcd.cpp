/**********************************************************************
 * @file   sprep2ILgcd.cpp
 * @brief   this program will prompt for two integers
 *          then use loop subtraction to find quotient and then 
 *          used loop to find GCD
 *
 * 
 *
 * @remarks  used do whiles for loops
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  19
 *      Due Date:      september 27th
 *      Instructor:    MS. Serviner
 *
 *      Input:    two integers
 *
 *      Output:        greatest common divisor
 * 
 * @author        Ridge Diffine
 * @date          2018-09-20
 **********************************************************************
 */
 
 
 #include<iomanip>
 #include<iostream>
    using namespace std;
    
    
int main() {
    int digitA, digitB, remain;
    cout << "Please enter first integer(Highest value): ";
    cin >> digitA;
    
    if(digitA <= 0 ){
        cout << "Please enter a proper integer: ";
        cin >> digitA;
    }
    
    cout << "Please enter the second integer(Lowest value): ";
    cin >> digitB;
    
   
    if(digitB <= 0 ){
        cout << "Please enter a proper integer: ";
        cin >> digitB;
    }
    do{
        
        remain = digitA - digitB;
        while(remain >= digitB){
            remain = remain - digitB;
        }
        
        digitA = digitB;
        digitB = remain;
    }
    while(digitB != 0);
    
    cout << "The greatest common factor of the two integers is " 
         << digitA;
    
    
   return 0;
 }
    
    
    

    
    
