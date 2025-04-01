#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr,int low,int high,int target){
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1; 
}

int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80,90};
    int result = binarySearch(arr,0,arr.size()-1,70); 

    if(result != -1){
        cout<<"Target is present at index: "<<result;
    }
    else{
        cout<<"target is not present";
    }
    return 0;
}