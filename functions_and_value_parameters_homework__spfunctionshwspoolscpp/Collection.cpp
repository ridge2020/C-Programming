#include<fstream>
 using std::ifstream;
 
 #include<iostream>
 using std::cout;
 using std::endl;
 
 #include<iomanip>
 using std::setprecision;
 using std::fixed;
 
 #include<string>
    using namespace std;
 
 
    
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
                count = -1;
                }
            ofstream newFile;
            newFile.open(Name);
            getline(myFile, Location, ':');
            getline(myFile, Climate, ':');
            getline(myFile, Humidity, ':');
            myFile >> Quantity;
            newFile << Location << ":" << Climate << ":" << Humidity << ":" << Quantity;
            }
    return 0;
 }
 
  int main()
    {
        string Name, Location, Climate, Humidity;
        int Quantity, answer, info;
        cout << "Do you need to store new information(1 for yes, 0 for no)? ";
        cin >> answer;
        
        if(answer == 1)
        {
            
            cout << "Information Stored" << endl;
        }
        
        
        cout << "Please enter the terantula name (with caps, no space, and add .txt at end: ex. lasiodoraParahybana.txt): ";
        cin >> Name;
        
        ifstream openFile;
        openFile.open(Name);
        
        cout << "Location" << setw(20) << "Climate" << setw(20) << "Humidity" << setw(20) << "Quantity" << endl;
        cout << "--------------------------------------------------------------------------------";
        
        getline(openFile, Location, ':');
        getline(openFile, Climate, ':');
        getline(openFile, Humidity, ':');
        openFile >> Quantity;
        
        cout << Location << setw(20) << Climate << setw(20) << Humidity << setw(20) << Quantity << endl;
        
        return 0;
    
           
    }
    