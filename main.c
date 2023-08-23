
//  Bubble Sorting //
#include <stdio.h>
#define SIZE 11

int unsortedArray[SIZE] = {32,12,34,2,56,76,43,8,11,5,1};
int *arrayPtr = unsortedArray;
int sortedArray[10] = {};
int breakFlag = 0;

void bubbleSort(int *array, int size);

int main()
{

    puts("-Program Started-");
    puts("Bubble Sorting Program");
    printf("Unsorted Array = ");
    for(int i=0; i<SIZE; i++) {
        printf("%d ", *arrayPtr);
        arrayPtr++;
    }
    for (int i = 0; i < SIZE; ++i) {
        if(breakFlag == 9)
            break;
        puts("");
        bubbleSort(unsortedArray, SIZE);
    }

    return 0;
}

void bubbleSort(int *array, int size) {
    for (int i = 0; i < size - 1; ++i) {

        int *sortItem1 = array;
        array++;
        int *sortItem2 = array;

//        printf("sortItem1 = %d , sortItem2 = %d \n", *sortItem1, *sortItem2);
        if (*sortItem1 < *sortItem2 || *sortItem1 == *sortItem2) {
            sortItem2++;
            breakFlag++;
//            printf(" BreakFlag = %d", breakFlag);

        }
        else if (*sortItem1 > *sortItem2) {
            int holdItem = *sortItem2;
            *sortItem2 = *sortItem1;
            *sortItem1 = holdItem;
            sortItem1++;
            breakFlag = 0;

        }
    }
    int *arrayPtr1 = unsortedArray;
    for(int i=0; i<SIZE; i++) {
        printf("%d ", *arrayPtr1);
        arrayPtr1++;
    }


}
