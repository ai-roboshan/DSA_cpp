# Bubble Sort Program (C++)

This is a simple C++ console application that sorts a list of integers using the Bubble Sort algorithm.  
The program prompts the user to enter how many items they want to sort, collects the values, sorts them, and then displays the sorted output.

---

## Features

- Accepts user input for the number of elements  
- Uses the Bubble Sort algorithm  
- Displays sorted results in ascending order  
- Beginner-friendly and easy to understand  

---

## How Bubble Sort Works

Bubble Sort is a simple comparison-based sorting algorithm.  
It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

### Step-by-Step Process

1. Start at the beginning of the array.  
2. Compare adjacent elements (`arr[j]` and `arr[j + 1]`).  
3. If the left element is larger, swap them.  
4. Continue until the end of the array. After one pass, the largest element will be at the end.  
5. Repeat for the remaining unsorted part of the array.  
6. Continue until no swaps are needed.

### Example Walkthrough

Given the array:  
`[4, 1, 3, 9, 2]`

- **Pass 1:** Compares and swaps until 9 moves to the end  
- **Pass 2:** Ensures 4 moves to correct position  
- **Pass 3:** Places 3 properly  
- **Pass 4:** Fine-tunes minor misplacements  
- Final Sorted Array: `[1, 2, 3, 4, 9]`

### Time and Space Complexity

- **Worst Case:** O(n²)  
- **Average Case:** O(n²)  
- **Best Case:** O(n)  
- **Space Complexity:** O(1)  
- **Stable:** Yes  

---





