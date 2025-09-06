#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
void bubbleshort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j=n-i-1;j++){
            if(arr[i]>arr[j+1]){
                swap(arr[i],arr[j+1]);
            }
        }
    }

    
}

int main (){
    int arr[]={5,4,1,3,2};
    bubbleshort(arr,5);
    return 0;
}