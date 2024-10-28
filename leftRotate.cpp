//left rotate: 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    cout << "Without rotation: " << endl;

    for (auto it: arr) {
        cout << it << " ";
    }
    cout << endl;

    int shift = 2; // Set shift to 2 for left rotation

    // Left rotation by Rotate() function
    cout << "Left rotating by Rotate() function: " << endl;
    rotate(arr.begin(), arr.begin() + shift, arr.end());
    for (auto it: arr) {
        cout << it << " ";
    }
    cout << endl;

    // Left rotation by reverse() function on array
    cout << "Left rotating by reverse() function on array: " << endl;
    int array[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    reverse(array, array + shift);          // Reverse the first part (first 2 elements)
    reverse(array + shift, array + size);    // Reverse the rest of the array
    reverse(array, array + size);            // Reverse the entire array

    for (auto it: array) {
        cout << it << " ";
    }
    cout << endl;

    // Left rotation by reverse() function on vector
    cout << "Left rotating by reverse() function on vector: " << endl;
    vector<int> v = {10, 20, 30, 40, 50, 60};
    reverse(v.begin(), v.begin() + shift);     // Reverse the first part (first 2 elements)
    reverse(v.begin() + shift, v.end());       // Reverse the rest of the vector
    reverse(v.begin(), v.end());               // Reverse the entire vector

    for (auto it: v) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
