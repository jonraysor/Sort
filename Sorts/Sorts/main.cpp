//
//  main.cpp
//  Sorts
//
//  Created by Jonathan Raysor on 4/16/18.
//  Copyright © 2018 Jonathan Raysor. All rights reserved.
//

#include <iostream>
#include "QuickSort.h"

int main(int argc, const char * argv[]) {
   
    int numbers[5];
    
    for (int i =0; i < 5; i ++){
        cout << "Enter a random number" << endl;
        cin >> numbers[i];
    }
    
    quickSort(numbers, numbers[0], numbers[4]);
    
    for (int i=0; i <5; i++){
        cout << numbers[i] << endl;
    }
}
