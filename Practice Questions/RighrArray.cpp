#include<iostream>
using namespace std;

void reverseArray(int arr[],int start,int end){
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;

    k = k % n;
    reverseArray(arr,0,n-1);


    reverseArray(arr,0,k-1);

    reverseArray(arr,k,n-1);

    
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }


}

//Left rotate by K:Reverse first k >>> Reverse first k---> reverse remaining ---> reverse whole array.

//Right rotate by k: Reverse whole array ---> reverse first k ---> reverse remaining.