#include <iostream>
using namespace std;

string *reverseArray(string *arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        string temp = arr[i];                    
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    return arr;                                 

}

void displayArray(string *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << endl;
    }
}

int main() {
    int size = 5;
    
    // Create dynamic string array
    string *names = new string[size];
    
    // Populate array with 5 names
    *(names + 0) = "Alice";
    *(names + 1) = "Bob";
    *(names + 2) = "Charlie";
    *(names + 3) = "Diana";
    *(names + 4) = "Eve";
    
    cout << "Original array:" << endl;
    displayArray(names, size);
    
    // Reverse the array
    names = reverseArray(names, size);
    
    cout << "\nReversed array:" << endl;
    displayArray(names, size);
    
    // Free dynamic memory
    delete[] names;
    names = nullptr;
    
    return 0;
}
