# 📚 DSA Learning Log

Welcome to my **Data Structures and Algorithms (DSA)** learning log!  
This repository contains concise notes, time complexities, space complexities, and code snippets for DSA concepts.  
The aim is to develop a solid problem-solving foundation for coding interviews and competitive programming.

---

## 🕒 Time & Space Complexity

### ✅ What is Time Complexity?
Time complexity defines **how the execution time of an algorithm grows with respect to the input size** `N`.

- It measures the **rate at which time taken increases w.r.t input size**.
- Interviewers prioritize understanding **time complexity** over code quality during interviews.
- Assume the **worst-case scenario**, unless specified otherwise.

### ✅ Big-O Notation
Big-O describes the **upper bound (worst-case)** performance of an algorithm, abstracting away constants and less significant terms.

> Example:  
> If an algorithm runs in `3N` time, the complexity is **O(N)**.  
> Ignore constants while writing time complexity.

---

## ⏱️ Common Time Complexities

| Complexity | Description                                    | Example Algorithms                        |
|------------|------------------------------------------------|------------------------------------------|
| O(1)       | Constant time                                  | Accessing an element in an array         |
| O(log N)   | Logarithmic time                               | Binary Search                            |
| O(N)       | Linear time                                    | Linear Search                            |
| O(N log N) | Log-linear time                                | Merge Sort, Heap Sort                    |
| O(N²)      | Quadratic time                                 | Nested loops, Bubble Sort, Insertion Sort|
| O(2^N)     | Exponential time                               | Recursion without memoization (Fibonacci)|
| O(N!)      | Factorial time                                 | Permutations (e.g., Traveling Salesman Problem) |

---

## 💾 Space Complexity
Space complexity refers to **the extra space (auxiliary space)** an algorithm requires, **excluding input size**.

- Includes space used by **variables, data structures, and the call stack**.
- An optimized algorithm uses **minimal auxiliary space**.

---

## ⚡ Key Notes
- Always **optimize for time complexity** before space complexity (unless stated otherwise).
- Avoid modifying input data directly if it's used elsewhere.
- **Time complexity** reflects **scalability**, crucial for large input sizes.

---

## 📌 Topics Covered

### ✅ Hashing
- **What is Hashing?**  
  A technique to convert a range of key values into a range of indexes in an array.
  
- **Use Cases**  
  - Efficient search, insert, and delete in constant time O(1) (on average).
  - Detecting duplicates, counting frequency, etc.

- **Common Implementations**  
  - Hash Tables  
  - Hash Maps (C++ `unordered_map`, Java `HashMap`)

- **Examples**  
  - Find frequency of elements in an array.  
  - Check if a subarray with zero sum exists.

---

### ✅ Recursion (Basics)
- **What is Recursion?**  
  A function calling itself to solve smaller instances of the same problem.
  
- **Key Points**  
  - Base Case (stopping condition)  
  - Recursive Case (breaking the problem into subproblems)
  
- **Common Examples**  
  - Factorial of a number  
  - Fibonacci numbers  
  - Power of a number
  
- **Time Complexity**  
  - Depends on the number of calls. E.g., Fibonacci (without memoization) → O(2^N)

---

### ✅ Sorting Algorithms

#### 🫧 Bubble Sort
- **Algorithm**: Repeatedly compare adjacent elements and swap if they are in the wrong order.
- **Time Complexity**:  
  - Best: O(N) (when already sorted with optimized version using a `flag`)  
  - Average/Worst: O(N²)  
- **Space Complexity**: O(1)  
- **Stable**: Yes  
- **In-place**: Yes  

#### ⬇️ Insertion Sort
- **Algorithm**: Pick an element and insert it into its correct position in the sorted part of the array.
- **Time Complexity**:  
  - Best: O(N)  
  - Average/Worst: O(N²)  
- **Space Complexity**: O(1)  
- **Stable**: Yes  
- **In-place**: Yes  

#### ✅ Selection Sort
- **Algorithm**: Find the minimum (or maximum) element and swap it with the first unsorted element.
- **Time Complexity**:  
  - Best/Average/Worst: O(N²)  
- **Space Complexity**: O(1)  
- **Stable**: No  
- **In-place**: Yes  

---

## 🚀 What’s Next?

| ✅ | Time and Space Complexity |
|-----|--------------------------|
| ✅ | Hashing |
| ✅ | Basic Recursion |
| ✅ | Sorting: Bubble, Insertion, Selection |
| 🔜 | Arrays and Strings |
| 🔜 | Linked Lists |
| 🔜 | Stacks and Queues |
| 🔜 | Trees and Graphs |
| 🔜 | Recursion and Backtracking |
| 🔜 | Dynamic Programming |
| 🔜 | Advanced Problem Solving |

---

## 🤝 Contribute  
This is a **personal learning log**, but if you have suggestions or improvements, feel free to contribute!  
- Fork the repo  
- Make your changes  
- Submit a pull request  

---

## ⭐️ Star This Repo  
If you find these notes useful, please ⭐️ star the repo to support and stay updated!

---
