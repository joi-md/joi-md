<blockquote markdown="1">

**Submission on AtCoder**

On AtCoder, use standard input and output. Implement a `main` function instead of `calculate_necessary_time`, using the format described under “Input for the Grader” and “Output of the Grader” in the statement.

Input format:

~~~
$N$ $M$ $S$ $Q$
$A_0$ $B_0$ $L_0$ $C_0$
$\vdots$
$A_{M - 1}$ $B_{M - 1}$ $L_{M - 1}$ $C_{M - 1}$
$U_0$ $V_0$ $T_0$
$\vdots$
$U_{Q - 1}$ $V_{Q - 1}$ $T_{Q - 1}$
~~~

Print $Q$ lines. Line $k+1$ ($0 \le k \le Q - 1$) must contain `answer[k]`.

[Distributed files](https://www2.ioi-jp.org/camp/2021/2021-sp-tasks/day2/escape_route-dist.zip)

</blockquote>

Score: $100$ points

### Problem Statement

In IOI Kingdom, they use Byou as the unit of time. A day in IOI Kingdom is divided into $S$ units of time. The moment $x$ Byous ($0 \le x < S$ ) after the beginning of a day is called time $x$. The IOI Kingdom consists of $N$ cities, numbered from 0 to $N - 1$. There are $M$ roads connecting cities, numbered from 0 to $M - 1$. You can travel from any city to any other city by passing through some of the roads. The road $i$ ($0 \le i \le M - 1$) connects the city $A_{i}$ and the city $B_{i}$ bidirectionally. It takes $L_{i}$ Byous to pass through the road $i$ from an endpoint to the other endpoint. Every day, a strict security inspection is performed on the road $i$ from time $C_{i}$ to the end of the day.

JOI Group is one of the secret sects in IOI Kingdom. Since it is a secret sect, the members of JOI Group is strictly confidential. This means members of JOI Group should not encounter a strict security inspection performed every day. Therefore, if a member of JOI Group wants to pass through the road $i$, the member should depart from either the city $A_{i}$ or the city $B_{i}$ at time $x$ and arrive at the other city at time $x + L_{i}$ for some $0 \le x \le C_{i} - L_{i}$. Since a strict security inspection is not performed in the cities, a member of JOI Group may be at in either the city $A_{i}$ or the city $B_{i}$ when a strict security inspection is performed on the road $i$.

There are $Q$ members in JOI Group, numbered from 0 to $Q - 1$. The member $j$ ($0 \le j \le Q - 1$) departs from the city $U_{j}$ at time $T_{j}$ on some day and starts traveling to the city $V_{j}$. Members are allowed to stay in cities on the way for a while. It may take multiple days for the member $j$ to arrive at the city $V_{j}$.

Write a program which, given the information of the cities and the roads of IOI Kingdom, the information of strict security inspections, and the information of the members of JOI Group, calculates for each $j$ ($0 \le j \le Q - 1$) the minimum amount of time required for the member $j$ to travel from the city $U_{j}$ to the city $V_{j}$.

### Implementation Details

In order to speed up input and output, this task is graded with `grader`.

You need to submit one file. The name of the file you submit is `escape_route.cpp`. It should implement the following function. The program should include `escape_route.h` using the preprocessing directive `#include`.

- `std::vector<long long> calculate_necessary_time( int N, int M, long long S, int Q, std::vector<int> A, std::vector<int> B, std::vector<long long> L, std::vector<long long> C, std::vector<int> U, std::vector<int> V, std::vector<long long> T)`
    This function is called exactly once for each test case.
    - The parameter `N` is the number of cities in IOI Kingdom.
    - The parameter `M` is the number of roads in IOI Kingdom.
    - The parameter `S` means a day in IOI Kingdom is $S$ Byous.
    - The parameter `Q` is the number of members of JOI Group.
    - The parameters `A`，`B`，`L`，`C` are arrays of length $M$. They mean the road $i$ ($0 \le i \le M - 1$) connects the city `A[i]` and the city `B[i]`, it takes `L[i]` Byous to pass through the road $i$, and a strict security inspection on the road $i$ starts at time `C[i]`.
    - The parameters `U`，`V`，`T` are arrays of length $Q$. They mean the member $j$ ($0 \le j \le Q - 1$) departs from the city `U[j]` at time `T[j]` and starts traveling to the city `V[j]`.
    - This function should return an array `answer` of `long long` type and of length $Q$. It means, for each $0 \le j \le Q - 1$, the minimum amount of time required for the member $j$ to travel from the city `U[j]` to the city `V[j]` is `answer[j]` Byous.

### Important Notices

- Your program must not use the standard input and the standard output. Your program must not communicate with other files by any methods. However, your program may output debugging information to the standard error.
- The grader does not check the format of input. If the format of input is incorrect, the behavior of the grader is not guaranteed.
- If the length of the array returned by `calculate_necessary_time` is different from $Q$ or the array contains negative integers, the behavior of the grader is not guaranteed.

### Compilation and Test Run

You can download an archive file from the contest webpage which contains the grader to test your program. The archive file also contains a sample source file of your program.

The grader is the file `grader.cpp`. In order to test your program, put `grader.cpp`，`escape_route.cpp`， `escape_route.h` in the same directory, and run the following command to compile your programs.

~~~
g++ -std=gnu++17 -O2 -fsigned-char -o grader grader.cpp escape_route.cpp
~~~

When the compilation succeeds, the executable file `grader` is generated.

In this task, the grader available from the contest webpage is the same as the actual grader used for grading in CMS.

### Input for the Grader

The grader reads the following data from the standard input. Given values are all integers.

~~~
$N$ $M$ $S$ $Q$
$A_{0}$ $B_{0}$ $L_{0}$ $C_{0}$
$\vdots$
$A_{M - 1}$ $B_{M - 1}$ $L_{M - 1}$ $C_{M - 1}$
$U_{0}$ $V_{0}$ $T_{0}$
$\vdots$
$U_{Q - 1}$ $V_{Q - 1}$ $T_{Q - 1}$
~~~

### Output of the Grader

The grader outputs $Q$ lines to the standard output. The $(k + 1)$-th line ($0 \le k \le Q - 1$) of output contains `answer[k]`.

### Constraints

- $2 \le N \le 90$.
- $N - 1\le M\le\dfrac{N(N - 1)}{2}$.
- $2 \le S \le 1\,000\,000\,000\,000\,000 = 10^{15}$.
- $1 \le Q \le 3\,000\,000$.
- $0 \le A_{i} \le N - 1$ ($0 \le i \le M - 1$).
- $0 \le B_{i} \le N - 1$ ($0 \le i \le M - 1$).
- $A_{i} \ne B_{i}$ ($0 \le i \le M - 1$).
- $(A_{i}, B_{i}) \ne (A_{k}, B_{k})$, $(A_{i}, B_{i}) \ne (B_{k}, A_{k})$ ($0 \le i < k \le M - 1$).
- $1 \le L_{i} < S$ ($0 \le i \le M - 1$).
- $L_{i} \le C_{i} < S$ ($0 \le i \le M - 1$).
- You can travel from any city to any other city by passing through some of the roads.
- $0 \le U_{j} \le N - 1$ ($0 \le j \le Q - 1$).
- $0 \le V_{j} \le N - 1$ ($0 \le j \le Q - 1$).
- $U_{j} \ne V_{j}$ ($0 \le j \le Q - 1$).
- $0 \le T_{j} < S$ ($0 \le j \le Q - 1$).

### Subtasks

1. ($5$ points) $N \le 40$, $Q \le 1\,000$,
2. ($20$ points) $N \le 40$, $U_{j} = 0$ ($0 \le j \le Q - 1$).
3. ($10$ points) $N \le 40$.
4. ($35$ points) $N \le 60$.
5. ($30$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
4 5 20 6
0 1 3 19
0 2 2 8
1 2 4 15
1 3 5 14
2 3 1 18
0 3 5
0 3 7
0 3 9
2 0 6
3 1 10
1 2 15
~~~

### Sample Output 1

~~~
3
8
14
2
5
7
~~~

This sample input satisfies the constraints of Subtasks 1, 3, 4, 5.

At time 5, the member 0 starts traveling from the city 0 to the city 3. If the member 0 travels in the following way, it takes 3 Byous.

- Using the road 1, the member 0 departs from the city 0 at time 5, and arrives at the city 2 at time 7.
- Using the road 4, the member 0 departs from the city 2 at time 7, and arrives at the city 3 at time 8.

Since this is the minimum value, we have $\texttt{answer}[0] = 3$.

At time 7, the member 1 starts traveling from the city 0 to the city 3. If the member 1 travels in the following way, it takes 8 Byous.

- Using the road 0, the member 1 departs from the city 0 at time 7, and arrives at the city 1 at time 10.
- Using the road 2, the member 1 departs from the city 1 at time 10, and arrives at the city 2 at time 14.
- Using the road 4, the member 1 departs from the city 2 at time 14, and arrives at the city 3 at time 15.

Since this is the minimum value, we have $\texttt{answer}[1] = 8$.

At time 9, the member 2 starts traveling from the city 0 to the city 3. If the member 2 travels in the following way, the member 2 arrives at the city 3 at time 3 on the next day. In total, it takes 14 Byous.

- The member 2 stays in the city 0 until time 0 on the next day.
- Using the road 1, the member 2 departs from the city 0 at time 0, and arrives at the city 2 at time 2.
- Using the road 4, the member 2 departs from the city 2 at time 2, and arrives at the city 3 at time 3.

Since this is the minimum value, we have $\texttt{answer}[2] = 14$.

### Sample Input 2

~~~
6 10 100 9
5 3 4 29
1 0 6 26
0 4 2 7
0 5 18 18
2 0 79 82
3 4 35 46
1 2 15 57
2 4 3 6
4 1 21 83
3 2 47 53
0 2 63
0 4 70
0 4 98
0 5 25
0 5 19
0 4 96
0 5 2
0 3 62
0 3 83
~~~

### Sample Output 2

~~~
42
32
4
93
99
6
102
60
39
~~~

This sample input satisfies the constraints of all Subtasks.

### Sample Input 3

~~~
8 12 1000000000000000 13
2 0 4451698272827 120985696255786
6 5 78520421713825 342652131468508
2 1 185377268405175 382583457603811
0 4 54350742205838 133614919589507
7 0 68486247989149 651590905094148
0 6 85177550834829 299184420663240
5 2 442329739732459 926608308293721
3 7 78020232822359 913548478810253
1 3 267796317244889 687571310475622
5 4 90590208828121 910324397566584
5 7 8414633059584 17796117322043
4 6 45682367792138 204548471584556
7 2 44779065000162
3 5 79376234836942
4 7 305556687070759
4 3 927935834343174
5 1 663284649258985
2 5 967584209777344
5 2 963749709374595
7 4 484562389171308
1 5 446160773830045
6 4 801452311055604
3 1 744524289545354
0 6 467418420721777
5 6 371181379240653
~~~

### Sample Output 3

~~~
72937946261976
929038398222642
702857945988825
272921388674172
580895059624855
181808439529442
117602869946965
569788353034530
1181546234307589
244230056736534
513790925121797
617759130113052
674500988551485
~~~

This sample input satisfies the constraints of Subtasks 1, 3, 4, 5.
