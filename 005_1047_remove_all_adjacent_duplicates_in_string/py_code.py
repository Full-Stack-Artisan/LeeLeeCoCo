class Solution:
    def removeDuplicates(self, S: str) -> str:
        if not S:
            return ""
        
        myStack = [S[0]]
 
        for i in range(1, len(S)):
            # compare last char
            if not myStack:
                myStack.append(S[i])
            else:
                if myStack[-1] == S[i]:
                    myStack.pop()
                else:
                    myStack.append(S[i])

        return ''.join(myStack)