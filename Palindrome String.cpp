#include<bits/stdc++.h>
using namespace std;

// int isPalindrome(string str){
bool isPalindrome(string str){
    int left=0;
    int right=str.length()-1;
    
    while(left<=right){
        if(str[left]!=str[right]){
            return 0;
        }
        else{
            left++;
            right--;
        }
    }
    return 1;
}


int main(){
    string str="abba";
    // isPalindrome(str);
    cout<<isPalindrome(str)<<endl;
    return 0;
}
