# 🧩 2598. Smallest Missing Non-negative Integer After Operations

## 📘 Problem Statement

You are given a 0-indexed integer array nums and an integer value.

In one operation, you can add or subtract value from any element of nums.

For example, if nums = [1,2,3] and value = 2, you can choose to subtract value from nums[0] to make nums = [-1,2,3].
The MEX (minimum excluded) of an array is the smallest missing non-negative integer in it.

For example, the MEX of [-1,2,3] is 0 while the MEX of [1,0,3] is 2.
Return the maximum MEX of nums after applying the mentioned operation any number of times.

<!-- ---

## 📤 Input Format

- First line: Integer `t` — number of test cases `(1 ≤ t ≤ 1000)`  
- For each test case:
  - Line 1: Two integers `n` and `x` `(1 ≤ n ≤ 10⁵, 1 ≤ x ≤ 10⁹)`  
  - Line 2: `n` integers `a₁, a₂, …, aₙ` `(1 ≤ aᵢ ≤ 10⁹)`

It is guaranteed that the sum of all `n` across test cases does not exceed `10⁵`.

---

## 📤 Output Format

For each test case, output two integers: -->


---

## 🧮 Example

### Example 1

### INPUT
nums = [1,-10,7,13,6,8],
value = 5

### Output
4

---

## ⚡ Notes

One can achieve this result by applying the following operations:
- Add value to nums[1] twice to make nums = [1,0,7,13,6,8]
- Subtract value from nums[2] once to make nums = [1,0,2,13,6,8]
- Subtract value from nums[3] twice to make nums = [1,0,2,3,6,8]
The MEX of nums is 4. It can be shown that 4 is the maximum MEX we can achieve.

---

### Example 2

### INPUT
nums = [1,-10,7,13,6,8],
value = 7

### Output
2

---

## ⚡ Notes

One can achieve this result by applying the following operation:
- subtract value from nums[2] once to make nums = [1,-10,0,13,6,8]
The MEX of nums is 2. It can be shown that 2 is the maximum MEX we can achieve.

---

