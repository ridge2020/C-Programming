#include<vector>
#include<iostream>
#include<iomanip>
    using namespace std;




int bubbleSort(vector<int>& data){
    int passes = 0;
    int swaps = 0;
    bool swapOccured;
    do{
        swapOccured = false;
        for(vector<int>::size_type i = 0; i < (data.size() - 1 - passes); ++i){
            if(data.at(i) > data.at(i + 1)){
                int temp = data.at(i);
                data.at(i) = data.at(i + 1);
                data.at(i + 1) = temp;
                swapOccured = true;
                swaps = swaps+1;
            }
        }
        passes++;
    }while(swapOccured);
    return swaps;
}


bool linearSearch(vector<int>& data, int target, int& location){
    bool found = false;
    int element;
    for(vector<int>::size_type i = 0; i < (data.size()); ++i){
        element = data.at(i);
        if(element == target){
            found = true;
            location = i;
        }
    }
    return found;
}
    


void displayVector(vector<int> data){
    int element;
    cout << endl << "The New sorted list" << endl 
         << "--------------------------------" << endl;
    for(vector<int>::size_type i = 0; i < (data.size()); ++i){
        element = data.at(i);
        cout << element << setw(5);
    }
    cout << endl << "--------------------------------" << endl;
}

int main(){
    int swaps;
    int location = -1;
    vector<int> data = {2, 5, 7, 10, 2, 4, 8 , 7, 13, 21, 6, 12};
    vector<int> data2 = {23, 22, 21, 20, 19, 17, 16, 15, 14, 10, 9, 7, 6};
    swaps = bubbleSort(data);
    displayVector(data);
    cout << "Number of swaps: " << swaps << endl;
    
    linearSearch(data, 2, location);
    if(location >= 0){
    cout << "The location of target is: ";
    cout << location;
    }
  
    
    
    
    return 0;
}