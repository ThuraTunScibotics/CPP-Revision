#include<iostream>
using namespace std;

struct student
{
    string name;
    double marks;
    int roll_no;
};

int main()
{
    student s1, s2;
    
    s1 = {"Marcus", 560, 1};
    s2 = {"Kathryne", 440, 7};

    cout << endl << "The first student name is " << s1.name << " and his roll.no is " << s1.roll_no << ", his total marks is " << s1.marks << ".";
    cout << endl << "The second student name is " << s2.name << " and her roll.no is " << s2.roll_no << ", her total marks is " << s2.marks << ".";

    return 0;
}