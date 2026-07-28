#include<iostream>
#include<vector>
using namespace std ;

int main(){
    cout<<"Giving input";
    vector<int> arr;
    int n;

    while (cin>> n){
        arr.push_back(n);
    }

    for (int i=0 ; i<arr.size(); i++){
        cout<< arr[i];
    }
    
}