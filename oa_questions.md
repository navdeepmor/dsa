# Amazon OA SDE 2 | Oct - 24

 - Q1. 

    The management team at one of Amazon's warehouse facilities is planning to install a smart lighting system.
    A total of n smart bulbs will be installed along a straight line. A smart bulb automatically turns OFF if the sum of the brightness of the bulbs in front of it is greater than its own brightness. The bulbs can be rearranged in any order. The team wants to find out the minimum number of bulbs that will turn OFF across all possible permutations of the sequence of bulbs.
    Given an array, brightness, that represents the brightness of the bulbs placed along a straight line, find the minimum number of bulbs that will turn OFF if the bulbs can be rearranged in any order.
    Note: All bulbs are turned ON initially. They turn OFF (in order, from left to right) based on the condition mentioned above.
    Example
    Suppose, n = 5, brightness = [2, 1, 3, 4, 3]
    Some of the possible arrangements of bulbs, their final states, and the corresponding number of OFF bulbs are as follows -


    Arrangement | Final State | OFF Count
    [2, 1, 3, 4, 3] [T, T, T, F, F] = 3
    [2, 3, 4, 1, 3] [T, T, T, F, F] = 3
    [3, 2, 4, 1, 3] [T, T, T, F, F] = 3
    [4, 3, 3, 2, 1] [T, T, F, F, F] = 4
    [1, 2, 3, 4, 3] [T, T, T, T, F] = 2
    [3, 3, 1, 4, 2] [T, T, T, F, F] = 3


    Note: T = ON state, F = OFF state


    One of the optimal arrangements is [1, 2, 3, 4, 3]. The minimum number of OFF bulbs in the final state is 2.

    S1:

    #include <vector>
    #include <algorithm>

    int getMinimumOffBulbs(std::vector<int>& brightness) {
        std::sort(brightness.begin(), brightness.end());
        int runningSum = 0;
        int offCount = 0;

        for (int b : brightness) {
            if (runningSum > b) {
                offCount++;
            } else {
                runningSum += b;
            }
        }

        return offCount;
    }

- Q2.

    Amazon has multiple delivery centers and delivery warehouses all over the world! The world is represented by a number line from - 10 ^ 9 to 10 ^ 9 There are n delivery centers, the one at location center[i]. A location x is called a suitable location for a warehouse if it is possible to bring all the products to that point by traveling a distance of no more than d. At any one time, products can bejorought from one delivery center and placed at point x. Given the positions of n delivery centers, calculate the number of suitable locations in the world. That is, calculate the number of points x on the number line ( - 10 ^ 9 <=*<=10^ 9 ) where the travel distance required to bring all the products to that point is less than or equal to d.


    Note: The distance between point x and center[i] is | x- center[i] |, their absolute difference.


    Given n = 3 center =[ - 2, 1 , 0 ], d = 8


    At x = -3: Total distance = 16 > d, not suitable
    At x = 0: Total distance = 6 ≤ d, suitable
    At x = -1: Total distance = 8 ≤ d, suitable
    At x = 1: Total distance = 8 ≤ d, suitable


    The function should return 3, as there are three suitable locations (-1, 0, 1).


    Constraints
    1 ≤ n ≤ 10^5 (where n is the number of delivery centers)
    -10^9 ≤ center[i] ≤ 10^9
    0 ≤ d ≤ 10^15

    S1:
    #include <vector>
    #include <algorithm>
    #include <cmath>

    bool totalDistGood(const std::vector<int>& center, int x, long long d) {
        long long totalDistance = 0;
        for (int c : center) {
            totalDistance += 2LL * std::abs(c - x);
            if (totalDistance > d) {
                return false;
            }
        }
        return true;
    }

    int findMax(const std::vector<int>& center, int x, long long d) {
        int l = x;
        int r = 1000000000;
        int re = x;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (totalDistGood(center, m, d)) {
                re = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return re;
    }

    int findMin(const std::vector<int>& center, int x, long long d) {
        int l = -1000000000;
        int r = x;
        int re = x;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (totalDistGood(center, m, d)) {
                re = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return re;
    }

    int suitableLocations(std::vector<int>& center, long long d) {
        std::sort(center.begin(), center.end());
        int median = center[center.size() / 2];

        if (!totalDistGood(center, median, d)) {
            return 0;
        }

        int min = findMin(center, median, d);
        int max = findMax(center, median, d);

        return max - min + 1;
    }

- Q3 

    In managing tasks at analytics platform, the goal is to efficiently schedule both primary and secondary tasks within specified time constraints.

    There are n primary tasks and n secondary tasks. Two arrays, primary and secondary, provide information on task hours, where primary[i] represents the duration in hours of the ith primary task, and secondary[i] represents the duration in hours of the ith secondary task.

    Each day on the platform has a time limit denoted as limit hours. One primary task must be scheduled each day. If time remains after the primary task, you can choose to schedule at most one secondary task on that day. It's essential to ensure that the total hours does not exceed the specified limit hours.

    Determine the maximum number of secondary tasks that can be scheduled during these n days while adhering to the given constraints.

    Example:
    limit= 7
    primary = [4, 5, 2, 4]
    secondary = [5, 6, 3, 4).

    One of the optimal scheduling can be:

    Day 1: Schedule the first primary task and the third secondary task. Total time is 4 + 3 = 7.
    Day 2: Schedule the second primary task. Total time is 5.
    Day 3: Schedule the third primary task and first secondary task. Total time is 2 + 5 = 7.
    Day 4: Schedule the fourth primary task. Total time is 4.
    There is no other arrangement of secondary tasks for which more than 2 secondary tasks can be scheduled in 4 days.

    - Simillar question:
        
        Assign Cookies https://leetcode.com/problems/assign-cookies/description/

- Phone screen

    Given a file containing unit conversion rates, write a function that converts one unit to another. The file consists of JSON-like log entries where each entry specifies a conversion rate between two units.

    Your function should support both direct conversions (e.g., meters to feet) and chained conversions (e.g., meters to inches through feet).

    The function should load the conversion rates from the file, store them internally, and handle conversion requests dynamically. The units can be measurements like meters, feet, inches, centimeters, etc.

    Sample Log File Entries:

    {"from": "meters", "to": "feet", "rate": 3.281}
    {"from": "feet", "to": "inches", "rate": 12}
    {"from": "centimeters", "to": "inches", "rate": 0.3937}
    {"from": "meters", "to": "centimeters", "rate": 100}
    Example Conversions:

    convert("meters", "inches", 2) → 78.744

    2 meters → 6.562 feet (using meters to feet conversion rate of 3.281)
    6.562 feet → 78.744 inches (using feet to inches conversion rate of 12)
    convert("centimeters", "inches", 100) → 39.37

    100 centimeters → 39.37 inches (using centimeters to inches conversion rate of 0.3937)
    convert("meters", "centimeters", 1) → 100

    1 meter → 100 centimeters (using meters to centimeters conversion rate of 100)

    - Similar question: https://leetcode.com/problems/evaluate-division/description/

# Salesforce | OA

- Q1 

    Given an array of numbers. Eg: [1, 3, 2, 3, 4, 1] . Output 2 strings: 000101, 110000. Each char in first string should be 1 if num at that index has occured at lower indices in the array. Each char in second string should be 1 if num at that index has occured at higher indices in the array.
    
- Q2 https://leetcode.com/problems/maximum-number-of-occurrences-of-a-substring/description/

# Google

    Min Amplitude [New Grad] 🆕
    Ways to Split String [New Grad] 🆕
    Maximum Time ⭐⭐⭐ [Intern]
    Min Abs Difference of Server Loads ⭐ [Intern]
    Most Booked Hotel Room ⭐⭐⭐ [Intern]
    Minimum Domino Rotations For Equal Row [New Grad]
    Time to Type a String
    Maximum Level Sum of a Binary Tree
    Min Number of Chairs
    K Closest Points to Origin
    Odd Even Jump
    License Key Formatting
    Unique Email Addresses
    Fruit Into Baskets
    Min Days to Bloom
    Fill Matrix
    Decreasing Subsequences
    Max Distance
    Stores and Houses