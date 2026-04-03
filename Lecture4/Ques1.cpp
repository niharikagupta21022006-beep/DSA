#include <iostream>
using namespace std;

int squareRoot(int x)
{
    int s = 0;
    int e = x;
    int ans = 0;

    int mid = s + (e - s) / 2;

    if (x == 1 && x == 0)
    {
        return x;
    }

    while (s <= e)
    {
        if (mid <= x / mid)
        {
            ans = mid;
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }

    return ans;
}

double morePrecision(int x,int precision,int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i = 0;i<precision;i++){
        factor = factor/10;
        for(double j = ans;j*j<x;j = j + factor){
            ans = j;
        }
    }

    return ans;

}
int main()
{
    int x = 789;
    int tempSol =  squareRoot(x);
    cout << "Answer is : " << morePrecision(x,3,tempSol) << endl;
    return 0;
}