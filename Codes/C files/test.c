#include<stdio.h>
int main(){

    FILE *fp;
    fp=fopen("file.txt","r");
    char str1[20],str2[20],ch;
    fgets(str2,20,fp);
    printf("fgets: %s",str2);
    ch=fgetc(fp);
    printf("fgetc: %c\n",ch);
    fscanf(fp,"%s",str1);    
    printf("fscanf: %s\n",str1);

    return 0;
}