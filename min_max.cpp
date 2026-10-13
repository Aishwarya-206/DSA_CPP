#include<iostream>
#include<climits>
using namespace std;
int findmin(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int findmax(int arr[], int n){
    int max = INT_MIN;
     for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min = findmax(arr,n);
    int max = findmin(arr,n);
    cout<<"the min value is: "<<min<<endl<<"the max value is: "<<max<<endl; 
    
    return 0;
}