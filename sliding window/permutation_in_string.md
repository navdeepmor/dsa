
    s1 = "abd", s2 = "eidbdaoo"

    s1 [1 1 0 1    0]
        0 1 2 3 .. 26

    s2 [1 0 0 2 1    0]
        0 1 2 3 4 .. 26
    
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
            return false;

        vector<int> s1arr(26, 0), s2arr(26, 0);

        // Initial window
        for (int i = 0; i < s1.length(); i++) {
            s1arr[s1[i] - 'a']++;
            s2arr[s2[i] - 'a']++;
        }

        // Sliding window
        for (int i = 0; i < s2.length() - s1.length(); i++) {
            if (matches(s1arr, s2arr))
                return true;

            s2arr[s2[i + s1.length()] - 'a']++;
            s2arr[s2[i] - 'a']--;
        }

        return matches(s1arr, s2arr);
    }

    bool matches(const vector<int>& s1arr, const vector<int>& s2arr) {
        for (int i = 0; i < 26; i++) {
            if (s1arr[i] != s2arr[i])
                return false;
        }
        return true;
    }

    TC: O(l2) amortized
    SC: O(1) amortized


Optimal:
    
    if (s1.length() > s2.length())
        return false;

    vector<int> s1arr(26, 0), s2arr(26, 0);

    // Initial window
    for (int i = 0; i < s1.length(); i++) {
        s1arr[s1[i] - 'a']++;
        s2arr[s2[i] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (s1arr[i] == s2arr[i])
            count++;
    }

    // Sliding window
    for (int i = 0; i < s2.length() - s1.length(); i++) {
        if (count == 26)
            return true;

        int r = s2[i + s1.length()] - 'a';
        int l = s2[i] - 'a';

        // Add right character
        s2arr[r]++;
        if (s2arr[r] == s1arr[r]) {
            count++;
        } else if (s2arr[r] == s1arr[r] + 1) {
            count--;
        }

        // Remove left character
        s2arr[l]--;
        if (s2arr[l] == s1arr[l]) {
            count++;
        } else if (s2arr[l] == s1arr[l] - 1) {
            count--;
        }
    }
    return count == 26;

    TC: O(l2)
    SC: O(1)
