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
    lb = 0;
    ub = A[n - 1];
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        int sum = 0;
        for(i = 0; i < n; i++){
            sum = sum + A[i] / m;
        }
        if(sum < k) ub = m;
        else lb = m;
    }
    
    printf("%d\n", lb);
  return 0;
}
