#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void push_back(struct node **head, int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
    } else {
        struct node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void remove_node(struct node **head, int value) {
    if (*head == NULL) {
        return;
    }
    struct node *current = *head;
    if (current->value == value) {
        *head = current->next;
        free(current);
        return;
    }
    while (current->next != NULL && current->next->value != value) {
        current = current->next;
    }
    if (current->next == NULL) {
        return;
    }
    struct node *to_delete = current->next;
    current->next = to_delete->next;
    free(to_delete);
}

void print_list(struct node *head) {
    while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct node *head = NULL;
    push_back(&head, 1);
    push_back(&head, 2);
    push_back(&head, 3);
    print_list(head);
    remove_node(&head, 2);
    print_list(head);
    return 0;
}
