/*
 * Filename: arrayOfObjects.cpp
 * Project : Array of Objects
 * Created Date: Monday, December 3rd 2018, 6:01:05 pm
 * Author: Junaid Mulla
 * 
 * Revision History
 */
#include <iostream>
using namespace std;
class Employee
{
  public:
    char name[20];
    int E_id;

  public:
    void set()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your Employee id: ";
        cin >> E_id;
    }
    void get()
    {
        cout << "Name: " << name << endl;
        cout << "Employee id: " << E_id << endl;
    }
};
int main()
{
    int i;
    Employee e[5];
    cout << "setting for set: " << endl;
    for (i = 0; i < 5; i++)
    {
        e[i].set();
    }
    cout << "Setting for get: " << endl;
    for (i = 0; i < 5; i++)
    {
        e[i].get();
    }
}