class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ''
        cur_reversed_word = ''
        
        # For each char, add char to front of cur_reversed_word
        for i in s:
            if i != " ":
                cur_reversed_word = i + cur_reversed_word
            else:
                ans += cur_reversed_word
                ans += ' '
                cur_reversed_word = ''
        
        # Append the last word 
        if cur_reversed_word:
            ans += cur_reversed_word
            
        return ans