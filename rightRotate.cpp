//right rotate
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

    int shift = 2; // Set shift to 2 for right rotation

    // Right rotation by Rotate() function
    cout << "Right rotating by Rotate() function: " << endl;
    rotate(arr.rbegin(), arr.rbegin() + shift, arr.rend());
    for (auto it: arr) {
        cout << it << " ";
    }
    cout << endl;

    // Right rotation by reverse() function on array
    cout << "Right rotating by reverse() function on array: " << endl;
    int array[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    reverse(array, array + size - shift);        // Reverse the first part (first 4 elements)
    reverse(array + size - shift, array + size); // Reverse the last 2 elements
    reverse(array, array + size);                // Reverse the entire array

    for (auto it: array) {
        cout << it << " ";
    }
    cout << endl;

    // Right rotation by reverse() function on vector
    cout << "Right rotating by reverse() function on vector: " << endl;
    vector<int> v = {10, 20, 30, 40, 50, 60};
    reverse(v.begin(), v.begin() + (v.size() - shift));    // Reverse the first part (first 4 elements)
    reverse(v.begin() + (v.size() - shift), v.end());      // Reverse the last 2 elements
    reverse(v.begin(), v.end());                           // Reverse the entire vector

    for (auto it: v) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
