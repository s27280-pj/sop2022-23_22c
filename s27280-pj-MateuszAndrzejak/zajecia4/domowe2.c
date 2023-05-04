#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
    Node* tail;
} LinkedList;

void insertAtHead(LinkedList* list, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = list->head;
    if (list->head != NULL) {
        list->head->prev = newNode;
    } else {
        list->tail = newNode;
    }
    list->head = newNode;
}

void insertAtTail(LinkedList* list, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = list->tail;
    newNode->next = NULL;
    if (list->tail != NULL) {
        list->tail->next = newNode;
    } else {
        list->head = newNode;
    }
    list->tail = newNode;
}

void printList(LinkedList* list) {
    Node* current = list->head;
    printf("List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    LinkedList list = {NULL, NULL};
    insertAtHead(&list, 3);
    insertAtHead(&list, 2);
    insertAtTail(&list, 4);
    insertAtTail(&list, 5);
    printList(&list);
    return 0;
}
