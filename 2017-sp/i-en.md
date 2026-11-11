<blockquote markdown="1">

**Submission on AtCoder**

Use C++ and implement the functions specified in the statement without a `main` function.

[Distributed files](https://img.atcoder.jp/joisc2017/natural_park-dist-2b1880bf4b.zip)

</blockquote>

Score: $100$ points

### Problem Statement

The JOI island is a sightseeing area. The whole island is designated as a natural park.

There are $N$ places and several roads in the JOI island. The places are numbered from 0 to $N - 1$. Every road connects two different places, and we can pass it in both directions. For each place, there are at most $7$ roads connecting it with other places. For each pair of two different places, there is at most one road connecting them. We can travel from every place to any other places if we pass through several roads.

You and your friend IOI-chan will investigate the JOI island. To investigate it efficiently, you need to figure out the structure of the JOI island. The JOI island is dangerous because there are many wild animals. Since IOI-chan has high athletic ability, she will explore the JOI island, and you will specify the structure of the JOI island according to IOI-chan’s reports.

You will give two places $A, B$ and several possibilities of intermediate places to IOI-chan, and ask whether it is possible to travel from the place $A$ to the place $B$ if we can pass through some of the given intermediate places only. Then, IOI-chan will explore the JOI island, and reports the results to you.

Since they can not take too much time for investigation, the number of queries should be less than or equal to $45\,000$.

### Task

Write a program which communicates with IOI-chan and specifies the structure of the JOI island.

### Implementation Details

You need to write a program which implements the way to specify the structure of the JOI island. Your program should include `park.h`.

Your program should implement the following routine.

- `void Detect(int T, int N)`
    This function is called only once.
    - The parameter `T` is the subtask number, and `N` is the number of places.

Your program should output the structure of the JOI island specified by it using the following function:

- `void Answer(int A, int B)`
    The number of calls to this function should be the same as the number of roads in the JOI island.
    - The parameters `A`, `B` denote there is a road connecting the place `A` and the place `B`.

    The parameters should satisfy the following conditions:

    - `A`, `B` should satisfy $0 \le \texttt{A} < \texttt{B} \le N - 1$. If this condition is not satisfied, your program is considered as Wrong Answer[1].
    - If the function is called with parameters (`A`, `B`), there must be a road connecting the place `A` and the place `B`. If this condition is not satisfied, your program is considered as Wrong Answer[2].
    - The function should not be called more than once with the same parameter (`A`, `B`). If this condition is not satisfied, your program is considered as Wrong Answer[3].

Moreover, your program can call the following function:

- `int Ask(int A, int B, int Place[])`
    This function is used to ask IOI-chan.
    - `Place` is the pointer of an array of possible intermediate places. For each $i$ ($0 \le i \le N - 1$), $\texttt{Place}[i] = 1$ is we can pass through the place $i$, and $\texttt{Place}[i] = 0$ is we can not pass through the place $i$.
    - The return value of this function is $1$ if we can travel from the place `A` to the place `B` if we can pass through some of the places specified by the array `Place[]` only. Otherwise, the return value is 0.

    The parameters should satisfy the following conditions:

    - $0 \le \texttt{A} < \texttt{B} \le N - 1$.
    - $0 \le \texttt{Place\[i\]} \le 1$ ($0 \le \texttt{i} \le N - 1$).
    - $\texttt{Place}[A] = 1$.
    - $\texttt{Place}[B] = 1$.

    If these conditions are not satisfied, your program is considered as Wrong Answer[4]. However, the behavior of the function is not guaranteed if the length of the array `Place[]` is not equal to $N$.
    The function `Ask` should not be called more than 45 000 times. If it exceeds, your program is considered as Wrong Answer[5].

When the function `Detect` terminates, if there is a road which is not a parameter of the previous calls to the function `Answer`, your program is considered as Wrong Answer[6].

Your program can implement other functions for internal use, or use global variables. Your program should not use standard input and standard output. Your program should not communicate with other files by any methods.

### Compilation and Test Run

You can download an archive file from the contest webpage which contains a sample grader to test your program. The archive file also contains a sample source file of your program.

A sample grader consists of one source file which is either `grader.c` or `grader.cpp`. For example, if your program is `park.c` or `park.cpp`, you run the following commands to compile your program.

- C

~~~
gcc -std=c11 -O2 -o grader grader.c park.c -lm
~~~
- C++

~~~
g++ -std=c++14 -O2 -o grader grader.cpp park.cpp
~~~

When the compilation succeeds, the executable file `grader` is generated. Note that the actual grader is different from the sample grader. The sample grader will be executed as a single process, which will read input data from the standard input and write the results to the standard output.

#### Input for the Sample Grader

The sample grader reads the following data from the standard input.

- The first line of input contains an integer $T$, the subtask number.
- The second line of input contains an integer $N$, the number of places.
- The third line of input contains an integer $M$, the number of roads.
- In the $i$-th line ($1 \le i \le M$) of the following $M$ lines contains two space separated integers $A_{i}, B_{i}$. This means there is a road connecting the place $A_{i}$ and the place $B_{i}$, and we can pass it in both directions.

#### Output of the Sample Grader

When the program terminates successfully, the sample grader writes the following information to the standard output. (The quotation mark is not written actually.)

- If your program is considered as correct, the sample grader writes “`Accepted`.”
- If your program is considered as Wrong Answer, the sample grader writes its type in the following form “Wrong Answer [1],” and your program is terminated.

If your program is considered as several types of Wrong Answer, the sample grader reports one of them only.

### Constraints

All input data satisfy the following conditions. For the meaning of $T, N, M$, see Input for the Sample Grader.

- $1 \le T \le 5$.
- $2 \le N \le 1\,400$.
- $1 \le M \le 1\,500$.
- For each place, there are at most 7 roads connecting it with other places.
- We can travel from every place to any other places if we pass through several roads.
- For each pair of two different places, there is at most one road connecting them.

### Subtask

There are 5 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$10$ points]

- $T = 1$.
- $N \le 250$.

#### Subtask 2 [$10$ points]

- $T = 2$.
- $M = N - 1$.
- For the place 0 or $N - 1$, there is exactly one road connecting it with another place. For every other place, there are exactly 2 roads connecting it with other places.

#### Subtask 3 [$27$ points]

- $T = 3$.
- $M = N - 1$.
- For every $i$ ($1 \le i \le N - 1$), we can travel from the place 0 to the place $i$ if we pass through at most 8 other places.

#### Subtask 4 [$30$ points]

- $T = 4$.
- $M = N - 1$.

#### Subtask 5 [$23$ points]

- $T = 5$.

### Sample Communication

Here is a sample input for sample grader and corresponding function calls.

### Sample Input

~~~
1
6
7
0 1
0 3
1 2
1 4
2 4
2 5
3 4
~~~

#### Sample Calls

<div class="joisc2017-natural-park-en-table" markdown="1">

| Call | Return |
| --- | --- |
| `Ask(3, 5,{0,0,1,1,1,1})` | $1$ |
| `Answer(2, 4)` |  |
| `Answer(2, 5)` |  |
| `Answer(3, 4)` |  |
| `Ask(0, 4,{1,0,1,0,1,0})` | $0$ |
| `Answer(0, 1)` |  |
| `Answer(0, 3)` |  |
| `Answer(1, 4)` |  |
| `Answer(1, 2)` |  |

</div>

Note that the function calls in this example do not necessarily have meaning. In this example, the function `Detect` is called with parameters $\texttt{T} = 1$, $\texttt{N} = 6$.

In this example, the structure of the JOI island is as follows:

<p><img src="https://img.atcoder.jp/joisc2017/natural_park-en-p13-2.png" alt="Figure" style="max-width:100%;height:auto;"></p>

The structure of the JOI island. The circles and numbers denote the places and their numbers. The line segments denote the roads.

- The first call to the function `Ask` asks whether we can travel from the place 3 to the place 5 if we can pass through the places 2, 3, 4, 5 only. Because it is possible, the function `Ask` returns 1.
- The second call to the function `Ask` asks whether we can travel from the place $0$ to the place $4$ if we can pass through the places 0, 2, 4 only. Because it is impossible, the function `Ask` returns 0.

<style>
.joisc2017-natural-park-en-table { position:relative; max-width:100%;overflow-x:auto;margin:1em 0; }
.joisc2017-natural-park-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisc2017-natural-park-en-table th,.joisc2017-natural-park-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisc2017-natural-park-en-table th { background:#f5f5f5; }
.joisc2017-natural-park-en-table code { white-space:nowrap; }
</style>

<style>
.joisc2017-natural-park-en-table .katex {position:relative;}
</style>
