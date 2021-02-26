# Reverse Words in a String III
Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

- Note: Note: In the string, each word is separated by single space and there will not be any extra space in the string.

- Example:
    
    `Hello World!` => `olleH !dlroW` 

# Additional Information
1. [Python List Comprehensive](https://docs.python.org/3/tutorial/datastructures.html#list-comprehensions)
    - Shorter length of code with more concise syntax
    - Usually faster then `for` but not always
    - **Easier to understand!**

2. Declarative V.S Imperative 
    - Declarative: tell the program to do a task, not care about "how the program" do the ask. Eg. SQL (you only tell DB to `SELECT` data `FROM` table, but never care how DBMS execute the code)
    - Imperative: tell program step by step to execute the whole task. Eg. 
    ```
    sum = 0
    for i in range(10):
        sum = sum + 1
    print(sum)
    ```
 
3. `XOR` swap approach - swap two variable without define thrid temporary variable
    - In python, it can be used

    ```
    // first approach
    x = 5
    y = 10

    x = x + y  // x = 15
    y = x - y  // y = 5
    x = x - y  // x = 10

    // second approach
    x = 5   // x => 0101
    y = 10  // y => 1010
    
    x = x ^ y  // x = 15 (1111)
    y = x ^ y  // y = 5  (0101)
    x = x ^ y  // x = 10 (1010)
    ```
    - In C code, please refere to `c_code.c` file


# Reference
- https://leetcode.com/problems/reverse-words-in-a-string-iii/
- https://stackoverflow.com/questions/22108488/are-list-comprehensions-and-functional-functions-faster-than-for-loops
- https://switowski.com/blog/for-loop-vs-list-comprehension
- https://blog.finxter.com/python-lists-filter-vs-list-comprehension-which-is-faster/
- https://blog.newrelic.com/engineering/python-programming-styles/
- https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/
- https://www.i-programmer.info/babbages-bag/498-the-magic-swap.html