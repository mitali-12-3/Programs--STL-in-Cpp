#include<iostream>
#include<vector>
using namespace std;
void print2D(vector<vector<int>>v, int rowSize, int colSize){
    for(int i=0; i< rowSize;i++){
        for(int j=0; j<colSize;j++)
            {cout<<v[i][j]<<" ";
    }
    cout<<endl;
    }
}
int main(){
    vector<vector<int>>v(4,vector<int>(3,0));
    int rowSize= v.size();
    int colSize= v[0].size();
    cout << "Enter elements for basic 2D array:" << endl;
    for(int i=0; i< rowSize;i++){
        for(int j=0; j<colSize;j++)
            {cin>>v[i][j];
    }
    }
    print2D(v,rowSize,colSize);
    //JAGGED ARRAY
    vector<vector<int>>arr(4);
    arr[0]= vector<int>(4);
    arr[1]= vector<int>(2);
    arr[2]= vector<int>(5);
    arr[3]= vector<int>(3);

    int arrRowSize= arr.size();
    cout<< "Row size= "<< arrRowSize<<endl;
    
    cout << "Enter elements for jagged array:" << endl;
    for(int i = 0; i < arrRowSize; i++){
        for(int j = 0; j < arr[i].size(); j++){
            cin >> arr[i][j];
        }
    }

    // Printing jagged array with column sizes
    cout << "Jagged array:" << endl;
    for(int i = 0; i < arrRowSize; i++){
        cout << "Row " << i << " has " << arr[i].size() << " columns" << endl;
    }

    return 0;
}