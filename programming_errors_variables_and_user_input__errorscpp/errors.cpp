/**********************************************************************
 * @file    errors.cpp
 * @brief   program will ask for hours worked, and return the net pay
 *
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  05
 *      Due Date:      september 4
 *      Instructor:    MS. Serviner
 *
 *      Input:         hours worked
 *                      
 *
 *      Output:        net pay
 *
 * @author        Ridge Diffine
 * @date          2018-08-30
 **********************************************************************
 */



#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<iomanip>
using std::setprecision;
using std::fixed;

const double PAY_RATE=12.50;

int main()
{
	float hours;
	cout << "Enter hours Worked:  ";
	cin >> hours;
	
	float netPay;
	
	netPay = hours * PAY_RATE;
	cout << fixed << setprecision(2);
	cout << "The net pay is $" << netPay << endl;
	cout << "Exiting..." << endl;
	return 0;
}