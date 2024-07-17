# 42__push_swap
This project is trying to create a sort algrithm.  
Still in progress...  

Some parts of work:  
Arguments check:  
No repeat                      ✅   
Only digit                     ✅   
+- and space                   ✅   
overflow                       ✅   
special one argument with ""   ✅
   
Save to stack(Link list)       ✅ 
Algorithm part:  

## **Some tips**  
1. For the mandatory part, we must also handle one condition: (./push_swap 1 "3 2" 4). That means we need to check and collect every valid number, wherever it is in one argument(like "12 21 321") or not. The reason is if we run the checker it supports this way. Even if we run the command it probably cannot write something like (./push_swap 1 "3 2 5" 4).  
