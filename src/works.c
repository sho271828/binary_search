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
    int sum = 0;
    for(i = 0; i < n; i++){
        sum += A[i];
    }
    lb = 0;
    ub = sum;
    while(ub - lb > 1){
        int B[100000] = 0;
        for(i = 0; i < n - n / k + 1; i++){
            B[i] += A[i]
        if(n / k = 1) ub = m;
        else lb = m;
    }
    
    
    printf("%d\n", ub);
  return 0;
}
