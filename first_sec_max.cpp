#include<iostream>
#include<climits>
using namespace std;
pair<int,int> findmax(int arr[], int n){
    int max1 = INT_MIN;
    int max2;
    for(int i=0; i<n; i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i]>max2 && arr[i]<max1){
            max2 = arr[i];
        }
    }
    return{max1, max2};
}
int main(){
    int n; cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    auto ans = findmax(arr, n);
    cout<<"first max: "<<ans.first<<endl<<"second max: "<<ans.second<<endl;
    return 0;
}