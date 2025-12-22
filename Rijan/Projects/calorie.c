/*
Advent of Code – Calorie Counting (Inspired)

Problem:

Santa’s elves are preparing for Christmas. Each elf carries some food items, 
and each item has a calorie value. Different elves can carry different numbers of items.

--- Part One ---
Find the total calories carried by each elf and print them out.
Example:
Input:
3
1000 2000 
500 600 700 
1200 800 

Output:
Elf 1: 3000
Elf 2: 1800
Elf 3: 2000

--- Part Two ---
Find the elf carrying the most total calories and the sum of calories of the top three elves.
Using the example above:
- Elf totals: 3000, 1800, 2000
- Most calories = 3000
- Sum of top three = 3000 + 2000 + 1800 = 6800
*/

#include <stdio.h>
#include <stdlib.h>
struct Elf{
    int *calorie;
    int count;
};

int main(){
    int n;
    printf("How many elves are there: ");
    scanf("%d", &n);
    struct Elf elves[n];

    for(int i = 0; i<n; i++){
        elves[i].calorie = 0;
        elves[i].count = 0;
        printf("Enter calories for Elf %d (-1 to exit):\n",i+1);

        while(1){
            int input;
            scanf("%d", &input);
            if(input == -1) break;
            elves[i].calorie = realloc(elves[i].calorie,sizeof(int) * (elves[i].count + 1));

            elves[i].calorie[elves[i].count] = input;
            elves[i].count++;
        }
    }
    printf("\n");
    int total;
    int totals[n];
    for (int i = 0; i < n; i++){
        total = 0;
        printf("Elf %d: ", i + 1);
        for (int j = 0; j < elves[i].count; j++) {
            total += elves[i].calorie[j];
        }
        printf("%d", total);
        totals[i] = total;
        printf("\n");
        free(elves[i].calorie);
    }

    int temp;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(totals[j]<totals[j+1]){
                temp = totals[j];
                totals[j] = totals[j+1];
                totals[j+1] = temp;
            }
        }
    }

    printf("\nThe most calorie cosumed is %d", totals[0]);
    int three = 0;
    for(int i = 0; i<3; i++){
        three += totals[i];
    }
    printf("\nThe sum of three most consumed calorie is %d.", three); 
    return 0;
}
