Score: $100$ points

### Problem Statement

In IOI Park, $N$ events will be held soon. The events are numbered from 1 to $N$. The $i$-th event ($1 \le i \le N$) will start at time $L_{i} + 0.1$ and finish at time $R_{i} - 0.1$. Here $L_{i}$ and $R_{i}$ are integers.

JOI-kun will attend exactly $K$ events among them. It is forbidden to enter an event after it starts, or to leave an event before it finishes. We ignore the time to move between the locations of events.

JOI-kun wants to attend events with small indices. More precisely, let $a_{1}, \ldots, a_{K}$ ($1 \le a_{1} < \cdots < a_{K} \le N$) be the indices of the events JOI-kun will attend. Then ($a_{1}, \ldots, a_{K}$) should be the smallest possible sequence in lexicographic order. Here, a sequence ($a_{1}, \ldots, a_{K}$) is smaller than another sequence ($b_{1}, \ldots, b_{K}$) in lexicographic order iff there exists $j$ ($1 \le j \le K$) satisfying both “$a_{ℓ}= b_{ℓ}$ for every $1 \le ℓ\le j - 1$” and “$a_{j} < b_{j}$.”

Write a program which, given the information of the events and the number $K$ of events JOI-kun will attend, determines whether JOI-kun will be able to attend $K$ events or not. If it is possible for JOI-kun to attend $K$ events, the program should calculate the $K$ events JOI-kun will attend.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$ $K$
$L_{1}$ $R_{1}$
$\vdots$
$L_{N}$ $R_{N}$
~~~

### Output

If JOI-kun will not be able to attend $K$ events, output one line containing `-1` to the standard output.

If JOI-kun will be able to attend $K$ events, output $K$ lines to the standard output. Let $a_{1}, \ldots, a_{K}$ ($1 \le a_{1} < \cdots < a_{K} \le N$) be the indices of the events JOI-kun will attend. The $j$-th line ($1 \le j \le K$) of output should contain $a_{j}$. Here ($a_{1}, \ldots, a_{K}$) should be the smallest possible sequence in lexicographic order.

### Constraints

- $1 \le N \le 100\,000$.
- $1 \le K \le N$.
- $1 \le L_{i} < R_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).

### Subtasks

1. ($7$ points) $L_{i} \le L_{i+1}$ ($1 \le i \le N - 1$).
2. ($1$ point) $N \le 20$.
3. ($31$ points) $N \le 3\,000$.
4. ($61$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5 4
1 3
2 5
8 9
6 8
10 15
~~~

### Sample Output 1

~~~
1
3
4
5
~~~

There are 2 ways for JOI-kun to attend exactly 4 events.

- JOI-kun will attend the events $1$, $3$, $4$, $5$.
- JOI-kun will attend the events $2$, $3$, $4$, $5$.

Since the sequence ($1$, $3$, $4$, $5$) is smaller than the sequence ($2$, $3$, $4$, $5$) in lexicographic order, output $1$, $3$, $4$, $5$.

### Sample Input 2

~~~
4 3
1 4
3 5
4 9
7 10
~~~

### Sample Output 2

~~~
-1
~~~

Since it is impossible for JOI-kun to attend exactly 3 events, output `-1`.

### Sample Input 3

~~~
10 6
77412002 93858605
244306432 318243514
280338037 358494212
439397354 492065507
485779890 529132783
571714810 632053254
659767854 709114867
718405631 733610573
786950301 815106357
878719468 899999649
~~~

### Sample Output 3

~~~
1
2
4
6
7
8
~~~

This sample input satisfies the constraints of all Subtasks.

### Sample Input 4

~~~
20 16
250732298 258217736
26470443 34965880
252620676 260043105
692063405 697656580
497457675 504191511
391372149 397942668
858168758 867389085
235756850 241022021
585764751 593366541
207824318 217052204
661682908 671226688
886273261 892279963
770109416 778960597
264372562 270395107
176883483 186662376
509929119 519063796
109491630 118520141
162731982 168101507
662727316 668317158
757072772 765493222
~~~

### Sample Output 4

~~~
1
2
4
5
6
7
8
9
10
11
12
13
14
15
16
17
~~~
