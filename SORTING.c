
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
         case 2:
        selection_Sort(arr,n);
        arr_print(arr,n);
        break;
        case 3:
        bubble_sort(arr,n);
        arr_print(arr,n);
        break;
    
    default: printf("\nError");
    }
    return 0;
}

void insertion_sort(int arr[], int n)
{
    int key, j;
    for (int i=1; i<n; i++) {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    return;
}
 void selection_Sort(int arr[], int n)
{
    int i, j, min;
    for (i=0; i<n-1; i++){
        min = i;
        for (j=i+1; j<n; j++){
          if (arr[j] < arr[min]){min=j;}
        }

        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    return;
}
void bubble_sort(int arr[], int n)
{
    for (int i=0; i<n-1; i++){
        for (int j = 0; j<n-i-1; j++){
            if (arr[j]>arr[j + 1]){
                int temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j+1]=temp;
            }
        }
    }
    return;
}
