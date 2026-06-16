#include<iostream>
using namespace std;
int main(){
   int arr[]  = {1,2,2,3,1};
   int n = 5;

   for(int i = 0;i<n;i++){
    int count = 1;
    for(int j = i+1;j<n;j++){
        if(arr[i] == arr[j]){
            int flag = 0;
            count++;
        }
    }

    int flag = 0;
    for(int k = 0;k<i;k++){
        if (arr[i] == arr[k]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << arr[i] << "-->" << count << endl;
    }
   }

   return 0;

   
}