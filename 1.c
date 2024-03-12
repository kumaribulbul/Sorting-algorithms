#include<stdio.h>
int main() {
    int array[100], n, i, j, position, temp;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the numbers", n);

    for(i=0; i<n; i++)
    scanf("%d", &array[i]);

    for(i=0; i<(n-1); i++)
    {
        position = i;
        for(j=i+1; j<n; j++){
            if(array[position]>array[j])
            position = j;
        }
        if(position != i){
            temp = array[i];
            array[i] = array[position];
            array[position] = temp;
        }
    }
    printf("sorting in ascending order:");
    for(i=0; i<n; i++)
    printf("%d\n", array[i]);
    return 0;
}
