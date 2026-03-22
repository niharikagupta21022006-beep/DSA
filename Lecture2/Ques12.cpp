#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    

    int count = 0;
    int sum = 0;

    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }

    int average = sum/n;
    for(int i = 0;i<n;i++){
        if(arr[i]>average){
            count++;
        }
    }

    cout << "count:" << count ;
    return 0;

}