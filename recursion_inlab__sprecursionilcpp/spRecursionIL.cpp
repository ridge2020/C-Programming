/**********************************************************************
 * @file   spRecursionIL.cpp
 * @brief  this program will test a series of recursive functions
 *         including finding comon divisior and power totals
 *          
 *
 * @remarks  
 *           
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  09
 *      Due Date:      11/08/2018
 *      Instructor:    MS. Gidget
 *
 *      Input:      none
 *
 *      Output:      the asnwers to 4 called functions  
 * 
 * @author        Ridge Diffine
 * @date        10/16/18  
 **********************************************************************
 */

#include<iostream>
    using namespace std;


int iterativePower (int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; ++i)
       result = result * base;

    return result;
}

int recursivePower(int base, int exp){
    int result = 1;
    if(exp == 0){
        result = result;
    }
    if(exp > 0){
        result = base * recursivePower(base, (exp-1));
    }
    return result;
}

int interativeGCD(int a, int b)
{
    int remainder;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int recursiveGCD(int a, int b){
    int gcd;
    if(a%b == 0){
        gcd = b;
    }
    else{
        gcd = recursiveGCD(b,a%b);
    }

    return gcd;
}

int main(){
    int x = 3, k = 5, a = 270, b = 192;
    cout << endl << x << "^" << k << " iteratively = " 
         << iterativePower (x, k) << endl << endl;
          
    cout << endl << x << "^" << k << " recursively = " 
         << recursivePower (x, k) << endl;     
    
    cout << endl << "The greatest common divisor for " << a << " and " << b 
         << " is " << interativeGCD(a, b) << endl;
         
    cout << endl << "The greatest common divisor for " << a << " and " << b 
         << " is " << recursiveGCD(a, b) << endl;   
         
    return 0;   
}