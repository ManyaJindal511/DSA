#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node* linkedlist(Node* head, int k) {
    if (!head) return NULL;  // If the list is empty, return NULL

    // Find the length of the list and the last node
    Node* temp = head;
    Node* tail = NULL;
    int n = 0;

    while (temp != NULL) {
        if (temp->next == NULL) tail = temp;
        temp = temp->next;
        n++;
    }

    if (n == 0 || k % n == 0) return head;  // No need to rotate if k is a multiple of n

    k = k % n;  // Normalize k to be within the length of the list
    temp = head;

    // Find the new end of the list after rotation
    for (int i = 1; i < n - k; i++) {
        temp = temp->next;
    }

    // Rotate the list
    Node* newHead = temp->next;  // New head is (n-k)th node's next
    temp->next = NULL;  // Break the list
    tail->next = head;  // Attach the end of the list to the old head

    return newHead;  // Return the new head of the list
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* newHead = linkedlist(a, 2);  // Correctly assign the new head
    display(newHead);  // Display the new head after rotation

    return 0;
}
