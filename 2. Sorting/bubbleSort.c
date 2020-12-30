
// Optimized bubble sort in C

#include <stdio.h>

void bubbleSort(int arrayay[], int size) {
    // Loop Comming from the back
  for (int step = 0; step < size - 1; ++step) {

    // Swapped keeps track of swapping
    int swapped = 0;

    // Run loops two times: one for walking throught the array
    // and the other for comparison
    for (int i = 0; i < size - step - 1; ++i) {

      // To sort in descending order, change > to < in this line.
      if (arrayay[i] > arrayay[i + 1]) {
        
        // Swap if greater is at the rear position
        int temp = arrayay[i];
        arrayay[i] = arrayay[i + 1];
        arrayay[i + 1] = temp;
        swapped = 1;
      }
    }

    // If there is not swapping in the last swap, then the array is already sorted.
    if (swapped == 0)
      break;
  }
}

// Function to print an array
void printarray(int arrayay[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arrayay[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printarray(data, size);
}