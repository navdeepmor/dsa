 binary digit = 1 bit i.e. 0, 1 
 1 byte       = 8 bits 
 1 kb         = 2^10 bytes 

# PREREQUISITES

- INT MAX 
  int value = INT_MAX

  - ASCII table:
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

- IGNORE CHAR
  string str = "navdeep \"here\"";  // c++ ignores char after \
  cout << str => navdeep "here"

  str = "navdeep \\here\\";  
  cout << str => navdeep \here\

- CHAR NULL CHECK
  char ch;
  if(ch == '\0') {}

# STL(STANDARD TEMPLATE LIBRARY)

- VECTOR SIZE
  VECTOR - a.size() => gives no of elements in vector
           a.capacity() => gives vector length  

- SORT
  ARRAY  - sort(arr, arr + n);
  VECTOR - sort(a.begin(), a.end())
           reverse sort -> sort(a.rbegin(), a.rend()); or sort(a.begin(), a.end(), greater<int>())   

- FOREACH LOOP
  for(auto x : arr)  // auto - VAR
    cout << x << " ";
    
- INITIALIZE VECTOR WITH SIZE & VALUE 
  vector<int> a(size, initialize);  
                                    -------------------
  ex - vector<int> a(5, 3) =>      | 3 | 3 | 3 | 3 | 3 |
                                    -------------------
                                      0   1   2   3   4
  a.capacity() => 5 
  a.push_back(7);
  a.capacity() => 10

- 2D VECTOR
  vector<vector<int> > a(rows, vector<int>(cols, initialize))                                                       

- SORTING IN 2D ARRAY
  a => 3 2 5
       7 8 1
       1 4 3 

  sort(a.begin(), a.end()) => 1 4 3
                              3 2 5  
                              7 8 1 

  for(int i = 0; i < a.size(); i++)     2 3 5
      sort(a[i].begin(), a[i].end()) => 1 7 8
                                        1 3 4

- CHAR ARRAY   
  - EX 1:
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
  - EX 2:
    char a[10];

    for(int i = 0; i < 10; i++) 
        cin >> a[i];
    
    i/p = navd

    cout << a; => navd?84#%! => because it didn't know till when it have to print char thus priniting all the char in array of length 10.

- REVERSE A STRING
  string str = "navd";
  reverse(str.begin(), str.end()); => "dvan"

- POINTER:
  Byte addressable => 1 byte is assigned an address
  8 bit = 1byte

   ----------                      --------------------
  | | | | ... 32 or 64 bit   ->   |  |  |  |  |  |  | ... 32 bit
   ---------- depend on OS         --------------------
    p                                      m  

  int* p;
  int m = 7;
  p = &m      => assigning address of m. Here & is used to fetch the address of variable
  *p = -9     => change the value at address / value of m 
  cout << p   => address of m
  cout << *p  => value of m

- CALL BY ADDRESS VS CALL BY REFERENCE
  class Tryhere {
      public:
      void printArr(int* arr, int n) {
          for(int i = 0; i < n; i++) {
              cout << *(arr + i) << " ";
              // OR cout << arr[i] << " ";
          }
      }
      
      // call by address
      public:
      void swap(int* a, int* b) {
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
      void reverseArr(int* arr, int n) {
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

- REFERENCE VARIABLE:
                                          ----
  int i = 20;                    i ->   | 20 |                        
  int& j = i;                    j ->    ----

  int arr[4] = {3, 7, -1, 9};                            
  cout << arr;              [LINE 1]
  cout << &arr;             [LINE 2]
  cout << &arr[0];          [LINE 3]
  // o/p of LINE 1, LINE 2 and LINE 3 is same

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

  int** p = new int*[3];
  for(int i = 0; i < 3; i++) {
      p[0] = new int[4];
  }

  class Tryhere {
    public:
    void print2dArr(int** ptrArr, int row, int col) {
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                cout << (*(*ptrArr + i) + j) << " ";
            }
            cout << endl;
        }
    }
    
    public:
    void printArr(int* p, int n) {
        for(int i = 0; i < n; i++) {
            cout << *p + i << " ";
        }
      }
  };

  int main() {
      /*
      int** p = new int*[3];
      for(int i = 0; i < 3; i++) {
        p[0] = new int[4] { 7, 6, -1, 5};
      }
      */
      
      int* p = new int[3] {3, 5, 7};
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

- POINTER IN 2D ARRAY:

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
  int* p = &num;            num -> | 11 |
  p is a variable of type   100     ----
  pointer which point to            -----
  int type                   p  -> | 100 | 
                            600     -----

  int* x = &p                => WRONG as x is a variable of type pointer which point to a int type but we try putting address of p which is hexadecimal type
                                    -----
                              x -> | 600 |
                              800    -----

  - DOUBLE POINTER

    int** x = &p              => CORRECT, x is a variable of type pointer which point to a pointer & that pointer is pointing to an int type      

  - TRIPLE POINTER

    int*** t = &x;

    char c = 'a';
    char* r = &c;
    char** s = &r;

  - EX
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

- CREATE VARIABLE IN HEAP
  int* p = new int;
  *p = -9;

  p | 104  |    104 |  -9  |
     ------          ------
      stack           heap  

- Lower Bound
  
  >= x

  xIterator = lower_bound(arr, arr + n, x);
  xIterator = lower_bound(vect.begin(), vect.end(), x)

  xIndex = lower_bound(vect.begin(), vect.end(), x) - vect.begin()

- Upper Bound

- Max element

  int ele = *max_element(arr, arr+n);

- Array Sum

  accumulate(arr, arr + n, 0);              - array
  accumulate(vect.begin(), vect.end(), 0);  - vector


- LinkList Node
  class Node {
    public:
      int data;
      Node *next;
  };

  int main() {
    Node* first = new Node;
    first->data = 19;
    return 0;
  }

- UNORDERED SET
  unordered_set<int> s;
  for(typename unordered_set<int>::iterator itr = s.begin(); itr != s.end(); itr++) {
    cout << *itr << " ";
  }

# Binary Tree
  struct Node {
      int data;
      Node *left;
      Node *right;
      
      Node(int val) {
          data = val;
          left = right = nullptr; // OR left = right = NULL;
      }
      /*
        OR
        Node(int val) : data(val), left(nullptr), right(nullptr) {}
      */
  };

  int main() {
      Node *root = new Node(3);
      root->left = new Node(2);
      root->right = new Node(7);
      root->left->right = new Node(1);
      
      return 0;
  }

# Linkedlist in c++

    template <class K, class V>
    class Node {
        public:
        K key;
        V value;
        
        Node(K key, V value) : key(key), value(value) {}
    };

    int main() {
        list<Node<string, int>> lt;  // doubly linked list in stack
        lt.push_back(Node<string, int>("navdeep ", 2100));
        
        list<Node<string, int>> :: iterator it;
        for(it = lt.begin(); it != lt.end(); it++) {
            if(it->key == "navd") {
                cout << "I GOT THE VALUE!!";
            }
        }
        
        return 0;
    }

  # UnorderedMap
  
    #include<iostream>
    #include<cmath>

    using namespace std;

    template<class K, class V>
    class MyUnorderedMap {
        private:
        class Node {
            public: 
            K key;
            V value;
            
            Node(K key, V value) : key(key), value(value) {};
        };
        
        list<Node>* buckets;
        int n;
        int N;
        int loadingFactor;
        
        void initbuckets(int capacity) {
            buckets = new list<Node>[capacity];
            N = capacity;
        }
        
        int getBucketIndex(K key) {
            int hashVal = abs(static_cast<int>(hash<K>{}(key)));
            return hashVal % N;
        }
        
        void rehash() {
            if(n / N < loadingFactor) {
                return;
            }
            // rehashing 
            list<Node>* oldBuckets = buckets;
            initbuckets(2 * N);
            n = 0;
            for(int i = 0; i < N / 2; i++) {
                for(auto itr = oldBuckets[i].begin(); itr != oldBuckets[i].end(); ++itr) {
                    insert(itr->key, itr->value);
                }   
            }
            delete[] oldBuckets;
        }
        
        public:
        MyUnorderedMap() {
            initbuckets(4);
            n = 0;
            loadingFactor = 2;
        }
        
        void insert(K key, V value) {
            int bi = getBucketIndex(key);
            typename list<Node>::iterator itr = find(key);
            if(itr != buckets[bi].end()) {
                itr->value = value;
            } else {
                buckets[bi].push_back(Node(key, value));
                n++;
                rehash();
            } 
        } 
        
        typename list<Node>::iterator find(K key) {
            int bi = getBucketIndex(key);
            typename list<Node>::iterator itr;
            for(itr = buckets[bi].begin(); itr != buckets[bi].end(); itr++) {
                if(itr->key == key) {
                    return itr;
                }
            }
            return itr;
        }
        
        bool containsKey(K key) {
            int bi = getBucketIndex(key);
            typename list<Node>::iterator itr = find(key);
            if(itr != buckets[bi].end()) {
                return true;
            } else {
                return false;
            }
        }
        
        V remove(K key) {
            int bi = getBucketIndex(key);
            typename list<Node>::iterator itr = find(key);
            if(itr != buckets[bi].end()) {
                V val = itr->value;
                buckets[bi].erase(itr);
                n--;
                return val;
            } else {
                // return default value of type V
                return V();
            }
        }
        
        K* keyset() {
            K* arr = new K[N];
            int idx = 0;
            for(int bi = 0; bi < N; bi++) {
                for(auto itr = buckets[bi].begin(); itr != buckets[bi].end(); itr++) {
                    arr[idx++] = itr->key; 
                }
            }
            return arr;
        }
        
        int size() {
            return n;
        }
    };

    int main() {
        MyUnorderedMap<string, int>* umap = new MyUnorderedMap<string, int>();
        umap->insert("navdeep", 101);
        umap->insert("jaideep", 201);
        umap->insert("amal", 401);
        // cout << umap->containsKey("navdee") << endl;
        cout << umap->remove("navdee") << endl;
        string* arr = umap->keyset();
        int n = umap->size();
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        
        return 0;
    }
