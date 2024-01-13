# Is A Number Prime
    
    18
    
    2 x 9
    3 X 6
    6 x 3
    9 x 2

    49 - nearest half is 24
     
    7 x 7

    36

    2 x 18   9 x 4
    3 x 12  12 x 3
    4 x  9  18 x 2
   --------
  | 6 x  6 |
   --------  

# Rotate A Number

    n = 5 7 6 1 2 2 8 9
    k = -109

    k %= n
    k < 0 => k += n

    5 7 6 1 2 | 2 8 9

    note:
        static_cast<int>(pow(10, k))
        #include<cmath> for pow function
        pow return float

    hint: 
        quotient & divisor
    
# Gcd And Lcm

    gcd - greatest common divisor
    lcm - least common multiple

    24 - 2 x 2 x 2 x 3  
    36 - 2 x 2 x 3 x 3

    36 | 24 | 0
       | 24 |
                24 | 36 |
                   |    | 

    24 | 36 | 1
       | 12 | 
                12 | 24 | 2
                   |  0 |

# Prime Factorization Of A Number

    hint: divis * divis < n
          excep. case: 46 = 2 x 23

          try divis as 2, then 3, then 4 and when divis = 5 we would quite the loop
          but still n not equal to 1 thus if n not equal to 1 then this only one divis after square root.
                      
# Function And Arrays > Any Base Addition

    (7 7 7)8
        (1)8

    8 - 0  1  2  3  4  5  6  7  10
           
    8 in Octal = (1 0)  SINCE 8 IS NOT POSSIBLE
    9 in Octal = (1 1)
   10 in Octal = (1 2)

   1. n1 % - 7 
      n2 % - 1
   2. 7 + 1 + carry
   3. digit = (7 + 1 + carry) % 8
      carry = (7 + 1 + carry) / 8

# Rotate an array:

    --------------------
   | 2 | 3 | 7 | 11 | 4 |
    --------------------
     0   1   2    3   4
                                           |
                                        --------------------
   rotate arr elements by 1 position - | 4 | 2 | 3 | 7 | 11 |
                                        --------------------
                                         0 | 1   2   3    4
                                                | 
                                        --------------------
   rotate arr elements by 2 position - | 11 | 4 | 2 | 3 | 7 |
                                        --------------------
                                          0   1 | 2   3   4
               |                       
    --------------------
   | 2 | 3 | 7 | 11 | 4 |
    --------------------
     0   1   2 |  3   4    

               |                       
    --------------------
   | 7 | 3 | 2 | 4 | 11 |
    --------------------
     0   1   2 |  3   4                                               
   
               |                       
    --------------------
   | 11 | 4 | 2 | 3 | 7 |
    --------------------
     0   1   2 |  3   4  

# First Index And Last Index 

    Hint : Sorted array

# Sort 0 1
   [0, 1, 1, 0, 1, 1]
    0  1  2  3  4  5
    i  j

# Sort 012

    brute   - sort the array,  O(n.logn) space compl. = O(1)
    better  - Counting sort,   O(n) - but it would require two pass over array. 
    optimal - Dutch National Flag Algorithm: i, j, k, O(n)
 
# Pivot In Sorted And Rotated Array

    50  10  20  30  40
     0   1   2   3   4
         l   
         h
         m       

    40  50  10  20  30
     0   1   2   3   4
             l 
             h
             m

# Print Zigzag

# Tower Of Hanoi

# String, Dynamic String And Dynamic Array > Print All Permutations Of A String Iteratively

    a b c
    0 1 2

    3! = 6

    0:                       1:                     2:

    3 | 0 | 0   a            3| 1 | 1   b    
    2 | 0 | 0   b            2| 0 | 0   a
    1 | 0 | 0   c            1| 0 | 0   c
      | 0 |                   | 0 |

    3:                       4:                     5:


# Linked Lists For Beginners 

- Reverse Linked List (pointer Iterative)
    - Reference
         h                       t
        60 <- 20    30 -> 40 -> 50 -> null
                p     c     nbr

- Kth Node From End Of Linked List
    - Reference
         h                       t
        60 -> 20 -> 30 -> 40 -> 50 -> null
         s
                     f   


- Merge Two Sorted Linked List **
    - Reference
        c1
        10 -> 20 -> 30 -> 40 -> 50 -> null
                            
    d   c2                           
   -1 -> 7 ->  9 -> 12 -> 35 -> 45 -> 60 -> null
    p

                                p     c1                       
        10    20 -> 30    40    50    null
                            
           \  \  \     \  |  \  |  \
    d                                c2                           
   -1 -> 7 -> 9    12    35    45    60 -> null

- Merge Sort A Linked List
    - Reference
            h                           t
            10 -> 2 -> 19 -> 22 -> 3 -> 7 -> null
                    /                  \
        10 -> 2 -> 19 -> null   22 -> 3 -> 7 -> null

- Remove Duplicates In A Sorted Linked List
    - Reference
                           ____
        h                /      \                    t
        2    2 -> 2 -> 3    3 -> 5 -> 5 -> 5 -> 5 -> 5 -> null
          \ _______  /           p
                                                          c

- Odd Even Linked List
    - Reference
             ______________
    h      /                \     t         
    2 -> 8    9 -> 1 -> 5    4 -> 3 -> null
    eh        oh         \ _____ /     c
                             e    o

- K Reverse In Linked List *** 
    - HINT:
        addFirst

        11 / 3 = 3 

        0

                        10 -> 11 -> null
                            c     f

        oh                       ot            th       tt
        3 -> 2 -> 1 ->  6 -> 5 -> 4 ->         9 -> 8 -> 7

- Fold A Linked List
    - Reference
        ______________
      /     _____      \
     /    /       \
    1    2    3 -> 4 -> 5
               \ _ / 
          \ __________ /

              l    
              r
                   t

- Add Two Linked Lists ***
    - HINT:
        3    2    1     0   
        9 -> 9 -> 9 -> null

        4    3    2    1     0
        1 -> 0 -> 0 -> 0 -> null    
        

        | null(0) null(0)|   RETURN 0 AS CARRY
        | 9(1)      0(1) |   ADD WHILE MOVE DOWN *ONLY IF PLACE VALUE MATCHS 
        | 9(2)      0(2) |  
        | 9(3)      0(3) |   
        | 9(3)      1(4) |   WE WOULDN'T ADD WILL WHILE MOVE UP 
         ----------------
                stack

- Intersection Point Of Linked Lists ** 
    - Reference
                                p1
        1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> null
                          /
                9 -> 8 -> 
                                            p2

# Stacks And Queues > Duplicate Brackets
    1. ((a + b) + (c + d)) - balance
    2. (a + b) + ((c + d)) - unbalance
    
        (
        +
        ____
        st

# Stacks And Queues > Balanced Brackets

# Stacks And Queues > Next Greater Element To The Right

    ip: [2 5 9 3 1 12 6 8 7]

                                op: 5 9 12 12 12 -1 8 -1 -1

      2
      5
      9
     12      
    ____
     st

    Alternative Solution:
      - Move i from right to left

    Simillar Questions:
      - Next smallest element on the right 
      - Next greatest element on the left
      - Next smallest element on the left

# Stacks And Queues For Beginners > Stock Span

    ip: [2 5 9 3 1 12 6 8 7]
         0 1 2 3 4  5 6 7 8
                                op: 1 2 3 1  
      
      
     9[2] 
    ____
     st 

# Stacks And Queues For Beginners > Largest Area Histogram

    ip  : [ 6  2  5  4  5  1  6 ]
            0  1  2  3  4  5  6
    nsr :   1  5  3  5  5  7  7
    nsl :  -1 -1  1  1  3 -1  5
            1  5  1  3  1  7  1  
            
            6 10  5 12  5  7  6 
     
     
     5
    ____ 
     st

# Stacks And Queues For Beginners > Sliding Window Maximum

    ip  :  [ 2  9  3  8  1  7  12  6  14  4  32  0  7  19  8  12  6 ]
             0  1  2  3  4  5   6  7   8  9  10 11 12  13 14  15 16

    ngr :  [                                              15  17 17 ]  

     14
     15
    ____
     st

    k = 4

# Stacks And Queues For Beginners > Sliding Window Maximum

    Character.isDigit('5') -> true 

    1. ip: 2 + 6 * 4 / 8 - 3
               
      2            
    ____    ____
     st      st

    2. ip: 2 + ( 5 - 3 * 6 / 2 )


     -2    
    ____    ____
     st      st

# Stacks And Queues For Beginners > Infix Conversions

    ip : a * ( b - c + d ) / e
 
    /*a+-bcde  abc-d+*e/                               
    _____       ______          _____
    preSt       postSt          optSt  

# Stacks And Queues For Beginners > Postfix Evaluation And Conversions

    ip : 264*8/+3-
                  
                     
-+2/*6483  ((2 + ((6 * 4)/8)) - 3)                    
    _____       ______          _____           _____
    preSt       infixSt         value           optSt  

# Stacks And Queues For Beginners > Prefix Evaluation And Conversions

    ip: -+2/*6483
     
        n1
        n2


                                       
                                                      
                                       
((2+((6*4)/8))-3)         264*8/+3-        2                                  
    _______                ______        _____           
    infixSt                postSt        value            

# Stacks And Queues For Beginners > Merge Overlapping Interval

    6
    22  28      1   8
     1   8      5  12 
    25  27     14  19 
    14  19     22  28 
    27  30     25  27 -
     5  12     27  30 

    22 - 308
    14 - 19
    1  - 12 
    ______          
      st

# Stacks And Queues For Beginners > Smallest Number Following Pattern 

    ip: a. dddiddd

           43218765

        b. iiddd
           126543

        c. ddddiiii
           
# Stacks And Queues For Beginners > Minimum Stack - Constant Space

    ip: 10  20  5  8  2  4  11

    11
     8
  5+(5-10) = 0                                                   
     20
     10
    ____    
     st         min :  5

# Stacks And Queues For Beginners > Normal Queue

# Stacks And Queues For Beginners > Queue to Stack Adapter - Push Efficient

    ip: 10  20  5  8  2  4  11

     
    ____       ____ 
    mQue       hQue

# Stacks And Queues For Beginners > Queue to Stack Adapter - Push Efficient

    ip: 10  20  5  8  2  4  11

     
    ____      ____ 
    mSt       hSt

# Generic Tree For Beginners > Generic Tree Constructor

# Binary Tree For Beginners > Binary Tree - Constructor

# Generic Tree For Beginners > Iterative Pre, Post And Inorder In Binary Tree

    hint: stack, state

public class Main {
  public static class Node {
    int data;
    Node left;
    Node right;

    Node(int data, Node left, Node right) {
      this.data = data;
      this.left = left;
      this.right = right;
    }
  }

  public static class Pair {
    Node node;
    int state;
    Pair(Node node, int state) {
      this.node = node;
      this.state = state;
    }
  }

  public static Node construct(Integer[] arr) {
    Node root = new Node(arr[0], null, null);
    Pair rtp = new Pair(root, 1);

    Stack< Pair> st = new Stack< >();
    st.push(rtp);

    int idx = 0;
    while (st.size() > 0) {
      Pair top = st.peek();
      if (top.state == 1) {
        idx++;
        if (arr[idx] != null) {
          top.node.left = new Node(arr[idx], null, null);
          Pair lp = new Pair(top.node.left, 1);
          st.push(lp);
        } else {
          top.node.left = null;
        }
        top.state++;
      } else if (top.state == 2) {
        idx++;
        if (arr[idx] != null) {
          top.node.right = new Node(arr[idx], null, null);
          Pair rp = new Pair(top.node.right, 1);
          st.push(rp);
        } else {
          top.node.right = null;
        }
        top.state++;
      } else {
        st.pop();
      }
    }
    return root;
  }

  public static void display(Node node) {
    if (node == null) {
      return;
    }
    String str = "";
    str += node.left == null ? "." : node.left.data + "";
    str += " <- " + node.data + " -> ";
    str += node.right == null ? "." : node.right.data + "";
    System.out.println(str);

    display(node.left);
    display(node.right);
  }

  public static void iterativePrePostInTraversal(Node node) {
    Stack < Pair> st = new Stack< >();
    Pair rtp = new Pair(node, 1);
    st.push(rtp);
    String pre = "";
    String in = "";
    String post = "";

    while (st.size() > 0) {
      Pair top = st.peek();
      if (top.state == 1) {  //pre,s++,left
        pre += top.node.data + " ";
        top.state++;
        if (top.node.left != null) {
          Pair lp = new Pair(top.node.left, 1);
          st.push(lp);
        }
      }
      else if (top.state == 2) { //in,s++,right
        in += top.node.data + " ";
        top.state++;
        if (top.node.right != null) {
          Pair rp = new Pair(top.node.right, 1);
          st.push(rp);
        }
      }
      else {        //post,pop
        post += top.node.data + " ";
        st.pop();
      }
    }
    System.out.println(pre);
    System.out.println(in);
    System.out.println(post);

  }
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    Integer[] arr = new Integer[n];
    String[] values = br.readLine().split(" ");
    for (int i = 0; i < n; i++) {
      if (values[i].equals("n") == false) {
        arr[i] = Integer.parseInt(values[i]);
      } else {
        arr[i] = null;
      }
    }

    Node root = construct(arr);
    iterativePrePostInTraversal(root);
  }

}

# Hashmap And Heap For Beginners 

- Longest Consecutive Sequence Of Elements *

- Write Hashmap **  
    - HINT: 
        HM - ArrayList<LinkedList<>> | key --> HashFn --> bucket index
    - TIME COMPLEXITY:
        - avg case: 
            O(lambada)
        - worse case: 
            O(n) - that is all key, value pair were put in same buckets only when all of pair gets the same HC   
    - JAVA:
    public static class HashMap<K, V> {
        private class HMNode {
            K key;
            V value;

            HMNode(K newKey, V newValue) {
                this.key = newKey;
                this.value = newValue;
            }
        }

        private int size = 0;
        private LinkedList<HMNode>[] buckets; // buckets.length = N

        public HashMap() {
            initBuckets(4);
            size = 0;
        }

        private void initBuckets(int N) {
            buckets = new LinkedList<>[];
            for(int bi = 0; bi < N; bi++) {
                buckets[i] = new LinkedList<>();
            }
        }

        public void put(K key, V value) throws Exception {
            int bi = hashFn(key);
            int di = getIdxWithinBucket(bi, key);
            
            if(di == -1) {
                buckets[bi].add(new HMNode(key, value));    // case: insert
                size++;
            } else {
                HMNode node = buckets[bi].get(di)           
                node.value = value;                         // case: update
            }

            double lambda = size * 1.0 / buckets.length;    // size is multi. with 1.0 convert it into double
            if(lambda > 2.0) {
                rehash();
            }
        }

        private void rehash() throws Exception {
            LinkedList<HMNode>[] oldBkts = buckets;

            initBuckets(oldBts.length * 2);
            size = 0;

            for(int bi = 0; bi < oldBkts.length; bi++) {
                for(HMNode node: oldBkts[i]) {
                    put(node.key, node.value);
                }
            }
        }

        private int hashfn(K key) {
            int hc = key.hashCode();
            return Math.abs(hc) % buckets.length;
        }

        private int getIdxWithinBucket(int bi, K key) {
            int di = 0;
            for(HMNode node: buckets[bi]) {
                if(node.key.equals(key)) {
                    return di;
                }
                di++;
            }

            return -1;
        }

        public V get(K key) {
            int bi = hashFn(key);
            int di = getIdxWithinBucket(bi, key);

            if(di == -1) {
                return null;
            } else {
                HMNode node = buckets[bi].get(di);
                return node.value;
            }
        }

        public boolean containsKey(K key) {
            // ?
        }

        public V remove(K key) throws Exception{
            int bi = hashfn(key);
            int di = getIdxWithinBucket(int bi, K key);

            if(di == -1) {
                return null;
            } else {
                HMNode node = buckets[bi].remove(di);
                size--;
                return node;
            }
        }

        public ArrayList<K> keySet() throws Exception {
            ArrayList<K> keys = new ArrayList<>();

            for(int bi = 0; bi < buckets.length; bi++) {
                for(HMNode node: buckets[bi]) {
                    keys.add(node.key);
                }
            }

            return keys;
        }

        public int size() {
            return size;
        }
    }
    - CPP:
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

- Write Priority Queue Using Heap **
    - Heap Properties: 
        1. HOP? - Parent higher priority then child 
        2. CBT?
    - JAVA:
    public static class PriorityQueue {
        ArrayList<Integer> data;

        public void add(int val) {
            data.add(val);
            upheapify(data.size() - 1);
        }

        private void upheapify(int i) {
            if(i == 0) return;

            int pi = (i - 1) / 2;
            if(data.get(i) < data.get(pi)) {
                swap(i, pi)
                upheapify(pi);
            }
        }

        private void swap(int i, int j) {
            int tmp = data.get(i);
            data.set(i, data.get(j));
            data.set(j, tmp);
        }

        public int remove() {
            if(data.size() == 0) {
                System.out.println("Underflow");
                return -1;
            }

            int rootVal = data.get(0);
            swap(0, data.size() - 1);
            downheapify(0);
            return rootVal;
        }

        private void downheapify(int pi) {
            int mi = pi;
            int li = (2 * pi + 1);
            int ri = (2 * pi + 2);

            if(li < data.size() && data.get(li) < data.get(mi)) {
                mi = li;
            } else if(ri < data.size() && data.get(ri) < data.get(mi)) {
                mi = ri;
            }

            if(mi != pi) {
                swap(pi, mi);
                downheapify(mi);
            }
        }
    }
    - CPP:
        #include<functional>
        using namespace std;
        template<class T, typename Compare = less<T>>
        class MyPriorityQueue {
            vector<T> arr;
            Compare comparator;
            
            void downheapify(int pi) {
                int li = (2 * pi) + 1;
                int ri = (2 * pi) + 2; 
                int mini = pi;
                
                if(li < size() && comparator(arr[li], arr[mini])) {
                    mini = li;    
                }
                if(ri < size() && comparator(arr[ri], arr[mini])) {
                    mini = ri; 
                }
                
                if(mini != pi) {
                    swap(arr[mini], arr[pi]);
                    downheapify(mini);
                }
            }
            
            void upheapify(int i) {
                if(i == 0) {
                    return; 
                }
                int pi = (i - 1) / 2;
                if(comparator(arr[i], arr[pi])) {
                    swap(arr[i], arr[pi]);
                    upheapify(pi);
                }
            }
            
            public:
            MyPriorityQueue() = default;
            
            template<typename... Args>
            void push(Args&&... args) {
                arr.push_back(T(forward<Args>(args)...));
                upheapify(size() - 1);
            }
            
            T pop() {
                if(size() == 0) {
                    throw out_of_range("Priority queue is empty"); 
                }
                int value = arr[0];
                swap(arr[0], arr[size() - 1]);
                arr.pop_back();
                downheapify(0);
                return value;
            }
            
            T top() const {
                if(size() == 0) {
                    throw out_of_range("Priority queue is empty");
                }
                return arr[0];
            }
            
            bool empty() const {
                return arr.empty();
            }
            
            int size() const {
                return arr.size(); 
            }
        };
        int main() {
            MyPriorityQueue<int, greater<int>> pq; 
            pq.push(43);
            pq.push(14);
            pq.push(7);
            cout << pq.top() << endl;
            std::cout << "Hello World!\n";
        }

- Heap - Comparable Vs Comparator **
    - JAVA:
    public static class PriorityQueue<T> {
        ArrayList<T> data;

        public PriorityQueue() {
            data = new ArrayList<>();
        }

        private boolean isSmaller(int i, int pi) {
            return data.get(i) - data.get(pi);
        }

        public PriorityQueue(int[] arr) {
            data = new ArrayList<>();
            for(int val: arr) {
                data.add(val);
            }

            for(int i = data.size() / 2 - 1; i >= 0; i--) {
                downheapify(i);
            }
        }

        private void downheapify(int i) {
            int mini = i;

            int li = 2 * i + 1;
            if(li < data.size() && isSmaller(i, pi)) {
                mini = li;
            } 

            int ri = 2 * i + 2;
            if(ri < data.size() && data.get(ri) < data.get(mini)) {
                mini = ri;
            }

            if(mini != i) {
                swap(i, mini);
                downheapify(mini);
            }
        }

        public void add(int val) {
            data.add(val);
            upheapify(data.size() - 1);
        }

        private void upheapify(int i) {
            if(i == 0) {
                return;
            }

            int pi = (i - 1) / 2;
            if(isSmaller(i, pi)) {
                swap(i, pi);
                upheapify();
            }

            // internally above comparsion works as
            // Comparable prt = (Comparable) data.get(pi);
            // Comparable child = (Comparable) data.get(i);
            // if(child.compareTo(prt) < 0) {  // true means that this(child) is smaller                  
            //    swap(i, pi);
            //    upheapify(pi);
            // }
        }
    }
    - CPP:
    #include<functional>
    using namespace std;
    class Node {
        public:
        int position;
        int value;
        
        Node(int position, int value) : position(position), value(value) {};
        
        // COMPARABLE
        bool operator>(const Node& other) const {
            return value > other.value;
        }
        
        bool operator<(const Node& other) const {
            return value < other.value;
        }
    };
    template<typename T, typename Compare = less<T>>
    class MyPriorityQueue {
        vector<T> arr;
        Compare comparator;
        
        void upheapify(int ci) {
            if(ci == 0) {
                return;
            }
            int pi = (ci - 1) / 2;
            if(comparator(arr[ci], arr[pi])) {
                swap(arr[ci], arr[pi]);
                upheapify(pi);
            }
        }
        
        void downheapify(int pi) {
            int li = (2 * pi) + 1;
            int ri = (2 * pi) + 2;
            int mini = pi;
            
            if(li < size() && comparator(arr[li], arr[mini])) {
                mini = li;
            }
            if(ri < size() && comparator(arr[ri], arr[mini])) {
                mini = ri;
            }
            
            if(mini != pi) {
                swap(arr[mini], arr[pi]);
                downheapify(mini);
            }
        }
        
        public:
        MyPriorityQueue() = default;
        
        MyPriorityQueue(vector<T> vec) {
            // inefficent heap construction from array of values
            /*
            for(int i = 0; i < vec.size(); i++) {
                push(vec[i]); 
            }
            */
            
            // efficient heap construction
            for(int i = 0; i < vec.size(); i++) {
                arr.push_back(vec[i]); 
            }
            for(int i = vec.size() / 2 - 1; i >= 0; i--) {
                downheapify(i);
            }
        }
        
        template<typename... Args>
        void push(Args... args) {
            arr.push_back(T(forward<Args>(args)...));
            upheapify(size() - 1);
        }
        
        T pop() {
            if(size() == 0) {
                throw out_of_range("Priority queue is empty");
            }
            int value = arr[0];
            swap(arr[0], arr[size() - 1]);
            arr.pop_back();
            downheapify(0);
            return value;
        }
        
        T top() const {
            if(size() == 0) {
                throw out_of_range("Priority queue empty");
            }
            return arr[0];
        }
        
        bool empty() const {
            return arr.empty();
        }
        
        size_t size() const {
            return arr.size();
        }
    };
    // COMPARATOR
    struct StringLengthComparator {  
        bool operator() (const string& str1, const string& str2) {
            return str1.size() > str2.size();
        }
    };
    /*
    struct NodeComparator {
        bool operator() (Node node1, Node node2) const {
            return node1.position < node2.position;
        }
    };
    */
    int main() {
        //vector<string> arr{"map", "list", "tree", "link", "heap", "array"};
        //MyPriorityQueue<string, StringLengthComparator>* pq = new MyPriorityQueue<string, StringLengthComparator>(arr);
        //cout << pq->top() << endl;
        
        vector<Node> arr{Node(0, 3), Node(1, 8), Node(2, 5), Node(3, 17), Node(4, 2), Node(5, 11)};
        MyPriorityQueue<Node, greater<Node>>* pq = new MyPriorityQueue<Node, greater<Node>>(arr);
        cout << pq->top().value << endl;
        return 0;
    }
    - How to use Comparable, Comparator with c++ stl priority_queue:
    using namespace std;
    class Node {
        public:
        int position;
        int value;
        
        Node(int position, int value) : position(position), value(value) {}; 
        
        // comparable
        bool operator>(const Node& otherNode)  const {
            return otherNode.position > this->position;
        }
        
        bool operator<(const Node& otherNode) const {
            return  otherNode.position < this->position;
        }
    };
    // comparator
    struct NodeComparator {
        bool operator()(const Node& node1, const Node& node2) const {
            return node2.position > node1.position;
        }
    };
    int main() {
        vector<Node> arr{Node(0, 3), Node(1, 8), Node(2, 5), Node(3, 17), Node(4, 2), Node(5, 11)};
        priority_queue<Node, vector<Node>, greater<Node>>* pq = new priority_queue<Node, vector<Node>, greater<Node>>(arr.begin(), arr.end());
        //priority_queue<Node, vector<Node>, NodeComparator>* pq = new priority_queue<Node, vector<Node>, NodeComparator>(arr.begin(), arr.end());
        cout << pq->top().value << endl;
        return 0;
    }

- K Largest Elements *  
    - TIME COMPLEXITY:
        O(nlog(k))?
    - NOTE:
        priority_queue<int, vector<int>, greater<int>> pq;  // greater<int> - min heap

- Sort K-sorted Array *
    - TIME COMPLEXITY:
        O(nlog(k)) 
    - SPACE COMPLEXITY: 
        O(k)

- Median Priority Queue ** 
    - HINT: 
        2 pq - 1. MAX pq 2. Min pq & get median from larger size of pq                        
    - TIME COMPLEXITY:
        O(log(n)) 
    - SPACE COMPLEXITY
        O(1) 

- Merge K Sorted Lists
    - TIME COMPLEXITY:
        O(nlog(k))
    - SPACE COMPLEXITY:
        O(k)

- Efficient Heap Construction **
    - HINT: 
        downheapify()  WHY? upheapify - O(nlog(n)) | downheapify - O(n) 
    - JAVA:
    public static class PriorityQueue {
        ArrayList<Integer> data;

        public PriorityQueue() {
            data = new ArrayList<>();
        }

        public PriorityQueue(int[] arr) {
            data = new ArrayList<>();
            for(int val: arr) {
                data.add(val);
            }

            for(int i = data.size() / 2 - 1; i >= 0; i--) {
                downheapify(i);                                                         // O(n)
            }
        }

        public void add(int val) {
            data.add(val);
            upheapify(data.size() - 1);                                                 // O(nlog(n)) - last row of element does large work
        }
    }
    - CPP:
    #include<functional>
    using namespace std;
    template<typename T, typename Compare = less<T>>
    class MyPriorityQueue {
        vector<T> arr;
        Compare comparator;
        
        void upheapify(int ci) {
            if(ci == 0) {
                return;
            }
            int pi = (ci - 1) / 2;
            if(comparator(arr[ci], arr[pi])) {
                swap(arr[ci], arr[pi]);
                upheapify(pi);
            }
        }
        
        void downheapify(int pi) {
            int li = (2 * pi) + 1;
            int ri = (2 * pi) + 2;
            int mini = pi;
            
            if(li < size() && comparator(arr[li], arr[mini])) {
                mini = li;
            }
            if(ri < size() && comparator(arr[ri], arr[mini])) {
                mini = ri;
            }
            
            if(mini != pi) {
                swap(arr[mini], arr[pi]);
                downheapify(mini);
            }
        }
        
        public:
        MyPriorityQueue() = default;
        
        MyPriorityQueue(vector<T> vec) {
            // inefficent heap construction from array of values
            /*
            for(int i = 0; i < vec.size(); i++) {
                push(vec[i]); 
            }
            */
            
            // efficient heap construction
            for(int i = 0; i < vec.size(); i++) {
                arr.push_back(vec[i]); 
            }
            for(int i = vec.size() / 2 - 1; i >= 0; i--) {
                downheapify(i);
            }
        }
        
        template<typename... Args>
        void push(Args... args) {
            arr.push_back(T(forward<Args>(args)...));
            upheapify(size() - 1);
        }
        
        T pop() {
            if(size() == 0) {
                throw out_of_range("Priority queue is empty");
            }
            int value = arr[0];
            swap(arr[0], arr[size() - 1]);
            arr.pop_back();
            downheapify(0);
            return value;
        }
        
        T top() const {
            if(size() == 0) {
                throw out_of_range("Priority queue empty");
            }
            return arr[0];
        }
        
        bool empty() const {
            return arr.empty();
        }
        
        size_t size() const {
            return arr.size();
        }
    };
    int main() {
        vector<int> arr{4, 7, 12, 41, 9};
        MyPriorityQueue<int, greater<int>>* pq = new MyPriorityQueue<int, greater<int>>(arr);
        cout << pq->top() << endl;
        return 0;
    }



# Graphs for Beginners > Get Connected Components Of A Graph
       
    hint: DFS 

        .    .    .
        0 __ 3 __ 4
        |    |    |  \
        1 __ 2    5 __ 6
        .    .    .    .  

        lts : [] 
        lt  : [0 1 2 3 4 5 6]

        .   .   .
        0   3   4
        |   |   |  \
      . 1   2   5 __ 6
            .   .    .

        lts : [[0 1] [2 3] [4 5 6]]
        lt  :   

# Graphs for Beginners > BREADTH FIRST TRAVERSAL

    hint: queue

        .    .    .
        0 __ 3 __ 4
        |    |    |  \
      . 1 __ 2    5 __ 6
             .    .    .

        count = 7

                6 4
        __
        q

# Graphs for Beginners > Is Graph Cyclic

    hint: DFS - parent

        .    .
        0 __ 3 __ 4
        |    |    |  \
      . 1 __ 2    5 __ 6 
             .   

        4 3
                2 3
        __
        q

--------------------------------------------------------------------

    Dijkstra:

          25 . 2  .             
      . 0 __ 3 __ 4
     10 |  10|  3 |  \ 8
      . 1 __ 2    5 __ 6
          10 .    . 3  .

                            BFT: r m* w a

                            o/p: 
                                0 via 0     @ 0 
                                1 via 01    @ 10
                                2 via 012   @ 20
                                3 via 03    @ 25
                                4 via 034   @ 27
                                5 via 0345  @ 30
                                6 via 03456 @ 33
    
    6|0346|35    
    _____
      pq

--------------------------------------------------------------------

    PRIM's ALGO.

          25 . 2  .            
      . 0 __ 3 __ 4
     10 |  10|  3 |  \ 8
      . 1 __ 2    5 __ 6
          10 .    . 3  .

                            BFT: r m* w a

                            o/p: 
                                1 - 0 @ 10
                                2 - 1 @ 10
                                3 - 2 @ 10
                                4 - 3 @ 2
                                5 - 4 @ 3
                                6 - 5 @ 3

    3|0|25    
    6|4|8 
    _____
      pq


        0   1   2   3   4   5   6   7
        1   0   1   1   1   2   3   2

# Graphs for Beginners > Is Graph Bipartite

             .    .    
      . 0 __ 3 __ 4
        |    |    |  \
      . 1 __ 2    5 __ 6
             .    .    . 

# Dynamic Programming And Greedy For Beginners > Target Sum Subsets - Dp

    hint: cricket match

        0   1   2   3   4   5   6   7   8   9   10
    0   1   0   0   0   0   0   0   0   0   0   0    
    4   1   0   0   0   1   0   0   0   0   0   0 
    3   1   0   0   1   1   0   0   1   0   0   0
    7   1   0   0   1   1   0   0   1   0   0   1
    1   1   
    5   1
    
                                                /       \
                                               4         -                                                  4
                                            /     \   /     \
                                           7       4 3       -                                              3
                                        /     \  /
                                                                                                            7


# Dynamic Programming And Greedy For Beginners > Coin Change Permutations

    k = 7

        2 3 5 6

        0   1   2   3   4   5   6   7
        1   0   1   1   1   3   3   5


        0      1      2      3      4      5      6      7
        --------------------------------------------------
        1      0      1      1      1      3      3      5
        -------------------------------------------------- 
        _           _ 2    _ 3  _ 2 2  _ 3 2  _ 2 2 2  _ 3 2 2  
                                                       _ 2 3 2
                                       _ 2 3  _ 3 3    _ 5 2

                                       _ 5    _ 6



# Dynamic Programming And Greedy For Beginners > Count Binary Strings

        0       1       2       3       4       5       6
        _________________________________________________
end 0   0       1       1       2
                [0]     [10]    [010]
                                [110]
          
end 1   0       1       2       3
                [1]     [01]    [101]
                        [11]    [011]
                                [111]


# Dynamic Programming And Greedy For Beginners > Count Encodings

        2       3       1       0       1       1
        _________________________________________
        1       2       2       2        2      4   
        _________________________________________
        b       bc      bca     bcj     bcja    bcjaa
                w       wa      wj      wja     wjaa

                                                bcjk
                                                wjak



# Dynamic Programming And Greedy For Beginners > Maximum Sum Non Adjacent Elements

                                      a = 1 + 2a+  
                                      b = a + 2a+b+
                                      c = a+b+ + 2a+b+c+


              a       b       c         a'        b'      c'
    a+      1       1        1          3         3         
            [a]     [a]     [a]         [a]       [a]  
                                        [aa']     [aa']
                                        [a']      [a']  

    a+b+    0       1       1           1         5       
                    [ab]    [ab]        [ab]      [ab']
                                                  [aa'b']
                                                  [a'b']

                                                  [abb']

                                                  [ab]    

    a+b+c+  0       0       1           1         1  
                            [abc]       [abc]     [abc]  

# Dynamic Programming And Greedy For Beginners > Maximum Sum Non Adjacent Elements

        5    10    10    100    5     6
    i   5    10    15    110    20    116 
    e   0    5     10    15     110   110 

# Dynamic Programming And Greedy For Beginners > Friends Pairing

    n = 4

        4 = 3(1 has decided not to pair up) + 2(1 can pair up with any of three) 

                                [1234]
                    1-[234]                 1-2[34] 
                                            1-3[24]
                                            1-4[23]

        1   2   4   10  26           
        1   2   3   4   5   6   7   8   

            [12]                             [123]
        1-[2]   1-2                     1-[23]      1-2[3]
                                                    1-3[2]


# Dynamic Programming And Greedy For Beginners > Partition Into Subsets

                                                4|3
                                        14-2-3   13-4   12-3-4
                                        1-24-3   1-23-4
                                        1-2-34
                                    3|3                 3|2
                                   1-2-3          13-2       12-3
                                                  1-23    
                                                2|2             2|1
                                                1-2             12 
                                                            1|1     1|0
                                                            1       0

        0    1       2       3       4      
    0   0    0       0       0       0
    1   0    1       1       1       1
    2   0    0       1       3       7
    3   0

# Dynamic Programming And Greedy For Beginners > Buy And Sell Stocks - K Transactions Allowed

    hint: k trans - table

        9    6    7    6    3    8
    0   0    0    0    0    0    0  
    1   0    0    1    1    1    5
    2   0    0    1    1    1    6
    3   0    0    1    1    1    6
    4   0    0    1    1    1    6

        p1   p2   p3   p4   p5   p6
        v00  v01  v02  v03  v04  v05
  k-1   v10  v11  v12  v13  v14  v15
    k   v20  v21  v22  v23  v24  v25

                                 v24

                                 v14 + p6 - p5
                                 v13 + p6 - p4
                                 v12 + p6 - p3
                                 v11 + p6 - p2
                                 v10 + p6 - p1
                                  


# Dynamic Programming And Greedy For Beginners > Buy And Sell Stocks - Two Transactions Allowed

    hint: 2 half at a pt.

    arr:  11    6    7    19    4    1    6    18   4
           0    0    1    13   13   13   13    17  17
          17   17   17    17   17   17   12     0   0  
          17   17   18    30   30   30   25    17  17