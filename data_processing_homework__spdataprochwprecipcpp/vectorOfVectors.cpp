#include<iostream>
    using std::cout;
    using std::endl;
    
#include<vector>
    using std::vector;


void displayIntegerVector(const vector<int>& intVector)
{
    for (int value : intVector)
        cout << value << " ";
    cout << endl;
}

void displayVectorOfVectors(const vector<vector<int>>& vectorVector)
{
    int vectorCount = 1;
    for (vector<int> oneVector : vectorVector)
    {   // oneVector gets a copy of each integer vector in vectorVector as the for loop iterates
        cout << "vector " << vectorCount << ":  ";
        displayIntegerVector(oneVector);
        ++vectorCount;
    }
}

// more efficient as an entire vector is not copied each iteration
void alternativeDisplayVectorOfVectors(const vector<vector<int>>& vectorVector)
{
    int vectorCount = 1;
    for (vector<vector<int>>::size_type i = 0; i < vectorVector.size(); ++i)
    {
        cout << "vector " << vectorCount << ":  ";
        displayIntegerVector(vectorVector.at(i));
        ++vectorCount;
    }
}

int main()
{
    // create a vector which holds several other vectors 
    // each of which holds integers
    vector<vector<int>> vectorOfVectors 
    {
            {23, 45, 56, 67, 78, 89},         // one vector of integers
            {12, 21, 32, 43, 54, 65, 76, 77}, // a second vector of integers
            {87, 98, 61, 52, 91, 82, 73},     // a third vector of integers
            {52, 58, 49, 41, 85, 86, 96}      // a fourth vector of integers
    };
    
    cout << "vectorOfVectors size:  " << vectorOfVectors.size() << endl;
    cout.imbue(std::locale("en_US"));
    cout << "vectorOfVectors max size:  " << vectorOfVectors.max_size() << endl;
    
    // vectorOfVectors.at(0) is a vector so
    // vectorOfVectors.at(0).size() will determine the number of values stored in it
    cout << "size of first integer vector:  " 
         << vectorOfVectors.at(0).size() << endl;
    cout << "max size of first integer vector:  " 
         << vectorOfVectors.at(0).max_size() << endl;

    cout << "\ncontents of vectorOfVectors using range-based for:\n";
    displayVectorOfVectors(vectorOfVectors);
    
    cout << "\ncontents of vectorOfVectors using index:\n";
    alternativeDisplayVectorOfVectors(vectorOfVectors);
    
    cout << "\ncontents of vectorOfVectors using index and nested for loops:\n";
    for (vector<vector<int>>::size_type i = 0; i < vectorOfVectors.size(); ++i)
    {
        cout << "vector " << (i + 1) << ":  ";
        for (vector<int>::size_type j = 0; j < vectorOfVectors.at(i).size(); ++j)
            // recall vectorOfVectors.at(i) is a vector so
            // vectorOfVectors.at(i).at(j) is a single value in that vector
           cout << vectorOfVectors.at(i).at(j) << " ";
        cout << endl;
    }
    
    return 0;
}
