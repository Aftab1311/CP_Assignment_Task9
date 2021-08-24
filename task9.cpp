#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int PerSquare(int A[], int i, int j)
{
    int mid, sum = 0;

    for (int m = i; m <= j; m++)
    {
        sum += A[m];
    }

    int low = 0, high = sum / 2;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (mid * mid == sum)
        {
            return mid;
        }

        else if (mid * mid > sum)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int A[] = {2, 19, 33, 48, 90, 100};

    int L , R;
    cout<<"Enter left position : ";
    cin>>L;
    cout<<"Enter right position : ";
    cin>>R;
    cout <<"The sum of element from position "<<L<<" to position "<<R<<" is : "<<PerSquare(A, L, R);
    return 0;
}