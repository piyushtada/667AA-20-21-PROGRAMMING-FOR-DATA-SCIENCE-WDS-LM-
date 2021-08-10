#include <stdio.h>
#include <stdlib.h>

/*Exercise 3 (10 points). Write a C program that:
  1. Asks the user to input a number n greater than 50;
  2. Build a list of integers containing n elements, with randomly generated values between -200 and  800;
  3. Prints the content of the list
  4. Then, sorts the values in the list, in increasing order.
     No extra data structures can be used (i.e., do not store the values in an array to sort them);
  5. Prints the content of the sorted list.
*/

int main(void) {
  int n;
  printf("Insert a number greater than 50 pls.. \n");
  scanf("%d", &n);
  printf("%d \n", n);
  
  //build the list
  int a[n];
  int i;
  for(i = 0; i < n-1; i++){
    a[i] = rand()%800 - 200;
  }


  //print the list
  printf("Orignal list:\n");
  for(i=0; i < n; i++){
    printf("%d ", a[i]);
  }



  //selection sort
  int min;
  int j;
  int t;
  for(i = 0; i < n; i++){
    min = i;
    for(j = i + 1; j < n; j++){
      if(a[j] < a[min]){min = j;}
    }
    t = a[min];
    a[min] = a[i];
    a[i] = t;
  }
  
  

  //print the list
  printf("\nSorted list:\n");

  for(i=0; i < n; i++){
    printf("%d ", a[i]);
  }

  return 0;
}