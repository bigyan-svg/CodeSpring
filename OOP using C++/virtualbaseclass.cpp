#include<iostream>
using namespace std;
class College
{
   protected:
        char name[30];
        char address[40];
    public:
        void getdata()
        {
            cout<<"Enter College Name: ";
            cin>>name;
            cout<<"Enter Address: ";
            cin>>address;
        }
        void displaydata()
        {
            cout<<"\nName: "<<name;
            cout<<"\nAddress: "<<address;
        }
};
class Teacher: virtual public College
{
    protected:
        char Name[30];
        long int teacherId;
    public:
        void get_teacher()
        {
            cout<<"Enter Teacher Name: ";
            cin>>Name;
            cout<<"Enter Teacher ID: ";
            cin>>teacherId;
        }
        void display_Teacher()
        {
            cout<<"\nTeacher Name: "<<Name;
            cout<<"\nTeacher ID: "<<teacherId;
        }
};
class Student: virtual public College
{
    protected:
        char Name[30];
        long int rollNo;
    public:
        void getStudent()
        {
            cout<<"Enter Student Name: ";
            cin>>Name;
            cout<<"Enter Roll No: ";
            cin>>rollNo;
        }
        void display_Student()
        {
            cout<<"\nStudent Name: "<<Name;
            cout<<"\nRoll No: "<<rollNo;
        }
};
class Book: public virtual College
{
    private:
        char bookName[30];
        char writerName[30];
        long int bookCode;
    public:
        void getBook()
        {
            cout<<"Enter Book Name: ";
            cin>>bookName;
            cout<<"Enter Writer Name: ";
            cin>>writerName;
            cout<<"Enter Book Code: ";
            cin>>bookCode;
        }
        void putbook()
        {
            cout<<"\nBook Name: "<<bookName;
            cout<<"\nWriter Name: "<<writerName;
            cout<<"\nBook Code: "<<bookCode;
        }
};
int main()
{
    Book b;
    b.getdata();
    b.getBook();
    b.displaydata();
    b.putbook();
    return 0;
}
        