/**********************************************************************
 * @file    spStructuresIL.cpp
 * @brief   this program is a modular program that will 
 *          prompt user for information on each player
 *          then display it to screen.
 *
 * 
 *
 * @remarks     uses a bubble sort
 *              
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  05
 *      Due Date:      november 15th
 *      Instructor:    MS. Serviner
 *
 *      Input:         the jersey numbers, goals made, and name
 *                      
 *
 *      Output:        the jersey numbers, goals made, and name
 *
 * @author        Ridge Diffine
 * @date          2018-11-15
 **********************************************************************
 */

#include<string>
#include<iomanip>
    using std::setw;
#include<iostream>
    using std::cout;
    using std::endl;
    using std::cin;
#include<vector>
    using namespace std;
    
struct playerInfo{
    string firstName, 
           lastName;
    int jerseyNum,
        goalsMade;
};

void FindPlayerInfo(vector<playerInfo>& info){
    char answer;
    playerInfo data;
    do{
    cout << endl << "Please enter first name: ";
    cin >> data.firstName;
    cout << "Please enter last name: ";
    cin >> data.lastName;
    
    cout << "Please enter jersey number: ";
    cin >> data.jerseyNum;
    while(data.jerseyNum <= 0 || data.jerseyNum >= 99){
        cout << "Invalid jersey number, try again: ";
        cin >> data.jerseyNum;
    }
    
    cout << "Please enter amount of goals scored: ";
    cin >> data.goalsMade;
    while(data.goalsMade < 0){
        cout << "Invalid goals scored, try again: ";
        cin >> data.goalsMade;
    }
    
    info.push_back(data);
    cout << "Is there more players?(y or n) ";
    cin >> answer;
    }while(answer == 'y');
}

void bubbleSort(vector<playerInfo>& info){
    int passes = 0;
    bool swapOccured;
    do{
        swapOccured = false;
        for(vector<playerInfo>::size_type i = 0; i < (info.size() - 1 - passes); ++i){
            if(info.at(i).jerseyNum > info.at(i + 1).jerseyNum){
                int jerseyNumber = info.at(i).jerseyNum;
                info.at(i).jerseyNum = info.at(i + 1).jerseyNum;
                info.at(i + 1).jerseyNum = jerseyNumber;
                swapOccured = true;
            }
        }
        passes++;
    }while(swapOccured);
}

void displayData(vector<playerInfo> info){
     cout << "Player Name" << setw(25) << "Jersey Number" 
          << setw(10) << "Goals" << endl;
     for(vector<playerInfo>::size_type i = 0; i < info.size(); i++){
         cout << info.at(i).lastName << ", " << info.at(i).firstName
              << setw(25) << info.at(i).jerseyNum << setw(10) 
              << info.at(i).goalsMade << endl;
     }
}

int main(){
    vector<playerInfo> info;
    FindPlayerInfo(info);
    bubbleSort(info);
    displayData(info);
    return 0;
}