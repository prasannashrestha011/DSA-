#include <stdio.h>
#define TABLE_SIZE 5
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

    while (hashTable[idx] != -1)
    {
        idx = (idx + 1) % TABLE_SIZE;
        if (idx == startIdx)
        {
            printf("\nhash table is full, when inserting [%d:%d]", idx, key);
            return;
        }
    }
    hashTable[idx] = key;
    printf("\n [%d:%d] inserted into the table", idx, key);
}
int main()
{
    initTable();
    for (int i = 1; i <= TABLE_SIZE; i++)
    {
        insert(i);
    }
    insert(16);
    return 0;
}