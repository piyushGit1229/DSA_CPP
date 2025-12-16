#include <bits/stdc++.h>
using namespace std;

// ====================== 🔁 CIRCULAR QUEUE IMPLEMENTATION ======================
class circularQueue
{
public:
  int *arr;     // dynamically allocated array to hold queue elements
  int front;    // points to the front (first element)
  int rear;     // points to the last (most recent element)
  int size;     // total capacity of the queue

  // ====================== 🔧 CONSTRUCTOR ======================
  circularQueue(int size)
  {
    this->size = size;
    front = -1;           // start with empty queue → both front & rear = -1
    rear = -1;
    arr = new int[size];  // dynamically allocate memory for queue
  }

  // ====================== ⚙️ CHECK IF QUEUE IS FULL ======================
  bool isfull()
  {
    // Queue is FULL when:
    // 1 step ahead of rear (circularly) is equal to front.
    // That means we’ve filled the circle completely.
    // Example: front=0, rear=size-1 ⇒ (rear+1)%size == front
    return ((rear + 1) % size == front);
  }

  // ====================== ⚙️ CHECK IF QUEUE IS EMPTY ======================
  bool isempty()
  {
    // Queue is EMPTY when both front & rear are -1
    return (front == -1);
  }

  // ====================== ➕ ENQUEUE OPERATION ======================
  void enqueue(int x)
  {
    // Step 1️⃣ → check overflow condition
    if (isfull())
    {
      cout << "Queue is full" << endl;
      return;
    }

    // Step 2️⃣ → if queue is empty, we are adding first element
    if(isempty())
    {
      front = 0;
      rear = 0;
    }

    else
    {
      // Step 3️⃣ → move rear forward (circularly)
      // Suppose rear=4, size=5 → (4+1)%5 = 0 → wrapped to start
      rear = (rear + 1) % size;
    }

    // Step 4️⃣ → insert the new element
    arr[rear] = x;
  }

  // ====================== ➖ DEQUEUE OPERATION ======================
  void dequeue()
  {
    // Step 1️⃣ → check underflow condition
    if (isempty())
    {
      cout << "Queue is empty" << endl;
      return;
    }

    // Step 2️⃣ → if only one element is present (front == rear)
    // removing it will make queue empty again
    if (front == rear)
    {
      front = -1;
      rear = -1;
    }
    else
    {
      // Step 3️⃣ → move front forward circularly
      // Example: front=4 → (4+1)%5 = 0 (wraps to start)
      front = (front + 1) % size;
    }
  }

  // ====================== 🔍 GET FRONT ELEMENT ======================
  int getfront()
  {
    if (isempty())
    {
      cout << "Queue is empty" << endl;
      return -1;
    }
    // return the element at current front index
    return arr[front];
  }

  // ====================== 🧾 PRINT QUEUE (LOGICAL ORDER) ======================
  void printqueue()
  {
    if (isempty())
    {
      cout << "Queue is empty" << endl;
      return;
    }

    cout << "Queue elements: ";

    // If rear >= front (no wrap), print linearly
    if (rear >= front)
    {
      for (int i = front; i <= rear; i++)
        cout << arr[i] << " ";
    }
    else
    {
      // If wrap-around has happened (rear < front)
      // print from front → end, then from 0 → rear
      for (int i = front; i < size; i++)
        cout << arr[i] << " ";
      for (int i = 0; i <= rear; i++)
        cout << arr[i] << " ";
    }

    cout << endl;
  }
};

// ====================== 🧠 MAIN FUNCTION ======================
int main()
{
  circularQueue q(5);   // create queue of capacity 5

  // ----- ENQUEUE OPERATIONS -----
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);  // this will fill the queue completely
  q.enqueue(6);  // ❌ will show "Queue is full" since capacity=5

  q.printqueue(); // print all elements (should be 1 2 3 4 5)

  // ----- DEQUEUE OPERATIONS -----
  q.dequeue();   // removes 1
  q.dequeue();   // removes 2

  q.printqueue(); // now should print remaining (3 4 5)

  // ----- FRONT ELEMENT -----
  cout << "Front element is: " << q.getfront() << endl; // should print 3

  return 0;
}
