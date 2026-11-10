Score: $100$ points

### Problem Statement

In JOI Kingdom, a national festival is held once a year. During the period of the festival, there are $N$ events in total. The schedule for each event is already fixed. The schedule of the $N$ events are described by sequences $a, b$ of length $N$ satisfying the following conditions.

- Every integer between $1$ and $2N$, inclusive, appears as an element of $a$ or $b$.
- $a_i < b_i$ ($1 \leq i \leq N$).
- $a_i < a_{i+1}$ ($1 \leq i \leq N - 1$).

The $i$-th event will start at $a_i$ minutes after the beginning of the festival, and end at $b_i$ minutes after the beginning of the festival.

Participants of the festival may choose any events in which they will participate. However, it is not allowed to participate in two events whose schedules overlap. (Note that the starting times and the ending times of the events are different from each other.)

JOI-kun wants to participate in as many events as possible. Until last year, he chose the events in which he participated by the following procedures on a computer.

> For $i = 1, 2, \ldots, N$, the following are done in this order.
>
> If the schedule of the $i$-th event does not overlap the schedules of the other events in which he already chose to participate, he will participate in the $i$-th event. Otherwise, he will not participate in the $i$-th event.

However, after studying computer science, JOI-kun noticed that the above algorithm does not necessarily maximize the number of events in which JOI-kun will participate. From this year, JOI-kun will use an improved algorithm. Using the improved algorithm, JOI-kun will be able to maximize the number of events in which JOI-kun will participate.

JOI-kun wants to know the number of cases where the improved algorithm produces a larger number of events.

Write a program which, given the integer $N$ and a large prime number $P$, calculates the number of pairs of sequences $a, b$ describing the schedules of the $N$ events for which the improved algorithm produces a larger number of events. Since the answer can be very large, your program should output the remainder of the answer when divided by $P$.

---

### Input

Read the following data from the standard input.

~~~
$N$ $P$
~~~

### Output

Write one line to the standard output. The output should contain the remainder of the answer, the number of pairs of sequences $a, b$ describing the schedules of the $N$ events for which the improved algorithm produces a larger number of events, when divided by $P$.

---

### Constraints

- $1 \leq N \leq 20\,000$.
- $10^8 < P < 10^9$.
- $P$ is a prime number.
- Given values are all integers.

### Subtasks

1. ($5$ points) $N \leq 5$.
2. ($5$ points) $N \leq 8$.
3. ($27$ points) $N \leq 30$.
4. ($14$ points) $N \leq 300$.
5. ($36$ points) $N \leq 3\,000$.
6. ($13$ points) No additional constraints.

---

### Sample Input 1

~~~
3 100000007
~~~

### Sample Output 1

~~~
2
~~~

For example, consider the case where $a = (1, 2, 4)$ and $b = (6, 3, 5)$. If JOI-kun uses the algorithm used until last year, he will participate in the first event only. On the other hand, if he uses a correct algorithm to maximize the number of events, he will participate in the second event and the third event. Thus, he will participate in two events. In this case, the improved algorithm produces a larger number of events.

The following are the pair of sequences $a, b$ for which the improved algorithm produces a larger number of events.

- $a = (1, 2, 4)$, $b = (6, 3, 5)$
- $a = (1, 2, 4)$, $b = (5, 3, 6)$

Therefore, output $2$, which is the remainder of $2$ when divided by $100\,000\,007$.

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 2

~~~
4 100000007
~~~

### Sample Output 2

~~~
28
~~~

There are $28$ pairs of sequences $a, b$ satisfying the condition. Therefore, output $28$, which is the remainder of $28$ when divided by $100\,000\,007$.

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 3

~~~
15 999999937
~~~

### Sample Output 3

~~~
935834920
~~~

There are $5\,295\,044\,602\,247\,148$ pairs of sequences $a, b$ satisfying the condition. Therefore, output $935\,834\,920$, which is the remainder of $5\,295\,044\,602\,247\,148$ when divided by $999\,999\,937$.

This sample input satisfies the constraints of Subtasks $3, 4, 5, 6$.
