#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct book{
    int ID;
    char title[25];
    char author[25];
    int stock;
    int flag;
}b[15];

void addBook(void);
void listall(void);
void bookinfo(void);
void totaltitle(void);
void totalbooks(void);
void issue(void);
void give(void);

int main(){

    int choice;
    while(1){
        getch();
        system("cls");
        printf("Library Management System\n\n");
        printf("1.Add a book\n2.List of books\n3.Book information\n4.Total books of a title\n");
        printf("5.Total books in Library\n6.Issue a book\n7.Return book\n8.Exit");
        printf("\nEnter you choice: ");
        scanf(" %d",&choice);
        switch(choice){
            case 1: addBook(); break;
            case 2: listall(); break;
            case 3: bookinfo(); break;
            case 4: totaltitle(); break;
            case 5: totalbooks(); break;
            case 6: issue(); break;
            case 7: give(); break;
            case 8: exit(0); break;
            default: printf("\nGive valid input..."); getch(); break;
        }
    }

    return 0;
}

void addBook(){
    system("cls");
    int i=0;
    printf("Give the book info:\n");
    printf("Book ID: ");
    scanf(" %d",&b[i].ID);
    printf("Give the book Title: ");
    scanf(" %s",b[i].title);
    printf("Give the book's Author name: ");
    scanf(" %s",b[i].author);
    printf("Give the book's stock: ");
    scanf(" %d",&b[i].stock);
    printf("Give the number of books issued: ");
    scanf(" %d",&b[i].flag);
    i++;
    printf("Book added succesfully!");
}

void listall(){
    system("cls");
    printf("Book ID\t\tBook Title\t\tAuthor\t\tStock\n\n");
    for(int i=0; i<15; i++){
        if(b[i].ID==0){break;}
        printf("%d\t\t%s\t\t\t%s\t\t%d\n",b[i].ID,b[i].title,b[i].author,b[i].stock);
    }
}

void bookinfo(){
    system("cls");
    int id,count=0;
    printf("Type the Book ID: ");
    scanf(" %d",&id);
    for(int i=0; i<15; i++){
        if(id==b[i].ID){
            printf("Found book\n");
            printf("Book ID: %d\n",b[i].ID);
            printf("Book Title: %s\n",b[i].title);
            printf("Book Author: %s\n",b[i].author);
            printf("Book in Stock: %d\n",b[i].stock);
            count++;
            break;
        }
    }
    if(count==0){
        printf("Book not found");
    }
}

void totaltitle(){
    int total=0;
    char temp[25];
    system("cls");
    printf("Type the Title of the book: ");
    scanf(" %s",temp);
    for(int i=0; i<15; i++){
        if(strcmp(temp,b[i].title)==0){
            total+=b[i].stock;
        }
    }
    printf("Total stock of '%s' is %d",temp,total);
}

void totalbooks(){
    system("cls");
    int total=0;
    for(int i=0; i<15; i++){
        if(b[i].ID==0){break;}
        total+=b[i].stock;
    }
    printf("Total books in Library are %d",total);
}

void issue(){
    system("cls");
    int temp,count=0;
    printf("Give the book ID you want to issue: ");
    scanf(" %d",&temp);
    for(int i=0; i<15; i++){
        if(temp==b[i].ID){
            b[i].flag++;
            b[i].stock--; count++;
            printf("Book issued succesfully!");
            break;
        }
    }
    if(count==0){
        printf("Book not found");
    }
}

void give(){
    system("cls");
    int temp,count=0;
    printf("Give the book ID you want to return: ");
    scanf(" %d",&temp);
    for(int i=0; i<15; i++){
        if(temp==b[i].ID){
            b[i].flag--;
            b[i].stock++; count++;
            printf("Book returned succesfully!");
            break;
        }
    }
    if(count==0){
        printf("Book not found");
    }
}