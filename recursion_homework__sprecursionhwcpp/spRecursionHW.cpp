/**********************************************************************
 * @file    sprecursionHW.cpp
 * @brief   This program will test a series of 
 *          recusion functions, for retreating
 *          data within the paramters.
 *
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  00
 *      Due Date:      11/15
 *      Instructor:    Gidget
 *
 *      Input:       an integer  
 *
 *      Output:      whether the integer is correct data   
 *
 * @author        ridge diffine
 * @date          2018-11-15
 **********************************************************************
 */
 
#include<iostream>
    using std::cout;
    using std::endl;
    using std::cin;
#include<vector>

/**
 * @brief       recursiveInputValidation()- will find a positive int
 *
 * @detailed   this function uses recursion to recieve correct data
 *             in this case a positive int.
 * 
 * @remarks  
 *
 *
 * @param   none  
 *
 *
 * @return  int answer
**/

int recursiveInputValidation(){
    int answer;
    cout << "Please enter a posisitve integer: ";
    cin >> answer;
    while(answer < 0){
        cout << "That answer was invalid." << endl;
        answer = recursiveInputValidation();
    }
    return answer;
}

/**
 * @brief       recursiveInputValidation(int min, int max) - this
 *              will find data within paramters
 *
 * @detailed   this function uses recursion to test whether prompted
 *             answer is correct data or not, by seeing if its in the 
 *             range listed in parameters.
 * 
 * @remarks  
 *
 *
 * @param   int max
 * @param   int min
 *
 *
 * @return  int answer
**/

int recursiveInputValidation(int min, int max){
    int answer;
    cout << "Please enter a int between " << min << " and " 
         << max << ": ";
    cin >> answer;
    while(answer < min || answer > max){
        cout << "Your answer was invalid." << endl;
        answer = recursiveInputValidation(min, max);
        
    }
    return answer;
}

int main(){
    cout << recursiveInputValidation() << endl;            // tested a bunch of positive and negative ints
    cout << recursiveInputValidation(100, 1000) << endl;       // (2,10) 11 4 -1, (-6,1) -6 -7 -5, (100, 1000) 99, 1, 567
    return 0;
}