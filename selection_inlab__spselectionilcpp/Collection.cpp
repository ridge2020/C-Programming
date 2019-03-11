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
        string answer, Name;
        cout << "Do you need to store new information? "
        cin >> answer;
        
        if(answer == yes)
        {
            storeInformation()
            cout << "Information Stored" << endl;
        }
        
        cout << "Please enter the terantula name (with caps): ";
        cin >> Name;
        
        ifstream openfile;
        openfile.open(Name".txt")
        
        cout << "location" << setw(20) << "Climate" << setw(20) << "Humidity" << setw(20) << "Quantity" << endl;
        cout << "--------------------------------------------------------------------------------"
        
        getline(myFile, Location, ':');
        getline(myFile, Climate, ':');
        getline(myFile, Humidity, ':');
        myfile >> Quantity;
        
        cout << location << setw(20) << Climate << setw(20) << Humidity << setw(20) << Quantity << endl;
        
        }
    return 0;
    }
    
    
    
int storeInformation()
    { 
        ifstream myFile;
        myFile.open("Collection.txt");
     
     
     
        string Name, Location, Climate, Humidity;
        int Quantity, count;
     
        cout << fixed << setprecision(2);
     
    
        while(count >= 0) 
            {
            getline(myFile, Name, ':');
            myFile.ignore(256, ':');
            if(Name == "zero")
                {
                count = -1
                }
            ofstream newFile;
            newFile.open(Name".txt")
            getline(myFile, Location, ':');
            getline(myFile, Climate, ':');
            getline(myFile, Humidity, ':');
            myfile >> Quantity;
            newFile << Location << ":" << Climate << ":" << Humidity << ":" << Quantity;
            }
    return 0;
 }