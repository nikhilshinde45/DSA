# 🧩 2011. Final Value of Variable After Performing Operations

## 📘 Problem Statement

There is a programming language with only four operations and one variable X:

++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

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
operations = ["--X","X++","X++"]  

### Output
1

---

## ⚡ Notes

The operations are performed as follows:
Initially, X = 0.
--X: X is decremented by 1, X =  0 - 1 = -1.
X++: X is incremented by 1, X = -1 + 1 =  0.
X++: X is incremented by 1, X =  0 + 1 =  1.

---

### Example 2

### INPUT
operations = ["++X","++X","X++"]

### Output
3

---

## ⚡ Notes

The operations are performed as follows:
Initially, X = 0.
++X: X is incremented by 1, X = 0 + 1 = 1.
++X: X is incremented by 1, X = 1 + 1 = 2.
X++: X is incremented by 1, X = 2 + 1 = 3.

---

### Constraints:
1 <= operations.length <= 100
operations[i] will be either "++X", "X++", "--X", or "X--". 