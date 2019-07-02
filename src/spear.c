#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    int max;
    max = A[0];
    for(i = 0; i < n; i++){
        if(A[i] >= max) max = A[i];
    }
    lb = 0;
    ub = max + 1;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        int sum = 0;
        for(i = 0; i < n; i++){
            sum += A[i] / m;
        }
        if(sum < k) ub = m;
        else lb = m;
    }
    
    printf("%d\n", lb);
  return 0;
}
