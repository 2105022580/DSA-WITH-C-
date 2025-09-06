#include<iostream>
using namespace std;
def contains_duplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return True
        seen.add(num)
    return False

int main(){
    int arr[]={1,2,3,4,2,2,4,2,1};
  
    
    int n=(sizeof(arr)/sizeof(int));
    containduplicate(arr,n);
    return 0;
}