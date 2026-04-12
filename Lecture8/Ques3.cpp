#include<iostream>
using namespace std;
int main(){
    char s[100];
    cout << "Enter the string :";
    cin.getline(s,100);

    int n = 0;
    while(s[n] != '\0'){
        n++;
    }

    int start = 0;
    int end = n - 1;
    while(start < end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }

    start = 0;
    for(int i = 0;i<n;i++){
        if((s[i] == ' ') ||(s[i] == '\0')){
            int left = start;
            int right  = i-1;
            while(left < right){
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
            start = i + 1;
        }
    }

    cout  << "Output : " << s;
}