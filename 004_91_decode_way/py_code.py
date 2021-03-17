class Solution:
    def numDecodings(self, s: str) -> int:
        if not s or s[0] == 0:
            return 0
        self.memo = {}
        return self.numDecodingsHelper(s)
        
    def numDecodingsHelper(self, s):
        if len(s) == 0: return 1
        if s in self.memo: return self.memo[s]
        
        takeOne = takeTwo = 0
        
        if int(s[:1]) >= 1 and int(s[:1]) <= 9:
            takeOne = self.numDecodingsHelper(s[1:])
        
        if int(s[:2]) >= 10 and int(s[:2]) <= 26: 
            takeTwo = self.numDecodingsHelper(s[2:])
        
        self.memo[s] = takeOne + takeTwo
        
        return self.memo[s]
        