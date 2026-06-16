#include<iostream>
using namespace std;

int getsum(int arr[],int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }

    int remainingPart = getsum(arr+1,n - 1);
    int sum = arr[0] + remainingPart;
    return sum;

}


int main(){
    int arr[] = {5,8,4,9,6};
    int n = 5;

    int sum = getsum(arr,n);

    cout << "Sum is :" << sum << endl;
}