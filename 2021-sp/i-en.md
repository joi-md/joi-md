Score: $100$ points

### Problem Statement

There are $N$ islands where beavers live. The islands are numbered from $1$ through $N$. These islands are connected by $N - 1$ bidirectional bridges. The bridges are numbered from $1$ through $N - 1$. The bridge $i$ connects the island $A_{i}$ and the island $B_{i}$. It is possible to travel between any islands using some bridges. Each island is inhabited by a beaver.

Sometimes, beavers living in some islands gather in an island, and have a meeting. When the attendees of a meeting are fixed, one of the islands satisfying the following condition is chosen as the location of the meeting:

> The sum of the numbers of bridges the attendees have to pass through to gather in the chosen island is minimized.

Here, when the attendees of a meeting are fixed, each attendee of the meeting moves from his/her island of residence to the location of the meeting by passing through the minimum number of bridges.

The attendees of a meeting are looking forward to it very much if there are many candidates for the location of the meeting. When the attendees of a meeting are fixed, the expectation score of the meeting is calculated as the number of candidate islands for the location of the meeting satisfying the above condition. For each integer $j$ between 1 and $N$, inclusive, you want to know the maximum expectation score of a meeting where $j$ beavers will attend.

Write a program which, given the information of the islands, calculates, for each number of attendees, the maximum expectation score of a meeting.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$
$A_{1}$ $B_{1}$
$\vdots$
$A_{N - 1}$ $B_{N - 1}$
~~~

### Output

Write $N$ lines to the standard output. In the $j$-th line ($1 \le j \le N$), output the maximum expectation score of a meeting with $j$ attendees.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le A_{i} \le N$ ($1 \le i \le N - 1$).
- $1 \le B_{i} \le N$ ($1 \le i \le N - 1$).
- $A_{i} \ne B_{i}$ ($1 \le i \le N - 1$).
- It is possible to travel between any islands using some bridges.

### Subtasks

1. ($4$ points) $N \le 16$.
2. ($16$ points) $N \le 4\,000$.
3. ($80$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5
1 2
2 3
4 2
3 5
~~~

### Sample Output 1

~~~
1
4
1
2
1
~~~

For example, we consider a meeting where the beaver in the island 1 and the beaver in the island 3 will attend. For each island, the sum of the numbers of bridges they have to pass through is calculated as follows.

- If they gather in the island 1, the the beaver in the island 1 does not pass through bridges, and the beaver in the island 3 has to pass through 2 bridges. The sum is 2.
- If they gather in the island 2, the sum of the numbers of bridges they have to pass through is 2.
- If they gather in the island 3, the sum of the numbers of bridges they have to pass through is 2.
- If they gather in the island 4, the sum of the numbers of bridges they have to pass through is 4.
- If they gather in the island 5, the sum of the numbers of bridges they have to pass through is 4.

The candidates for the location of the meeting are the islands $1, 2, 3$. Therefore, the expectation score of this meeting is 3.

### Sample Input 2

~~~
7
1 2
2 3
3 4
4 5
2 6
3 7
~~~

### Sample Output 2

~~~
1
5
1
3
1
2
1
~~~
