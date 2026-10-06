# C DSA Assignment

## Question 1: Stack Using Array

### Aim

To design and implement a stack using an array without using any built-in stack library.

### Theory

A Stack is a linear data structure that follows the LIFO (Last In, First Out) principle. The element inserted last is removed first.

The stack is implemented using an array and a variable called `top`.

Initially, `top = -1`, which indicates that the stack is empty.

### Operations

#### 1. PUSH(x)

PUSH is used to insert an element into the stack.

If the stack is full, Stack Overflow occurs.

Condition:

`top == MAX - 1`

#### 2. POP()

POP is used to remove the top element from the stack.

If the stack is empty, Stack Underflow occurs.

Condition:

`top == -1`

#### 3. PEEK()

PEEK displays the top element of the stack without removing it.

#### 4. DISPLAY()

DISPLAY shows all elements of the stack from top to bottom.

### Stack Overflow

When the stack has a fixed capacity and the user tries to insert an element when the stack is already full, Stack Overflow occurs.

For example, if the capacity is 5 and five elements are already present, another element cannot be inserted.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| PUSH | O(1) |
| POP | O(1) |
| PEEK | O(1) |
| DISPLAY | O(n) |

### Space Complexity

The stack uses an array of size n, therefore the space complexity is O(n).

---

# Question 2: Circular Queue Using Array

### Aim

To implement a Circular Queue using an array.

### Theory

A Circular Queue is a linear data structure that follows the FIFO (First In, First Out) principle.

In a circular queue, the last position of the array is connected back to the first position. This allows unused positions at the beginning of the array to be reused.

The queue uses two variables: `front` and `rear`.

Initially:

`front = -1`

`rear = -1`

### Operations

#### 1. ENQUEUE(x)

ENQUEUE is used to insert an element at the rear of the queue.

The queue is full when:

`(rear + 1) % MAX == front`

#### 2. DEQUEUE()

DEQUEUE is used to remove an element from the front of the queue.

If `front == -1`, the queue is empty.

#### 3. FRONT()

FRONT displays the element present at the front of the queue without removing it.

#### 4. DISPLAY()

DISPLAY shows all the elements currently present in the circular queue.

### Full Queue Condition

The circular queue is full when:

`(rear + 1) % MAX == front`

### Empty Queue Condition

The circular queue is empty when:

`front == -1`

### Circular Queue vs Linear Queue

A circular queue provides better utilization of memory because positions that become free after DEQUEUE can be reused.

In a simple linear queue, when REAR reaches the last index, new elements cannot be inserted even if unused positions are available at the beginning of the array.

This problem is solved by a circular queue because the rear can move back to the beginning of the array.

### Time Complexity

| Operation | Time Complexity |
|---|---|
| ENQUEUE | O(1) |
| DEQUEUE | O(1) |
| FRONT | O(1) |
| DISPLAY | O(n) |

### Space Complexity

The circular queue uses an array of size n, therefore the space complexity is O(n).

---

# Conclusion

The Stack and Circular Queue were implemented using arrays in C.

The Stack follows the LIFO principle, while the Circular Queue follows the FIFO principle.

The Stack implementation handles Stack Overflow and Stack Underflow conditions.

The Circular Queue provides better memory utilization than a simple linear queue by reusing available positions.
