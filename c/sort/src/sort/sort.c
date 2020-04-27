#include <time.h>
#include <stdlib.h>
#include "sort.h"

void bubbleSort(int listSize, int *list){
    int i, j, aux;
    for (i = 0; i < listSize; i++){
        for(j = 0; j < listSize - i - 1; j++){
            if (list[j] > list[j + 1]){
                aux = list[j + 1];
                list[j + 1] = list[j];
                list[j] = aux;
            }
        }
    }
}

void insertionSort(int listSize, int *list){
    int i, j, aux;
    for (i = 1; i < listSize; i++){
        j = i;
        while(j > 0 && list[j - 1] > list[j]){
            aux = list[j];
            list[j] = list[j - 1];
            list[j - 1] = aux;
            j--;
        }
    }
}
/*

*/


void selectionSort(int listSize, int *list){
    int i, j, aux;
    int minValue, minIndex;

    for(i = 0; i < listSize; i++){
        minValue = list[i];
        minIndex = i;

        for (j = minIndex + 1; j < listSize; j++){
            if (list[j] < minValue){
                minIndex = j;
                minValue = list[j];
            }
        }
        aux = list[i];
        list[i] = list[minIndex];
        list[minIndex] = aux;
    }
}

/*
    QuickSort Methods
*/

void swap(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int partition(int list[], int low, int high){
    int pivot = list[high];
    int i = (low - 1);
    int j = high;

    for (;;){
        while(list[++i] < pivot);
        while(list[--j] > pivot);

        if (i >= j){
            break;
        }
        swap(&list[i], &list[j]);
    }
    swap(&list[i + 1], &list[high]);
    return (i);
}

void quickSort(int list[], int low, int high){
    if (low < high){
        int q;
        q = partition(list, low, high);
        quickSort(list, low, q - 1);
        quickSort(list, q + 1, high);
    }
}

/*
  ----------------------------
*/

void mergeSort(int listSize, int *list){

}

void heapSort(int listSize, int *list){

}

void countingSort(int listSize, int *list){

}