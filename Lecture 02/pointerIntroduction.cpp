#include <iostream>
using namespace std;

int main(){
    int i = 42;
    double d = 3.14;

    int* pInt = &i;
    double* pDouble = &d;

    cout << "\nDereferencing pointers (using *):" << endl;
    cout << "*pInt    = " << *pInt << endl;
    cout << "*pDouble = " << *pDouble << endl;

    // Printing values
    cout << "Values:" << endl;
    cout << "i = " << i << endl;
    cout << "d = " << d << endl;

    cout << "\nAddresses (using &):" << endl;
    cout << "&i = " << &i << endl;
    cout << "&d = " << &d << endl;

    cout << "\nPointer values (stored addresses):" << endl;
    cout << "pInt    = " << pInt << endl;
    cout << "pDouble = " << pDouble << endl;

}