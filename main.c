#include <stdio.h>

struct node* insert(struct node* list, int d );
struct node* del(struct node* list ,int d );
void print( struct node *list);
void freeList(struct node* list);
void copy ( struct node *q, struct node **s );


int main( ) {
    int number = 0, choice=0;
    struct node *pList=NULL;
    struct node *nList = NULL;
// Let the user add values until they enter -1.
    while(choice!= 4)
    {
// Get the operation.
        printf("\nDo you want to (1)insert, (2)delete, (3)Copy (4)quit.\n");
        scanf("%d", &choice);
        printf("Your choice is %d\n", choice);
// Execute the operation.
        if (choice == 1)
        {
// Get the number.
            printf("Enter the value to insert\n");
            scanf("%d", &number);
            pList = insert(pList, number);
// Look at the list.
            printf("Items in linked list: ");
            print(pList);
//printf("\n");
        }
        else if (choice == 2)
        { // Get the number.
            printf("Enter the value to delete.\n");
            scanf("%d", &number);
            pList = del(pList, number);
// Look at the list.
            printf("Items in linked list: ");
            print(pList);
//printf("\n");
        }
        else if (choice == 3)
        {
            if (nList)
                freeList(nList);
            copy(pList, &nList); //passing reference of nList as it is not
            returning anything
// Look at the list.
            printf("Items in NEW linked list: ");
            print(nList);
// printf("\n");
        }
        else
        {
            break;
        }
    }
    freeList(nList);
    freeList(pList);
    printf("\nBye..\n");
    return 0;
}

struct node* insert(struct node* list, int d ){

}
struct node* del(struct node* list ,int d ){

}
void print( struct node *list){

}
void freeList(struct node* list){

}
void copy ( struct node *q, struct node **s ){

}