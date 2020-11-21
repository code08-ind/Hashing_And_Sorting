/*Submitted By:
Aryan Garg
19124018
IT(G-1)
*/

//Program For Implementation Of Double Hashing

#include<stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10//table size has been taken to 10

int h[TABLE_SIZE]= {NULL};//initially their is no element and value is defined to NULL

void insert()//function for inserting values to hash table
{
    int key,index,i,flag=0,hkey,hash2;
    printf("\nEnter a value to insert into hash table.\n");
    scanf("%d",&key);//entering the value for taking the values or elements
    hkey=key%TABLE_SIZE;//taking the index where element will be placed in the hashtable
    hash2 = 7-(key %7);
    for(i=0; i<TABLE_SIZE; i++)
    {
        index=(hkey+i*hash2)%TABLE_SIZE;//hash function
        if(h[index] == NULL)
        {
            h[index]=key;
            break;
        }
    }
    if(i == TABLE_SIZE)//element can't be inserted in table
        printf("\nElement cannot be inserted in the hash table.\n");
}

void search()//function for searching of the element in hash table
{
    int key,index,i,flag=0,hash2,hkey;
    printf("\nEnter the element to be searched : \n");
    scanf("%d",&key);//taking in the element which needs to be found out
    hkey=key%TABLE_SIZE;
    hash2 = 7-(key %7);
    for(i=0; i<TABLE_SIZE; i++)
    {
        index=(hkey+i*hash2)%TABLE_SIZE;
        if(h[index]==key)//value of element is found
        {
            printf("Value of Element is found at index %d",index);
            break;
        }
    }
    if(i == TABLE_SIZE)//value of element is not found
        printf("\n Value is not found inside the hash table.\n");
}

void display()//function to display all the elements
{
    int i;
    printf("\nElements in the hash table are :\n");
    for(i=0; i< TABLE_SIZE; i++)
        printf("\n Element at index %d \t value =  %d",i,h[i]);
}

int main()
{
    int opt,i;//finding the option for what to do in the table
    while(1)
    {
        printf("\nEnter Your Choice : ");
        printf("\nPress\n 1. Insert\n 2. Display \n 3. Search \n 4.Exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            insert();//calling insert function
            break;
        case 2:
            display();//calling display function
            break;
        case 3:
            search();//calling search function
            break;
        case 4:
            exit(0);//exit from table
        }
    }
    return 0;
}
