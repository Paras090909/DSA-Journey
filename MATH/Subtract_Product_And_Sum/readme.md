# Subtract the Product and Sum of Digits of an Integer

## Problem Description

Given an integer `n`, return the **difference** between the **product** of its digits and the **sum** of its digits.

### Constraints:
- `1 <= n <= 10^5`

### Example:
**Input:**  
n = 234  
**Output:**  
15  
**Explanation:**  
Product of digits = 2 * 3 * 4 = 24  
Sum of digits = 2 + 3 + 4 = 9  
Result = 24 - 9 = 15

---

## Approach

To solve this problem, we can follow these simple steps:

1. Extract each digit of the number `n`.
2. While extracting:
   - Keep a running product of the digits.
   - Keep a running sum of the digits.
3. After the loop ends, subtract the sum from the product.
4. Return the final result.

---

## Algorithm (Step-by-step)

1. Initialize `product = 1` and `sum = 0`.
2. While `n > 0`:
   - Get the last digit using `digit = n % 10`
   - Multiply the digit to the product → `product *= digit`
   - Add the digit to the sum → `sum += digit`
   - Remove the last digit using `n = n // 10`
3. Return `product - sum`.
