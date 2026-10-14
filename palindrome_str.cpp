#include<iostream>
using namespace std;
int main(){
    string str = "racecar";
    bool ispalindrome = true;
    int i=0, j=str.length()-1;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            ispalindrome = false;
            break;
        }
    }
    if(ispalindrome){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    
    return 0;
}