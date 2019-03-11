/**********************************************************************
 * @file   spFunctionsILHWlines.cpp
 * @brief   this is modular program that uses a series of 
 *          functions to find, the realtionships of two lines, 
 *          and the midpoint of lines.
 *          
 *
 * @remarks  When testing all the functions I used getPoint, so all 
 *           points were prompted, but when using midpoint function I 
 *           manually entered cordinates. I also used the midpoint to 
 *           test the on line function.
 *           I personally tested every set of number I could think of to 
 *           get each different output possible. Also I couted from 
 *           the fucntions, as well
 *           as the main to test if each function was returnng the right
 *           thing, and for visual comformation 
 *           of each call statement working in the main.
 *           SO this is reason for having multiple output lines that 
 *            say the same thing. Used if statements to in main fucntion
 *          so that it would not display info that couldnt be solved,
 *          like slope when vertical is true of a line.
 *           
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  09
 *      Due Date:      10/16/2018
 *      Instructor:    MS. Gidget
 *
 *      Input:      cordinates of points
 *
 *      Output:     equation of line   
 * 
 * @author        Ridge Diffine
 * @date        10/16/18  
 **********************************************************************
 */
/**
 * @brief       areParallel - boolean that will return whether two
 *              lines are parallel
 *
 * @detailed   This fucntion will have two slopes as its parameters
 *             and will compare the two to find out if they are 
 *              parallel.
 *
 * @remarks   justed compared slopes
 *
 *
 * @param        slopeL1    slope of line 1
 * @param        slopeL2    slope of line 2
 *
 *
 * @return  true or false
**/

/**
 * @brief       arePerpendicular - will find out if two lines 
 *              are perpendicular.
 *
 * @detailed   This fucntion will have two slopes as its parameters
 *             and will compare the two to find out if they are 
 *              perpendicular.
 *
 * @remarks   just compared slopes to see if 
 *          the abs euqaled eachother.
 *
 *
 * @param        slopeL1    slope of line 1
 * @param        slopeL2    slope of line 2
 *
 *
 * @return  true or false
**/

/**
 * @brief       calculateDistance - this function will calculate
 *              distance.
 *
 * @detailed   This fucntion will have 4 points as its parameters
 *              and use distance formula to find distance.
 *
 * @remarks  just used distance formula, realatively easy
 *
 *
 * @param        x1    cordinates
 * @param        y1     cordinates
 * @param        x2     cordinates
 * @param        y2    cordinates
 *
 *
 * @return  distance
**/

/**
 * @brief       calculateIntersection - this function will calculate
 *              intersection if there is one and return ture or false
 *
 * @detailed   THis function will use 4 points as parameters representing
 *             lines, then calculate slope and y intercept, then compare 
 *              equations of the lines to find intersecting point. Then will
 *              define reference paramters as the cordinate sof point of 
 *              intersection.
 *
 * @remarks   trickier, but had to derive a formula for find intersection
 *            point
 *
 *
 * @param       x1  cordinates of line1
 * @param       y1  cordinates of line1
 * @param       x2  cordinates of line1
 * @param       y2  cordinates of line1
 * @param       x3  cordinates of line2
 * @param       y3  cordinates of line2
 * @param       x4  cordinates of line2
 * @param       y4  cordinates of line2
 * @param       intersectionX cordinates of intersection point
 * @param       intersectionY cordinates of intersection point
 *
 * @return  distance
**/

/**
 * @brief       calculateMidpoint - this function will calculate
 *              midpoint.
 *
 * @detailed   THis function will use cordinate as parameters for a line
 *              then return its midpoint, also create reference parameters
 *              of the midpoint points.
 *
 * @remarks   Since this one is per one line, much easier to find
 *
 *
 * @param       x1      cordinates
 * @param        y1     cordinates
 * @param       x2      cordinates
 * @param        y2     cordinates
 * @param       midpointX   cordinates
 * @param       midpointY   cordinates
 *  
 * @return  true or false
**/

/**
 * @brief       calculateSlope - this function will calculate
 *              slope of two points.
 *
 * @detailed   THis function will use cordinates of two points
 *              of a line and return true or false if the slope is 
 *              defined using isVertical to test.
 *
 * @remarks   easy, just used slope formulas, used vertical fucntion
 *            to save time.
 *
 *
 * @param        x1 cordinates
 * @param        y1 cordinates
 * @param       x2  cordinates
 * @param        y2 cordinates
 * @param       slope   slope of line
 *
 *
 * @return  true or false
**/

/**
 * @brief       displayEquation - this function will display
 *              the equation of a line.
 *
 * @detailed   This fucntion will calculate the equation of a line
 *              and then display it, using 2 points as the paramters
 *
 * @remarks   Had to derive equation of line, used the variables in 
 *            this function to help make variables in others, but saw
 *            no need to make any reference variables.
 *
 *
 * @param        x1 cordinates
 * @param        y1 cordinates
 * @param        x2 cordinates
 * @param        y2 cordinates
 *
 *
 * @return  nothing
**/

/**
 * @brief       getPoint - this function will prompt user for
 *              2 cordinates of a point
 *
 * @detailed   THis function will prompt user with cout
 *              statment and ask for cordinates of a point
 *
 * @remarks   prompts user, this sets points for main function
 *
 *
 * @return  nothing
**/

/**
 * @brief       isOnLine - this function will calculate
 *              whether a point is on a line.
 *
 * @detailed   THis function will have cordinates of 3 point
 *              one for the point tested, and two for the line being
 *              tested. It will use a formula and return true or false
 *
 * @remarks
 *
 *
 * @param        pointX cordinates
 * @param        pointY cordinates
 * @param       lineX1  cordinates
 * @param        lineY1 cordinates
 * @param       lineX2  cordinates
 * @param       lineY2  cordinates
 * 
 * @return  
**/

/**
 * @brief       isVertical - this function will calculate
 *              if a line is vertical.
 *
 * @detailed   THis function will compare the y cordinates
 *              of a line to see if there are eual, meaning 
 *              a vertical slope.
 *
 * @remarks   first was using all cordinates for the lines, Then
 *            realized only need y values.
 * 
 *
 * @param         x1 cordinates
 * @param        y1 cordinates
 * @param        x2 cordinates
 * @param        y2 cordinates
 *
 *
 * @return  true or false
**/

#include<iomanip>
#include<iostream>
#include<string>
#include<math.h>
    using namespace std;
    
    
bool areParallel(double slopeL1, double slopeL2){
    if(abs((slopeL1 - slopeL2)) < .0000001){
        cout << "parallel is True" << endl;
        return true;
    }
    else {
        cout << "parallel is False" << endl;
        return false;
    }
}

bool arePerpendicular(double slopeL1, double slopeL2){
    if(slopeL1 > 0 && slopeL2 > 0){
        cout << "perpendicular is false" << endl;
        return false;
    }
    if(slopeL1 < 0 && slopeL2 < 0){
        cout << "perpendicular is false" << endl;
        return false;
    }
    else{
        if(abs((abs(slopeL1) - abs(slopeL2))) < .0000001){
            cout << "perpendicular is True" << endl;
            return true;
        }
        else{
            cout << "perpendicular is false" << endl;
            return false;
        }
    }
}

double calculateDistance(double x1, double y1, double x2, double y2){
    double distance;
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distance;
}

bool calculateIntersection(double x1, double y1, double x2, double y2, double x3,
double y3, double x4, double y4, double& intersectionX, double& intersectionY){
    bool isParallel;
    double m1, m2, b1, b2;
    m1 = ((y1 - y2) / (x1 - x2));
    b1 = (y1 - (m1 * x1));
    m2 = ((y3 - y4) / (x3 - x4));
    b2 = (y3 - (m2 * x3));
    isParallel = areParallel(m1, m2);
    cout << "isParallel is " << isParallel << endl;
    if(isParallel == true){
        cout << "The two lines don't intersect" << endl;
        return false;
    }
    else{
        intersectionX = ((b2 - b1) / (m1 - m2));
        intersectionY = (m1 * intersectionX + b1);
        return true;
    }
    
}

void calculateMidpoint(double x1, double y1, double x2, double y2, double& midpointX, 
double& midpointY){
    midpointY = ((y1 + y2) / 2);
    midpointX = ((x1 + x2) / 2);
}

bool isVertical(double y1, double y2){
    if(abs(y1 - y2) < .0000001){
        cout << "Vetical is true" << endl;
        return true;
    }
    else{
        cout << "Vertical is False" << endl;
        return false;
    }
}

bool calculateSlope(double x1, double y1, double x2, double y2, double& slope){
    bool vertical;
    vertical = isVertical(y1, y2);
    cout << "The return of isVertical is " << vertical << endl;
    if(vertical == true){
        cout << "The slope is infinite" << endl;
        return false;
        }
    else{
        slope = ((y1 - y2) / (x1 - x2));
        cout << "Slope is " << slope << endl;
        return true;
        }
}

void displayEquation(double x1, double y1, double slope){
    double b;
    b = (y1 - (slope * x1)); 
    cout << "The equation of the line y = " << slope << "x + " << b << endl;
}

void getPoint(double& x, double& y){
    cout << "Plese enter x cordinate: ";
    cin >> x;
    cout << "Please enter y cordinate: ";
    cin >> y;
}

bool isOnLine(double pointX, double pointY, double lineX1, double lineY1, double lineX2,
double lineY2){
    double b, m;
    m = ((lineY1 - lineY2) / (lineX1 - lineX2));
    b = (lineY1 - (m * lineX1));
    
    if(abs(((m * pointX) + b) - pointY) < .0000001){
        cout << "Is online is True" << endl;
        return true;
    }
    else{
        cout << "isOnline is False" << endl;
        return false;
    }
}


int main(){
    double x, y, slopeL1, slopeL2, slope, midpointX, midpointY, 
    intersectionY, intersectionX, x1, y1, x2, y2, x3, y3, x4, y4;
    bool answer, answer2, answer3;
    getPoint(x, y);
    x1 = x;
    y1 = y;
    
    getPoint(x, y);
    x2 = x;
    y2 = y;
    
    getPoint(x, y);
    x3 = x;
    y3 = y;
    
    getPoint(x, y);
    x4 = x;
    y4 = y;
    cout << endl;
    cout << "LINE 1------------------------------" << endl
         << endl;
         
    answer = calculateSlope(x1, y1, x2, y2, slope);
    if(answer == true){
    slopeL1 = slope;
    displayEquation(x1, y1, slopeL1);
    isVertical(y1, y2);
    calculateMidpoint(x1, y1, x2, y2, midpointX, midpointY);
    cout << "line1 midpointX is " << midpointX << endl;
    cout << "Line1 midpointY is " << midpointY << endl;
    isOnLine(3, 5, x1, y1, x2, y2);
    }
    cout << endl;
    cout << "LINE 2------------------------------" << endl
         << endl;
         
    answer2 = calculateSlope(x3, y3, x4, y4, slope);
    if(answer2 == true){
    slopeL2 = slope;
    displayEquation(x3, y3, slopeL2);
    isVertical(y3, y4);
    calculateMidpoint(x3, y3, x4, y4, midpointX, midpointY);
    cout << "line2 midpointX is " << midpointX << endl;
    cout << "Line2 midpointY is " << midpointY << endl;
    isOnLine(midpointX, midpointY, x3, y3, x4, y4);
    }
    
    

    cout << endl;
    cout << "The relationship of both lines----------------";
    cout << endl << endl;
    areParallel(slopeL1, slopeL2);
    answer3 = arePerpendicular(slopeL1, slopeL2);
    
    if(answer3 == false){
    calculateIntersection(x1, y1, x2, y2, x3, y3, x4, y4, intersectionX, intersectionY);
    cout << "The cordinates for the intersecting point is ("
         << intersectionX << ", " << intersectionY << ")" << endl;
    }
    return 0;
}