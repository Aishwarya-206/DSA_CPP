// reverse a string using two pointers
#include<iostream>
using namespace std;
int main(){
    string str = "Aishwarya";
    int i=0, j=str.length()-1;
    while(i<j){
        swap(str[i], str[j]);
        i++;
        j--;
    }
    cout<<str<<endl;
    return 0;
}