/**********************************************************************
 * @file    spRep2ILdivision.cpp
 * @brief   This program prompts for dividend and 
 *          divisor, and ouputs the quotient and the 
 *          expresiion to solve.
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
 *      Input:      dividedn, and divisor
 *
 *      Output:        the expression to find quotient
 * 
 * @author        Ridge Diffine
 * @date          2018-09-20
 **********************************************************************
 */
 
 #include<iostream>
 #include<iomanip>
    using namespace std;
    
int main()
{
    int dividend, divisor, quotient = 1, remaining;
    
    cout << "Please enter a dividend(Must be an integer): ";
    cin >> dividend;
    
    if(dividend <= 0 ){
        cout << "Please enter a proper dividend: ";
        cin >> dividend;
    }
    
    cout << "Please enter a divisor(Must be an integer): ";
    cin >> divisor;
    
   
    if(divisor <= 0 ){
        cout << "Please enter a proper divisor: ";
        cin >> divisor;
    }
    
    if(divisor > dividend){
        cout << "Your divisor is larger than your dividend, try again"
             << endl << "Please enter a proper dividend: ";
        cin >> dividend;
        cout << "Please enter a proper divisor: ";
        cin >> divisor;
    }
    
    remaining = dividend - divisor;
    
    do{
        remaining = remaining - divisor;
        quotient = quotient + 1;
    }
    while(remaining >= divisor);
    
    if(remaining == 0){
        cout << "Dividend = Quotient * Divisor" << endl;
        cout << dividend << " = " << quotient << " * "
         << divisor;}
    else{
        cout << "Dividend = Quotient * Divisor + Remainder" << endl;
        cout << dividend << " = " << quotient << " * "
         << divisor << " + " << remaining;
    }
    return 0;
}