#include <stdio.h>

int main(void) {
//Buying a Book
char name[10];
float price[10];
int pages[10];
int i,n;
printf("Enter the quantity:");
scanf("%d",&n);
//Store the values:
for(i=0;i<n;i++)
{
printf("Enter the name:");
scanf("%s",name);
printf("Enter the price:");
scanf("%f",&price[i]);
printf("Enter the pages:");
scanf("%d",&pages[i]);
}

// printing the values:
for (i=0;i<n;i++)
{
printf("\nName:%s\nPrice:%f\nPages:%d\n",name,price[i],pages[i]);

}
}