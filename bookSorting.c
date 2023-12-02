#include <stdio.h>
#include <string.h>
union Library {
int accession_number;
char title[100];
char author_name[100];
float price;
int flag;
};
int main() {
union Library book;
int an,f;
char t[100],a[100];
float p;
printf("Enter Accession Number: ");
scanf("%d", &book.accession_number);
an = book.accession_number;
printf("Enter Title of the Book: ");
scanf("%s", book.title);
strcpy(t,book.title);
printf("Enter Author Name: ");
scanf("%s", book.author_name);
strcpy(a,book.author_name);
printf("Enter Price of the Book: ");
scanf("%f", &book.price);
p = book.price;
printf("Is the Book Issued? (1 for Yes, 0 for No): ");
scanf("%d", &book.flag);

DEPSTAR(CSE) 119 |P a g e
if(book.flag==1){
printf("book 1 issued\n");}
else if(book.flag==0)
printf("book 1 is not issued\n");
else
printf("invalid input\n");
f = book.flag;
printf("\nBook Information:\n");
printf("Accession Number: %d\n", an);
printf("Title: %s\n", t);
printf("Author: %s\n", a);
printf("Price: %.2f\n", p);
printf("\nNAME:-HITARTH SHERATHIA\nID NO:-23DCS122");
return 0;
}