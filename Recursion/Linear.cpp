#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key){

    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }

    else{
        bool remainingPart = linearSearch(arr + 1,n - 1,key);
        return remainingPart;
    }

    

}


int main(){
    int arr[] = {3,5,1,2,6};
    int n = 5;

    int key;
    cin >> key;

    if (linearSearch(arr,n,key)){
        cout << "Element is found." << endl;
    }

    else{
        cout << "Element is not found." << endl;
    }
}