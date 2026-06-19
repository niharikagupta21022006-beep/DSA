#include<iostream>
using namespace std;

long long merge(int arr[],int s,int e){

    long long count = 0;
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    

    // copy kiya na
    int mainArrayIndex = s;
    for(int i = 0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
     
    mainArrayIndex = mid+1;
    for(int i = 0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
     mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] <= second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }

        else{
            count = count + (len1-index1);
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
    return count;
    

}

long long mergeSort(int arr[],int s,int e){

    if(s >= e){
        return 0;
    }

    int mid = s + (e-s)/2;

    long long left = mergeSort(arr,s,mid);
    long long right = mergeSort(arr,mid+1,e);

    long long mergeCount = merge(arr,s,e);

    return left + right + mergeCount;
}
int main(){
    int arr[15] = {3,7,0,1,5,8,3,2,5,65,89,45,7,11};
    int n = 15;

    long long ans = mergeSort(arr,0,n-1);

    cout << ans;
    return 0;
}