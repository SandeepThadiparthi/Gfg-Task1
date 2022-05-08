// Write a program that asks for an index and a number. Then it includes the number at the indicated index of the array = {1,2,3,4,5,6} and moves a position forward (from u to u+1) each element after the selected index.
#include <stdio.h>
void insert(int arr[6], int ele, int loc)
{
    for (int i = 6 - 1; i >= loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc] = ele;
    printf("The elements in the array are the updation are: ");
    for (int i = 0; i <= 6; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int n = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int ele, loc;
    printf("The elements of the array are: \n");
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    printf("Enter the element to insert: ");
    scanf("%d", &ele);
    printf("\nThe location to insert the element: ");
    scanf("%d", &loc);
    insert(arr, ele, loc);
    return 0;
}
