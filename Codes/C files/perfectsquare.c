#include <stdio.h>

int main(){

    int n,i=1;
    printf("Type the number:\n");
    scanf("%d",&n);

    while(n!=i*i){
        if(i<n/2){
            i++;
        }
        else{
            printf("%d is not a perfect square\n",n);
            break;
        }
    }
    (n==i*i)?printf("%d is a perfect square of %d\n",n,i):printf("");

    return 0;
}