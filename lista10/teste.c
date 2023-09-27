#include <stdio.h>
#include <time.h>

int countDistinct(int a[], int n)      //Function Definition
{
   int i, j, count = 1;
   //Traverse the array
   for (i = 1; i < n; i++)      //hold an array element
   {
      for (j = 0; j < i; j++)   
      {
         if (a[i] == a[j])    //Check for duplicate elements
         {
            break;             //If duplicate elements found then break
         }
      }
      if (i == j)
      {
         count++;     //increment the number of distinct elements
      }
   }
   return count;      //Return the number of distinct elements
}
int main()
{
    int n;       //Declare array size
    scanf("%d",&n);    //Initialize the array size

    int a[n];   //Array Declaration
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);   //Initialize the array elements

    clock_t start, end;
    double execution_time;
    start = clock();
    printf("%d\n",countDistinct(a,n));   //Print the number of distinct elements
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("Time taken to execute program: %f\n", execution_time);
    return 0;
}
