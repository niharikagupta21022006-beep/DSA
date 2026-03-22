#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,5,1,2,7,4};
    int n = 6;

    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }

        else if(arr[i] <min){
            min = arr[i];
        }

    }

    cout << "Difference between largest and smallest is :" <<max-min ;
    return 0;
}
