/**********************************************************************
 * @file    spRepetitionIL.cpp
 * @brief   this program will list all possible triangle sides to 
 *          produce a hypotenuse under 100; Th next program will read 
 *          floats from a txt file and average the lines
 *
 * 
 *
 * @remarks  used for loops and basic c++ commands
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  15
 *      Due Date:      september 17th
 *      Instructor:    MS. Serviner
 *
 *      Input:      numbers from txt file
 *
 *      Output:       ordered pairs of triangle sides; averages of 
 *                    lines read
 * 
 * @author        Ridge Diffine
 * @date          2018-09-20
 **********************************************************************
 */
 
 
 #include<iostream>
    using namespace std;
 #include<cmath>
    using namespace std;
 #include<iomanip>
    using namespace std;
 #include<fstream>
    using namespace std;
    
    int main()
    {
        cout << "Leg1" << setw(10) << "leg2" << setw(15) << "Hypotenuse"
             << endl;
        cout << "____________________________________" << endl;
        
      
        double hypotenuse;
        
        for(int side1 = 1; side1 < 100; side1++) 
        {
            for(int side2 = side1; side2 < 100; side2++)
            {
                hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
                if(hypotenuse < 100 && (int) hypotenuse == hypotenuse)
                {
                    cout << side1 << setw(10) << side2 << setw(15)
                         << hypotenuse << endl;
                }
            }
        }
        

        ifstream myFile;
        myFile.open("spRepetitionAveragesdata.txt");
        ofstream newFile;
        newFile.open("spRepetitionAverages.txt");
        
        newFile << fixed << setprecision(15);
        int digits, newNumber;
        double total = 0, average;
        
        myFile >> digits;
        
        while(digits != 0){
            for(int count = 1; count <= digits; count++){
                myFile >> newNumber;
                total = total + newNumber;
            }
            average = ( total / digits );
            
            newFile << average << endl;
          
            myFile >> digits;
            
        
        }
        
  
        
        
         
        
        
        
        
    newFile.close();
    myFile.close();
        
        return 0;
        
        
    }
    
    
    
    
    
    
    
    