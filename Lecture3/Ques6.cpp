#include<iostream>
using namespace std;

int searchRotated(int nums[],int n ,int target){
    int left = 0;
    int right = n-1;
    int mid = left + (right-left)/2;

    while(left<=right){
        if(nums[mid] == target){
            return mid;
        }

        if(nums[left] <= nums[mid]){
            if(target >= nums[left] && target <nums[mid]){
                right = mid - 1;
            }

            else{
                left = mid + 1;
            }
        }

        else{
            if(target <= nums[right] && target > nums[mid]){
                left = mid + 1;

            }

            else{
                right = mid - 1;
            }
        }

        mid = left + (right - left)/2;
    }

    return -1;

}
int main(){
    int nums[] = {4,5,6,7,0,1,2};
    int n = 7;
    int target = 8;

    cout << searchRotated(nums,n,target);
}