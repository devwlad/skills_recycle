#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "search/search.h"
#include "sort/sort.h"
#include "struct/struct.h"

void printList(int list[], int size){
    int i;
    for (i = 0; i < size; i++){
        if (i == 0){
            printf("%d", list[i]);
        }
        else{
            printf(", %d", list[i]);
        }
    }
}

void genRandomList(int *list){
    int i;
    for (i  = 0; i < 100; i++){
        list[i] = (rand() % 99);
    }
}

void copyArray(int list1[], int *list2, int size){
    int i;
    for (i = 0; i < size; i++){
        list2[i] = list1[i];
    }
}

int main(){
    clock_t t;
    double time_taken;
    int valPos;
    int elem = 8;
    int list[10] = {0,1,2,3,4,5,6,7,8,9};
    int scList[100];
    int scList2[100];
    int listNoRep[10] = {9,8,7,6,5,4,3,2,1,0};

    srand(time(0));
    genRandomList(scList); // I'm a bit lazy - So I'm letting C generate my int array.
    copyArray(scList, scList2, 100);

    t = clock();
    printf("Linear Search pos: %d\n", linearSearch(elem, list, 10));
    t = clock() - t;
    printf("Linear search took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);

    t = clock();
    printf("Binary Search pos: %d\n", binarySearch(elem, 0, 9, list));
    t = clock() - t;
    printf("Binary search took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);

    t = clock();
    bubbleSort(100, scList2);
    t = clock() - t;
    printf("Bubble Sorted list:\n");
    printList(scList2, 100);
    puts("");
    printf("Bubble Sort took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);

    copyArray(scList, scList2, 100);

    t = clock();
    insertionSort(100, scList2);
    t = clock() - t;
    printf("Insertion Sorted list:\n");
    printList(scList2, 100);
    puts("");
    printf("Insertion Sort took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);

    copyArray(scList, scList2, 100);

    t = clock();
    selectionSort(100, scList2);
    t = clock() - t;
    printf("Selection Sorted list:\n");
    printList(scList2, 100);
    puts("");
    printf("Selection Sort took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);

    copyArray(scList, scList2, 100);

    t = clock();
    quickSort(scList2, 0, 99);
    t = clock() - t;
    printf("Quick Sorted list:\n");
    printList(scList2, 100);
    puts("");
    printf("Quick Sort took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);

//    t = clock();
//    mergeSort(100, scList2);
//    t = clock() - t;
//    printf("Merge Sorted list:\n");
//    printList(scList2, 100);
//    puts("");
//    printf("Merge Sort took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);
//
//    t = clock();
//    heapSort(100, scList2);
//    t = clock() - t;
//    printf("Heap Sorted list:\n");
//    printList(scList2, 100);
//    puts("");
//    printf("Heap Sort took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);
//
//    t = clock();
//    countingSort(100, scList2);
//    t = clock() - t;
//    printf("Selection Sorted list:\n");
//    printList(scList2, 100);
//    puts("");
//    printf("Selection Sort took %f milliseconds to execute\n", ((double)t)/CLOCKS_PER_SEC * 1000);


    return 0;
}