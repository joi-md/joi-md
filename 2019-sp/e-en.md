Score: $100$ points

### Problem Statement

Cook Bitaro is participating in a cooking contest. In this contest, a contestant is required to cook two dishes: IOI Donburi and JOI Curry.

The cooking process of IOI Donburi consists of $N$ steps. The $i$-th ($1 \le i \le N$) step takes exactly $A_{i}$ minutes. Initially, he can perform only the first step. To perform the $i$-th ($2 \le i \le N$) step, he needs to have finished the $(i - 1)$-th step.

The cooking process of JOI Curry consists of $M$ steps. The $j$-th ($1 \le j \le M$) step takes exactly $B_{j}$ minutes. Initially, he can perform only the first step. To perform the $j$-th ($2 \le j \le M$) step, he needs to have finished the $( j - 1)$-th step.

The steps need concentration, so if he starts performing a step, he cannot perform other steps until he finishes it. Between steps, he may switch from a dish to the other dish. Once the contest starts, he cannot take a rest until he completes two dishes.

By the way, in this contest, a contestant is given artistic scores as follows.

- If he finish the $i$-th ($1 \le i \le N$) step of cooking IOI Donburi within $S_{i}$ minutes from the start of the contest, he is given $P_{i}$ points. Here, the value of $P_{i}$ might be negative.
- If he finish the $j$-th ($1 \le j \le M$) step of cooking JOI Curry within $T_{j}$ minutes from the start of the contest, he is given $Q_{j}$ points. Here, the value of $Q_{j}$ might be negative.

Bitaro wants to maximize his total artistic scores.

Write a program which, given the number of steps of cooking, the time they take, and the information of artistic scores, calculates the maximum total artistic scores Bitaro can gain.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $M$
$A_{1}$ $S_{1}$ $P_{1}$
$\vdots$
$A_{N}$ $S_{N}$ $P_{N}$
$B_{1}$ $T_{1}$ $Q_{1}$
$\vdots$
$B_{M}$ $T_{M}$ $Q_{M}$
~~~

### Output

Write one line to the standard output. The output should contain the maximum total artistic scores Bitaro can gain.

### Constraints

- $1 \le N \le 1\,000\,000$.
- $1 \le M \le 1\,000\,000$.
- $1 \le A_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $1 \le B_{j} \le 1\,000\,000\,000$ ($1 \le j \le M$).
- $1 \le S_{i} \le 2\,000\,000\,000\,000\,000 = 2 \times 10^{15}$ ($1 \le i \le N$).
- $1 \le T_{j} \le 2\,000\,000\,000\,000\,000 = 2 \times 10^{15}$ ($1 \le j \le M$).
- $-1\,000\,000\,000 \le P_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $-1\,000\,000\,000 \le Q_{j} \le 1\,000\,000\,000$ ($1 \le j \le M$).

### Subtasks

1. ($5$ points) $N \le 200\,000, M \le 200\,000, S_{1} = \cdots = S_{N} = T_{1} = \cdots = T_{M}$.
2. ($3$ points) $N \le 12$, $M \le 12$, $P_{i} = 1$ ($1 \le i \le N$), $Q_{j} = 1$ ($1 \le j \le M$).
3. ($7$ points) $N \le 2\,000$, $M \le 2\,000$, $P_{i} = 1$ ($1 \le i \le N$), $Q_{j} = 1$ ($1 \le j \le M$).
4. ($39$ points) $N \le 200\,000$, $M \le 200\,000$, $P_{i} = 1$ ($1 \le i \le N$), $Q_{j} = 1$ ($1 \le j \le M$).
5. ($11$ points) $N \le 200\,000$, $M \le 200\,000$, $1 \le P_{i}$ ($1 \le i \le N$), $1 \le Q_{j}$ ($1 \le j \le M$).
6. ($9$ points) $1 \le P_{i}$ ($1 \le i \le N$), $1 \le Q_{j}$ ($1 \le j \le M$).
7. ($17$ points) $N \le 200\,000$, $M \le 200\,000$.
8. ($9$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
4 3
2 1 1
3 8 1
2 13 1
1 13 1
3 6 1
2 11 1
2 15 1
~~~

### Sample Output 1

~~~
6
~~~

This sample input satisfies the constraints for Subtask 2.

In this sample input, Bitaro can perform the steps of cooking as follows, for example:

1. He performs the 1st step of JOI Curry. He finishes it $3$ minutes after the contest starts. Since this is within 6 minutes, he gains 1 point.
2. He performs the 1st step of IOI Donburi. He finishes it 5 minutes after the contest starts. Since this is not within 1 minute, he gains no artistic scores.
3. He performs the 2nd step of IOI Donburi. He finishes it 8 minutes after the contest starts. Since this is within 8 minutes, he gains 1 point.
4. He performs the 2nd step of JOI Curry. He finishes it $10$ minutes after the contest starts. Since this is within 11 minutes, he gains 1 point.
5. He performs the 3rd step of IOI Donburi. He finishes it 12 minutes after the contest starts. Since this is within 13 minutes, he gains 1 point.
6. He performs the 4th step of IOI Donburi. He finishes it 13 minutes after the contest starts. Since this is within 13 minutes, he gains 1 point.
7. He performs the 3rd step of JOI Curry. He finishes it $15$ minutes after the contest starts. Since this is within 15 minutes, he gains 1 point.

Here the total artistic scores are 6 points. He cannot gain more than 6 points, so output 6.

### Sample Input 2

~~~
5 7
16 73 16
17 73 10
20 73 1
14 73 16
18 73 10
3 73 2
10 73 7
16 73 19
12 73 4
15 73 15
20 73 14
15 73 8
~~~

### Sample Output 2

~~~
63
~~~

This sample input satisfies the constraints for Subtask 1.

### Sample Input 3

~~~
9 11
86 565 58
41 469 -95
73 679 28
91 585 -78
17 513 -63
48 878 -66
66 901 59
72 983 -70
68 1432 11
42 386 -87
36 895 57
100 164 10
96 812 -6
23 961 -66
54 193 51
37 709 82
62 148 -36
28 853 22
15 44 53
77 660 -19
~~~

### Sample Output 3

~~~
99
~~~
