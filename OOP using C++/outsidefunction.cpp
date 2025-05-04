//Defining the member funcitons outside the class
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int rollno;
    int marks;
public:
    void getDetails(); //function prototype
    void showDetails(); //function prototype
};
void Student::getDetails() //function definition outside the class
{
    cout << "Enter full name of student: "<<endl;
    getline(cin, name);
    cout << "Enter roll number of student: "<<endl;
    cin >> rollno;
    cout << "Enter marks of student: "<<endl;
    cin >> marks;
}
void Student::showDetails() //function definition outside the class
{
    cout << "Name of student: " << name << endl;
    cout << "Roll number of student: " << rollno << endl;
    cout << "Marks of student: " << marks << endl;
}
int main()
{
    Student s1; //creating object of class Student
    s1.getDetails(); //calling member function getDetails() using object s1
    s1.showDetails(); //calling member function showDetails() using object s1
    return 0;
}