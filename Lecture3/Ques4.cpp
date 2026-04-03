#include<iostream>
using namespace std;

int binarySearch(int nums[],int n,int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(nums[mid] >= target){
            ans =  mid;
            e = mid-1;
        }

        else{
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}
int main(){
    int nums[] = {1,2,3,7,9};
    int n = 5;
    int target = 4;

    cout << "First element greater than or equal to target is :" << binarySearch(nums,n,target);


}