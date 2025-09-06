#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<v.size();i++){
        v.push_back(i);
    }
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    return 0;

}
