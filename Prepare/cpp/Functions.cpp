#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int max1, max2, max;
    (a<b)?max1=b:max1=a;
    (c<d)?max2=d:max1=c;
    (max1<max2)?max=max2:max=max1;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
