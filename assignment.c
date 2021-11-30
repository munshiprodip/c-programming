#include <stdio.h>
void sumOf2dArrayElementsUsingPointers(int arr[4][4]);
void printMaxAndMinNumberWithIndex(int arr[4][4]);
void printQuantityOfOddAndEvenNumbers(int arr[4][4]);
void print2dArrayReverse(int arr[4][4]);

void main() {
    int arrayOfArrays[4][4] = { {91,73,56,39}, {98,37,54,71}, {32,15,58,99}, {69,27,45,63} };
    
    // Print the sum of all elements in the array using pointers
    sumOf2dArrayElementsUsingPointers(arrayOfArrays);

    // Print the maximum & minimum number in the array with its index
    printMaxAndMinNumberWithIndex(arrayOfArrays);

    // Print the quantity of Odd & even numbers in the array
    printQuantityOfOddAndEvenNumbers(arrayOfArrays);

    // Print the array in reverse order
    print2dArrayReverse(arrayOfArrays);
}

// Print the sum of all elements in the array using pointers
void sumOf2dArrayElementsUsingPointers(int arr[4][4]){
    int *p, sum=0;
    for(p=&arr[0][0]; p<= (&arr[4-1][4-1]); p++)
            sum+=*p;
    printf("Sum of all elements in the array is = %d \n", sum);
}

// Print the maximum & minimum number in the array with its index
void printMaxAndMinNumberWithIndex(int arr[4][4]){
    int i, j, max=arr[0][0], min=arr[0][0], maxIndexRow, maxIndexColumn, minIndexRow, minIndexColumn;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            if(arr[i][j]>max){
                max=arr[i][j];
                maxIndexRow = i;
                maxIndexColumn = j;
            }else if(arr[i][j]<min){
                min=arr[i][j];
                minIndexRow = i;
                minIndexColumn = j;
            }

    printf("The maximum number is = %d, and index is = arrayOfArrays[%d][%d] \n",max, maxIndexRow, maxIndexColumn);
    printf("The minimum number is = %d, and index is = arrayOfArrays[%d][%d] \n",min, minIndexRow, minIndexColumn);
}

// Print the quantity of Odd & even numbers in the array
void printQuantityOfOddAndEvenNumbers(int arr[4][4]){
    int i, j, totalOddNums=0, totalEvenNums=0, oddCounter=0, evenCounter=0;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            if(arr[i][j]%2==0)
                evenCounter++;
            else
                oddCounter++;    
    printf("Total quantity of Odd number is = %d, and Even is = %d \n",oddCounter, evenCounter);
}

// print 2d array reverse
void print2dArrayReverse(int arr[4][4]){
    int i, j;
    printf("Reverse array: \n");
    for(i=3; i>=0; i--){
        for(j=3; j>=0; j--)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}
