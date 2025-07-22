#include<iostream>
#include<cstring>
using namespace std;
bool ispolindrom(char str[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"not a polindrom\n";
            return false;

        }
        else{
            cout<<"it is a polindrom\n";
            return true;
        }
    }
} 
int main(){
    char word1[] ="racecar";
    char word[] ="madam";
    char word2[] ="apple";
    ispolindrom(word2,strlen(word2));
    return 0;
}