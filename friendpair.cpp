#include<iostream>
using namespace std;
int friendpair(int n){
    if(n==1||n==2){
        return n;
    }
    return friendpair(n-1)+(n-1)*friendpair(n-2);
}
    int main(){
        cout<<friendpair(3)<<endl;
        return 0;
    }

