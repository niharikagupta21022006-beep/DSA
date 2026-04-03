#include<iostream>
using namespace std;
int main() {
    int a[] = {1,2,3};
    int b[] = {2,3,4};

    int n = 3;
    int m = 3;
    for(int i =0;i<n;i++){
        cout << a[i] <<" ";
    }

    for(int i = 0;i<m;i++){
        bool found = false;

        for(int j =0;j<n;j++){
            if(a[j] == b[i]){
                found = true;
                break;
            }
        }

        if(!found){
            cout << b[i] << " ";
        }
    }

    return 0;
}


