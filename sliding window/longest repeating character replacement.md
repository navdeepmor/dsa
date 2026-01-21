
    s = "AAABBCCB", k = 2

    [1 2 2 0 ..  0]
     0 1 2 3 .. 26
     A B C
         m

    A A A B B C C B 
    0 1 2 3 4 5 6 7
                i
        j

    int start = 0;
    vector<int> frequencyMap(26, 0);
    int maxFrequency = 0;
    int longestSubstringLength = 0;
    
    for (int end = 0; end < s.length(); end++) {
        // Convert character to index (0-25)
        int currentChar = s[end] - 'A';
        
        // Update frequency of current character
        frequencyMap[currentChar]++;
        
        // Update max frequency in current window
        maxFrequency = max(maxFrequency, frequencyMap[currentChar]); // ONLY NEED MAX FREQ. NOT MAX F. CHAR
        
        // Check if current window is valid
        // Window length - maxFrequency = number of characters that need to be replaced
        if (end - start + 1 - maxFrequency > k) {
            // Window is invalid, move start pointer
            int outgoingChar = s[start] - 'A';
            frequencyMap[outgoingChar]--;
            start++;
        }
        
        // Update longest substring length
        // The window is guaranteed to be valid at this point
        longestSubstringLength = max(longestSubstringLength, end - start + 1);
    }

    TC: O(n)
    SC: O(m), m = 26

    s = "AABABBA", k = 1