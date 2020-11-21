/* Submitted By :
Aryan Garg
19124018
IT(G-1)
*/

//Program For The Implementation Of

#include <stdio.h>
#include<stdlib.h>
#define SIZE 10//taking the size of the array to 10

int hash(int key)
{
    return key%SIZE;//return the place that where should be the key is placed initially
}

int probe(int H[],int key)//probing the element in the hash table
{
    int index=hash(key);
    int i=0;
    while(H[(index+i)%SIZE]!=0)
        i++;
    return (index+i)%SIZE;//if it can't be placed inside that place so i is increased from 0 and incremented
}

void Insert(int H[],int key)//insert in the hash table
{
    int index=hash(key);
    if(H[index]!=0)
        index=probe(H,key);
    H[index]=key;
}

int Search(int H[],int key)//searching inside the hash table
{
    int index=hash(key);
    int i=0;
    while(H[(index+i)%SIZE]!=key)
        i++;
    return (index+i)%SIZE;
}

int main()
{
    int HT[10]= {0};//hash table is initialized to 0
    int i;//to see the index i for traversing through the hash table
    //insert into the hash table
    Insert(HT,12);
    Insert(HT,25);
    Insert(HT,35);
    Insert(HT,26);

    printf("Keys in The Hash Table Are :");
    for(i=0; i<10; i++)
    {
        printf("\n");
        printf("%d",HT[i]);//displaying the all the elements of hash table
    }
    printf("\nKey %d found at index %d\n",12,Search(HT,12));//searching for the element in the hash table
    return 0;
}
