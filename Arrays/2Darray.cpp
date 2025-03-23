#include<iostream>
#include<limits.h>
using namespace std;

bool findTarget(int arr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int findMax(int arr[][3],int row,int col){
    int maxAns = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxAns){
                maxAns=arr[i][j];
            }
        }
    }
    return maxAns;
}

int findMin(int arr[][3],int row,int col){
    int minAns = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minAns){
                minAns=arr[i][j];
            }
        }
    }
    return minAns;
}

void rowWiseSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of all elements in row"<<i<<":"<<sum<<endl;
    }cout<<endl;
}
void colWiseSum(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        int sum = 0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of all elements in col"<<i<<":"<<sum<<endl;
    }cout<<endl;
}
int mainDiaSum(int arr[][3],int row,int col){
    int sum = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){ 
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}

int antiDiaSum(int arr[][3],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i][size-i-1];
    }
    return sum;
}

void transposeMatrix(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){

    // int arr[4][3] = {
    //                     {1,2,3},
    //                     {5,6,7},
    //                     {9,10,11},
    //                     {13,14,15}
    // };

    // int row=4;
    // int col=3;

    // //row wise
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }
    // cout<<endl;


    // //column wise
    // for(int i=0;i<col;i++){
    //     for(int j=0;j<row;j++){
    //         cout<<arr[j][i]<<" ";
    //     }cout<<endl;
    // }

    // Input in 2D array

    // int arr[3][3];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    int arr[3][3]={
                    {10,20,30},
                    {40,50,60},
                    {70,80,90}
    };
    // int row=3,col=3,target=1;
    // int result = findTarget(arr,row,col,target);
    // if(result!=1){
    //     cout<<"Element Not Found"<<endl;
    // }
    // else{
    //     cout<<"Element found"<<endl;
    // }
    // int row=3,col=3;
    // int max = findMax(arr,row,col);
    // cout<<"Maximum Element in 2D array : "<<max<<endl;

    // int row=3,col=3;
    // int min = findMin(arr,row,col);
    // cout<<"Minimum Element in 2D array : "<<min<<endl;

    int row=3,col=3;
    // int size=3;
    // // rowWiseSum(arr,row,col);
    // // colWiseSum(arr,row,col);
    // int maindiasum=mainDiaSum(arr,row,col);
    // cout<<"Sum of Main diagonal:"<<maindiasum<<endl;
    // int antidiasum=antiDiaSum(arr,size);
    // cout<<"Sum of Anti diagonal:"<<antidiasum<<endl;
    int brr[3][3]={
        {2,4,6},
        {8,3,5},
        {7,9,1}
    };

    transposeMatrix(brr,row,col);

    return 0;
}