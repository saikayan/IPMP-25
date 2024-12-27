#include <iostream>
using namespace std;
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void Rotateeletoright(int arr[], int n, int k)
{
    Reverse(arr, 0, n - k - 1);
    Reverse(arr, n - k, n - 1);
    Reverse(arr, 0, n - 1);
}