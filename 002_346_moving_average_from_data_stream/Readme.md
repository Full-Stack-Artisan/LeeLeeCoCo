# Find Pivot Index
Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window.

Implement the MovingAverage class:
- MovingAverage(int size) Initializes the object with the size of the window size.
- double next(int val) Returns the moving average of the last size values of the stream.

MovingAverage(int size) Initializes the object with the size of the window size.
double next(int val) Returns the moving average of the last size values of the stream.

- Constraints:
    - 1 <= size <= 1000
    - -105 <= val <= 105
    - At most 104 calls will be made to next.

# Reference
- https://leetcode.com/problems/moving-average-from-data-stream/


# Additional Information

1. Python Deque V.S List Summary

    |                              | Deque       | List          |
    |  ---                         |     ----    |  ---          |
    | Access by index              | O(n)        | O(1)          |
    | Append/pop at the begining   | O(1)        | O(n)          |
    | Append/pop at the end        | O(1)        | O(1)          |
    | Insert in the middle         | O(n)        | O(n)          |

    1. Key points:
        1. Deque is implemented using a double linklist (double ended array)
        2. List insert in the front will move all values after the affected index
        3. List append in the end might trigger python allocate allittle more space

    2. Reference
        - https://dev.to/v_it_aly/python-deque-vs-listwh-25i9
        - https://docs.python.org/3/library/collections.html#collections.deque
        - https://stackoverflow.com/questions/1521784/cost-of-list-functions-in-python
        - https://stackoverflow.com/questions/49244003/stacks-list-in-python-how-does-it-append

2. Circular Queue

    Using a fix physical space with moving index to implement a FIFO(First In First Out) ring structure. When the queue is full, the index reference position need to be update.

    1. Reference:
        - https://www.geeksforgeeks.org/circular-queue-set-1-introduction-array-implementation/
        - https://www.programiz.com/dsa/circular-queue


 
