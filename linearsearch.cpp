#include<iostream>
using namespace std;
int linearsearch(int key,int *arr ,int n){


for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
}
    
        return -1;
    


}



int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n= sizeof(arr)/sizeof(int);
    
    cout<<linearsearch(15,arr,n)<<endl;
    return 0;

}