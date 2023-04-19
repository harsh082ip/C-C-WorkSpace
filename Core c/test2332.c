#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
   	int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int f = 1;
    for(int j = 0; j < n; j++)
    {
        f *= arr[j];
    }
	printf("%d", f);
    return 0;
}
