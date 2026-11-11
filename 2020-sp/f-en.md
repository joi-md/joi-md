Score: $100$ points

### Problem Statement

Professor JOI is a leading expert on the study of the history of IOI Kingdom. When he was surveying an old temple in IOI Kingdom, he found ruins where the stone pillars were constructed. He also found an old document which was supposedly written by ancient people in IOI Kingdom. The document contains descriptions on the stone pillars. More precisely, the following is written in the document.

- Just after the construction, there were $2N$ stone pillars, numbered from 1 to $2N$.
- Just after the construction, for each $k$ ($1 \le k \le N$), there were exactly two stone pillars of height $k$.
- The earthquake occurred $N$ times. After each earthquake, some of the stone pillars collapsed and their heights decreased by $1$. However, other stone pillars were protected by ancient people. These stone pillars did not collapse, and their heights remained the same.
- When an earthquake occurred, for each $k$ ($1 \le k \le N$), exactly one stone pillar of height $k$ was protected by ancient people. If there were more than one stone pillar of height $k$ when an earthquake occurred, the stone pillar of height $k$ with largest number was protected. In other words, if the height of the stone pillar $i$ ($1 \le i \le 2N$) was $h_{i}$ before an earthquake, then the stone pillar $i$ was protected if and only if $h_{i} \ge1$ and $h_{j} \ne h_{i}$ for every $j > i$.
- After the $N$ earthquakes occurred, $N$ stone pillars remained (i.e. there were exactly $N$ stone pillars with height at least 1).

Professor JOI thinks it would be a great discovery if he can recover the heights of the $2N$ stone pillars when they were constructed. He surveyed the place where the stone pillars were constructed in more detail. He found that, after the $N$ earthquakes occurred, the indices of the remaining stone pillars were $A_{1}, A_{2}, \ldots, A_{N}$.

Professor JOI wants to know the number of possible combinations of the heights of the $2N$ stone pillars when they were constructed. Since you are a pupil of Professor JOI, you are asked to write a program which counts this number.

Write a program which, given the indices of the remaining stone pillars after the $N$ earthquakes occurred, calculates the number of possible combinations of the heights of the $2N$ stone pillars when they were constructed, modulo 1 000 000 007.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$
$A_{1}$ $\cdots$ $A_{N}$
~~~

### Output

Write one line to the standard output. Output the remainder when the answer is divided by 1 000 000 007.

### Constraints

- $1 \le N \le 600$.
- $1 \le A_{i} \le 2N$ ($1 \le i \le N$).
- $A_{i} < A_{i+1}$ ($1 \le i \le N - 1$).

### Subtasks

1. ($6$ points) $N \le 13$.
2. ($52$ points) $N \le 60$.
3. ($42$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3
3 4 6
~~~

### Sample Output 1

~~~
5
~~~

For example, assume that the heights of the stone pillars were ($2$, $2$, $3$, $3$, $1$, $1$), from the stone pillar 1. Since there were exactly two stone pillars of height $k$ for each $k$ ($1 \le k \le3$), it agrees with the description in the old document.

- When the first earthquake occurred, the stone pillars $2$, $4$, $6$ were protected by ancient people. After the first earthquake, the heights of the stone pillars became $(1, 2, 2, 3, 0, 1)$.

- When the second earthquake occurred, the stone pillars $3$, $4$, $6$ were protected by ancient people. After the second earthquake, the heights of the stone pillars became $(0, 1, 2, 3, 0, 1)$.
- When the third earthquake occurred, the stone pillars $3$, $4$, $6$ were protected by ancient people. After the third earthquake, the heights of the stone pillars became $(0, 0, 2, 3, 0, 1)$.

After the three earthquakes, the stone pillars $3$, $4$, $6$ remained. It coincides with the information given in the input.

In addition to the above, there are four possible combinations of the heights of the stone pillars $(2, 3, 2, 3, 1, 1)$, $(2, 3, 3, 2, 1, 1)$, $(3, 2, 2, 3, 1, 1)$, $(3, 2, 3, 2, 1, 1)$.

Therefore, there are five possible combinations of the heights of the six stone pillars which agree with the description in the old document and the information given in the input.

### Sample Input 2

~~~
1
1
~~~

### Sample Output 2

~~~
0
~~~

In this sample input, $(1, 1)$ is the only combination of the heights of the stone pillars which agrees with the description in the old document. After the first earthquake, the heights of the stone pillars became $(0, 1)$.

Therefore, there is no possible combination of the heights of the stone pillars which agrees with the description in the old document and the information given in the input.

### Sample Input 3

~~~
10
5 8 9 13 15 16 17 18 19 20
~~~

### Sample Output 3

~~~
147003663
~~~

There are $111\,147\,004\,440$ possible combinations of the heights of the $2N$ stone pillars, when they were constructed. When $111\,147\,004\,440$ is divided by $1\,000\,000\,007$, the remainder is $147\,003\,663$. Thus, output $147\,003\,663$.
