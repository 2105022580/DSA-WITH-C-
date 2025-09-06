#include<iostream>
using namespace std;
int tp(int n){
    if(n==0||n==1||n==2||n==3){
        return 1;
    }
    // vertical
    int ans1 =tp(n-1);
    // horizontal
    int ans2 = tp(n-4);
    
    return ans1 + ans2 ;
}
int main(){
    int n=5;
    cout<<tp(n)<<endl;
    return 0;
}