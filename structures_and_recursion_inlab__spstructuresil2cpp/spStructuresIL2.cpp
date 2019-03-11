#include <iostream>
   using std::cin;
   using std::cout;
   using std::endl;
   using std::istream;
   using std::ostream;

#include <fstream>
   using std::ofstream;
   using std::ifstream;

#include <iomanip>
   using std::left;
   using std::right;
   using std::setw;
   using std::setprecision;
   using std::fixed;

#include <string>
   using std::string;

#include <vector>
   using std::vector;

#include <algorithm>
   using std::swap;

#include <sstream>


struct Course
{
	string number;
	string title;
	int creditHours;
};

struct CompletedCourse
{
    string courseNum,
           name;
    int hours,
        points;
    double average;
    char grade;
};

struct Student
{
    string name,
           stuClass;
    int idNum,
        hours,
        points;
    double gpa;
    vector<CompletedCourse> courseInfo;
     
};


int  convertToQualityPoints(char);
char determineLetterGrade(double);
void readAndCalculateStudentData(istream&, const vector<Course>&, vector<Student>&);
void readCourses(istream&, vector<Course>&);
void sort(vector<Course>&);
void sort(vector<Student>&);
void write(ostream&, const vector<Course>&);
void write(ostream&, const vector<Student>&);

// Complete only one of the following:
// The getCourseIndexRecursively function is 5 of the 15 points.
// If you cannot complete the getCourseIndexRecursively() function, complete the getCourseIndex() function.
//vector<Course>::size_type getCourseIndexRecursively(/* complete parameter list */);
//vector<Course>::size_type getCourseIndex(const vector<Course>&, string);

int main()
{
    vector<Course> courses;
    vector<Student> allStudents;
    ifstream coursefile;
    coursefile.open("courses.txt");
    if(coursefile.is_open()){
        readCourses(coursefile, courses);
	    sort(courses);
	    ofstream courseOut;
	    courseOut.open("sortedCourses.txt");
	    if(courseOut.is_open()){
	        write(courseOut, courses);
        	ifstream studentfile;
        	studentfile.open("students.txt");
        	if(studentfile.is_open()){
        	    readAndCalculateStudentData(studentfile, courses, allStudents);
        	    sort(allStudents);
        	    ofstream studentOut;
        	    studentOut.open("studentReport.txt");
        	    if(studentOut.is_open()){
        	        write(studentOut, allStudents);
	// open courses.txt and read courses into a vector
	// sort the courses ascending by course number
	// write the courses to sortedCourses.txt in the same format as the input file
	
	// open students.txt and read students into a vector, calculating fields not found in the input file as the data is read
	// sort the students ascending by name
	// create a student report in the format shown in the assignment
        	    }
        	}
	    }
    }
    return 0;
}

int convertToQualityPoints(char letterGrade)
{
	int qualityPoints;
	if (letterGrade == 'A')
		qualityPoints = 4;
	else if (letterGrade == 'B')
		qualityPoints = 3;
	else if (letterGrade == 'C')
		qualityPoints = 2;
	else if (letterGrade == 'D')
		qualityPoints = 1;
	else
		qualityPoints = 0;
		
	return qualityPoints;
}

char determineLetterGrade(double average)
{
	char letterGrade;
	if (average >= 90.0)
		letterGrade = 'A';
	else if (average >= 80.0)
		letterGrade = 'B';
	else if (average >= 70.0)
		letterGrade = 'C';
	else if (average >= 60.0)
		letterGrade = 'D';
	else
		letterGrade = 'F';
		
	return letterGrade;
}

// Must complete for [CO]-Recursion (5 points)
/*
vector<Course>::size_type getCourseIndexRecursively( complete parameter list )
{
// implement a recursive binary search to locate the course number in the Course vector
// return the index of its location or the size of the vector to indicate the course number was not found
}
*/
vector<Course>::size_type binarySearchOfVector(vector<int>& courses, int valueToFind){
    int index, finalIndex;
    int n, first, last;
    n = courses.size();
	first = 0;
	last = n - 1;
	index = (first + last) / 2;
	if(first <= last){
		if(courses.at(index).courseNum < valueToFind){
			first = index + 1;
		}
		else if(courses.at(index).courseNum == valueToFind){
			cout << valueToFind << " found at location " << index + 1 << endl;
		}
		else{
			 last = index - 1;
		}
		index = (first + last) / 2;
	}
	Finalndex = binarySearchOfVector(courses, valueToFind);
	if(first > last){
		cout << "Not found! " << valueToFind << " is not present in the list.";
		index =  -1;
    }
    return FinalIndex;
}

// Complete only if unable to complete getCourseIndexRecursively
/*
vector<Course>::size_type getCourseIndex(const vector<Course>& courses, string courseNumber)
{
// implement a binary search to locate the course number in the Course vector
// return the index of its location or the size of the vector to indicate the course number was not found
}
*/

void readAndCalculateStudentData(istream& infile, const vector<Course>& allCourses, vector<Student>& allStudents)
{
	Student oneStudent;
	while (getline(infile,oneStudent.name,';'))
	{
		// read and store the student's idNumber and classification
		string line;
		getline(infile, line);
		std::istringstream iss{line};

		// initialize creditHoursCompleted and qualityPoints (in Student structure) in preparation of calculating as courses are read
		CompletedCourse oneCourse;
		while (getline(iss,oneCourse.number,';'))
		{
			// locate the course in the Courses vector (determine index)
         // if the course was not foumd, exit the program with a message as to why
			// get the course's title and credit hours from the Courses vector and store in the CompletedCourse structure
			// read and store the average the student made in the course in the CompletedCourse structure
			// determine the letter grade and quality points for the course and store in the CompletedCourse structure
			// add the CompletedCourse structure to the student's courses in the Student structure
			// update student's creditHoursCompleted and qualityPoints in the Student structure			
		}
		
		// calculate the student's GPA
		// add the Student structure to the Student vector
		// clear the Student structure data as necessary
	}
}

void readCourses(istream& infile, vector<Course>& courses)
{
	Course oneCourse;
	while (infile >> oneCourse.number)
	{
		infile.ignore();
		infile >> oneCourse.creditHours;
		infile.ignore();
		getline(infile,oneCourse.title);
		courses.push_back(oneCourse);
	}
}

void sort(vector<Course>& courses)
{
    int size, i, j, temp;
	size = courses.size();
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(courses.at(i).courseNum > courses.at(j).courseNum)
			{
				temp = courses.at(i).courseNum;
				courses.at(i).courseNum = courses.at(j).courseNum;
				courses.at(j).courseNum = temp;
			}
		}
	}
    return courses;
}
// add code that will sort the courses ascending by the course number

void sort(vector<Student>& students)
{
    int size, i, j, temp;
	size = students.size();
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(students.at(i).name > students.at(j).name)
			{
				temp = students.at(i).name;
				students.at(i).name = students.at(j).name;
				students.at(j).name = temp;
			}
		}
	}
    return students;
// add code that will sort the students ascending by name
}

void write(ostream& outfile, const vector<Course>& allCourses)
{
    for(vector<allCourses>::size_type i = 0; i < (info.size()); ++i){ 
		outfile << allCourses.at(i).number
              << " "
				  << allCourses.at(i).title
              << " "
				  << allCourses.at(i).creditHours
              << endl;
}

void write(ostream& outfile, const vector<Student>& allStudents)
{
	for(vector<allStudents>::size_type i = 0; i < (info.size()); ++i){
	
		outfile << setprecision(1) << fixed
				  <<   "Student Name:              " << allStudents.at(i).name
				  << "\nID Number:                 " << allStudents.at(i).idNum
				  << "\nClassification:            " << allStudents.at(i).stuClass
				  << "\nCredit Hours Completed:    " << allStudents.at(i).hours
				  << "\nQuality Points:            " << allStudents.at(i).points
				  << "\nGPA:                       " << allStudents.at(i).gpa
              << endl;
	}
		// next two lines deliberately go past 80 characters as each line is a single line in the output file
		outfile << "   " << setw(10) << left << "Course" << setw(60) << left << "Title" << setw(6) << right << "Credit" << setw(8) << right << "Quality" << setw(8) << right << "Average" << " Letter\n"
				  << "   " << setw(10) << left << "Number" << setw(60) << left << " "     << setw(6) << right << "Hours"  << setw(8) << right << "Points"  << setw(8) << right << " "       << "  Grade\n";
		string line(99, '-'); // create a dashed line
      cout << "   " << line << endl;
		for(vector<CompletedCourse>::size_type i = 0; i < (infor.size()); ++i){
			outfile << "   "
					  << setw(10) << left  << CompletedCourse.at(i).courseNum
					  << setw(60) << left  << CompletedCourse.at(i).name
					  << setw(4)  << right << CompletedCourse.at(i).hours
					  << setw(10) << right << CompletedCourse.at(i).points
					  << setw(8)  << right << CompletedCourse.at(i).average
					  << setw(5)  << right << CompletedCourse.at(i).grade
                 << endl;

		outfile << endl << endl;
	}

	outfile << endl << endl;
}

