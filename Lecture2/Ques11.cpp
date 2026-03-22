#include<iostream>
using namespace std;

int main(){
    int a[] = {1,4,3};
    int b[] = {1,2,3};

    bool isEqual = true;

    for(int i = 0;i<3;i++){
            if(a[i] != b[i]){
                isEqual = false;
                break;
            }
        
    }

    cout << (isEqual ? "Equal" : "Not Equal");

    return 0;
}


