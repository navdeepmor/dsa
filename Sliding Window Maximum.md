Stack:
            0 1  2  3 4 5 6 7 8
    nums = [1,3,-1,-3,5,3,6,7], k = 3
              i    

     ngr = [1,4, 4, 4,6,6,7,8] // index of next greater element to right

    |  1  |
    |  4  |
    |  6  |
    |  7  |
     -----
     stack

    vector<int> winMax(n - k + 1);
    int j = 0;
    for(int i = 0; i <= n - k; i++) {
        if(j < i) j = i;
        while(ngr[j] < i + k) {
            j = ngr[j];
        }
        winMax[i] = j;
    }

    TC: O(n) amortized
    SP: O(n)

Deque:
    