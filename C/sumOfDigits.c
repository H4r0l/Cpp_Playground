#include <stdio.h>


int main() {
	
    int n;
    scanf("%d", &n);
    char str[12];
    sprintf(str, "%d", n);
    int res;
    for(int i = 0;str[i] != '\0' ; i++){
        int val = str[i] - '0';
        res += val;
    }
    printf("%d", res);
    return 0;
}