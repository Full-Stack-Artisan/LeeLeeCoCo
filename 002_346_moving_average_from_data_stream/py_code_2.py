from collections import deque

class MovingAverage:

    def __init__(self, size: int):
        """
        Initialize your data structure here.
        """
        self._queue = deque()
        self._sum = 0
        self._size = size
        
    def next(self, val: int) -> float:
        if len(self._queue) == self._size:
            el = self._queue.popleft()
            self._sum -= el
        self._queue.append(val)
        self._sum += val
        
        
        return self._sum /len(self._queue) 

# Your MovingAverage object will be instantiated and called as such:
# obj = MovingAverage(size)
# param_1 = obj.next(val)