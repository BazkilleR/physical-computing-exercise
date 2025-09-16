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
void insert_front(SinglyLinkedList *list, char *data);
void traverse(SinglyLinkedList *list);
void insert_last(SinglyLinkedList *list, char *data);
void delete(SinglyLinkedList *list, char *data);

int main()
{
  SinglyLinkedList *mylist = createSinglyLinkedList();
  int n;
  char condition;
  char data[100]; // Assuming a maximum string length of 99 characters
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf(" %c: %[^\n]s", &condition, data); // Read condition and string data

    if (condition == 'F')
    {
      insert_front(mylist, data);
    }
    else if (condition == 'L')
    {
      insert_last(mylist, data);
    }
    else if (condition == 'D')
    {
      delete(mylist, data);
    }
    else
    {
      printf("Invalid Condition!\n");
    }
  }

  traverse(mylist);
  // Remember to free allocated memory for each node's data
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

void insert_front(SinglyLinkedList *list, char *data)
{
  DataNode *pNew = createDataNode(data);
  if (list->count == 0)
  {
    // ถ้า Linked List ว่าง
    list->head = pNew;
  }
  else
  {
    // ชี้ next ของ node ใหม่ไปที่หัวเดิม
    pNew->next = list->head;
    // แล้วอัปเดต head ให้เป็น node ใหม่
    list->head = pNew;
  }
  list->count++;
}

void delete(struct SinglyLinkedList *list, char *data)
{
  if (list->head == NULL) // กรณี list ว่าง
  {
    printf("Cannot delete, %s does not exist.\n", data);
    return;
  }

  struct DataNode *current = list->head;
  struct DataNode *previous = NULL;

  // วนหา node ที่มีค่า data ตรงกับที่ต้องการลบ
  while (current != NULL && strcmp(current->data, data) != 0)
  {
    previous = current;
    current = current->next;
  }

  if (current == NULL)
  {
    // ไม่เจอ data ที่ต้องการลบ
    printf("Cannot delete, %s does not exist.\n", data);
    return;
  }

  // ถ้าเจอ node ที่ต้องการลบ
  if (previous == NULL)
  {
    // กรณีเป็น node แรก (head)
    list->head = current->next;
  }
  else
  {
    // กรณีเป็น node ตรงกลางหรือท้าย
    previous->next = current->next;
  }

  free(current->data);
  free(current);

  list->count--;
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
