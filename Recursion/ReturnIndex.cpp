#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int key){
    if(s>e){
        return 0;
    }

    int mid = s + (e-s)/2;
    int ans = 0;

    if(arr[mid] == key){
        ans = mid;
    }

    else if(arr[mid]<key){
        ans = binarySearch(arr,mid+1,e,key);
    }

    else{
        ans = binarySearch(arr,s,mid - 1,key);
    }

    return ans;
}
int main(){
    int arr[] = {1,4,7,9,12,15,18};
    int n = 7;

    int key = 0;
    int answer = binarySearch( arr,0,6,1);

    cout << "Index is" << answer << endl;
}