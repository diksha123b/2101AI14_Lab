
#include <stdio.h>

void insertion_sort(int arr[], int n);
void selection_Sort(int arr[], int n);
void bubble_sort(int arr[], int n);
void quick_sort(int arr[], int first, int last);
void merge_sort(int arr[], int l, int r);
void arr_print(int arr[], int n);

int main(void)
{
    int opt;
    printf("Select the sort that you would like to see:"
          "\n1 = Insertion Sort"
          "\n2 = Selection Sort"
          "\n3 = Bubble Sort"
          "\n4 = Merge Sort"
          "\n5 = Quick Sort"
          "\n6 = exit"
          "\n\nChoice: ");
    scanf("%d", &opt);

    while (opt!=1 && opt!=2 && opt!=3 && opt!=4 && opt!=5 && opt!=6){
        printf("\nInvalid choice!! Choose again...\nChoice: ");
        scanf("%d", &opt);
    }

    if (opt==6){return 0;}

    int n;
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements (integer) of the array separated by spaces:\n");

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    switch (opt){
    case 1:
        insertion_sort(arr,n);
        arr_print(arr,n);
        break;
     default: printf("\nError");
    }
    return 0;
}
    return;
}