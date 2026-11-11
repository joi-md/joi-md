Score: $100$ points

### Problem Statement

Chairman K is going to host a series of conferences over $N$ days. Each day, exactly one conference is held, and it takes place in one of the three venues: the main venue A or one of the sub-venues B and C.

The venue information for each conference is given as a string $S$ consisting of ‘`A`’, ‘`B`’, ‘`C`’, and ‘`?`’. For the $i$-th day ($1 \le i \le N$), if the $i$-th character of $S$ is ‘`A`’, the conference is held in venue A. If it is ‘`B`’, it is held in venue B. If it is ‘`C`’, it is held in venue C. If it is ‘`?`’, the venue for the $i$-th day has not been decided yet. However, since the conferences on the first and $N$-th days are expected to have many participants, it has already been determined that venue A will be used on those days.

Chairman K now needs to assign a venue to each undecided conference, choosing one of A, B, or C for each. Additionally, in order to minimize the burden of moving between venues, he wants to minimize the number of indices $j$ ($1 \le j \le N - 1$) such that the venue for the $j$-th day differs from the venue for the $(j + 1)$-th day.

There are $Q$ scenarios to consider regarding the assignment of venues. The $k$-th scenario ($1 \le k \le Q$) and the corresponding question are as follows:

- Chairman K has to assign $X_{k}$ undecided conferences to venue A, $Y_{k}$ to venue B, and $Z_{k}$ to venue C. Determine the minimum possible number of indices $j$ such that the venue for the $j$-th day differs from the venue for the $(j + 1)$-th day.

Given the information about the venues and scenarios to consider, write a program to answer the questions.

### Input

Read the following data from the standard input.

~~~
$N$
$S$
$Q$
$X_1$ $Y_1$ $Z_1$
$X_2$ $Y_2$ $Z_2$
$\vdots$
$X_Q$ $Y_Q$ $Z_Q$
~~~

### Output

Write $Q$ lines to the standard output. In the $k$-th line ($1 \le k \le Q$), output the minimum number of indices $j$ such that the venue for the $j$-th day differs from the venue for the $( j + 1)$-th day, under the condition that Chairman K assigns $X_{k}$ undecided conferences to venue A, $Y_{k}$ to venue B, and $Z_{k}$ to venue C.

### Constraints

- $2 \le N \le 300\,000$.
- $S$ is a string of length $N$ consisting of ‘`A`’, ‘`B`’, ‘`C`’, and ‘`?`’.
- The first and $N$-th characters of $S$ are ‘`A`’.
- $1 \le Q \le 200\,000$.
- $0 \le X_{k}$ ($1 \le k \le Q$).
- $0 \le Y_{k}$ ($1 \le k \le Q$).
- $0 \le Z_{k}$ ($1 \le k \le Q$).
- $X_{k} + Y_{k} + Z_{k}$ is equal to the number of ‘`?`’ in $S$ ($1 \le k \le Q$).
- $N, Q, X_{k}, Y_{k}, Z_{k}$ are all integers.

### Subtasks

1. ($4$ points) $N \le 50$ and the number of ‘`?`’ in $S$ is less than or equal to 13.
2. ($7$ points) $N \le 500$.
3. ($13$ points) $N \le 5\,000$, $Q \le 10$.
4. ($18$ points) $N \le 5\,000$.
5. ($12$ points) $Q \le 10$.
6. ($8$ points) $S$ does not contain ‘`C`’ and $Z_{k} = 0$ ($1 \le k \le Q$).
7. ($13$ points) $Z_{k} = 0$ ($1 \le k \le Q$).
8. ($25$ points) No additional constraints.

### Sample Input 1

~~~
9
A??B??C?A
3
1 3 1
4 1 0
0 0 5
~~~

### Sample Output 1

~~~
3
4
4
~~~

In the first scenario, Chairman K has to assign 1 of the 5 undecided conferences to venue A, 3 to venue B, and 1 to venue C. For example, one possible assignment results in the venue information string “`ABBBBCCAA`”. In this case, the indices $j$ such that the venue for the $j$-th day differs from the venue for the $(j + 1)$-th day are $1, 5, 7$, which means there are $3$ such indices. Since it is impossible to reduce this number to $2$ or fewer, the correct output for the first line is 3.

In the second scenario, Chairman K has to assign 4 of the 5 undecided conferences to venue A and 1 to venue B. For example, one possible assignment results in the venue information string “`AAABBACAA`”. In this case, the indices $j$ such that the venue for the $j$-th day differs from the venue for the $(j + 1)$-th day are 3, 5, 6, 7, which means there are 4 such indices. Since it is impossible to reduce this number to 3 or fewer, the correct output for the second line is 4.

In the third scenario, Chairman K has to assign all 5 undecided conferences to venue C. The indices $j$ such that the venue for the $j$-th day differs from the venue for the $(j + 1)$-th day are 1, 3, 4, 8, which means there are 4 such indices. Therefore, the correct output for the third line is 4.

This sample input satisfies the constraints of subtasks 1, 2, 3, 4, 5, and 8.

### Sample Input 2

~~~
12
A???A?B????A
4
0 8 0
2 6 0
7 1 0
3 5 0
~~~

### Sample Output 2

~~~
4
4
2
2
~~~

This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
28
ACB??B???BCB??B????B?AAA?BBA
26
6 1 6
4 5 4
2 3 8
9 2 2
11 0 2
8 4 1
11 0 2
2 0 11
0 1 12
12 1 0
10 3 0
1 4 8
3 7 3
2 8 3
1 3 9
11 1 1
7 0 6
6 4 3
8 4 1
0 10 3
13 0 0
11 1 1
0 6 7
2 8 3
9 0 4
0 0 13
~~~

### Sample Output 3

~~~
15
11
13
13
15
12
15
15
16
15
13
12
10
9
13
15
15
11
12
9
15
15
11
9
15
17
~~~

This sample input satisfies the constraints of subtasks 1, 2, 4, and 8.
