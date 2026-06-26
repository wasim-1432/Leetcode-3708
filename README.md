<div align="center">

# 🚀 Longest Fibonacci Subarray

<img src="https://img.shields.io/badge/Language-C%2B%2B-blue.svg" />
<img src="https://img.shields.io/badge/Time-O(n)-brightgreen.svg" />
<img src="https://img.shields.io/badge/Space-O(1)-orange.svg" />
<img src="https://img.shields.io/badge/Status-Accepted-success.svg" />

### 💻 LeetCode Solution | Arrays | Greedy | Simulation

---

⭐ If you find this repository helpful, please consider giving it a **Star**!

</div>

---

# 📖 Problem Statement

Given an array of positive integers `nums`, return the **length of the longest Fibonacci subarray**.

A Fibonacci subarray is a **contiguous sequence** where:

- ✅ Subarrays of length **1 or 2** are always Fibonacci.
- ✅ Every third (and subsequent) element equals the sum of the previous two elements.

---

## 📝 Example

### Example 1

```text
Input:
nums = [1,1,1,1,2,3,5,1]

Output:
5
```

**Explanation**

The longest Fibonacci subarray is:

```text
[1,1,2,3,5]
```

---

### Example 2

```text
Input:
nums = [5,2,7,9,16]

Output:
5
```

---

### Example 3

```text
Input:
nums = [1000000000,1000000000,1000000000]

Output:
2
```

---

# 💡 Intuition

Instead of checking every possible subarray (which is very slow), we only need to verify whether the **current element** continues the Fibonacci sequence.

If

```cpp
nums[i] == nums[i-1] + nums[i-2]
```

the current Fibonacci subarray continues.

Otherwise, we start a **new Fibonacci subarray of length 2**.

This allows us to solve the problem in **one traversal**.

---

# ⚙️ Algorithm

1. Initialize

```cpp
res = 2
len = 2
```

2. Traverse the array from index **2**.
3. Check

```cpp
nums[i-2] + nums[i-1] == nums[i]
```

4. If true
   - Increase current length.
5. Otherwise
   - Reset current length to **2**.
6. Update the maximum answer.

---

# 💻 C++ Solution

```cpp
class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int res = 2;
        int len = 2;

        for(int i = 2; i < nums.size(); i++)
        {
            if((long long)nums[i-2] + nums[i-1] == nums[i])
            {
                len++;
            }
            else
            {
                len = 2;
            }

            res = max(res, len);
        }

        return res;
    }
};
```

---

# 📊 Complexity Analysis

| Operation | Complexity |
|------------|------------|
| ⏱️ Time Complexity | **O(n)** |
| 💾 Space Complexity | **O(1)** |

---

# ✅ Dry Run

### Input

```text
nums = [1,1,2,3,5,8]
```

| Index | Value | Fibonacci Condition | Current Length |
|------:|------:|--------------------|---------------:|
| 2 | 2 | ✅ | 3 |
| 3 | 3 | ✅ | 4 |
| 4 | 5 | ✅ | 5 |
| 5 | 8 | ✅ | 6 |

**Answer = 6**

---

# 🎯 Edge Cases Covered

- ✅ Minimum array size
- ✅ Entire array is Fibonacci
- ✅ No Fibonacci sequence longer than 2
- ✅ Multiple Fibonacci subarrays
- ✅ Large integer values (`10⁹`)
- ✅ Integer overflow handled using `long long`

---

# 🛠️ Concepts Used

- 📌 Arrays
- 📌 Greedy
- 📌 Linear Traversal
- 📌 Simulation
- 📌 Overflow Handling
- 📌 Time Optimization

---

# 🏆 Performance

✅ Accepted

- ⚡ Time Complexity: **O(n)**
- 🚀 Faster than brute force solutions
- 💾 Constant extra space

---

<div align="center">

## 🌟 Connect With Me

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Connect-blue?logo=linkedin)](https://www.linkedin.com/in/mohd-wasim-49b719292/)

⭐ **If you found this repository helpful, don't forget to Star it!** ⭐

Happy Coding! 🚀💙

</div>
