from collections import deque

class MovingAverage:

    def __init__(self, size: int):
        """
        Initialize your data structure here.
        """
        self._window = deque([], maxlen=size)
        
    def next(self, val: int) -> float:
        self._window.append(val)
        
        return sum(self._window) / len(self._window)

# Your MovingAverage object will be instantiated and called as such:
# obj = MovingAverage(size)
# param_1 = obj.next(val)