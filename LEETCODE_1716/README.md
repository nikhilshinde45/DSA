# 🧩 1716. Calculate Money in Leetcode Bank

## 📘 Problem Statement

Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.

He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.

Given n, return the total amount of money he will have in the Leetcode bank at the end of the nth day.

 

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
n = 4  

### Output
10 


---

## ⚡ Notes

After the 4th day, the total is 1 + 2 + 3 + 4 = 10.

---

### Example 2

### INPUT
n=10
### Output
37

---

## ⚡ Notes

After the 10th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4) = 37.  
Notice that on the 2nd Monday, Hercy only puts in $2.

---

### Constraints:
1 <= n <= 1000