// AkashGokulPatil

#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string str){
    unordered_map<char,int>umap;

    for(int i=0;i<str.length();i++){
        umap[str[i]]++;
    }

    for(auto it:umap){
        if(it.second>1){
            cout<<it.first<<" has a count of: "<<it.second<<endl;
        }
    }
}


int main(){
    string str="AkashGokulPatil";
    printDuplicates(str);
    return 0;
}
