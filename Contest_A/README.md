# 🧩 A. Beautiful Average

## 📘 Problem Statement

You are given an array `a` of length `n`.

Your task is to find the **maximum possible average value** of any **subarray** of `a`.

---

### 🧮 Definition

For any indices `l, r` such that `1 ≤ l ≤ r ≤ n`,  
the **average** of the subarray `a[l … r]` is defined as:

\[
\text{avg}(l, r) = \frac{1}{r - l + 1} \sum_{i=l}^{r} a_i
\]

Your goal is to find:

\[
\max_{1 ≤ l ≤ r ≤ n} \text{avg}(l, r)
\]

---

### 🧩 Subarray Definition

An array `b` is a **subarray** of an array `a` if it can be obtained by deleting several  
(possibly zero or all) elements from the **beginning** and/or **end** of `a`.  
Every array is a subarray of itself.

---

## 📥 Input Format

- The first line contains an integer `t` — the number of test cases.  
  (1 ≤ t ≤ 10⁴)

- Each test case contains:
  - One integer `n` — the length of the array. (1 ≤ n ≤ 10)
  - A line with `n` integers `a₁, a₂, …, aₙ` (1 ≤ aᵢ ≤ 10)

---

## 📤 Output Format

For each test case, print a single integer —  
the **maximum average** of any subarray of the given array.

It is guaranteed that the answer is always an **integer**.

---

## 🧩 Example

### Input

3  
4  
3 3 3 3  
5  
7 1 6 9 9  
5  
3 4 4 4 3  


### Output
3  
9  
4  