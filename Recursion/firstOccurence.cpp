#include<iostream>
using namespace std;

int firstOccurence(int arr[],int s,int e,int key){
    if(s > e){
        return -1;
    }

    int mid = s + (e-s)/2;


    if(arr[mid] == key){
        int ans = firstOccurence(arr,s,mid-1,key);

        if(ans == -1){
            return mid;
        }

        else{
            return ans;
        }
    }

    else if(arr[mid] < key){
        return firstOccurence(arr,mid+1,e,key);
    }

    else{
        return firstOccurence(arr,s,mid-1,key);
    }
}
int main(){
    int arr[] = {1,2,2,2,3,4};
    int n = 6;

    int key = 2;

    int answer = firstOccurence(arr,0,5,key);
    cout << "First Occurence : " << answer << endl;
}