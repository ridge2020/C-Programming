/**********************************************************************
 * @file    spVectorIL.cpp
 * @brief   This program is a modular program that will use
 *          functions to prompt for scores, then add them to vector,
 *          calculate average, and then add curve,
 * 
 *
 * @remarks
 *      Course:        Computer Science 2114
 *      Assignment #:  08
 *      Due Date:      10/18/18
 *      Instructor:    MS. Serviner
 *
 *      Input:       none
 *
 *      Output:       will display results
 * 
 * @author        Ridge Diffine
 * @date          10/18/18
 **********************************************************************
 */
 
 /**
 * @brief       getAverages() - will prompt for averages and return
 *              vector
 *
 * @detailed   this fucntion will prompt for each average and add to a
 *              a vector untill a negative number is entered then it 
 *              will stop, and return the vector.
 *
 * @remarks  this program uses a vector data type 
 *
 *
 * @param   none
 *
 *
 * @return  vector
**/

/**
 * @brief       calculateClassAverage - will caluclate and return average
 *              of a vector.
 *
 * @detailed   This program will have a vector as a parameter, and will
 *             use a iterator base loop to pull and add to a running total
 *              then will divide by the size of vector to calculate average.;
 *
 * @remarks  
 *
 *
 * @param        testAverages    vector
 * 
 *
 *
 * @return  average
**/

/**
 * @brief       storeAverages() - will store vector into a txt file.
 *
 * @detailed   will use a loop to output each element in a vector,
 *              open a text file and write each element down one 
 *              line per element.
 *
 * @remarks  no reference param
 *
 *
 * @param       testAverages  vector
 * @param       name            text file
 *
 *
 * @return  none
**/

/**
 * @brief       curveAverages() - will apply curve to test scores
 *
 * @detailed   Will have a curve number, and vector as a param, 
 *              then use a for loop to take each number from vector
 *              add the curve then replace it.
 *
 * @remarks  
 *
 *
 * @param        testAverages vector, reference param
 * @param        number     curve
 *
 *
 * @return  none
**/

 #include<iostream>
 #include<vector>
 #include<string>
 #include<fstream>
 using namespace std;
 
 
vector<double> getAverages() {
    double testAverage = 0;
    vector<double> testAverages;
    while(testAverage >= 0){
        cout << "Please enter the test average: ";
        cin >> testAverage;
        if(testAverage >= 0){
            testAverages.push_back(testAverage);
        }
    }
        
    return testAverages;
}

double calculateClassAverage(vector<double> testAverages){
    double total, average;
    for(vector<double>::iterator it = testAverages.begin(); it 
    != testAverages.end(); ++it){
        total = total + *it;
    }
    average = total / testAverages.size();
    return average;
}

void storeAverages(vector<double> testAverages, string name){
    ofstream myFile;
    myFile.open(name);
    for(double testScore : testAverages){
        myFile << testScore << endl;
        
    }
    myFile.close();
}


void curveAverages(vector<double> &testAverages, double number){
    double testScore;
    for(int count = 0; count < testAverages.size(); count++){
        testScore = testAverages.at(count);
        testScore = testScore + number;
        cout << "The curved score: " << testScore << endl;
        testAverages.at(count) = testScore;
    }
    
}

int main() {
    vector<double> testAverages;
    double average, curve;
    string name;
    name = "testAverages.txt";
    testAverages = getAverages();
    average = calculateClassAverage(testAverages);
    cout << "Average:  " << average << endl;
    cout << "Please enter the number of points to add for curve: ";
    cin >> curve;
    curveAverages(testAverages, curve);
    storeAverages(testAverages, name);
    
    return 0;
}