#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int* ptr = &a; // ptr holds the address of a

    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Address of a: " << &a << endl; // Output: address of a
    cout << "Value stored in ptr (address of a): " << ptr << endl; // Output: address of a
    cout << "Value pointed to by ptr (value of a): " << *ptr << endl; // Output: 10
    cout << "Address of ptr: " << &ptr << endl; // Output: address of ptr
    cout<< "Size of int: " << sizeof(int) << " bytes" << endl; // Output: size of int
    cout << "Size of pointer: " << sizeof(ptr) << " bytes" << endl; // Output: size of pointer (typically 4 or 8 bytes depending on the system)

    return 0;
}
