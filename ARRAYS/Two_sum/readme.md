# 🧠 LeetCode Problem: Two Sum

## 🔗 Problem Link  
[Two Sum - LeetCode](https://leetcode.com/problems/two-sum/description/)

---

## 📘 Problem Description

Given an array of integers `nums` and an integer `target`, return **indices** of the two numbers such that they **add up to the target**.

You may assume that each input has **exactly one solution**, and you may not use the same element twice.

Return the answer in **any order**.

---

## 🧾 Example

**Input:**  
nums = [2, 7, 11, 15]  
target = 9

**Output:**  
[0, 1]

**Explanation:**  
nums[0] + nums[1] = 2 + 7 = 9

---

## 💡 Constraints

- 2 ≤ nums.length ≤ 10⁴  
- -10⁹ ≤ nums[i] ≤ 10⁹  
- -10⁹ ≤ target ≤ 10⁹  
- Only **one valid answer** exists.

---

## 🧠 Approach 

1. **Brute Force (Simple)**  
   - Check every pair of elements.
   - See if their sum equals the target.

2. **Optimized using Hash Map / Dictionary**
   - Store previously visited numbers with their indices.
   - For each element, check if `target - current number` already exists in the map.
   - If yes, return their indices.
---
