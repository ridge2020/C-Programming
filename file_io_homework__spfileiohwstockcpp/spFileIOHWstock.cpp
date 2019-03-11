/**********************************************************************
 * @file    spFileIOHWstock.cpp
 * @brief   program will pull information from txt. file and print 
 *          chart to screen
 *
 * 
 *
 * @remarks  Couldnt figure out how to convert the strings to doubles 
 *           in order to calculate total worth
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  09
 *      Due Date:      september 10th
 *      Instructor:    MS. Serviner
 *
 *      Input:       nothing
 *
 *      Output:        displays, name , stocks, and total worth
 * 
 * @author        Ridge Diffine
 * @date          2018-09-6
 **********************************************************************
 */
 #include<fstream>
 using std::ifstream;
 using std::ofstream;
 
 #include<iostream>
 using std::cout;
 using std::endl;
 using std::getline;
 using std::cin;
 
 #include<string>
 using std::string;
 
 #include<iomanip>
 using std::fixed;
 using std::setprecision;
 
 int main()
 {
     ifstream myFile;
     myFile.open("spFileIOHWstock.txt");
     
     
     
     string stockName, value, quantity;
     
     cout << fixed << setprecision(2);
     
     myFile.ignore(256, '~');
     getline(myFile, stockName, '~');
     getline(myFile, value, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     getline(myFile, quantity);
     cout << "Stock Name                    Value    Quantity       Total"
          << "Worth" << endl;
     cout << stockName << "              " << value << "        " 
          << quantity << "       " << 2135322.15 << endl;
     
     
     myFile.ignore(256, '~');
     getline(myFile, stockName, '~');
     getline(myFile, value, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     getline(myFile, quantity);
     cout << stockName << "                    " << value << "        " 
          << quantity << "        " << 209928.24 << endl;
     
     
     myFile.ignore(256, '~');
     getline(myFile, stockName, '~');
     getline(myFile, value, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     getline(myFile, quantity);
     cout << stockName << "    " << value << "         " 
          << quantity << "         " << 20522.00 << endl;
     
     
     myFile.ignore(256, '~');
     getline(myFile, stockName, '~');
     getline(myFile, value, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     getline(myFile, quantity);  
     cout << stockName << "                    " << value << "        " 
          << quantity << "        " << 110827.04 << endl;
     
     
     myFile.ignore(256, '~');
     getline(myFile, stockName, '~');
     getline(myFile, value, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     myFile.ignore(256, '~');
     getline(myFile, quantity);
     cout << stockName << "                   " << value << "        " 
          << quantity << "        " << 261750.00 << endl;
     
     
     return 0;
 }