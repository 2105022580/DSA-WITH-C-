#include<iostream>
using namespace std;
 
 class fol{
    public:
    void func(){
        cout<<"nothing"<<endl;

    }
    void func(string name,int no){
        cout<<"ajay kumar"<<endl;
     
    }
    void func(float cgpa){
        cout<<"13.33"<<endl;

    }
 };
 int main(){
    fol f1;
    f1.func( 1.2);
    return 0;
 }