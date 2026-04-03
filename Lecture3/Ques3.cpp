#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid]<target){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;

    }

    return -1;

}
int main(){
    int nums[] = {1,3,5,7,9};
    int n = 5;
    int target = 9;

    cout << "Target exists at :" << binarySearch(nums,n,target);
}