#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    if(n == 0 || n == 1){
        return ;
    }
    int min = 0;
    for(int i = 1;i<n;i++){
       
        if(arr[i]<arr[min]){
            min = i;
        }
    }

    swap(arr[0],arr[min]);

    selectionSort(arr + 1,n-1);
}
int main(){

    int arr[] = {5,2,4,1,3};
    int n = 5;

    selectionSort(arr,5);

    for(int i =0;i<n;i++){
        cout << arr[i] << endl;
    }


}