# 🧩 3217. Delete Nodes From Linked List Present in Array

## 📘 Problem Statement

You are given an array of integers nums and the head of a linked list. Return the head of the modified linked list after removing all nodes from the linked list that have a value that exists in nums.

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
 nums = [1,2,3], head = [1,2,3,4,5]


### Output
Output: [4,5]

---

## ⚡ Notes
Remove the nodes with values 1, 2, and 3.

---

### Example 2

### INPUT
Input: nums = [1], head = [1,2,1,2,1,2]

### Output
Output: [2,2,2]

---

## ⚡ Notes

Remove the nodes with value 1.

---

### Constraints:
1 <= nums.length <= 105
1 <= nums[i] <= 105
All elements in nums are unique.
The number of nodes in the given list is in the range [1, 105].
1 <= Node.val <= 105
The input is generated such that there is at least one node in the linked list that has a value not present in nums.