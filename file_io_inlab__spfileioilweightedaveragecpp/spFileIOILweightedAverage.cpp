/**********************************************************************
 * @file    spFileIOOLweightedAverage.cpp
 * @brief   program that will avaerage 3 scores on a text file
 *            with different point ratios and print the total average
 *
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  08
 *      Due Date:      september 6th
 *      Instructor:    MS. Serviner
 *
 *      Input:       nothing
 *
 *      Output:        display average of scores
 * 
 * @author        Ridge Diffine
 * @date          2018-09-6
 **********************************************************************
 */
 #include<fstream>
 using std::ifstream;
 
 #include<iostream>
 using std::cout;
 using std::endl;
 
 #include<iomanip>
 using std::setprecision;
 using std::fixed;
 
 int main()
 {
     ifstream myFile;
     myFile.open("data03iL.txt");
     
     cout << fixed << setprecision(1);
     
     float average1;
     float average2;
     float average3;
     
     myFile >> average1;
     myFile >> average2;
     myFile >> average3;
     
     average1 = average1 * .5;
     average2 = average2 * .17;
     average3 = average3 * .33;
     float weightedAverage;
     
     weightedAverage = average1 + average2 + average3;
     
     cout << "The weighted average is " << weightedAverage << endl;
     return 0;
     
     
 }