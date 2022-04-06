#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int *arr=new int[n];
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    while (n--) {
        cout << arr[n] << " ";
    }
    delete [] arr;
    return 0;
}

