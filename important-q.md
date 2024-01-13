
# Max negative value in cpp

   #include<limits>

   numeric_limits<int> limits;
   limits.min();

# Max in an array 

   #include<algorithm>

   int *max = std::max_element(A, A + N); // max_element takes start index & end index of array, return reference to max element
   int maxValue = *max; // de-reference

# Sum in an array

   #include<numeric>

   int sum = accumulate(A, A + N, 0);

# Find duplicates in an array
    [2, 3, 1, 2, 3]
     0  1  2  3  4
     
    int count[N] = {0};
    c++ to initialize every value in an array to 0, we can use above way.
    Please note that it will NOT WORK for any other value except 0.

    2 - 1 0 
    3 - 1 1 => 2 xor 3 = 0 1 = 1
    1 - 0 1 => 1 xor 1 = 0 0 = 0
    2 - 1 0 => 0 xor 2 = 1 0 = 2
    3 - 1 1 => 2 xor 3 = 0 1 = 2 

# Sorting Algorithm
   Selection Sort:
   Bubble Sort:

# Subarray with given sum

   array is unsorted but array values are positive

   [1, 2, 3, 7, 5]
    0  1  2  3  4

    1  3  6 13 18
    i  
                j

    x = 12
    a[0] - a[j] = 13

   hint: two pointer

# Union of two sorted array

   hint: two pointer

# Container with most water

   hint: two pointer

# 2D Array
   
   Concept: Row Major 
   
# Rotate Image
   
# Search in 2D Matrix

# Search in 2D Matrix II

 Hint: Like two pointer we need to see how we can make decision for moving so that value would increase at one side & decrease at other side.

# Search a 2D Matrix

# Binary String

    Hint: count number of ones in the string 
          nC2 => possible combination of 2 ones out of n

# Anagram of string

# Min Number of Flips

# Sum of two larger number

# Length of the longest substring without repeating characters

# Longest Common Prefix in an Array

# Sum of two large numbers

# Longest Prefix Suffix ***
                                                   _            
        B  A  A  B  A  B  C  C  A  C   B   A   B   A  C
        0  1  2  3  4  5  6  7  8  9  10  11  12  13
                                                      i 
    
        _
        A B A B C A
        0 1 2 3 4 5

  LPS:  0 0 1 2 0 1
          j  


        A B A B C A
        0 1 2 3 4 5

  LPS:  0 0 1 2 0 1
          p         i


        a  b  c  d  a  b  c  h  e  a   b   c   d   a   b
        0  1  2  3  4  5  6  7  8  9  10  11  12  13  14
    
  lps:  0  0  0  0  1  2  3  0  0  1   2   3   4   5   3
                          p
                                                          i

  int lps[4] = {0};
  lps[0] = 0;
  int p = 0, i = 1;

  while(i < 4) {
    if(s[p] == s[i]) {
      lps[i] = p + 1;
      p++; 
      i++;
    } else {
      if(p == 0) {
        lps[i] = 0;
        i++
      } else {
        p--;
      }
    }
  }

# Find the Index of the First Occurrence in a String ***

        a  b  c  d  a  b  c  e  h  a   b   c   d   a   b
        0  1  2  3  4  5  6  7  8  9  10  11  12  13  14

  lps:  0  0  0  0  1  2  3  0  0  1   2   3   0   0   0
                 p
                                           i

# Check if string is rotated by two places

                         a m a z o n

  reverse rotated by 2 : a z o n a m
  
                         a  m  a  z  o  n  $  a  z  o   n   a   m
                         o  1  2  3  4  5  6  7  8  9  10  11  12
                  
                  lps:   0  0  1  0  0  0  0  1  0  0   0   1   2
                               p                               
                                                                   i 

  
     rotated by 2      : o n a m a z

                         a  m  a  z  o  n  $  o  n  a   m   a   z
                         o  1  2  3  4  5  6  7  8  9  10  11  12
                  
                  lps:   0  0  1  0  0  0  0  0  0  1   2   3   4
                                     p
                                                                   i 

                   rotate = n - lps = 6 - 4 = 2 
                         

                         g  e  e  k  s  f  o  r  g  e   e   k   s   $   g   e   e   k   s   g   e   e   k   s   f   o   r 
                         0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26 

                  lps:   0  0  0  0  0  0  0  0  1  2   3   4   5   0   1   2   3   4   5   1   2   3   4   5   6   7   8
                                                 p
                                                                                                                           i

                          r r r $ r r r 
                          0 1 2 3 4 5 6

                    lps:  0 1 2 0 1 2 3
                                p 
                                        i 

                          a c t y r c t $ r c  t  t  y  a  c
                          0 1 2 3 4 5 6 7 8 9 10 11 12 13 14

                    lps:  0 0 0 0 0 0 0 0 0 0  0  0  0  1  2
                              p
                                                             i
                          
        
# Minimum characters to be added at front to make string palindrome

    a b c
    i 
    j

    c b


    t i c t k g
    i 
      j

    g k t c i


    a a c e c a a a
        i
              j

    e f r e i t f e
        i
              j

    e f t 

        a a c e c a a a 
        0 1 2 3 4 5 6 7
  
  lps:  0 1 0 0 0 1 2 2
            p
                        i

# Longest Common Substring 

# Count Inversions

  Hint: merge sort

# House Robber II

# Combination Sum

# Count ways to express a number as sum of powers *

# Permutations of given String

# Letter Combination of a Phone Number

# Find all possible palindromic partitions of a String