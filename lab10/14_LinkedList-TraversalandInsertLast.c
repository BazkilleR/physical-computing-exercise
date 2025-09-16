#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode
{
  char *data;
  struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList
{
  unsigned int count;
  DataNode *head;
} SinglyLinkedList;

// Function prototypes
DataNode *createDataNode(char *data);
SinglyLinkedList *createSinglyLinkedList();
void traverse(SinglyLinkedList *list);
void insert_last(SinglyLinkedList *list, char *data);

int main()
{
  SinglyLinkedList *mylist = createSinglyLinkedList();
  int n;
  char condition;
  char data[101];
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf(" %c: %[^\n]s", &condition, data);

    if (condition == 'F')
    {
      // insert_first ยังไม่ได้เขียน
    }
    else if (condition == 'L')
    {
      insert_last(mylist, data);
    }
    else if (condition == 'D')
    {
      // delete ยังไม่ได้เขียน
    }
    else
    {
      printf("Invalid Condition!\n");
    }
  }

  traverse(mylist);

  // Remember to free allocated memory
  DataNode *current = mylist->head;
  while (current != NULL)
  {
    free(current->data);
    DataNode *temp = current;
    current = current->next;
    free(temp);
  }
  free(mylist);
  return 0;
}

// Create a new DataNode
DataNode *createDataNode(char *data)
{
  DataNode *newNode = (DataNode *)malloc(sizeof(DataNode));
  newNode->data = (char *)malloc(strlen(data) + 1);
  strcpy(newNode->data, data);
  newNode->next = NULL;
  return newNode;
}

// Create a new SinglyLinkedList
SinglyLinkedList *createSinglyLinkedList()
{
  SinglyLinkedList *list = (SinglyLinkedList *)malloc(sizeof(SinglyLinkedList));
  list->count = 0;
  list->head = NULL;
  return list;
}

// Traverse the list and print data
void traverse(SinglyLinkedList *list)
{
  if (list->count == 0)
  {
    printf("This is an empty list.\n");
    return;
  }
  DataNode *pointer = list->head;
  while (pointer != NULL)
  {
    if (pointer->next == NULL)
    {
      printf("%s\n", pointer->data);
    }
    else
    {
      printf("%s -> ", pointer->data);
    }

    pointer = pointer->next;
  }
}

// Insert a new node at the end of the list
void insert_last(SinglyLinkedList *list, char *data)
{
  DataNode *pNew = createDataNode(data);
  if (list->count == 0)
  {
    // ถ้า Linked List ว่าง
    list->head = pNew;
  }
  else
  {
    // ถ้า Linked List ไม่ว่าง
    DataNode *pointer = list->head;
    while (pointer->next != NULL)
    {
      pointer = pointer->next;
    }
    pointer->next = pNew;
  }
  list->count++;
}
