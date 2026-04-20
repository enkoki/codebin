#include <stdio.h>

int main() {
    int n, arr[100], count[100] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        if(count[i] == -1) continue;

        int freq = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
                count[j] = -1;
            }
        }
        count[i] = freq;
    }

    printf("Element\tFrequency\n");
    for(int i = 0; i < n; i++) {
        if(count[i] != -1)
            printf("%d\t%d\n", arr[i], count[i]);
    }

    return 0;
}