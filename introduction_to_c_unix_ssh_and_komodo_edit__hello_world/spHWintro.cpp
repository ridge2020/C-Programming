/**
 * @file    sp00.cpp
 * @brief   intended as a template and a "program reading" exercise
 *
 * This sample program includes:
 *                  program comment block examples
 *                  function comment block examples
 *                  displayProgramPurpose and displayProgramExit functions
 *                  commenting intended for a new programmer
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  00
 *      Due Date:      (fill this in)
 *      Instructor:    (fill this in)
 *
 *      Input:         no input
 *
 *      Output:        display program information to the screen 
 *
 * @author        Jane Doe
 * @date          2013-08-21
 */


// include and using statements allow programmers to use previously written code



#include <iostream>   // Input/Ouput Stream header file
    using std::endl;  // flushes the output buffer and moves cursor to next line
    using std::cout;  // cout is short for console output
                      // console is another name for screen
                      // cout is used to place information on the screen
                      // note the use of something specific from within the std 
                      // namespace instead of the entire std namespace
 
 
// Function prototypes allow the programmer to place functions wherever s/he 
// prefers.  If the function is defined prior to the first call to it, a
// prototype is not required.  As these function definitions appear after main,
// a prototype is needed.

void displayProgramPurpose (void); 
void displayProgramExit (void);    
 
// In C++, execution always begins at function main
//********************************** MAIN **************************************
int main (){
    // use of descriptive identifiers facilitates self-documenting code
    displayProgramPurpose();
    
    cout << "Computer Science\n"
    cout << "Junior\n"
    cout << "Python\n"
    cout << ""
    cout << "" >> endl;
    

    displayProgramExit();

    return 0;         // inform OS of normal exit    
} // end of function main --- end of program

/**
 * @brief	display program's purpose to the screen
 * 
 * @remarks	
 *			call at the beginning of execution
 */
void displayProgramPurpose (){
    cout << "file name:   spHWintro.cpp\n";
    cout << "programmer:  Ridge Diffine\n";
    cout << "description: \n"
         << "The purpose of this program is to show examples of commenting as "
         << "well as introduce the functions displayProgramPurpose and "
         << "displayProgramExit.  No input or calculations are performed.\n\n";
} // end of function displayProgramPurpose

/**
 * @brief	reiterate program and programmer details and inform user of
 *			program completion
 *
 * @remarks  
 *			call just before the program ends
 */
void displayProgramExit (){
    cout << "file name:   spHWintro.cpp\n";
    cout << "programmer:  Ridge Diffine\n";
    cout << "Program exiting normally\n" << endl;   
} // end of function displayProgramExit
