#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,min,max;
    float num[20], sum = 0.0, avg;
do
{

    printf("Enter the number of entries: ");
    scanf("%d", &n);

    if(n>=1)
    {

    for (i = 0; i < n; ++i) {
        printf("Enter a number for entry %d: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    min=max=num[0];
    for(i=1; i<n; i++)
    {
         if(min>num[i])
		  min=num[i];
		   if(max<num[i])
		    max=num[i];
    }
    avg = sum / n;

    printf("Min = %d",min);
    printf("\nMax = %d",max);
    printf("\nSum = %g",sum);
    printf("\nAverage = %.2f",avg);
    }

    else{
        printf("Please enter a positive integer !\n");
    }

} while( n<=0 );
    return 0;
}
