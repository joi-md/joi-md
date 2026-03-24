Score: $100$ points

[Distributed Files](https://img.atcoder.jp/joi2026final/multi.zip?_gl=1*18on2p7*_ga*MjkxNTEwOTk5LjE3NzQyMzI5MTM.*_ga_RC512FD18N*czE3NzQzNjU4NjgkbzE2JGcxJHQxNzc0MzY2MDIzJGo0MCRsMCRoMA..)

### Problem Statement

President K has prepared a game for the contestants of the JOI Final Stage.
President K secretly has an $N \times N$ table $A$, each of whose cells contains a non-negative integer.
Let $A_{i,j}$ denote the integer written in the cell in the $(i + 1)$-st row from the top ($0 \leq i \leq N - 1$) and the $(j + 1)$-st column from the left ($0 \leq j \leq N - 1$).
The table $A$ satisfies the following conditions.

<ul>
<li> For each $i$ such that $0 \leq i \leq N - 1$, we have $A_{i,i} = 0$.
<li> For each $i, j$ such that $0 \leq i < j \leq N - 1$, we have $A_{i,j} = A_{j,i}$.
</ul>

Consider the weighted undirected graph with $N$ vertices in which the edge between vertex $i$ and vertex $j$ ($0 \leq i < j \leq N - 1$) has weight $A_{i,j}$.
Let $X$ be the weight of a minimum spanning tree of this graph.
In other words, $X$ is the value obtained by the following procedure.
The goal of the game is for all contestants to cooperate and determine the value of $X$.

<ol>
<li> Set $x = 0$.
<li> Consider an undirected graph $G$ with $N$ vertices.
The vertices of $G$ are numbered $0, 1, \dots, N - 1$.
Initially, $G$ has no edges.
<li> Repeat the following operation $N - 1$ times.
Let $X$ be the value of $x$ after these $N - 1$ operations.
<ol>
<li> Call the vertices of $G$ that are currently reachable from vertex $0$ by using some edges the <strong>near vertices</strong>,
and call the other vertices the <strong>far vertices</strong>.
Choose a pair $(i, j)$ consisting of a near vertex $i$ and a far vertex $j$ so that the value
$A_{i,j} \times N^2 + i \times N + j$ is minimized.
It can be proved that there is at least one near vertex and at least one far vertex, and that $(i, j)$ is uniquely determined.
<li> Add the edge connecting vertex $i$ and vertex $j$ to $G$.
<li> Update $x \gets x + A_{i,j}$.
</ol>
</ol>

Define $R = \lfloor 5120 / N \rfloor$ (where $\lfloor x \rfloor$ denotes the greatest integer not exceeding $x$).
There are $R \times N$ contestants in the JOI Final Stage, divided into $R$ groups of $N$ contestants each.
The groups are numbered $0$ through $R-1$, and the contestants in group $r$ ($0 \leq r \leq R-1$) are numbered
$(r, 0), (r, 1), \dots, (r, N-1)$.

The game proceeds by repeating the following <strong>rounds</strong>, in the order round $0, 1, 2, \dots$, at most $R$ times.
During the game, the contestants are not allowed to communicate with one another, but they may share a strategy in advance.

Round $r$ ($0 \leq r \leq R-1$) proceeds as follows.

<ul>
<li> For $i = 0, 1, \dots, N-1$ in this order, President K and contestant $(r, i)$ perform the following interaction.
<ol>
<li> President K gives contestant $(r, i)$ the following information.
<ul>
<li> the contestant's number $(r, i)$,
<li> the information in the $(i + 1)$-st row of the table $A$, namely $A_{i,0}, A_{i,1}, \dots, A_{i,N-1}$,
<li> the integers $B_{r,i,0}, B_{r,i,1}, \dots, B_{r,i,N-1}$, each of which is an integer between $0$ and $2^{64}-1$, inclusive, sent to contestant $(r, i)$ from the contestants in the previous round.
<ul>
<li> If $r > 0$, these integers are determined in interaction 3 described below.
<li> If $r = 0$, then for convenience we define $B_{r,i,0} = B_{r,i,1} = \dots = B_{r,i,N-1} = 0$.
</ul>
</ul>
<li> If contestant $(r, i)$ is able to determine the value of $X$, they answer President K with that value.
If any contestant gives an answer, the game ends immediately.
<li> For each $j = 0, 1, \dots, N-1$, contestant $(r, i)$ determines an integer $B_{r+1,j,i}$, which must be between $0$ and $2^{64}-1$, inclusive, to send to contestant $(r+1, j)$, and tells it to President K.
Even when $r = R - 1$, so that contestant $(r+1, j)$ does not exist, contestant $(r, i)$ must still determine $B_{r+1,j,i}$ and tell it to President K.
</ol>
</ul>

If an answered value of $X$ is incorrect, or if nobody answers the value of $X$ by the end of round $R - 1$, the game fails.
If the correct value of $X$ is answered by the end of round $R - 1$, the game succeeds.
A smaller number of rounds used yields a higher score
(if an answer is given in round $r$, the number of rounds is counted as $r + 1$).

Implement a strategy for the contestants so that the game succeeds in as few rounds as possible.

### Implementation Details

Your submission must include <code>multi.h</code> using a <code>#include</code> preprocessing directive, and must implement the following function.

<ul>
<li> <code>std::vector&lt;unsigned long long&gt; strategy(int N, int r, int i, std::vector&lt;unsigned long long&gt; A, std::vector&lt;unsigned long long&gt; B)</code>
<ul>
<li> The argument <code>N</code> represents the number of rows and columns of the table $A$.
<li> The arguments <code>r</code> and <code>i</code> represent the contestant number $(r, i)$.
<li> The argument <code>A</code> is a sequence of non-negative integers of length $N$, where <code>A[j]</code> ($0 \leq j \leq N - 1$) represents the integer $A_{i,j}$ written in the cell in the $(i + 1)$-st row from the top and the $(j + 1)$-st column from the left of the table $A$.
<li> The argument <code>B</code> is a sequence of non-negative integers of length $N$, where <code>B[j]</code> ($0 \leq j \leq N - 1$) represents the integer $B_{r,i,j}$ sent from contestant $(r-1, j)$ to contestant $(r, i)$.
If $r = 0$, then $\texttt{B[j]} = 0$.
<li> This function must return a sequence of non-negative integers of length $1$ or $N$, representing the action taken by contestant $(r, i)$ given the information in the arguments <code>A</code>, <code>B</code>.
If the returned sequence has length other than $1$ or $N$, the submission is judged as <strong>Wrong Answer [1]</strong>.
<ul>
<li> To answer that the value of $X$ is $x$, this function must return a sequence of length $1$, namely $(x)$.
If the answered value is incorrect, the submission is judged as <strong>Wrong Answer [2]</strong>.
<li> If no answer is given, this function must return a sequence $B'$ of length $N$.
<ul>
<li> For each $j = 0, 1, \dots, N-1$, $B'[j]$ represents the integer $B_{r+1,j,i}$ sent by contestant $(r, i)$ to contestant $(r+1, j)$.
It must be an integer between $0$ and $2^{64}-1$, inclusive.
Note that even when $r = R - 1$ and contestant $(r+1, j)$ does not exist, <strong>the length of $B'$ must still be $N$</strong>.
</ul>
<li> By the end of round $R - 1$, at least one contestant must give an answer.
If no contestant gives an answer, the submission is judged as <strong>Wrong Answer [3]</strong>.
</ul>
<li> <strong>The return value of this function must be determined solely by its arguments.</strong>
In particular, note that the return value must not depend on previous calls to <code>strategy</code> or on runtime randomness.
If this function returns different values for the same arguments, the submission is judged as <strong>Wrong Answer [4]</strong>.
<li> It is guaranteed that the given arguments can actually occur when playing the game using some table $A$ and the submitted function <code>strategy</code>.
However, <strong>note that calls are not necessarily made in the order of rounds $0, 1, \dots, R - 1$</strong>.
<li> <strong>The grader will play one or more games in a single execution.</strong>
In one execution, this function is called at most $10\,240$ times.
</ul>
</ul>

#### Important Notes

<ul>
<li> You may freely implement other functions or declare global variables for internal use.
<li> Your submitted program must not communicate in any way with standard input, standard output, or any other files.
However, outputting debugging information and the like to standard error output is allowed.
</ul>

---

### Constraints

<ul>
<li> $2 \leq N \leq 256$.
<li> $0 \leq A_{i,j} < 2^{48}$ ($0 \leq i \leq N - 1$, $0 \leq j \leq N - 1$).
<li> $A_{i,i} = 0$ ($0 \leq i \leq N - 1$).
<li> $A_{i,j} = A_{j,i}$ ($0 \leq i < j \leq N - 1$).
<li> $N$ and $A_{i,j}$ ($0 \leq i \leq N - 1$, $0 \leq j \leq N - 1$) are integers.
</ul>

### Subtasks

<ol>
<li> ($5$ points) $N \leq 64$, $A_{i,j} \leq 1$ ($0 \leq i \leq N - 1$, $0 \leq j \leq N - 1$).
<li> ($10$ points) $A_{i,j} \leq 1$ ($0 \leq i \leq N - 1$, $0 \leq j \leq N - 1$).
<li> ($15$ points) $N \leq 64$.
<li> ($40$ points) $A_{i,j} < 2^{20}$ ($0 \leq i \leq N - 1$, $0 \leq j \leq N - 1$).
<li> ($15$ points) $A_{i,j} < 2^{40}$ ($0 \leq i \leq N - 1$, $0 \leq j \leq N - 1$).
<li> ($15$ points) There are no additional constraints.
</ol>

### Scoring

If, among the test cases of a subtask, there is even one that is judged as <strong>Wrong Answer [1]–[4]</strong>,
Time Limit Exceeded, Memory Limit Exceeded, or Runtime Error, then the score for that subtask is $0$.
Otherwise, let $S$ be the maximum number of rounds used over all games in that subtask.
Then the score for that subtask is determined as follows.

#### In the case of Subtask 3

<ul>
<li> Regardless of the value of $S$, the score for that subtask is $100\%$ of the points for the subtask.
If $S > 6$, the contest site may display "Output is partially correct", but this does not affect the score.
</ul>

#### In the case of subtasks other than Subtask 3

<ul>
<li> If $S \leq 6$, the score for that subtask is $100\%$ of the points for the subtask.
<li> If $7 \leq S \leq 9$, the score for that subtask is $(100 - 20 \cdot (S - 6))\%$ of the points for the subtask.
<li> If $10 \leq S \leq 19$, the score for that subtask is $(40 - S)\%$ of the points for the subtask.
<li> If $20 \leq S$, the score for that subtask is $20\%$ of the points for the subtask.
</ul>

### Compilation and Test Run

A sample grader for testing your program is included in the archive downloadable from the contest site.
This archive also contains a sample file that you must submit.

The sample grader consists of a single file.
That file is <code>grader.cpp</code>.
To test your program, place the files <code>grader.cpp</code>, <code>multi.cpp</code>, and <code>multi.h</code> in the same Presidenty, and execute the following command.

~~~
g++ -std=gnu++20 -O2 -o grader grader.cpp multi.cpp
~~~

Alternatively, you may execute the file <code>compile.sh</code> included in the archive.
In that case, run the following command.

~~~
./compile.sh
~~~

If the compilation succeeds, an executable file named <code>grader</code> is generated.

Note that the actual grader used for evaluation differs from the sample grader.
The sample grader runs as a single process.
This program reads input from standard input and writes the results to standard output.

---

### Input for the Sample Grader

The sample grader plays one or more games in a single execution.

First, the sample grader reads the number of games $T$ from standard input.
Then, for each of the $T$ games, it reads the information of the table $A$ in the following format.

~~~
$N$ 
$A_{0,1}$ $A_{0,2}$ $A_{0,3}$ $\cdots$ $A_{0,N-1}$ 
$A_{1,2}$ $A_{1,3}$ $\cdots$ $A_{1,N-1}$ 
$\vdots$ 
$A_{N-2,N-1}$ 
~~~

#### Output for the Sample Grader

The sample grader outputs $T$ lines to standard output.
On the $t$-th line ($1 \leq t \leq T$), it outputs the result of the $t$-th game in the following format (the quotation marks are not actually printed).

<ul>
<li> If the game succeeds, the number of rounds used in that game is output as in <code>Accepted: 22</code>.
<li> If any of the Wrong Answer conditions applies, the type of Wrong Answer is output as in <code>Wrong Answer [4]</code>.
</ul>

If the program being executed satisfies more than one Wrong Answer condition, only one of them will be displayed.

 

### Sample Communication

Below is an example of input read by the sample grader and the corresponding sequence of function calls.

### Sample Input 1

~~~
1
3
1 2
3
~~~

<img src="https://img.atcoder.jp/joi2026final/multi-fig1-en.png" class="img-responsive center-block" style="width: 500px; max-width: 100%">

In round $0$, the following interactions take place.

<ul>
<li> Contestant $(0, 0)$ does not answer the value of $X$, and sends $B_{1,0,0} = 0$ to contestant $(1, 0)$, $B_{1,1,0} = 1$ to contestant $(1, 1)$, and $B_{1,2,0} = 2$ to contestant $(1, 2)$.
<li> Contestant $(0, 1)$ does not answer the value of $X$, and sends $B_{1,0,1} = 3$ to contestant $(1, 0)$, $B_{1,1,1} = 4$ to contestant $(1, 1)$, and $B_{1,2,1} = 5$ to contestant $(1, 2)$.
<li> Contestant $(0, 2)$ does not answer the value of $X$, and sends $B_{1,0,2} = 6$ to contestant $(1, 0)$, $B_{1,1,2} = 7$ to contestant $(1, 1)$, and $B_{1,2,2} = 8$ to contestant $(1, 2)$.
</ul>

Since no contestant answered the value of $X$, the game proceeds to the next round.

In round $1$, the following interaction takes place.

<ul>
<li> Contestant $(1, 0)$ receives $B_{1,0,0} = 0$ from contestant $(0, 0)$, $B_{1,0,1} = 3$ from contestant $(0, 1)$, and $B_{1,0,2} = 6$ from contestant $(0, 2)$, and answers that $X = 3$.
Since the value of $X$ has been answered, the game ends at this point.
</ul>

Because the answered value of $X$ is correct, the game succeeds.
The number of rounds used in this game is $2$.

This sample input satisfies the constraints of Subtasks $3, 4, 5,$ and $6$.

Among the files downloadable from the contest site, <code>sample-01-in.txt</code> corresponds to Sample Input 1.
The archive downloadable from the contest site also contains further sample inputs:
<code>sample-02-in.txt</code>, <code>sample-03-in.txt</code>, and <code>sample-04-in.txt</code>.
<code>sample-02-in.txt</code> satisfies the constraints of all subtasks,
<code>sample-03-in.txt</code> satisfies the constraints of Subtasks $3, 4, 5,$ and $6$,
and <code>sample-04-in.txt</code> satisfies the constraints of Subtasks $4, 5,$ and $6$.


