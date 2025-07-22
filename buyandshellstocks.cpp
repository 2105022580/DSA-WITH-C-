#include<iostream>

using namespace std;
void maxprofit(int *prize,int n){
    int bestbuy[100000];
   bestbuy[0]=INT_MAX;

for(int i=0;i<n;i++){
    bestbuy[i]=min(bestbuy[i-1],prize[i-1]);
    cout<<bestbuy[i]<<",";
}

}
int main(){
    int prize[6]={7,1,5,3,6,4};
    int n=(sizeof(prize)/sizeof(int));
    maxprofit(prize,n);
    return 0;
}