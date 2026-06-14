#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,8,7,2,5};
    int n = 5;
    

    for(int i = 0;i<n;i++){
        int flag = 0;
        for(int j = 0;j<i;j++){
            if(arr[i] == arr[j]){
              flag = 1;
              break;  
            
            }
        }

        if(flag == 0){
            cout << arr[i] << endl;
        }
    }

    


}