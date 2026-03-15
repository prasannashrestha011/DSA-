#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void traverse(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        traverse(root->left);
        traverse(root->right);
    }
}

void maxHeapify(int arr[], int n, int i)
{
    int largest = i; // assume root is largest
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than current largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If root is not the largest, swap and recurse
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        maxHeapify(arr, n, largest);
    }
}
void buildMaxHeap(int arr[], int n)
{
    // Last non-leaf node = (n/2 - 1)
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:  ");
    printArray(arr, n);

    buildMaxHeap(arr, n);
    printf("After Max Heap:  ");
    printArray(arr, n);
    // Output: 10 5 3 4 1
}
