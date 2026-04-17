#include <stdio.h>

int main(){
    
    int n, ratio;
    long long a, term; // 3 ko lagi 40 max
    printf("Enter the number of terms in the sequence: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Number of terms must be positive.\n");
        return 1;
    }

    printf("Enter the first term: ");
    scanf("%lld", &a);
    if(a == 0){
        printf("First term cannot be zero.\n");
        return 1;
    }

    printf("Enter the common ratio: ");
    scanf("%d", &ratio);
    if(ratio == 0 || ratio == 1 || ratio == -1){
        printf("Ratio cannot be 0, 1, or -1.\n");
        return 1;
    }

    term = a;

    for(int i = 1;i<=n;i++){
        printf("%lld ", term);
        term *= ratio;
    }
    printf("\n");
    return 0;
}