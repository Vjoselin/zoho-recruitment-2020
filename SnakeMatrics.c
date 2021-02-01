#include<stdio.h>
void main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-i;j++)   //(2*n)-i  is number columns for each row
        {
            while(j<=n-i)            //print the spaces
            {
                printf(" ");
                break;
            }
            while(i%2==1)       //print the odd rows
            {
                k++;
                printf("%d ",k);
                break;
            }
            while ((!(j<=n-i))&&(!(i%2==1)))//print the even rows
            {
                printf("%d ",k);
                k--;             //decrement the values
            }
        }k+=n;                   //starting value for each row
        printf("\n");
    }
}
