<blockquote markdown="1">

**Submission on AtCoder**

Use C++, include `Broken_device_lib.h`, and implement both `Anna` and `Bruno` in a single source file.

[Distributed files](https://img.atcoder.jp/joisc2017/broken_device-dist-92c3463d37.zip)

</blockquote>

Score: $100$ points

### Problem Statement

Anna and Bruno are archaeologists. They are investigating ruins in Iran.

Their tasks are as follows: Anna visits ruins and discovers artifacts, and Bruno analyzes the results in the base camp.

Their investigation is scheduled for $Q(= 1\,000)$ days. Every day, Anna sends the results to Bruno using a communication device. The results for each day is expressed as an integer $X$.

Anna can use the communication device once per day only. It can send a sequence of length $N (= 150)$ consisting of 0 or 1.

However, it was broken. There are several broken places in the sequence of length $N$. For a broken place, it always sends the value 0 regardless of the actual set value. When Anna sends a sequence, she can see the positions of the broken places. But, Bruno does not know them. The positions of broken places and the number of broken places can change every day.

There is a danger that their investigation will be delayed. Because you are a candidate of a contestant of an international programming contest in Iran, Anna and Bruno ask you to write a program which sends the results of their investigation.

### Task

Write two programs which achieve the communication between Anna and Bruno.

- Given the length of the sequence $N$, the integer to be sent $X$, the number of broken places $K$, and the positions of broken places $P$, the first program sets the sequence $S$ sent by Anna.
- Given the sequence $A$ received by Bruno, the second program recovers the integer $X$.

At a place where the communication device works, the sequence $S$ and the sequence $A$ have the same value. At a broken place, the sequence $A$ always has the value 0 regardless of the values of the sequence $S$.

### Implementation Details

You need to submit two files written by the same programming language. The first file is either `Anna.c` or `Anna.cpp`. This file sets a sequence sent by Anna, and implements the following function. The program should include `Annalib.h`.

- `void Anna( int N, long long X, int K, int P[] )`
    For each test case, this function is called $Q = 1\,000$ times.
    - The parameter `N` is the length of the sequence to be sent.
    - The parameter `X` is the integer to be sent.
    - The parameter `K` is the number of broken places.
    - The parameter `P[]` is a sequence of length $K$, describing the positions of broken places.

    In the function `Anna`, the following function must be called.

    - `void Set( int pos, int bit )`
        This function sets a bit in the sequence $S$ to be sent by the communication device.
        - The parameter `pos` is the position of the place to be set. `pos` must be an integer between $0$ and $N - 1$, inclusive. Note that the positions are counted from $0$. If it is called with parameter outside this range, your program is considered as Wrong Answer[1]. It is not allowed to call this function more than once with the same parameter `pos`. If it is called more than once with the same parameter, your program is considered as Wrong Answer[2].
        - The parameter `bit` is the value set to the `pos`-th position of the sequence. The value of `bit` must be either 0 or 1. If it is called with other parameters, your program is considered as Wrong Answer[3].

    The function `Set` must be called exactly $N$ times in the function `Anna`. When function `Anna` terminates, if the number of times the function `Set` is called is different from $N$, your program is considered as Wrong Answer[4].

    Your program is terminated if the function call by `Anna` is considered invalid.

The second file is either `Bruno.c` or `Bruno.cpp`. This file recovers the integer expressing the results of investigation, and implements the following function. The program should include `Brunolib.h`.

- `long long Bruno( int N, int A[] )`
    For each test case, this function is called $Q = 1\,000$ times.
    - The parameter `N` is the length of the sequence received by Bruno.
    - The parameter `A` is an integer sequence of length $N$. It is the sequence received by Bruno.
    - The function `Bruno` must recover the value of $X$, and return it.

#### Grading Procedure

The grading is done in the following way. If your program is considered as Wrong Answer, it is terminated immediately.

1. Set $\texttt{cnt} = 0$.
2. Call the function `Anna` once.
3. Let $S$ be the sequence set by the function `Anna`. In the sequence $S$, set the value 0 to the positions in $P$, and obtain the sequence $A$. Call the function `Bruno` once with parameter $A$.
4. Set $\texttt{cnt} = \texttt{cnt} + 1$. If $\texttt{cnt} < Q$, go to (2). If $\texttt{cnt} = Q$, go to (5).
5. Your program will be scored.

#### Important Notices

- Running time and memory usage are calculated for (1), (2), (3), (4) of Grading Procedure.
- Your program must not be considered as Wrong Answer in the function call to `Anna` in (2) or `Bruno` in (3). Your program must be executed without runtime error.
- Your program can implement other functions for internal use, or use global variables. Submitted programs will be compiled with the grader, and become a single executable file. All global variables and internal functions should be declared `static` to avoid confliction with other files. Since the programs of Anna and Bruno will be executed as 2 distinct processes when they are graded, they can not share global variables.
- In the process, each of the functions `Anna` and `Bruno` is called $Q = 1\,000$ times. The variables used by your programs should be initialized appropriately.
- Your program should not use standard input and standard output. Your program should not communicate with other files by any methods.

### Compilation and Test Run

You can download an archive file from the contest webpage which contains a sample grader to test your program. The archive file also contains a sample source file of your program.

A sample grader consists of one source file which is either `grader.c` or `grader.cpp`. For example, if your programs are `Anna.c` and `Bruno.c`, or `Anna.cpp` and `Bruno.cpp`, you run the following commands to compile your programs.

- C

~~~
gcc -std=c11 -O2 -o grader grader.c Anna.c Bruno.c -lm
~~~
- C++

~~~
g++ -std=c++14 -O2 -o grader grader.cpp Anna.cpp Bruno.cpp
~~~

When the compilation succeeds, the executable file `grader` is generated. Note that the actual grader is different from the sample grader. The sample grader will be executed as a single process, which will read input data from the standard input and write the results to the standard output.

#### Input for the sample grader

The sample grader reads the following data from the standard input.

- The first line contains an integer $Q$.
- Then, information of $Q$ queries are given.
- Information of each query consists of two lines as follows.
    - The first line contains three space separated integers $N, X, K$. This means the length of the sequence to be sent is $N$, the integer to be sent by Anna is $X$, and there are $K$ broken places.
    - The second line contains $K$ space separated integers $P_{0}, P_{1}, \cdots, P_{K - 1}$. This means, for each $i$ ($0 \le i \le K - 1$), the $P_{i}$-th place in the sequence is broken.

#### Output of the sample grader

When the program terminates successfully, the sample grader writes the following information to the standard output. (The quotation mark is not written actually.)

- If your program is considered as Wrong Answer, the sample grader writes its type in the following form “Wrong Answer [1],” and your program is terminated.
- If every function call to `Anna` is not considered as Wrong Answer, the sample grader writes “`Accepted`” and the value of $L^{\ast}$. For the value of $L^{\ast}$, see Scoring.

If your program is considered as several types of Wrong Answer, the sample grader reports only one of them.

### Constraints

All input data satisfy the following conditions.

- $Q = 1000$.
- $N = 150$.
- $0 \le X \le 1\,000\,000\,000\,000\,000\,000$.
- $1 \le K \le 40$.
- $0 \le P_{i} \le N - 1$ ($0 \le i \le K - 1$).
- $P_{i} < P_{i+1}$ ($0 \le i \le K - 2$).

### Scoring

- Let $L^{\ast}$ be the minimum of the following value for all test cases of this task.
    - The maximum integer $L\le40$ such that, for every query with $K\le L$, Bruno answers the correct value of $X$.
- The score of this task is calculated by the following way:
    - If $L^{\ast}=0$, the score is $0$ point.
    - If $1\le L^{\ast}\le14$, the score is $8$ points.
    - If $15\le L^{\ast}\le37$, the score is $(L^{\ast} - 15)\times2+41$ points.
    - If $38\le L^{\ast}\le40$, the score is $(L^{\ast} - 38)\times5+90$ points.

### Sample Communication

Here is a sample input for grader and corresponding function calls. Note that the following example does not satisfy the constraints of this task because $Q = 2$, $N = 3$.

### Sample Input

~~~
2
3 14 1
2
3 9 2
0 1
~~~

#### Sample Calls

<div class="joisc2017-broken-device-en-table" markdown="1">

| Call | Return | Call | Return |
| --- | --- | --- | --- |
| `Anna(...)` |  |  |  |
|  |  | `Set(0,0)` |  |
|  |  |  | (none) |
|  |  | `Set(1,0)` |  |
|  |  |  | (none) |
|  |  | `Set(2,1)` |  |
|  |  |  | (none) |
|  | (none) |  |  |
| `Bruno(...)` |  |  |  |
|  | `14` |  |  |
| `Anna(...)` |  |  |  |
|  |  | `Set(0,0)` |  |
|  |  |  | (none) |
|  |  | `Set(1,1)` |  |
|  |  |  | (none) |
|  |  | `Set(2,1)` |  |
|  |  |  | (none) |
| `Bruno(...)` |  |  |  |
|  | `9` |  |  |

</div>

Here the parameters for `Anna(...)`, `Bruno(...)`, `Anna(...)`, `Bruno(...)` are as follows.

<div class="joisc2017-broken-device-en-table" markdown="1">

| Parameter | `Anna(...)` | `Bruno(...)` | `Anna(...)` | `Bruno(...)` |
| --- | --- | --- | --- | --- |
| `N` | $3$ | $3$ | $3$ | $3$ |
| `X` | $14$ |  | $9$ |  |
| `K` | $1$ |  | $2$ |  |
| `P` | $\\{ 2\\}$ |  | $\\{ 0, 1\\}$ |  |
| `A` |  | $\\{ 0, 0, 0\\}$ |  | $\\{ 0, 0, 1\\}$ |

</div>

<style>
.joisc2017-broken-device-en-table { position:relative; max-width:100%;overflow-x:auto;margin:1em 0; }
.joisc2017-broken-device-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisc2017-broken-device-en-table th,.joisc2017-broken-device-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisc2017-broken-device-en-table th { background:#f5f5f5; }
.joisc2017-broken-device-en-table code { white-space:nowrap; }
</style>

<style>
.joisc2017-broken-device-en-table .katex {position:relative;}
</style>
