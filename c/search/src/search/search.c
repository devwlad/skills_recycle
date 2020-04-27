#include "search.h"

int linearSearch(int elem, int *list, int listSize){
    int i;
    for (i = 0; i < listSize; i++){
        if (list[i] == elem){
            return i;
        }
    }
    return -1;
}

int binarySearch(int elem, int first, int last, int *list){
    int left = first, right = last, pivot = (last + first)/2;
    if (list[left] == elem){
        return left;
    }
    if (list[right] == elem){
        return right;
    }
    if (list[pivot] == elem){
        return pivot;
    }
    else {
        if (elem > pivot){
            binarySearch(elem, pivot+1, right, list);
        }
        else {
            binarySearch(elem, left, pivot - 1, list);
        }
    }



}