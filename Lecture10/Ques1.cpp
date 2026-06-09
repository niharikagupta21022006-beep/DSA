#include<iostream>
using namespace std;
int main(){

    // int num = 5;
    // cout << num << endl;
    // int*p = &num;

    // cout << "Address of num is " << *p << endl; 

    int num = 5;
    int a = num;
    cout << " a before " << num << endl;
    a++;
    cout << " a after " << num << endl;

    int *p = &num;
    cout << "before" << num << endl;
    (*p)++;
    cout << "after" << num << endl;

    // copying a pointer

    
    return 0;
}