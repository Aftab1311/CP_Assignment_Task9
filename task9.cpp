/* Q.1 Check if the sum of a subarray within a given range is a perfect square or not 
Given an array arr[] of size N and an array range[], the task is to check if the sum of the subarray {range[0],  .. , range[1]} is a perfect square or not. If the sum is a perfect square, then print the square root of the sum.  Otherwise, print -1. 
Input: arr[] = {2, 19, 33, 48, 90, 100}, range = [1, 3] 
Output: 10 
Explanation: The sum of element from position 1 to position 3 is 19 + 33 + 48 = 100, which is a perfect  square of 10. 
Input: arr[] = {13, 15, 30, 55, 87}, range = [0, 1] 
Output: -1 
*/

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
