#include <iostream>
#include <vector>
using namespace std;

int lastoccur(vector<int> &arr,int target){
    int low = 0;
    int high = arr.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            ans = mid;
            low = mid - 1;
        }
        else if(arr[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans; 
}

int main(){
    vector<int> arr = {10,20,30,30,30,30,30,40,50,60,70,80,90};
    int result = lastoccur(arr,30); 

    
    cout<<"Target last occurence is present at index: "<<result<<endl;
    
    
    return 0;
}