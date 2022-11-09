/*
The first line contains a single integer, n.
The next line contains 3 space-separated integers, a,b and c.
s(4) = s(3)+s(2)+s(1)
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int sum=0;
  int *arr;
    arr = (int*)malloc(n * sizeof(int));
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    for(int i=3;i<n;i++)
    {
        arr[i] = arr[i-3]+arr[i-2] + arr[i-1]; 
    }
    return arr[n-1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}