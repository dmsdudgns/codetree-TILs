#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[100]; int count_arr[10] = {0,};

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
        count_arr[arr[i]]++;

    for(int i = 1; i<10; i++)
        printf("%d\n", count_arr[i]);

    return 0;
}