#include <stdio.h>
int iterativeBS(int array[], int start, int end, int element){
   while (start <= end){
      int middle = start + (end- start )/2;
      if (array[middle] == element)
         return middle+1;
      if (array[middle] < element)
         start = middle + 1;
      else
         end = middle - 1;
   }
   return -1;
}
int main(){
   
    int n, value, pos, arr[100];
    printf("Enter the total elements in the array  ");
    scanf("%d", &n);
 
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search  ");
    scanf("%d", &value);
 

    pos = iterativeBS(arr, 0, n-1, value);
   if(pos == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at position : %d",pos);
   }
   return 0;
}