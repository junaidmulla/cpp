/*
 * Filename:multilevel.cpp
 * Project: Multilevel Inheritance
 * Created Date: Saturday, December 1st 2018, 5:45:20 pm
 * Author: Junaid Mulla
 * 
 * Copyright (c) 2018 Your Company
 */

#include <iostream>
using namespace std;
// Base Class -- Super Class
class Person
{
  protected:
    int age;
    char name[20];

  public:
    void read()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }
};

// This class is inheriting from base class Person.
// This class is Sub class
class Student : public Person
{
  protected:
    int fees;
    char course[20];

  public:
    void read()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your fees: ";
        cin >> fees;
        cout << "Enter your course: ";
        cin >> course;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Fees: " << fees << endl;
        cout << "Course: " << course << endl;
    }
};

class Sports
{
  protected:
    int sid;
    char sname[20];

  public:
    void set()
    {
        cout << "Enter Sports id: ";
        cin >> sid;
        cout << "Enter Sports name: ";
        cin >> sname;
    }

    void get()
    {
        cout << "Sports id: " << sid << endl;
        cout << "Sports name: " << sname << endl;
    }
};

class DistanceStudent : public Student, public Sports
{
  protected:
    int did;
};

int main()
{
    // Student s;
    // s.read();
    //s.display();

    DistanceStudent ds;
    ds.read();
    ds.set();
    ds.display();
    ds.get();
}

/*
Enter your name: Junaid
Enter your age: 18
Enter your fees: 50000
Enter your course: BCA
Enter Sports id: 1899
Enter Sports name: Cricket
Name: Junaid
Age: 18
Fees: 50000
Course: BCA
Sports id: 1899
Sports name: Cricket
*/