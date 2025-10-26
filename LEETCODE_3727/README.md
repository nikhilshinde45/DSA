# 🧩 3727. Maximum Alternating Sum of Squares

## 📘 Problem Statement

You are given an integer array nums. You may rearrange the elements in any order.

The alternating score of an array arr is defined as:

score = arr[0]2 - arr[1]2 + arr[2]2 - arr[3]2 + ...
Return an integer denoting the maximum possible alternating score of nums after rearranging its elements.

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
nums = [1,2,3]
### Output
12

---

## ⚡ Notes

A possible rearrangement for nums is [2,1,3], which gives the maximum alternating score among all possible rearrangements.

The alternating score is calculated as:

score = 22 - 12 + 32 = 4 - 1 + 9 = 12

---

### Example 2

### INPUT
 nums = [1,-1,2,-2,3,-3]

### Output
16

---

## ⚡ Notes
A possible rearrangement for nums is [-3,-1,-2,1,3,2], which gives the maximum alternating score among all possible rearrangements.

The alternating score is calculated as:

score = (-3)2 - (-1)2 + (-2)2 - (1)2 + (3)2 - (2)2 = 9 - 1 + 4 - 1 + 9 - 4 = 16

 

---

### Constraints:
1 <= nums.length <= 105
-4 * 104 <= nums[i] <= 4 * 104