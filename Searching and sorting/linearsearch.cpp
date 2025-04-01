#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &arr,int target){
    int size = arr.size();
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return false;
}


int main(){

    vector<int> arr = {10,20,30,40,50,60,70,80,90};
    int result = linearSearch(arr,70);
    if(result != 0){
        cout<<"Target is present at index: "<<result;
    }
    else{
        cout<<"target is not present";
    }

    return 0;
}