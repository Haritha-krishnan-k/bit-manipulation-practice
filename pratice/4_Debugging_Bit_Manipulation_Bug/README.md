Debugging a Bit Manipulation Bug

A junior engineer writes code to clear the least significant bit of a number using the expression n & (n - 1). During testing, they notice that when the value is 4, the result becomes 0 instead of remaining 4. Explain why this happens at the binary level, what the expression actually does, and how you would correctly clear only the least significant bit position without affecting other bits. -  
note:
1.this - n&(n-1) is to clear the rightmost bit
2.to clear the least significant bit