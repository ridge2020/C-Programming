#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<cmath>
    using namespace std;
    
double calculateAverage(const vector<int>& x){
    int index = 0, element, total = 0, size = x.size();
    double average;
    while(index <= (size - 1)){
        element = x.at(index);
        total = total + element;
        index = index + 1;
    }
    average = (total / size);
    return average;
}

int findMinimum(const vector<int>& x){
    int size = x.size(), element, min = findMaximum(x);
    for(int index = 0; index <= (size - 1); index++){
        element = x.at(index);
        if(element < min && element > 0){
           
        }
    }
}

    
int main(){
    vector<double> testScores = {55, 67, 84, 92, 100, 23};
    cout << "The current overall average is: " << calculateAverage(testScores) << endl;
    
}