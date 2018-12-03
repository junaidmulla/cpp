/*
 * Filename: pointer.cpp
 * Project: Pointer 
 * Created Date: Monday, December 3rd 2018, 6:57:35 pm
 * Author: Junaid Mulla
 * 
 * Revision History
 */
#include <iostream>
using namespace std;
int main()
{
    int array[5];
    int *p;
    int i;

    p = array;
    cout << "Enter 5 numbers: ";
    for (i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << "array=" << array << endl;
        cout << "&array=" << &array << endl;
        cout << "&p=" << &p << endl;
        cout << "*p=" << *(array + i) << endl;
    }
    return 0;
}

/*
Enter 5 numbers : 9 7 76 5 45 
array = 0x22ff18
&array = 0x22ff18
&p = 0x22ff14
            *p = 9 array = 0x22ff18
                &array = 0x22ff18
                    &p = 0x22ff14
                        *p = 7 array = 0x22ff18
                            &array = 0x22ff18
                                &p = 0x22ff14
                                    *p = 76 array = 0x22ff18
                                        &array = 0x22ff18
                                            &p = 0x22ff14
                                                *p = 5 array = 0x22ff18
                                                    &array = 0x22ff18
                                                        &p = 0x22ff14
                                                            *p = 45
                                                            */