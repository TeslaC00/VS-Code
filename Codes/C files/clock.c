#include<stdio.h>
#include<windows.h>
#include<time.h>
int main(){
    
    while(1){
        time_t n = time(0);//time(&n) == n=time(0)
        struct tm *lt = localtime(&n);
        //printf("%s",asctime(lt));
        printf("Clock %02d:%02d:%02d\n",lt->tm_hour,lt->tm_min,lt->tm_sec);
        Sleep(1000);
        system("cls");
    }

    return 0;
}