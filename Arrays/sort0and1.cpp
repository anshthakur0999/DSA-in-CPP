#include<iostream>
using namespace std;

//Counting approach
void sortcount(int arr[],int n){
    int zerocount = 0;
    int onecount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount+=1;
        }
        else{
            onecount+=1;
        }
    }
    for(int i=0;i<zerocount;i++){
        arr[i]=0;
    }
    for(int i=zerocount;i<n;i++){
        arr[i]=1;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Two pointer approach
void sortZeroOne(int arr[], int n) {
    int left = 0;        
    int right = n - 1;    

    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }
        while (arr[right] == 1 && left < right) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {0, 1, 1, 1, 0, 0, 0, 1, 0};
    int n = 9;
    sortZeroOne(arr, n);
    sortcount(arr,9);
    return 0;
}