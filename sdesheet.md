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

# Heap

  - How to identify if its a heap problem ?
    
    1. K
    2. Smallest / largest

  - Which heap to choose ?

    a. K + smallest -> max heap
    b. K + largest -> min heap

      |     |  --> remove all k above
      |-----|
      |     |  --> kth largest, where k = 2 in this case
      |     |  
       -----
       min heap

  - Why k ?

    All heap questions are sorting questions like we will be given an array of size n,
    best sorting complexity - nlogn i.e. merge sort but if we are given k then we create 
    an heap of size k and this complexity reduces to nlogk. 

       --------------------------------
      |   |   |    |    |    |    |    |
       --------------------------------
                    n size

            |     | 
            |-----|
            |     | k size
            |     |  
             -----

  - Implementation

  - STL

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
                                     -------

    type def pair<int, pair<int, int>> ppi;  

  - Questions

    1. Sort a k sorted array or nearly sorted [Medium]

    2. K closest number [Medium] *

    3. Top k frequent number 



# DP [Enhanced recusion]

  - Pre-requisites:

    How to identify if its a DP problem ?

    Approach 

      Recusion -> memoize -> top-down

        Recusion and how to write ?
        
          1. Identify.
            
            a. Try all possible ways
            b. Count / Best way

          2. Express everything in terms of index.
          
          3. Explore possibilities.

          4. Base case.

  - Types:

      1. 0-1 knapsack (6)
        a. Subset sum 
        b. Equal sum partition
        c. Count of subset sum
        d. Min subset sum difference
        e. Target sum
        f. No of subset with given diff.
      2. Unbounded knapsack (5)
      3. Fibonacci (7)
      4. LCS (15)
      5. LIS (10)
      6. Kadane's algorithm (6)
      7. Matrix chain multiplication (7)
      8. DP on Trees (4)
      9. DP on Grid (14)
     10. Others (5)

    knapsack Type 
        i. Fractional knapsack (Greedy) 
       ii. 0/1 knapsack
      iii. Unbounded knapsack


  - Questions:
    
    Buy and Sell Stocks - II          | (DP-36)

      HINT:
        Infinite Transactions Allowed

      Optimal:
        Greedy

      Good to know
        i.  Buy and Sell Stocks - One Transaction Allowed
        ii. Buy and Sell Stocks - Two Transaction Allowed

    Buy and Sell Stocks - III         | (DP-37)

    Longest Increasing Subsequence    | (DP-41)

      HINT:
        question says get longest increa. sub-sequence which mean out of all the subsequence return the one with longest incres. subseq.
        to get every possible subseq. num at every index have choice to come or not - this is taking us to recursion. 

      Optimal:
        Single parse with binary search

      Good to know

# Graphs

  - Problems on BFS/DFS:

    1. Word ladder - 2
      a. Remember: Why BFS? 

    2. Bipartite Graph (DFS)

  - Topo Sort and Problems

    2. Find eventual safe states
    
# Binary Tree

  1. Iterative Preorder, Inorder, Postorder Traversal ***

  2. Maximum Sum Path in Binary Tree ***

  3. Boundary Traversal of a Binary Tree **

  4. Vertical Order Traversal of Binary Tree ***

  5. Maximum Width of Binary Tree ***

  6. Minimum time to BURN the Binary Tree from a Node **

  7. Serialize and deserialize Binary Tree ** [revise string methods]

  8. Morris Traversal - Inorder/Preorder [Threaded Binary Tree] ***

# Stack and Queues

  1. Implement Min Stack

  2. Postfix to Prefix Conversion

  3. Postfix to Infix

  4. Next Greater Element II

  5. Trapping Rainwater ***

  6. Sum of subarray minimum ***

  7. Sum of Subarray Ranges ***

  8. Remove K Digits **

  9. Largest Rectangle in Histogram **

  10. Maximal Rectangle ***

  11. Sliding Window Maximum [NEW APPROACH] **

      #include<deque>
      deque<int> dq;
      dq.push_back(9);
      dq.push_front(2);

      dq.front();
      dq.back();

      dq.pop_front();
      dq.pop_back();

  12. Online Stock Span ***

  13. LFU Cache **** (TODO: Implementation)

# Bit Manipulation

  - Pre-requisites:

    a. Rights most set bit in O(1):

      12 - 1 1 0 0
             r
             m
             s
             b

           0 0 1 1 - 1's
               + 1
          --------
           0 1 0 0 - 2's (12)
        
        code:

          return num & -num;

        Note:
          -num (2's)

    b. Count no of set bit in Num in O(no of set bit in Num):

      12 - 1 1 0 0

        code:

           int cnt = 0;
           while(num > 0) {
              num -= rightMostSetBit(num);
              cnt++;
           } 

    c. Left most set bit in O(1):
      
      log2(Num)

       8 - 1 0 0 0 => log2(8)  = 3
      12 - 1 1 0 0 => log2(12) = 3.

    d. 1's complement
      ~num 

  # Good to konw

    - DP:

      1. Parent problem is recusion. So all the ways which helps to identify recurion will be use to identify DP also.

      2. Ask optimal - min/max/largest 

        - Examples
          Max profit.
          Maximum value of an expression.


      - How to identify if its a recurion problem?

        1. Choice  

          - Examples
            If we should include a element in a knapsack or not.

        2. Overlaping sub-problems

          - How to identify overlaping sub-problems?
            Most of cases whenever recursive function do two calls. If there is one function call in recurion
            then we would never see overlaping sub-problems. 