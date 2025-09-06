#include<iostream>
#include<cstring>
using namespace std;
int main(){
char sentance[40];
cin.getline(sentance,50,'*');
cout<<"your word was ="<<sentance<<endl;
cout<<"length"<<strlen(sentance)<<endl;
return 0; 
}