/**********************************************************************
 * @file   spFunctionsILreferences.cpp
 * @brief   this program has fuctions that will find quadratic roots,
 *          and the amount of times a cirlce crosses the x-axis.
 *
 * 
 *
 * @remarks  
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  09
 *      Due Date:      10/11/2018
 *      Instructor:    MS. Serviner
 *
 *      Input:      none
 *
 *      Output:     roots, or times timesCrossed   
 * 
 * @author        Ridge Diffine
 * @date          
 **********************************************************************
 */
 /**
 * @brief       findQuadraticRoots- will find the roots and how mnay 
 *              roots are present after compputing quadratic formula.
 *
 * @detailed   This function will have a,b,c as parameter for quadratic
 *             formula, alos it will use refernce variables for x1
 *             and x2, the possible roots.
 *
 * @remarks
 *      this program will output for testing purposes.
 *
 * @param        a     a in quadratic formula
 * @param        b     b in quadratic formula
 * @param        c     c in quardratic formula
 * @param[out]   x1    locatioan of root
 * @param[out]   x2    location of 2n root
 *
 * @return  returns the amout of roots
**/

/**
 * @brief       this function will calculate the times a cirlce passes
 *              x-axis
 *
 * @detailed    This function will oslves for a, b, c and call
 *              findQuadraticRoots using a,b,c as parameters,
 *              to find the x1, and x2, then return the same value
 *              returned by the called function
 *
 * @remarks
 *      
 *
 * @param        h     location of center
 * @param        k     location of center
 * @param        r     radius
 *
 * @return  returns the amount of times the cirlce has passed x-axis
**/

#include<iostream>
#include<math.h>
#include<iomanip>
 using namespace std;




double findQuadraticRoots(double a, double b, double c, double& x1, 
double& x2){
    double discriminant;
    discriminant = ((pow(b, 2))-(4 * a * c));
    if(discriminant < 0){
        return 0;
    }
    if(discriminant == 0){
        x1 = ((-b)/(2 * a));
        //cout << x1 << endl;
        return 1;
    }
    else{
        x1 = (-b) + sqrt((pow(b, 2)-(4 * a * c))/(2 * a));
        x2 = (-b) - sqrt((pow(b, 2)-(4 * a * c))/(2 * a));
        //cout << x1 << setw(20) << x2 << endl;
        return 2;
    }
}


double findCirlceIntersections(double h, double k, double r, double& x1, 
double& x2){
    double a, b, c;
    int passes;
    a = 1;
    b = (-2 * h);
    c = (pow(h, 2) + pow(k, 2) - pow(r, 2));
    //cout << a << setw(20) << b << setw(20) << c << endl;
    passes = findQuadraticRoots(a, b, c, x1, x2);
    //cout << "Passes" << setw(20) << passes << setw(20) << "Location" 
         << setw(20) << x1 << setw(20) << x2 << endl;

    return passes;
    
}

int main(){
    double x1, x2;
    cout << setprecision(2) << fixed;
    findCirlceIntersections(1, 2, 1, x1, x2);
    return 0;
}