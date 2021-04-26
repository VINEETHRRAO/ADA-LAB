

#include <stdio.h>
int recursiveBS(int array[], int start, int end, int element){
   if (end >= start){
      int middle = start + (end - start )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] > element)
         return recursiveBS(array, start, middle-1, element);
      return recursiveBS(array, middle+1, end, element);
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
 
 
   pos = recursiveBS(arr, 0, n-1, value);
   if(pos == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at position : %d",pos+1);
   }
   return 0;
}