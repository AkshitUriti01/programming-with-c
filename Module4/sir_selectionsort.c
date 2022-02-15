//Selection sort 
#include<stdio.h>
int main()
{
    int a[10],i,j,n,min,temp;
    printf("Enter the size:");
    scanf("%d", &n);
    printf("Enter the random elements into array:");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        
    }
    //Selection sort
    min=i;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=a[j];
            }
        }

        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    printf("Elemets after sorting is: ");
    for (int i=0; i<n; i++) {
        printf("%d", a[n]);
    }


    return 0;
}