#include<iostream>
#include<climits>
using namespace std;
int findmin(int arr[], int n){
    int minval = INT_MAX;
    for(int i=0; i<n; i++){
        // if(arr[i]<minval){
        //     minval = arr[i];
        // }
        minval = min(minval, arr[i]);
    }
    return minval;
}
int findmax(int arr[], int n){
    int maxval = INT_MIN;
     for(int i=0; i<n; i++){
        // if(arr[i]>maxval){
        //     maxval = arr[i];
        // }
        maxval = max(maxval, arr[i]);
    }
    return maxval;
}
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minval = findmin(arr,n);
    int maxval = findmax(arr,n);
    cout<<"the min value is: "<<minval<<endl<<"the max value is: "<<maxval<<endl; 
    
    return 0;
}