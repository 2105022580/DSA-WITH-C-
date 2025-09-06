#include<iostream>
#include<string>
using namespace std;
void isanagram(string str1,string str2){
    if(str1.length() != str2.length()){
        cout<<"not anagram\n";
    
        return ;
    }
    int count[26]={0};
    for(int i=0;i<str1.length();i++){
        int idx =str1[i]-'a';
        count[idx]++;
    
    }
    for(int i=0;i<str2.length();i++){
        int idx =str2[i]-'a';
        if(count[idx]==0){
            cout<<"not anagram\n";
            return ;
        }
        count[idx]--;

    

    }
    cout<<"valid anagram";
return ;
}
int main(){
string str1="anagram";
string str2="nagaram";
isanagram(str1,str2);
return 0;
}









