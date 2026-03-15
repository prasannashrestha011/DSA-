
#include <stdio.h>
#define TABLE_SIZE 10
int hashTable[TABLE_SIZE];

void initTable()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hashTable[i] = -1;
    }
}

int hash(int key)
{
    return key % TABLE_SIZE;
}

void insert(int key)
{
    int idx = hash(key);
    int startIdx = idx;
    int i = 0;

    while (i < TABLE_SIZE)
    {
        idx = (idx + i * i) % TABLE_SIZE;
        if (hashTable[idx] == -1)
        {
            hashTable[idx] = key;
            printf("\n [%d:%d] inserted into the table", idx, key);
            return;
        }
        else
        {

            i++;
        }
    }
}
int main()
{
    initTable();
    int arr[] = {8, 3, 13, 6, 4, 10};
    for (int i = 0; i < 6; i++)
    {
        insert(arr[i]);
    }
    insert(16);
    return 0;
}