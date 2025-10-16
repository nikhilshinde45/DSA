# 🧩 A. Strange Partition

## 📘 Problem Statement

You are given an array `a` of length `n`, and an integer `x`.  
You can perform the following operation **any number of times (possibly zero)**:

> Replace two **adjacent elements** of the array by their **sum**.

Each operation **reduces the array size by 1**.

The **beauty** of an array `b = [b₁, b₂, ..., bₖ]` is defined as:

\[
\text{Beauty}(b) = \sum_{i=1}^{k} \lceil \frac{b_i}{x} \rceil
\]

Your task: Determine the **minimum** and **maximum** beauty you can get by performing some operations.

---

## 📤 Input Format

- First line: Integer `t` — number of test cases `(1 ≤ t ≤ 1000)`  
- For each test case:
  - Line 1: Two integers `n` and `x` `(1 ≤ n ≤ 10⁵, 1 ≤ x ≤ 10⁹)`  
  - Line 2: `n` integers `a₁, a₂, …, aₙ` `(1 ≤ aᵢ ≤ 10⁹)`

It is guaranteed that the sum of all `n` across test cases does not exceed `10⁵`.

---

## 📤 Output Format

For each test case, output two integers:


---

## 🧮 Example

### Input
2
3 3
3 6 9
3 3
6 4 11


### Output
6 6
7 8

---

## ⚡ Notes

- In the first test case, the beauty of the array does not change regardless of operations.  
- In the second test case:
  - Keeping the array as `[6, 4, 11]` → beauty = 8 (maximum)  
  - Merging `4` and `11` → `[6, 15]` → beauty = 7 (minimum)

---
