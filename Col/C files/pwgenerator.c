#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){

    system("cls");
    int i,n,count = 0;
    srand(time(0));
    char c[]={'A','a','1','B','b','2','C','c','3','D','d','4'};
    printf("Type n:\t");
    scanf("%d",&n);
    while(count<n){
        i = (rand() % sizeof(c));
        printf("%c",c[i]);
        count++;
    }
    
    return 0;
}