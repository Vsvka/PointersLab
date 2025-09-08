#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

//Assignment and Dereferencing
void assignmentAndDereference() {
    int a, b;
    cout << "Assignment and Dereferencing:" << "\n";
    cout << "Enter two integers: ";
    cin >> a >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    cout << "Value of a: " << *ptr_a << endl;
    cout << "Value of b: " << *ptr_b << "\n" << endl;
    

}

//Maximum in an Array
void maximumInArray() {
    cout << "Maximum in an Array:" << "\n";
    srand(static_cast<unsigned>(time(0)));
    const int siz = 10;
    int arr[siz];

    for (int i = 0; i < siz; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    int* max_ptr = arr;
    for (int* p = arr; p < arr + siz; p++) {
        if (*p > *max_ptr) max_ptr = p;
    }
    
    cout << "Maximum value: " << *max_ptr << "\n" << endl;
}

//Length of a C-Style String
void lengthOfCString() {
    char str[] = "How you doing?";
    char* p = str;
    int length = 0;

    while (*p != '\0') {
        length++;
        p++;
    }
    
    cout << "Length of a C-Style String:" << "\n";
    cout << "Length of string (How you doing) is: " << length << "\n" << endl;
}

//Reverse a C-Style String
void reverseCString() {
    char str[] = "Apple";
    char* p = str;

    while (*p != '\0') p++;
    p--;
    
    cout << "Reverse a C-Style String:" << "\n";
    cout << "Reversed string(Apple): ";
    while (p >= str) {
        cout << *p;
        p--;
    }
    cout << "\n" << endl;
}

//Midpoint in a Vector
void midpointInVector() {
    vector<int> v = {3, 12, 17, 24, 31};

    cout << "Midpoint in a Vector:" << "\n";
    for (int x : v) cout << x << " ";
    cout << endl;

    int* left = &v[0];
    int* right = &v[v.size() - 1];

    while (left < right) {
        left++;
        right--;
    }
    
    cout << "Midpoint value: " << *left << endl;
}

int main() {
    
    assignmentAndDereference();
    maximumInArray();
    lengthOfCString();
    reverseCString();
    midpointInVector();
    
    return 0;
}