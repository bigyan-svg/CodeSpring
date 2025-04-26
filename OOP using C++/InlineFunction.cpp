//Defining a member function inside a class
// #include <iostream>
// #include <string>
// using namespace std;
// class Student
// {
// private:
//     string name;
//     int rollno;
//     int marks;
// public:
//     void getDetails()
//     {
//         cout << "Enter full name of student: ";
//         getline(cin, name);
//         cout << "Enter roll number of student: ";
//         cin >> rollno;
//         cout << "Enter marks of student: ";
//         cin >> marks;
//     }
//     void showDetails()
//     {
//         cout << "Name of student is: " << name << endl;
//         cout << "Roll number of student is: " << rollno << endl;
//         cout << "Marks of student is: " << marks << endl;
//     }
//     void showGrade()
//     {
//         if (marks >= 90)
//             cout << "Grade of student is: A+" << endl;
//         else if (marks >= 80 && marks < 90)
//             cout << "Grade of student is: A" << endl;
//         else if (marks >= 70 && marks < 80)
//             cout << "Grade of student is: B" << endl;
//         else if (marks >= 60 && marks < 70)
//             cout << "Grade of student is: C" << endl;
//         else if (marks >= 50 && marks < 60)
//             cout << "Grade of student is: D" << endl;
//         else
//             cout << "Grade of student is: F" << endl;
//     }
// };
// int main()
// {
//     Student s1;
//     s1.getDetails();
//     s1.showDetails();
//     s1.showGrade();
//     return 0;
// }