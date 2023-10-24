 binary digit = 1 bit i.e. 0, 1 
 1 byte       = 8 bits 
 1 kb         = 2^10 bytes 

# ASCII table:
  A - 65 - 1000001
  B - 66 - 
  C
  D

  cout - char output
  <<   - insertion operator
  >>   - extraction opertor

  int    - how much byte it takes? 4 bytes = 32 bits 
  char   - 1 byte
  float  - 4 byte
  double - 8 byte

  Negative no! How to store? 
  5 - 101 in binary
 -5 - First we need to take 2's complement

  2's complement
    a. Find 1's complement i.e. replace 1 with O and 0 with 1 
       like in above ex. 5 -> 1's = 010
    b. Add 1 in 1's complement result
       010
        +1
       ---
       011
       ---  

Memory is allocated to every byte i.e. if we have int array of size 5 assuming first byte is allocated a address of 500 then next would be 504, next would be 508 and so on.

# STL(STANDARD TEMPLATE LIBRARY)

  maxinum int value = INT_MAX

  VECTOR - a.size() => gives no of elements in vector
           a.capacity() => gives vector length  

  ARRAY  - sort(arr, arr + n);
  VECTOR - sort(a.begin(), a.end())
           reverse sort -> sort(a.rbegin(), a.rend()); or sort(a.begin(), a.end(), greater<int>())   

 FOREACH LOOP - for(auto x : arr) 
                    cout << x << " ";

 VAR - auto
    
 VECTOR USER DEFINED SIZE & USER INITIALIZE VALUE - vector<int> a(size, initialize);  
                                                                                      -------------------
                                                    ex - vector<int> a(5, 3) =>      | 3 | 3 | 3 | 3 | 3 |
                                                                                      -------------------
                                                                                       0   1   2   3   4

                                                         a.capacity() => 5 
                                                         a.push_back(7);
                                                         a.capacity() => 10

  2D VECTOR
    
    vector<vector<int> > a(rows, vector<int>(cols, initialize))                                                       

  SORTING IN 2D ARRAY

    a => 3 2 5
         7 8 1
         1 4 3 

    sort(a.begin(), a.end()) => 1 4 3
                                3 2 5  
                                7 8 1 

    for(int i = 0; i < a.size(); i++)     2 3 5
        sort(a[i].begin(), a[i].end()) => 1 7 8
                                          1 3 4

  * CHAR ARRAY
    
    EX 1:
        char arr[10]                       
        cin >> arr 
        
        i/p = navdeepmor 
        abort => AS LAST PLACE IS RESERVE FOR '\0'
                because at 10th position it need to add \0 for indicating last value to print but in out case we asked r at 10th.

                '\0' - NULL CHAR

        i/p = navdeepmo 
         ----------------------------------------
        | n | a | v | d | e | e | p | m | o | \0 |
         ----------------------------------------    

        i/p = navd
         ----------------------------------------
        | n | a | v | d | \0 |   |   |   |   |   |
         ---------------------------------------- 

        ABOVE CASE IS NOT SAME IF WE ARE POINTING EACH POSITION WHAT VALUE TO ADD
        for(int i = 0; i < 10; i++)
            cin << arr[i];

        for(int i = 0; i < 10; i++) 
            cout << arr[i];

    EX 2:
        char a[10];

        for(int i = 0; i < 10; i++) 
            cin >> a[i];
        
        i/p = navd

        cout << a; => navd?84#%! => because it didn't know till when it have to print char thus priniting all the char in array of length 10.

 REVERSE A STRING

    string str = "navd";
    reverse(str.begin(), str.end()); => "dvan"

 IGNORE CHAR

    string str = "navdeep \"here\""; 
    cout << str => navdeep "here"
                   c++ ignores char after \

    str = "navdeep \\here\\";  
    cout << str => navdeep \here\

 POINTER:

  Byte addressable => 1 byte is assigned an address
   -----------------------
  |  |  |  |  |  |  |  |  | 
   -----------------------  
   8 bit = 1byte

   ----------                      --------------------
  | | | | ... 32 or 64 bit   ->   |  |  |  |  |  |  | ... 32 bit
   ---------- depend on OS         --------------------
    p                                      m  

  int *p;
  int m = 7;
  p = &m     => assigning address of m. Here & is used to fetch the address of variable
  *p = -9    => change the value at address / value of m 
  cout << p  => address of m
  cout << *p => value of m

  ------------------------------------------------------------------------------

  class Tryhere {
      public:
      void printArr(int *arr, int n) {
          for(int i = 0; i < n; i++) {
              cout << *(arr + i) << " ";
              // OR cout << arr[i] << " ";
          }
      }
      
      // call by address
      public:
      void swap(int *a, int *b) {
          int temp = *a;
          *a = *b;
          *b = temp;
      }
      
      // call by reference
      public:
      void swap(int &a, int &b) {
          int temp = a;
          a = b;
          b = temp;
      }
      
      public:
      void reverseArr(int *arr, int n) {
          int st = 0, ed = n - 1;
          while(st < ed) {
              swap(arr + st, arr + ed); // call by address
              // OR swap(*(arr + st), *(arr + ed));  // => call by reference / call by value
              st++; ed--;
          }
      }
  };

  int main() {
      int a[7] = {2, 9, -7, 4};
      // cout << a;  // address of arr
      int n = sizeof(a) / sizeof(a[0]);
      
      Tryhere ob;
      ob.printArr(a, n);
      ob.reverseArr(a, n);
      cout << endl;
      ob.printArr(a, n);
  }
    
  ------------------------------------------------------------------------------

1. Reference variable:
                                           ----
    int i = 20;                    i ->   | 20 |                        
    int &j = i;                    j ->    ----

    int arr[4] = {3, 7, -1, 9};                            
    cout << arr;              [LINE 1]
    cout << &arr;             [LINE 2]
    cout << &arr[0];          [LINE 3]
    // o/p of LINE 1, LINE 2 and LINE 3 is same

  2D ARRAY:

    int arr[3][4];
    cout << arr;              // OR cout << arr[0] OR &arr OR &arr[0] OR &arr[0][0] OR *arr OR &(*arr[0])  => give the address of 1st row of the array
    cout << **arr;            // OR cout << arr[0][0] OR *arr[0]
    cout << &(*(arr + 0))     // OR (arr + 0)
    cout << ((*arr) + 1)      // OR &arr[0][1]
    cout << (*(arr + 1) + 1)  // OR arr[1][2]
    
    arr[i][j] = *(*(arr + i) + j)

                                       ---- 
    int num = 11              num ->  | 11 |
                              100      ----
                      
    cout << *(&num)           // OR num  => 11
    cout << &(*100)           // OR 100  => 100
                                      ----  
    int *p = &num;            num -> | 11 |
    p is a variable of type   100     ----
    pointer which point to            -----
    int type                   p  -> | 100 | 
                              600     -----

    int *x = &p                => WRONG as x is a variable of type pointer which point to a int type but we try putting address of p which is hexadecimal type
                                      -----
                                x -> | 600 |
                               800    -----
  
  DOUBLE POINTER

    int  **x = &p              => CORRECT, x is a variable of type pointer which point to a pointer & that pointer is pointing to an int type      

  TRIPLE POINTER

    int ***t = &x;

  char c = 'a';
  char *r = &c;
  char **s = &r;

  ------------------------------------------------------------------------------

  int col = 4;
  class Tryhere {
      public:
      void print2dArr(int (*a)[4], int row) {
          for(int i = 0; i < row; i++) {
              for(int j = 0; j < col; j++) {
                  cout << a[i][j] << " ";
              }
              cout << endl;
          }
      }  

      public: 
      void increment2dArr(int a[][], int row, int col) {
          for(int i = 0; i < row; i++) {
              for(int j = 0; j < col; j++) {
                  cout << ++a[i][j] << " ";
              }
              cout << endl;
          }
      }  
  };

  int main() {
      int arr[3][4] = {{3, 11}};
      
      Tryhere ob;
      ob.print2dArr(arr, 3);
      cout << endl;
      ob.increment2dArr(arr, 3, 4);
      return 0;
  }

  ------------------------------------------------------------------------------

- CREATE VARIABLE IN HEAP

    int *p = new int;
    *p = -9;

  p | 104  |    104 |  -9  |
     ------          ------
      stack           heap

- 2D ARRAY
    ---       |       |        ---------------    3x4   
   |   | -->  |  ptr0 |  -->  |   |   |   |   |   
    ---       |       |        ---------------
     p        |  ptr1 |        ---------------
              |       |  -->  |   |   |   |   |
               -------         ---------------
                               ---------------
                              |   |   |   |   |
                               --------------- 

    int **p = new int *[3];
    for(int i = 0; i < 3; i++) {
        p[0] = new int[4];
    }

  ------------------------------------------------------------------------------

  class Tryhere {
    public:
    void print2dArr(int **ptrArr, int row, int col) {
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                cout << (*(*ptrArr + i) + j) << " ";
            }
            cout << endl;
        }
    }
    
    public:
    void printArr(int *p, int n) {
        for(int i = 0; i < n; i++) {
            cout << *p + i << " ";
        }
      }
  };

  int main() {
      /*
      int **p = new int *[3];
      for(int i = 0; i < 3; i++) {
          p[0] = new int[4] { 7, 6, -1, 5};
      }
      */
      
      int *p = new int[3] {3, 5, 7};
      /*
      for(int i = 0; i < 3; i++) {
          cout << *p + i << " ";
      }
      */
      
      Tryhere ob;
      //ob.printArr(p, 3);
      //ob.print2dArr(p, 3, 4);
      
      return 0;
  }      

  ------------------------------------------------------------------------------

# Oops:
  HW:
    1. Padding 
    2. Alignment


  class Account {
    int AccNo;
    string Name;
  }

  Account *p = new Accout();
  (*p).AccNo = 10003644;  // OR p->AccNo = 10003644
  (*p).Name = "Navdeep";  // OR p->Name = "Navdeep"


  class Account {
    int AccNo;
    string Name;

    public:
    Account(int Account, string Name) {
      this->Account = Account;  // OR this-> point to the calling object
      this->Name = Name;
    }
  }


  class Account {
    int AccNo;
    string Name;

    ~Account() {
      // use this to release memory
      // static memory is release by c++
      // dynamic memory or memory allocation inside heap need to be released intentionally
    }
  }

  int main() {
    Account *p = new Account;
    delete p;  // destructor called
    return 0;
  }


  Encapsulation:
  Abstraction:


# LinkList:

  class Node {
    public:
      int data;
      Node *next;
  };

  int main() {
    Node *first = new Node;
    first->data = 19;
    return 0;
  }


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