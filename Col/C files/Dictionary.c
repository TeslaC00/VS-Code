#include <stdio.h>
#include <windows.h>
int main(){

    system("cls");
    char c[][10] = {"Apple", "Air", "Axe","Baby", "Bat", "Ball","Cat", "Cot", "Carrot"};
    char i;
    printf("Type characters\n");
    scanf("%c",&i);
    i = toupper(i);
    
    for(int j=0; j<sizeof(c)/sizeof(c[0]); j++){
        if(i==c[j][0]){
            printf("%s\t",c[j]);
        }
    }

    return 0;
}