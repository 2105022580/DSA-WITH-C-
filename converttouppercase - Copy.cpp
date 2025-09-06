#include<iostream>
#include<cstring>
using namespace std;
void uppercase(char word[i],char n);
for(int i=0;i<n;i++){
    char ch = word[i];
}

if(ch >='A'&& ch <='Z'){
continue;
}
else{
    word[i]= ch -'a'+'A';

}
int main(){
    char word[]="ApPle";
 uppercase(word,strlen(word));
 cout<< word <<endl;
 return 0;
}