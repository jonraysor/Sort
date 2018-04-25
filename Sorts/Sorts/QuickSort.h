//
//  QuickSort.h
//  Sorts
//
//  Created by Jonathan Raysor on 4/25/18.
//  Copyright © 2018 Jonathan Raysor. All rights reserved.
//

#ifndef QuickSort_h
#define QuickSort_h
using namespace std;

template <class T>
void swap(T* a, T* b){
    T t = *a;
    *a = *b;
    *b = t;
}

template <class T>
int partition(T *arr, int left, int right, T pivot){
    
    while (left <= right){
        
        while(arr[left] < pivot){
            left++;
        }
        
        while(arr[right] > pivot){
            right--;
        }
        
        if (left <= right){
            swap(arr+left, arr+right);
            left++;
            right--;
        }
        
    }
    return left;
}

template <class T>
void quickSort(T *arr, int left, int right){
    
    if(left < right){
        T pivot = arr[(left+right)/2];
        
        int index = partition(arr, left, right, pivot);
        
        quickSort(arr,left, index-1);
        quickSort(arr, index, right);
    }
}

#endif /* QuickSort_h */
