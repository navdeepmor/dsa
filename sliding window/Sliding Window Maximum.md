Monotonic Stack:

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


Monotonic Deque:
    
            0 1  2  3 4 5 6 7 8
    nums = [1,3,-1,-3,5,3,6,7], k = 3
                    i    

        --------------
    dq   | 1 | 2 |     // index       
        --------------
        
    deque<int> dq;
    vector<int> res;
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(nums[dq.front()]);
    for (int i = k; i < nums.size(); i++) {
        if(dq.front() == i - k) {
            dq.pop_front();
        }
        while (!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }

        dq.push_back(i);
        res.push_back(nums[dq.front()]);
    }

    TC: O(n)
    SP: O(k)