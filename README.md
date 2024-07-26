# 42__push_swap
This project is trying to create a sort algorithm. In my push_swap, the basic idea is from Turk algorithm (https://medium.com/@ayogun/push-swap-c1f5d2d41e97).   
The final grade is 125/100.

## **The visualizer for this project**   
![push_swap](https://github.com/user-attachments/assets/6728fe04-f46c-469a-addc-f64972d6d06d)
   
## **Some parts of work**  
**Mandatory**   
Arguments check:  
No repeat                      ✅   
Only digit                     ✅   
+- and space                   ✅   
Overflow                       ✅   
Special arguments with ""      ✅   
Save to stack(Link list)       ✅   
Algorithm                      ✅   
**Bonus**   
Input check                    ✅   
String compare                 ✅   
Stack check                    ✅   

## **Some tips**  
1. For the mandatory part, we must also handle one condition: (./push_swap 1 "3 2" 4). That means we need to check and collect every valid number, wherever it is in one argument(like "12 21 321") or not. The reason is if we run the checker it supports this way. Even if we run the command it probably cannot write something like (./push_swap 1 "3 2 5" 4).
2. This push_swap will be over 5500 steps for 500 numbers in a few extreme cases (like 5506). The average steps will be around 5000-5100. So if you want to make sure the sort will not be over 5500 there still needs some optimization. One idea: It could divide the value range during push number from a to b. Not exactly has been sorted. It  could be decreased to more steps. For example, find the mid-value number in stack a, and push it to b first. Then if the number is bigger than a, just push it to b. If not, push and rotate b. The amount of 'anchored number' could be more, like 2 or 3.   
3. recommend one tester to test this project: (https://github.com/LeoFu9487/push_swap_tester). Just ignore the stand error message. Btw, if you face the TLE error you could try to increase the time to check if it is the real error or not.
4. Visualizer for push_swap: https://github.com/o-reo/push_swap_visualizer
