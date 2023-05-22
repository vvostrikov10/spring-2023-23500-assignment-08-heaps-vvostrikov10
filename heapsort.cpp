#include "heapsort.h"
//max heap makes sense here so that we don't need to reverse array at the end
void heapify_node(int *arr, int size, int node){
    if (node > size/2 - 1){
        return;
    }
    if (2 * node + 2 < size){  
        int child_1 = 2 * node + 1;
        int child_2 = 2 * node + 2;
        int larger_child;
        if (arr[child_1] > arr[child_2]){
            larger_child = child_1;
        }
        else{
            larger_child = child_2;
        }
        if (arr[larger_child] > arr[node]){
            int temp = arr[node];
            arr[node] = arr[larger_child];
            arr[larger_child] = temp;
            heapify_node(arr, size, larger_child);
        }
    }
    else {
        int child_1 = 2 * node + 1;
        if (arr[child_1] > arr[node]){
            int temp = arr[node];
            arr[node] = arr[child_1];
            arr[child_1] = temp;
            heapify_node(arr, size, child_1);
        }
    }
}

void heapify_new_array(int* arr, int size){
    int start = size / 2 - 1;//last non leaf
    for (int i = start; i >= 0; i--){
        heapify_node(arr, size, i);
    }

}

void delete_max(int *arr, int size){
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
    heapify_node(arr, size - 1, 0);//don't want the newly extracted element to bubble back up
}

void heapsort(int *arr, int size){
    heapify_new_array(arr, size);
    while (size > 1){
        delete_max(arr, size);
        size--;
    }
}