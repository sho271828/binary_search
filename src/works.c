#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int i;
    int need = 1;
    int sum = 0;
    for(i = 0; i < n; i++){
        if(A[i] > m){
            return 0;
        }
        sum += A[i];
        if(sum > m){
            sum = 0;
            i--;
            need++;
        }
    }
    return need <= k;
}


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = 1000000001;
    while(ub - lb > 1){
        int m =(lb + ub) / 2;
        if(p(m)){
        ub = m;
    }
        else {
            lb = m;
        }
    }
    
    
    printf("%d\n", ub);
  return 0;
}

