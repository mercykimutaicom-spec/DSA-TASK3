// performing enqueue and dequeue operations in a Queue
#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow!" << endl;
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = value;

    cout << value << " inserted into queue." << endl;
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!" << endl;
        return;
    }

    cout << queue[front] << " removed from queue." << endl;

    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue: ";

    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}
