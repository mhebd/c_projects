#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
  int data;
  Node *next;
};

// Crate a new node
Node *create_node(int data, Node *next)
{
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (new_node == NULL)
  {
    printf("Error! while creating node.");
    exit(1);
  };

  new_node->data = data;
  new_node->next = next;

  return new_node;
};

// Remove a node
Node *remove_node(Node *head, Node *node)
{
  if (head == node)
  {
    head = node->next;
    free(node);
    return head;
  };

  Node *current_node = head;
  while (current_node != NULL)
  {
    if (current_node == node)
    {
      break;
    }
    current_node = current_node->next;
  }

  if (current_node == NULL)
  {
    return head;
  }

  current_node->next = node->next;
  free(node);
  return head;
};

// Add new node in the first
Node *prepend(Node *head, int data)
{
  Node *new_node = create_node(data, head);
  return new_node;
};

// add new node in the last
Node *append(Node *head, int data)
{
  Node *new_node = create_node(data, NULL);

  if (head == NULL)
  {
    return new_node;
  }

  Node *current_node = head;
  while (current_node->next != NULL)
  {
    current_node = current_node->next;
  };

  current_node->next = new_node;
  return head;
};

// Add node in any place
void *insert(Node *node, int data)
{
  Node *new_node = create_node(data, node->next);
  node->next = new_node;
};

int main()
{
  Node *n;
  n = create_node(10, NULL);
  printf("data: %d, addr: %p\n", n->data, n->next);

  return 0;
}