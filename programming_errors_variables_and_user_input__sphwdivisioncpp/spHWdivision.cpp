/**********************************************************************
 * @file    spHWdivision.cpp
 * @brief   This program will return the remainder and quotient, after
 *          prompting for dividend and divisior
 *
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  07
 *      Due Date:      september 4
 *      Instructor:    MS. Serviner
 *
 *      Input:         dividend and divisor
 *
 *      Output:        division algorthrim
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
    int a;
    int d;
     
    cout << "Please enter an dividend: ";
    cin >> a;
     
    cout << "Please enter an divisor: ";
    cin >> d;
     
    int q;
    q = a / d;
    int r;
    r = a % d;
     
    cout << "If a = " << a << " and d = " << d
         << ", then q = " << q << " and r = " << r
         << ", since " << a << " = " << "(" << q << ")("
         << d << ") + " << r << "." << endl;            
    
          
    return 0;
     
 }
 
 // regular operator for division will only return the answer without the remainder so you have 
 // to use modulous to get the remainder and division to get the integer.