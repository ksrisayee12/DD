// #include <stdio.h>
// #define SIZE 5

// int STACK[SIZE];
// int top = -1;

// void push(int value) {
//     if (top == SIZE-1) {
//         printf("Overflow\n");
//     }else{
//         top++;
//         STACK[top] = value;
//         printf("The Value %d is Added to the Stack\n", value);
//     }
// }

// void pop() {
//     if (top == -1)
//         printf("Stack Underflow\n");
//     else {
//         printf("%d popped from stack\n", STACK[top]);
//         top--;
//     }
// }

// void peek() {
//     if (top == -1)
//         printf("Stack is empty\n");
//     else
//         printf("Top element: %d, Top Index: %d\n", STACK[top], top);
// }

// void display() {
//     if (top == -1)
//         printf("Stack is empty\n");
//     else {
//         printf("Stack elements: ");
//         for (int i = top; i >= 0; i--)
//             printf("%d ", STACK[i]);
//         printf("\n");
//     }
// }

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

// void enqueue(int value) {
//     if (rear == SIZE - 1) {
//         printf("Queue Overflow\n");
//     } else {
//         if (front == -1) {
//             front = 0;
//         }
//         rear++;
//         queue[rear] = value;

//         printf("%d enqueued to queue\n", value);
//     }
// }

// void dequeue() {
//     if (front == -1 || front > rear)
//         printf("Queue Underflow\n");
//     else {
//         printf("%d dequeued from queue\n", queue[front]);
//         front++;
//     }
// }

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



// // linked list

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* head;

// void insert(int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode -> data = value;
//     newNode -> next = NULL;

//     if(head == NULL) {
//         head = newNode;
//     } else {
//         struct Node* temp = head;
//         while (temp -> next != NULL) {
//             temp = temp -> next;
//         }
//         temp -> next = newNode;
//     }
//     printf("%d is inserted", value);
// }

// void delete() {
//     if (head == NULL) {
//         printf("The List is Empty");
//     } else {
//         struct Node* temp = head;
//         head = head -> next;
//         printf("%d is deleted", temp -> data);
//         free(temp);
//     }
// }

// void display() {
//     if (head == NULL) {
//         printf("List is Empty");
//     } else {
//         struct Node* temp = head;
//         printf("Linked List: ");
//         while (temp != NULL) {
//             printf("%d -> ", temp -> data);
//             temp = temp -> next;
//         }
//         printf("NULL\n");
//     }
// }

// int main() {
//     int choice, value;
//     while(1) {
//         printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit");
//         printf("Enter choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter a value:");
//             scanf("%d", &value);
//             insert(value);
//             break;
//         case 2:
//             delete();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             return 0;
//             break;
        
//         default:
//             printf("Wrong choice");
//         }
//     }
// }






// #include <stdio.h>
// #define SIZE 5

// int stack[SIZE];
// int top = -1;

// void push(int value){
//     if ( top == SIZE-1 ){
//         printf("Overflow\n");
//     }else{
//         stack[++top] = value;
//         printf("The Value %d is Added to the Stack\n", value);
//     }
// }

// void pop(){
//     if (top == -1){
//         printf("Underflow\n");
//     }else{
//         printf("%d popped from stack\n", stack[top]);
//         top--;
//     }
// }

// void peek(){
//     if (top == -1){
//         printf("Stack is Empty\n");
//     }else{
//         printf("Top = %d\n", stack[top]);
//     }
// }

// void display(){
//     if (top == -1){
//         printf("Stack is Empty\n");
//     }else{
//     printf("Stack elements: ");
//     for(int i = top; i>=0; i--){
//         printf("%d ", stack[i]);
//     }
//     }
// }

// int main(){
//     int choice, value;

//     while(1){
//         printf("\nEnter a choice [1. push, 2. pop, 3. peek, 4. display, 5. exit]: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter value to push: ");
//             scanf("%d", &value);
//             push(value);
//             break;
        
//         case 2:
//             pop();
//             break;
//         case 3:
//             peek();
//             break;
//         case 4:
//             display();
//             break;
//         case 5:
//             return 0;
//         default:
//             printf("Invalid choice\n");

//         }
//     }
// }


// #include <stdio.h>
// #define SIZE 5

// int queue[SIZE];
// int front = -1, rear = -1;

// void enqueue(int value){
//     if (rear ==SIZE -1){
//         printf("\nOverflow");
//     }else{
//         if(front == -1){
//             front++;
//         }
//         queue[++rear] = value;
//         printf("\nValue Enqueued");
//     }
// }

// void dequeue(){
//     if(front == -1 || front > rear){
//         printf("\nUnderflow");
//     }else{
//         printf("\nValue Dequeued");
//         front++;
//     }
// }

// void dsplay(){
//     if(front == -1 || front>rear){
//         printf("\nQueue is Empty");
//     }else{
//         printf("\nQueue elements: ");
//         for(int i = front; i <= rear; i++){
//             printf("%d ", queue[i]);
//         }
//     }
// }

// int main() {
//     int choice, value;

//     while(1) {
//         printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter value to enqueue: ");
//                 scanf("%d", &value);
//                 enqueue(value);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 dsplay();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 printf("Invalid choice\n");
//         }
//     }
// }





// #include <stdio.h>

// int main() {
//     int size, temp;

//     printf("Enter number of elements: ");
//     scanf("%d", &size);

//     int arr[size];

//     for (int i = 0; i < size; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("\nOriginal Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }

//         printf("\nAfter pass %d: ", i + 1);
//         for (int k = 0; k < size; k++) {
//             printf("%d ", arr[k]);
//         }
//     }

//     printf("\nSorted Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int temp, size;

//     printf("Enter no of elements: ");
//     scanf("%d", &size);
//     int arr[size];

//     for(int i = 0; i<size; i++){
//         printf("Enter an element: ");
//         scanf("%d", &arr[i]);
//     }

//     printf("\nOriginal Array: ");
//     for(int i = 0; i<size; i++){
//         printf("%d ", arr[i]);
//     }

//     for(int i = 0; i<size - 1; i++){
//         for(int j = 0; j<size-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }


// #include <stdio.h>

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i = (low-1);
//     for(int j = low; j<high; j++){
//         if(arr[j]>pivot){
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i+1], &arr[high]);
//     return (i+1);
// }

// void quickSort(int arr[], int low, int high){
//     if(low>high){
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi-1);
//         quickSort(arr, pi+1, high);
//     }
// }

// int main(){
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr, 0, n-1);
//     printf("Sorted array: \n");
//     for(int i = 0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }