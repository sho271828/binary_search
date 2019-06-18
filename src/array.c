#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
    lb = -1;
    ub = n;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        if(A[m] >= k) ub = m;
        else lb = m;
    }



  return ub;
}
