/*Write a program to merge two arrays removing the duplicate elements*/
#include <stdio.h>
#include <stdlib.h>

void merge_array(int arr1[], int num1, int arr2[], int num2);

int main(void){

    int first_arr[100];
    int second_arr[100];
    int num1, num2;

    printf("Enter the length of array 1: ");
    scanf("%d", &num1);
    printf("Enter the elements of the array: ");
    for(int i = 0; i < num1; i++){
        // scan the first array of elements
        scanf("%d", &first_arr[i]);
    }
    
    printf("Enter the length of the array 2: ");
    scanf("%d", &num2);
    printf("Enter the elements of the array: ");
    for(int i = 0; i < num2; i++){
        // scan the second array of elements
        scanf("%d", &second_arr[i]);
    }
    printf("Output array: ");
    merge_array(first_arr, num1, second_arr, num2);
    return 0;
}

void merge_array(int arr1[], int num1, int arr2[], int num2){

    int arr3[200];
    int i, j, k; // k is the count
    
    for(i = 0, j = 0, k = 0; (i < num1) && (j < num2); ){
        // check if any elements in arr1 are in arr2
        if(arr1[i] == arr2[j]){
            
            arr3[k] = arr2[j]; // remove the duplicate here?
            j++;
            k++;
        }
        else{

            arr3[k] = arr1[i]; // copy elements to arr1
            i++;
            k++;
        }   
    }
    //output the array
    for(i = 0; i < k; i++){
        printf("%d ", arr3[i]);
    }
}