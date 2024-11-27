# Samsung
 
    https://leetcode.com/discuss/interview-question/5924899/Samsung-Advanced-Developer-Interview-Experience

# Amazon

    Question -
    Aim is to get the count of users who have had the least number of logins in the past 24 hours.

    Round 2:
    Started with LP -

    Tell me about a time when you had to go against the norm and push for a change. Give an example where you persisted.
    Tell me about a time where you had to show bias for action in a tight deadline scenario.
    System Design:

    There are lot of applications. Each application has multiple servers from where logs are getting generated
    Store the logs - search past 30 days - rest have it persisted
    1-2 minutes lag
    Different types of logs - info, debug, error
    Search based on - date, date range, aaplication, logtype, message text
    Non functional requirements - stress upon durability of the system and handling failure cases, data estimates.

# Google

    Phone screen round:

        Problem 1: You are given an ancient scroll with a string of characters. You can erase any number of characters from the scroll, but you cannot change the order of the remaining characters. How many different versions of the scroll can you generate from the string? Each character is one of a to z.

        Note: The expected time complexity should handle large values of n, say 10^5. The interviewer immediately refused the brute-force solution due to its exponential time complexity. He mentioned that there was no need to provide the strings, just return the count of how many are possible.

        problem 2: Follow-up not remembered, couldn't solve due to time constraints.

    Round 1:

        Imagine you have a fence in the shape of a polygon with 'n' sides, placed on a 2D coordinate system. The vertices of the polygon are defined by their coordinates (x1, y1), (x2, y2), ..., (xn, yn). You are also given 'number_of_lines' ropes, each stretching across the coordinate plane between two points, defined as (xa, ya) and (xb, yb). For each rope, calculate the length of the part where it intersects or touches the polygon.

    Round 2:

        You are given a magical tree with 'number_of_vertices' branches. Some branches are painted white, while others remain untouched. Two wizards, white and black, take turns painting the uncolored branches, starting with the white wizard. A wizard wins by painting a path of three connected branches with their color. Determine who wins the game or if it ends in a draw, assuming both play with perfect strategy.

        Verdict: Lean hire (discussed approach and pseudo-code).

    Round 3:

        You are given a city map, modeled as a directed graph with 'number_of_vertices' intersections. There are 'number_of_vertices' road maps, each a string of length 'number_of_vertices', representing one-way roads between intersections. You need to calculate the expected number of steps required to completely erase the city, where in each step, you randomly choose an intersection and remove it along with all intersections reachable from it.

        Input:
        3
        000
        000
        000


        Output:
        3.00000000000000000000

    One more round:

        You are given a network of islands connected by bridges, modeled as a simple connected undirected graph with 'number_of_vertices' islands and 'number_of_edges' bridges, each with a weight. The islands are painted different colors. Find the maximum possible weight such that for every simple path connecting two islands of the same color, the weight of the path is at least this value.

# Resourse:
    
    - https://leetcode.com/discuss/interview-question/5942295/Handy-resources-to-lookup-while-coding