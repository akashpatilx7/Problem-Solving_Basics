// Akash

#include<iostream>
using namespace std;

string reverseString(string& str){
    int left=0;
    int right=str.length()-1;
    char temp;

    while(left<=right){
        temp=str[left];
        str[left]=str[right];
        str[right]=temp;

        left++;
        right--;
    }
}


int main(){
    string str="Akash";
    reverseString(str);
    cout<<str<<endl;
    return 0;
}
