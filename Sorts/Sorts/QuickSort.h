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
T partition (T * arr, int left, int right, T pivot){
    
    // while the left is either less than or equal to the right we continue to iterate.
    while(left <= right){
        
        // while we're iterating from the left and the value of arr[left] is not greater than the pivot we continue to iterate.
        while(arr[left] < pivot){
            left++;
        }
        
        // while we iterate to the middle from the right and the value of arr[right] is greater than the pivot we continue to iterate.
        while(arr[right] > pivot){
            right++;
        }
        
        // if one of the loops above is broken we know to swap the current left and right. Then, we continue to iterate through arr.
        if (left<=right){
            swap(left,right);
            left++;
            right++;
        }
    }
    return left;
}

template <class T>
    
    void quickSort(T * arr, int left, int right){
        // if the left side is greater than or equal to the right side that means there is nothing to do.
        if (left >= right)
            return;
        
        // we set the pivot to middle. (WILL UPDATE TO BE RANDOMLY GENERATED)
        int pivot = arr[left+right/2];
        
        // our index will be the dividing point between the left side and the right side.
        int index = partition(arr, left, right, pivot);
        
        // we'll call quickSort() on the  left side of arr with the index being the end of the end of its half (rightmost part).
        quickSort(arr, left, index);
        // then we'll call quicksort() on the right side of arr with the index being the the begining of its half (leftmost part).
        quickSort(arr, index, right);
    }

#endif /* QuickSort_h */
