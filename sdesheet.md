# Sliding Window & Two Pointer

  - Longest Repeating Character Replacement
      a.  s = "ABAB", k = 2
      b. s = "AABABBA", k = 1
      HINT: maxfreq

  - Binary Subarrays With Sum **
      a. nums = [1,0,1,0,1], goal = 2
                  l
                          r

                    sum = 3
                    cnt = 1+2+3+4+4

                [1,0,1,0,1], goal <= 1
                      l
                          r

                sum = 1
                cnt = 1+2+2+3+2

        HINT: <= goal
        Tc: O(2x2N)
        Sc: O(1)

  - Count number of Nice subarrays ***

    HINT: Binary Subarray with Sum

  - Number of Substrings Containing All Three Characters

    HINT: math

  - Minimum Window Substring ***
   
    HINT: 

# Binary Search [1D, 2D Arrays, Search Space]

  - BS ON 1D:

    1. Floor/Ceil in Sorted Array *

        HINT:
          lower_bound
          upper_bound implementation (slight tweak)
        
        Simillar questions:
          I.   Implement Lower Bound
          II.  Implement Upper Bound
          III. Search Insert Position
          IV.  Find the first or last occurrence of a given number in a sorted array *
          V.   Count occurrences of a number in a sorted array with duplicates *

    2. Search in Rotated Sorted Array I (unique elements) *

        Ex:
        k = 9
        [10, 11, 1, 2, 3, 4, 5, 6, 9]
          0   1  2  3  4  5  6  7  8  
          l
                                  h
                      m  

    3. Search in Rotated Sorted Array II **

        Ex:
        t = 5
        [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1]
        0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 
                  l  
                                                      h
                                m
        t = 0
        [1, 1]

    4. Minimum in Rotated Sorted Array **

        Simillar questions:
          I. Find out how many time has an array been rotated

    5. Single element in a Sorted Array **

    6. Find peak element ***

  - BS ON ANS:

    1. Find square root of a number in log n

    2. Find nth root of a number using binary search

    3. Koko Eating Bananas ***

    4. Minimum days to make M bouquets ****

    5. Capacity to Ship Packages within D Days ***

    6. Kth Missing Positive Number ****

    7. Aggressive Cows 

    8. Book Allocation Problem ***

    9. Split array - largest Sum

    10. Painter's partition

    11. Minimize Max Distance to Gas Station

# DP

# Graphs

  - Problems on BFS/DFS:

    - Word ladder - 2
      a. Remember: Why BFS? 

    - Bipartite Graph (DFS)

  - Topo Sort and Problems

    - Find eventual safe states
    
# Binary Tree

  1. Iterative Preorder, Inorder, Postorder Traversal ***

  2. Maximum path sum **

  3. Maximum Width of Binary Tree ***

  4. Minimum time to BURN the Binary Tree from a Node **

  5. Serialize and deserialize Binary Tree ***

  6. Morris Traversal - Inorder/Preorder [Threaded Binary Tree]

  

# 