#include <iostream>
using namespace std;

bool isFound(int arr[],int n,int target){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << "+" << arr[j] << "=" << target << endl;
                

            }
        }
    }
    return true;
    


}
int main()
{
    int arr[] = {2, 4, 3, 5, 6};
    int n = 5;
    int target = 9;

     if(isFound(arr,6,9)) {
        cout << "Yes";
     }
     else{
        cout <<"No";
     }



}