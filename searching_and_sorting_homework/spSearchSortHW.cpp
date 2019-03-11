/**********************************************************************
 * @file   spSearchSortHW.cpp
 * @brief   This program will demonstrate binary search and selection 
 *          sort methods.
 *
 * 
 *
 * @remarks  
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  09
 *      Due Date:      11/08/2018
 *      Instructor:    MS. Serviner
 *
 *      Input:      none
 *
 *      Output:      the result of a sorted vector and a whether a 
 *                  target number is in a vector.
 * 
 * @author        Ridge Diffine
 * @date          
 **********************************************************************
 */
/**
 * @brief       sortVectorViaSelection - vector function that will sort 
 *              a vector in ascending order.
 *
 * @detailed   Will use a double for loop to iterate through to sort 
 *              vector from botoom to top.
 *
 * @remarks   
 *
 *
 * @param        vector<int>
 *
 *
 * @return  sorted vector
**/

/**
 * @brief       binarySearchOfVector - boolean that will return whtehr a
 *              target number is in a sorted vector
 *
 * @detailed  This function used binary search method where it halfs
 *              the vector and compares the target to to each half, then 
 *              repeats till it finds the target.
 *
 * @remarks   justed compared slopes
 *
 *
 * @param        index
 * @param        vector
 * param        target number
 *
 *
 * @return  true or false
**/

/**
 * @brief       displayData - will show contents of vector
 *
 * @detailed   This function uses a for loop and iterator i, to 
 *              cycle through and cout each element.
 *
 * @remarks   
 *
 *
 * @param        vector data
 *
 * @return  true or false
**/

#include<vector>
    using namespace std;
#include<iostream>
    using std::cout;
    using std::endl;
#include<iomanip>
    using std::setw;


vector<int> sortVectorViaSelection(vector<int>& values){
    int size, i, j, temp;
	size = values.size();
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(values.at(i) > values.at(j))
			{
				temp = values.at(i);
				values.at(i) = values.at(j);
				values.at(j) = temp;
			}
		}
	}
    return values;
}

bool binarySearchOfVector(vector<int>& values, int valueToFind, int& index){
    int n, first, last;
    bool answer;
    n = values.size();
	first = 0;
	last = n - 1;
	index = (first + last) / 2;
	while (first <= last){
		if(values.at(index) < valueToFind){
			first = index + 1;
		}
		else if(values.at(index) == valueToFind){
			cout << valueToFind << " found at location " << index + 1 << endl;
			answer = true;
			return answer;
		}
		else{
			 last = index - 1;
		}
		index = (first + last) / 2;
	}
	if(first > last){
		cout << "Not found! " << valueToFind << " is not present in the list.";
		index =  -1;
	}
    if(index < 0){
        answer = false;
        return answer;
    }
}


void displayData(vector<int> data){
    int element;
    cout << endl << "The values list" << endl 
         << "--------------------------------" << endl;
    for(vector<int>::size_type i = 0; i < (data.size()); ++i){
        element = data.at(i);
        cout << element << setw(5);
    }
    cout << endl << "--------------------------------" << endl;
}



int main(){
    int index;
    vector<int> values = {5, 8, 12, 3, 4, 8};
    displayData(values);
    sortVectorViaSelection(values);
    displayData(sortVectorViaSelection(values));
    binarySearchOfVector(values, 3, index);
    
    
    
    
    return 0;
}