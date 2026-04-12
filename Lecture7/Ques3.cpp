#include<iostream>
using namespace std;
int main(){
    int a[100];
    int b[100];
    int result[200];
    int n,m;

    cout << "Enter size of first array:";
    cin >> n;
    cout <<"Enter elements:";
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    cout << "Enter size of second array :";
    cin >> m;
    cout << "Enter elements:";
    for(int i = 0;i<m;i++){
        cin >> b[i];
    }

    int i = n-1;
    int j = m-1;
    int k = 0;
    int carry = 0;

    while(i>=0 || j>=0 || carry){
        int sum = carry;
        if(i>=0) {
            sum += a[i];
            i--;
        }

        if(j>=0){
            sum +=b[j];
            j--;
        }

        result[k] = sum % 10;
        carry = sum / 10;
        k++;
    }

    cout << "Result :";
    for(int x = k-1;x>=0;x--){
        cout << result[x] << " ";
    }

    return 0;
}