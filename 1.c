// #include <stdio.h>

// int main(){
//     int no, rev=0, temp;
//     printf("Enter the no: ");
//     scanf("%d", &no);

//     while(no!=0){
//         temp = no%10;
//         rev = rev*10+temp;
//         no/=10;
//     }
//     printf("The reversed no is: %d", rev);
//     return 0;
// }




// #include <stdio.h>
// #define SIZE 5

// int stack[SIZE];
// int top = -1;

// // Push operation
// void push(int value) {
//     if (top == SIZE - 1)
//         printf("Stack Overflow\n");
//     else {
//         top++;
//         stack[top] = value;
//         printf("%d pushed to stack\n", value);
//     }
// }

// // Pop operation
// void pop() {
//     if (top == -1)
//         printf("Stack Underflow\n");
//     else {
//         printf("%d popped from stack\n", stack[top]);
//         top--;
//     }
// }

// // Peek operation
// void peek() {
//     if (top == -1)
//         printf("Stack is empty\n");
//     else
//         printf("Top element: %d\n", stack[top]);
// }

// // Display operation
// void display() {
//     if (top == -1)
//         printf("Stack is empty\n");
//     else {
//         printf("Stack elements: ");
//         for (int i = top; i >= 0; i--)
//             printf("%d ", stack[i]);
//         printf("\n");
//     }
// }

// // Main menu
// int main() {
//     int choice, value;

//     while (1) {
//         printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter value to push: ");
//                 scanf("%d", &value);
//                 push(value);
//                 break;
//             case 2: pop(); break;
//             case 3: peek(); break;
//             case 4: display(); break;
//             case 5: return 0;
//             default: printf("Invalid choice\n");
//         }
//     }
// }



// #include <stdio.h>
// #define SIZE 5

// int queue[SIZE];
// int front = -1, rear = -1;

// // Enqueue (Insert)
// void enqueue(int value) {
//     // Check if the queue is full
//     if (rear == SIZE - 1) {
//         printf("Queue Overflow\n");
//     } else {
//         // If this is the first element being inserted
//         if (front == -1) {
//             front = 0;
//         }

//         // Increment rear and add the new value
//         rear++;
//         queue[rear] = value;

//         // Display confirmation
//         printf("%d enqueued to queue\n", value);
//     }
// }


// // Dequeue (Remove)
// void dequeue() {
//     if (front == -1 || front > rear)
//         printf("Queue Underflow\n");
//     else {
//         printf("%d dequeued from queue\n", queue[front]);
//         front++;
//     }
// }

// // Display
// void display() {
//     if (front == -1 || front > rear)
//         printf("Queue is empty\n");
//     else {
//         printf("Queue elements: ");
//         for (int i = front; i <= rear; i++)
//             printf("%d ", queue[i]);
//         printf("\n");
//     }
// }

// int main() {
//     int choice, value;
//     while (1) {
//         printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter value to enqueue: ");
//                 scanf("%d", &value);
//                 enqueue(value);
//                 break;
//             case 2: dequeue(); break;
//             case 3: display(); break;
//             case 4: return 0;
//             default: printf("Invalid choice\n");
//         }
//     }
// }
