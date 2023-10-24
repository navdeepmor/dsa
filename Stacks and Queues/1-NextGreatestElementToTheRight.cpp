#include<iostream>
#include<stack>

using namespace std;

class Solution {
    /*
         ------------------------------------
        | 2 | 9 | 5 | 3 | 1 | 12 | 6 | 8 | 7 |
         ------------------------------------
          0   1   2   3   4    5   6   7   8
              i     

                 12  12  12   -1   8  -1  -1
 
           5
          12  
         ____
          st 
    */
    public:
    void nextLargerElement(int arr[], int n, int res[]) {
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            if(st.empty()) {
                res[i] = -1;
            } else {
                res[i] = st.top();
            }
            
            st.push(arr[i]);
        }
    }
};

int main() {
    cout << "Enter the size of array:\n";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements for the array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution ob;
    int res[n];
    ob.nextLargerElement(arr, n, res);

    for(int i = 0; i < n; i ++) {
        cout << res[i] << " ";
    }

    return 0;
}