# 🔍 Linear Search in an Array

In this guide, we understand how to perform **Linear Search** in an array to find the index of a target element.

---

## 💡 Problem Statement

Given an array of integers and a target value, search for the target in the array.  
If the target is found, return its index. If not, return -1.

---

## 🧠 Logic & Approach

Linear Search is a simple method where we check each element of the array one by one.

### 🔄 Steps:

1. Start from index 0 and go till the end of the array.
2. For each element:
   - Compare it with the target.
   - If it matches, return the current index.
3. If the loop ends and no match is found, return -1.

---

## ✅ Output Example

For an input array: `[3, 7, 1, 9, 5]`  
And target: `9`  
The output will be:

- **Element found at index:** 3

If the target is `4`, then:

- **Element not found, return:** -1
