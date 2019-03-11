/**********************************************************************
 * @file    spILohmsLaw.cpp
 * @brief   program will ask for volts and ohms to return amps
 *
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  05
 *      Due Date:      august 30
 *      Instructor:    MS. Serviner
 *
 *      Input:         voltage, and ohms
 *                      
 *
 *      Output:        display current in amps
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
    cout << "Please enter the voltage: ";              
    float voltage;
    cin >> voltage;
    
    cout << "please enter the resistance: ";                   //Tested 24 volts, and 10 ohms and it returned 2.4 amps
    float resistance;
    cin >> resistance;
    
    float current;
    current = voltage / resistance;
    cout  << "The current is " << current << " amps" << endl;   // If you put 0 for ohms or voltage, it will return with infinite amps
    return 0;
 }