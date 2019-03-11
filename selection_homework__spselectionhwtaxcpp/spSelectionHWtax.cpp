/**********************************************************************
 * @file    spSelectionHWtax.cpp
 * @brief   This program reads a dile for parameters for tax on income
 *          and then tells you your income after tax using if statements
 *
 * 
 *
 * @remarks  used if statements, getline, and ignore
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  12
 *      Due Date:      september 17th
 *      Instructor:    MS. Serviner
 *
 *      Input:       income
 *
 *      Output:        income after tax
 * 
 * @author        Ridge Diffine
 * @date          2018-09-13
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
      myFile.open("spSelectionHWsingle.txt");
      
          
          double min1, max1, tax1, min2, max2, tax2, min3, max3,
          tax3, min4, max4, tax4, min5, max5, tax5, min6, max6,
          tax6, min7, max7, tax7,taxpercent2,
          taxpercent3, taxpercent5, taxpercent4, taxpercent6,
          taxpercent7;
          
          string str1, str2, str3, str4, str5, str6, str7;
          
          myFile >> min1;
          myFile.ignore(1);
          myFile >> max1;
          myFile.ignore(1);
          myFile >> tax1;
          getline(myFile, str1);
          
          myFile >> min2;
          myFile.ignore(1);
          myFile >> max2;
          myFile.ignore(1);
          myFile >> tax2;
          myFile.ignore(1);
          myFile >> taxpercent2;
          getline(myFile, str2);
          
          myFile >> min3;
          myFile.ignore(1);
          myFile >> max3;
          myFile.ignore(1);
          myFile >> tax3;
          myFile.ignore(1);
          myFile >> taxpercent3;
          getline(myFile, str3);
          
          myFile >> min4;
          myFile.ignore(1);
          myFile >> max4;
          myFile.ignore(1);
          myFile >> tax4;
          myFile.ignore(1);
          myFile >> taxpercent4;
          getline(myFile, str4);
          
          myFile >> min5;
          myFile.ignore(1);
          myFile >> max5;
          myFile.ignore(1);
          myFile >> tax5;
          myFile.ignore(1);
          myFile >> taxpercent5;
          getline(myFile, str5);
          
          myFile >> min6;
          myFile.ignore(1);
          myFile >> max6;
          myFile.ignore(1);
          myFile >> tax6;
          myFile.ignore(1);
          myFile >> taxpercent6;
          getline(myFile, str6);
          
          myFile >> min7;
          myFile.ignore(1);
          myFile >> max7;
          myFile.ignore(1);
          myFile >> tax7;
          myFile.ignore(1);
          myFile >> taxpercent7;
          getline(myFile, str7);
          
          cout << fixed << setprecision(2);
          
          myFile.close();
          
          
         
          
          double income, tax, incomeAfter, taxpercentage, min;
          cout << "Please enter your gross income: ";
          cin >> income;
        
      if (income >= min1 && income < max1) {
            tax = income * (tax1 / 100);
            taxpercentage = tax1;
            min = min1;
             incomeAfter = (income - tax);
           cout << "Your income after tax is: ";
           cout << incomeAfter << endl;
           
           cout << "your tax rate is: " << taxpercentage << " percent on everything over "
                << min << endl;
           cout << "The amount you payed in taxes is: " << tax << endl;
      }
          else if (income > min2 && income < max2) {
            tax = tax2 + ((taxpercent2 / 100) * (income - min2));
            taxpercentage = taxpercent2;
            min = min2;
             incomeAfter = (income - tax);
           cout << "Your income after tax is: ";
           cout << incomeAfter << endl;
           
           cout << "your tax rate is: " << taxpercentage << " percent on everything over "
                << min << endl;
           cout << "The amount you payed in taxes is:s " << tax << endl;
          }
          else if (income > min3 && income < max3) {
            tax = tax3 + ((taxpercent3 / 100) * (income - min3));
            taxpercentage = taxpercent3;
            min = min3;
             incomeAfter = (income - tax);
           cout << "Your income after tax is: ";
           cout << incomeAfter << endl;
           
           cout << "your tax rate is: " << taxpercentage << " percent on everything over "
                << min << endl;
           cout << "The amount you payed in taxes is: " << tax << endl;
          }
          else if (income > min4 && income < max4) {
            tax = tax4 + ((taxpercent4 / 100) * (income - min4));
            taxpercentage = taxpercent4;
            min = min4;
             incomeAfter = (income - tax);
           cout << "Your income after tax is: ";
           cout << incomeAfter << endl;
           
           cout << "your tax rate is: " << taxpercentage << " percent on everything over "
                << min << endl;
           cout << "The amount you payed in taxes is: " << tax << endl;
          }
          else if (income > min5 && income < max5) {
            tax = tax5 + ((taxpercent5 / 100) * (income - min5));
            taxpercentage = taxpercent5;
            min = min5;
             incomeAfter = (income - tax);
           cout << "Your income after tax is: ";
           cout << incomeAfter << endl;
           
           cout << "your tax rate is: " << taxpercentage << " percent on everything over "
                << min << endl;
           cout << "The amount you payed in taxes is: " << tax << endl;
          }
          else if(income > min6 && income < max6) {
            tax = tax6 + ((taxpercent6 / 100) * (income - min6));
            taxpercentage = taxpercent6;
            min = min6;
             incomeAfter = (income - tax);
           cout << "Your income after tax is: ";
           cout << incomeAfter << endl;
           
           cout << "your tax rate is: " << taxpercentage << " percent on everything over "
                << min << endl;
           cout << "The amount you payed in taxes is: " << tax << endl;
          }
          else if(income > min7) {
            tax = tax7 + ((taxpercent7 / 100) * (income - min7));
            taxpercentage = taxpercent7;
            min = min7;
             incomeAfter = (income - tax);
           cout << "Your income after tax is: ";
           cout << incomeAfter << endl;
           
           cout << "your tax rate is " << taxpercentage << " percent on everything over "
                << min << endl;
           cout << "The amount you payed in taxes is: " << tax << endl;
          }
      else  {
          
          cout << "You entered the wrong format income.";}
        
        
     
      return 0;
      
  }