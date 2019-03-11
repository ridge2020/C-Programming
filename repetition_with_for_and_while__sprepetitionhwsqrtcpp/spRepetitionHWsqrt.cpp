/**********************************************************************
 * @file    spRepetitionHWsqrt.cpp
 * @brief  This program prompts user for integer 
 *
 * 
 *
 * @remarks  Had trouble determining delta values and was originally
 *           multiplying by its previous value.
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  15
 *      Due Date:      september 26th
 *      Instructor:    MS. Serviner
 *
 *      Input:      the precison of digits and an integer
 *
 *      Output:     the delta, sqrt estimate, and errors for each 
 *                 iteration.
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
    int desiredInteger, decimalProximation, minSquare = 0, 
        count = 0, maxCount, precision = 1;
    double averageSqrt, delta = .1, previousSqrt, error, maxSquare = 0;
    
    cout << "Please enter the desired integer for the sqrt: ";
    cin >> desiredInteger;
    cout << "Please enter the amount of decimal places, for accuracy: ";
    cin >> decimalProximation;
    
    cout << "Delta" << setw(10) << "sq root" << setw(10) << "error"
         << endl;
    cout << "_____" << setw(10) << "_______" << setw(10) << "_____"
         << endl;
    
    for(maxCount = 1; maxSquare < desiredInteger; maxCount++){
        maxSquare = (maxCount * maxCount);
        if(maxSquare == desiredInteger){
            cout << "The sqare root is the integer " << maxCount;
        }
    }
    maxSquare = maxCount - 1;
    minSquare = maxCount - 2;
        if((minSquare * minSquare) == desiredInteger){
            cout << "The sqare root is the integer " << minSquare;
        }
    averageSqrt = (maxSquare + minSquare) / 2;
    cout << fixed << setprecision(decimalProximation);
    if((averageSqrt * averageSqrt) == desiredInteger){
        cout << setw(15) << averageSqrt << setw(10) << 0;
    }
    for(int count = 0; count < decimalProximation; count++){
        precision = 10 * precision;
    }

    while(count < decimalProximation){
        while(((averageSqrt * averageSqrt) <= desiredInteger) && (desiredInteger - (averageSqrt * averageSqrt) >= (1/precision))){
            previousSqrt = averageSqrt;
            error = (desiredInteger - (averageSqrt * averageSqrt));
            cout << delta << setw(10) << averageSqrt << setw(10) 
                 << error << endl;
            averageSqrt = averageSqrt + delta;
            
    
        }
    
        averageSqrt = previousSqrt;
        cout << "                                               "
             << endl;
        delta = delta / 10;
        count = count + 1;
    
    }
    
    
    
    
    
    return 0;
}
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

