//AIM : WAP to print pascal's triangle
#include <stdio.h>

int main(){

    int num,n=1;
    printf("Type the number of rows: ");
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        for(int j=1; j<=num-i; j++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            if(i==0 || j==0){
                printf("%d ",n=1);
            }
            else{
                n=(i-j+1)*n/j;
                printf("%d ",n);
            }
        }
        printf("\n");
    }

    return 0;
}