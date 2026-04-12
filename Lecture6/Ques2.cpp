#include<iostream>
using namespace std;
int main(){
    int arr1[] = {4,5,6,7,8};
    int n = 5;

    int arr2[] = {1,2,3};
    int m = 3;

    int arr3[] = {0};

    int i = 0,j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }

        else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }


    for(int t = 0; t<n+m;t++){
        cout << arr3[t] << " ";
    }
}