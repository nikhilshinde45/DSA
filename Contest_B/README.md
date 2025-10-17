# 🧩 Binary Subsequence and Palindrome

## 📘 Problem Statement

You are given a **binary string** `s` of length `n`.

Your task is to find **any subsequence** `p` of `s` such that:

1. The subsequence `p` is **non-decreasing**  
   (that is, every character in `p` is not greater than the next one).

2. Let `x` be the string obtained by **removing all characters of `p`** from `s`,  
   while preserving the order of the remaining characters.  
   Then, `x` must be a **palindrome**.

You only need to output **one valid subsequence** `p` that satisfies both conditions.  
If no such subsequence exists, output `-1`.

> 💡 Note:  
> - An **empty string** is both **non-decreasing** and a **palindrome**.

---

## 🧠 Definitions

- **Binary string:**  
  A string consisting only of `'0'` and `'1'`.

- **Subsequence:**  
  A sequence that can be derived from another string by deleting some (possibly none) characters  
  without changing the order of the remaining characters.

- **Palindrome:**  
  A string that reads the same forward and backward.  
  For string `t = t₁t₂…tₘ`, it must satisfy `tᵢ = tₘ₋ᵢ₊₁` for all `1 ≤ i ≤ m`.

---

## 📥 Input Format

- The first line contains an integer `t` — the number of test cases.  
  (1 ≤ t ≤ 3000)

- Each test case consists of:
  - One integer `n` — the length of the string.  
    (1 ≤ n ≤ 10)
  - A binary string `s` of length `n`.

---

## 📤 Output Format

For each test case:

- If a valid subsequence `p` exists:
  - Print one line with an integer `k` — the length of `p`.
  - Print another line with `k` **distinct indices** `i₁ i₂ … iₖ` (1 ≤ i₁ < i₂ < … < iₖ ≤ n)  
    representing the positions of characters in `s` that form `p`.

- Otherwise, print a single line containing `-1`.

> The indices should be printed in the order they appear in `s`.

---

## 🧩 Example

### Input

5  
3  
010  
3  
001  
5  
00111  
8  
11010011  
6  
100101  


### Output

0  
2  
2 3  
5  
1 2 3 4 5  
2  
3 4  
2  
5 6  