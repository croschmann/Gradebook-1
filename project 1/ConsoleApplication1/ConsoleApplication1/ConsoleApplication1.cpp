// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Catherine Roschmann_Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//COSC 1436.22002
//March 2, 2022
//Objective: Create a program that allows for a student name, three assignments, three grades, to be displayed in a table along with the average to be displayed to one decimal point.

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

//FUNCTION PROTOTYPES////////////////////////////////////////////////////////////////////////////////////////////////
string getName();
void getAssignments(string[]); //get assignment takes a string array by reference to return the changed elements back
//void getGrades(int[], string[]); //
//void displayData(string, string[], int[], double);




//MAIN BLOCK//////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    cout << setprecision(1) << fixed;
    cout << showpoint;


    //STUDENT NAME/////////////////////
    string studentName;    //student name variable                          
    studentName = getName(); //get the name of the student
    cout << endl;

    //ASSIGNMENT NAME//////////////////
    string assignmentName[3];  //create the string to hold three assignment names

    getAssignments(assignmentName);   //pass string through the function


    //ENTER GRADES/////////////////////
    int grade[3];       //variable to hold grades
    getGrades(grade, assignmentName);

    //CALCULATION FOR GRADE AVERAGE////

    double getAverage(grade);

    cout << endl << "The average for " << studentName << "  is " << getAverage << endl << endl;



    //PRINT DATA/////////////////////
    cout << "Here are your grades: " << endl;
    void displayData(studentName, assignmentName, grade, getAverage);
    cout << endl << "Thank you for playing." << endl;


    return 0;
}

//FUNCTION FOR STUDENT NAME HERE//////////////////////////////////////////////////////////////////////////////////////
string getName()
{
    string name;
    cout << "Enter student first and last name HELLOOOO: ";
    getline(cin, name);
    return name;

}

//FUNCTION FOR ASSIGNMENT NAMES HERE ////////////////////////////////////////////////////////////////////////////////
void getAssignments(string assignments[])
{
    cout << "Enter the name HELLO HELLO of assignment 1: ";
    getline(cin, assignments[0]);
    cout << "Enter the name of assignment 2: ";
    getline(cin, assignments[1]);
    cout << "Enter the name of assignment 3: ";
    getline(cin, assignments[2]);
    cout << endl;
}

//FUNCTION FOR GRADES HERE///////////////////////////////////////////////////////////////////////////////////////////
void getGrades(int grade[], string assignments[])
{
    string readgrade;

    cout << "Enter the grade for " << assignments[0] << ": ";
    //   cin >> grade[0];
    getline(cin, readgrade);
    grade[0] = stoi(readgrade);

    cout << "Enter the grade for " << assignments[1] << ": ";
    //    cin >> grade[1];
    getline(cin, readgrade);
    grade[1] = stoi(readgrade);

    cout << "Enter the grade for " << assignments[2] << ": ";
    //    cin >> grade[2];
    getline(cin, readgrade);
    grade[2] = stoi(readgrade);

}

//FUNCTION FOR DOUBLE AVERAGE///////////////////////////////////////////////////////////////////////////////////////////////
{
    double getAverage(int grade[]);
    getAverage = (grade[0] + grade[1] + grade[2]) / (3.0);

}
//FUNCTION FOR PRINT///////////////////////////////////////////////////////////////////////////////////////////////////
{
    void displayData(string, string[], int[], double);

    cout << assignmentName[0] << ": " << grade[0] << endl;
    cout << assignmentName[1] << ": " << grade[1] << endl;
    cout << assignmentName[2] << ": " << grade[2] << endl;
}
