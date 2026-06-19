#include<iostream>
using namespace std;

int insertPosition(int arr[],int target,int s,int e){
    if(s>e){
        return s;
    }

    int mid = s + (e-s)/2;
    int ans = 0;
    
    if(arr[mid] == target){
       ans = mid;
    }

    if(arr[mid] > target){
         ans = insertPosition(arr,target,s,mid - 1);
    }

    else{
         ans  =  insertPosition(arr,target,mid+1,e);
    }

    return ans;
}
int main() {
    int arr[] = {1,3,5,6};
    int n = 4;
    int target = 2;

    int answer = insertPosition(arr,target,0,3);
    cout << answer << endl;;

    
}