#include<bits/stdc++.h>
using namespace std;
bool isSorted(int a[], int n) {
  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1])
      return false;
  }
  return true;
}