#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n){
    int key, j;
  
    for (int i = 1; i <= n-1; i++)//for passes
    {
        key = A[i];
        j = i-1;
   
        while(j>=0 && A[j] > key){//each pass
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    
    int A[] = {11, 54, 69, 7, 43, 9};
    int n = 6;
    printArray(A, n);//before
    insertionSort(A, n);
    printArray(A, n);//after
    return 0;
}