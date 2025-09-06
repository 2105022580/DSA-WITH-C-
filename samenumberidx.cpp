#include<iostream>
#include<vector>
using namespace std;
 vector<int>sameidx(vector<int>arr,int target){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        if(i==target){
            return ans;
        }
        else {
        cout<<"not valid";
        }
    }
    }
    int main(){
        vector<int>vec={1,2,2,2,2,4};
        int target=2;
        vector<int>ans=sameidx(vec,target);
        cout<<ans[0]<<","<<ans[1]<<endl;
        return 0;
    }
 
 


