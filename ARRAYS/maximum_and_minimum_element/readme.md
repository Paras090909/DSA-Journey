# 🔢 Find Maximum and Minimum in an Array

In this guide, we understand how to find the **maximum** and **minimum** elements from a given array using a simple and efficient approach.

---

## 💡 Problem Statement

Given an array of integers, find the:

- 🔺 Maximum element  
- 🔻 Minimum element  

---

## 🧠 Logic & Approach

We traverse the array from start to end and use two variables to keep track of:

- `maxElement` → stores the maximum value found so far  
- `minElement` → stores the minimum value found so far  

### 🔄 Steps:

1. Initialize `maxElement` and `minElement` with the first element of the array.
2. Loop through the array from index 1 to the end.
3. For each element:
   - If it's greater than `maxElement`, update `maxElement`.
   - If it's smaller than `minElement`, update `minElement`.

---

## ✅ Output Example

For an input array: `[4, 2, 9, 1, 5, 6]`  
The output will be:

- **Maximum Element:** 9  
- **Minimum Element:** 1  
