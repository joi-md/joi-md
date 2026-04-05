Score: $100$ points

[Distributed Files](https://img.atcoder.jp/joi2026final/casino.zip?_gl=1*13kd1yr*_ga*MjkxNTEwOTk5LjE3NzQyMzI5MTM.*_ga_RC512FD18N*czE3NzQzNjg4MzIkbzE3JGcxJHQxNzc0MzY5MTkzJGo2MCRsMCRoMA..)

> #### How to Submit to AtCoder
>
> - Include <code>Azzurro.h</code> and <code>Bordeaux.h</code>, and implement the functions specified in the statement.
> - <strong>Do not use standard input/output or file input/output.</strong>

### Problem Statement

Azzurro and Bordeaux, a pair visiting a casino in Italy, decided to play a game proposed by the dealer Chiaro.

In this game, information is transmitted using an $N \times N$ grid ($N = 8$)). The rows of the grid are numbered from $0$ to $N - 1$ from top to bottom, and the columns of the grid are numbered from $0$ to $N - 1$ from left to right. A cell with row number $r$ and column number $c$ is denoted by $(r, c)$.

In this game, Azzurro and Bordeaux are isolated in separate rooms. They will play $Q$ <strong>turns</strong>. The $i$-th turn ($1 \leq i \leq Q$) proceeds as follows.

<ol>
<li> Azzurro receives from Chiaro an integer $N$, an integer $L_i$ ($1 \leq L_i \leq 51$), a card on which a string $S_i$ of length $L_i$ consisting of '<code>A</code>' and '<code>B</code>' is written, and an $N \times N$ grid whose cells are all colored white.
<li> Azzurro colors each of the $N^2$ cells either blue or red. He then hands the grid to Chiaro.
<li> Chiaro performs the following operations out of sight of both Azzurro and Bordeaux.
<ol>
<li> He selects one path from $(0, 0)$ to $(N - 1, N - 1)$ by repeatedly moving only to an adjacent cell either down or to the right.
<li> For every cell on the path, if the cell is colored blue, he repaints it red; if it is colored red, he repaints it blue.
</ol>
<li> Bordeaux receives from Chiaro a card with integers $N$ and $L_i$ written on it, along with the grid.
<li> Bordeaux writes a string of length $L_i$ consisting of <code>A</code> and <code>B</code> on a sheet of paper. If the written string matches $S_i$, Azzurro and Bordeaux win.
</ol>

Write programs which implement the strategies of Azzurro and Bordeaux
to win this game. For the grading of this task, see <strong>Grading</strong>.

### Implementation Details

You need to submit two files.

The first file is <code>Azzurro.cpp</code>. It should implement Azzurro's strategy. It should implement the following functions. The program should include <code>Azzurro.h</code> using the preprocessing directive <code>#include</code>.

<ul>
<li> <code>std::vector&lt;std::vector&lt;int&gt;&gt; Azzurro(int N, int L, std::string S)</code>

This function is called $Q$ times. The $i$-th call ($1 \leq i \leq Q$) corresponds to the procedures 1., 2.\ of the $i$-th turn of the game.
<ul>

<li> The parameter <code>N</code> is the integer $N$ written on the card given to Azzurro in the procedure 1.\ of the $i$-th turn.
<li> The parameter <code>L</code> is the integer $L_i$ written on the card given to Azzurro in the procedure 1.\ of the $i$-th turn.
<li> The parameter <code>S</code> is the string $S_i$ written on the card given to Azzurro in the procedure 1.\ of the $i$-th turn.
</ul>

For each call to the function <code>Azzurro</code>, your program must return an $N \times N$ two-dimensional array <code>x</code>, each of whose elements is either $0$ or $1$. If this condition is not satisfied, your program is judged as <strong>Wrong Answer [1]</strong>.

<ul>
<li> If $\texttt{x}[\texttt{r}][\texttt{c}] = 0$ ($0 \leq \texttt{r} \leq N - 1$, $0 \leq \texttt{c} \leq N - 1$), it indicates that the cell $(\texttt{r}, \texttt{c})$ is colored blue.
<li> If $\texttt{x}[\texttt{r}][\texttt{c}] = 1$ ($0 \leq \texttt{r} \leq N - 1$, $0 \leq \texttt{c} \leq N - 1$), it indicates that the cell $(\texttt{r}, \texttt{c})$ is colored red.
</ul>
</ul>

The second file is <code>Bordeaux.cpp</code>. It should implement Bordeaux's strategy. It should implement the following function. The program should include <code>Bordeaux.h</code> using the preprocessing directive <code>#include</code>.

<ul>
<li> <code>std::string Bordeaux(int N, int L, std::vector&lt;std::vector&lt;int&gt;&gt; T)</code>

This function is called every time when Azzurro finishes painting the grid. This function is called $Q$ times in total. The $i$-th call ($1 \leq i \leq Q$) corresponds to the procedures 4., 5.\ of the $i$-th turn of the game.

<ul>

<li> The parameter <code>N</code> is the integer $N$ written on the card given to Bordeaux in the procedure 4.\ of the $i$-th turn.
<li> The parameter <code>L</code> is the integer $L_i$ written on the card given to Bordeaux in the procedure 4.\ of the $i$-th turn.
<li> The parameter <code>T</code> is the $N \times N$ two-dimensional array corresponding to the grid of cells given to Bordeaux in the procedure 4.\ of the $i$-th turn. The color of the cell $(\texttt{r}, \texttt{c})$ ($0 \leq \texttt{r} \leq N - 1$，$0 \leq \texttt{c} \leq N - 1$) is blue if $\texttt{T[a][b]} = 0$, and red if $\texttt{T[a][b]} = 1$.
</ul>

For each call to the function <code>Bordeaux</code>, your program must return a string <code>s</code> of length $L_i$ consisting of '<code>A</code>' and '<code>B</code>'. If this condition is not satisfied, your program is judged as <strong>Wrong Answer [2]</strong>.
</ul>

#### Important Notices

<ul>
<li> Your program can implement other functions for internal use, or use global variables. Submitted files will be compiled with the grader, and become a single executable file. All global variables and internal functions should be declared in an unnamed namespace to avoid confliction with other files. When it is graded, it will be executed as two processes of Azzurro and Bordeaux. The process of Azzurro and the process of Bordeaux cannot share global variables.
<li> Your program must not use the standard input and the standard output. Your program must not communicate with other files by any methods. However, your program may output debugging information to the standard error.
</ul>

### Compilation and Test Run

You can download an archive file from the contest webpage which contains the sample grader to test your program. The archive file also contains a sample source file of your program.

The sample grader is the file <code>grader.cpp</code>. In order to test your program, put <code>grader.cpp</code>，<code>Azzurro.cpp</code>，<code>Bordeaux.cpp</code>，<code>Azzurro.h</code>，<code>Bordeaux.h</code> in the same directory, and run the following command to compile your programs.

~~~
g++ -std=gnu++20 -O2 -o grader grader.cpp Azzurro.cpp Bordeaux.cpp
~~~

Instead, you may run <code>compile.sh</code> contained in the archive file. In this case, run the following command to compile your programs.

~~~
./compile.sh
~~~

When the compilation succeeds, the executable file <code>grader</code> is generated.

Note that the actual grader is different from the sample grader. The sample grader will be executed as a single process, which will read input data from the standard input and write the results to the standard output.

In the actual judging grader, <strong>the path chosen by Chiaro is fixed in advance</strong>. That is, the path selected by Chiaro is determined before the functions <code>Azzurro</code> and <code>Bordeaux</code> in your submitted program are called.

---

### Input for the Sample Grader

The sample grader reads the following data from the standard input.

~~~
$Q$ $N$ 
$L_1$ 
$S_1$ 
$R_1$ 
$L_2$ 
$S_2$ 
$R_2$ 
$\vdots$ 
$L_Q$ 
$S_Q$ 
$R_Q$
~~~

Here, $R_i$ ($1 \leq i \leq Q$) is a string of length $2(N - 1)$ consisting of exactly $N - 1$ occurrences of '<code>D</code>' and $N - 1$ occurrences of '<code>R</code>'. This string represents the path chosen by Chiaro in the $i$-th turn, which starts from $(0, 0)$ and reaches $(N - 1, N - 1)$ by repeatedly moving only to an adjacent cell either down or to the right. Specifically, starting from $(0, 0)$, for each $j = 1, 2, \cdots, 2(N - 1)$, if the $j$-th character of $R_i$ is '<code>D</code>', the move is to the adjacent cell below; if it is '<code>R</code>', the move is to the adjacent cell to the right. Repeating this process results in reaching $(N - 1, N - 1)$.

#### Output of the Sample Grader

The sample grader outputs the following information to the standard output (quotes for clarity).

<ul>
<li> If your program is judged as correct, it writes the value of $L^{*}$ as "<code>Accepted: 26</code></code>". For the value of $L^{*}$, see Grading.
<li> If your program is judged as any type of Wrong Answer, the sample grader writes its type as "<code>Wrong Answer [1]</code>".
</ul>

If your program satisfies the conditions of several types of Wrong Answer, the sample grader reports only one of them. The sample grader may terminate the execution when one of the conditions for wrong answer is met.

---

### Constraints

All the input data satisfy the following conditions.

<ul>
<li> $1 \leq Q \leq 30\,000$.
<li> $N = 8$.
<li> $1 \leq L_i \leq 51$ ($1 \leq i \leq Q$).
<li> $Q, L_i$ ($1 \leq i \leq Q$) are integers.
<li> $S_i$ ($1 \leq i \leq Q$) is a string of length $L_i$ consisting of '<code>A</code>' and '<code>B</code>'.
<li> $R_i$ ($1 \leq i \leq Q$) is a string of length $2(N - 1)$ consisting of exactly $N - 1$ occurrences of '<code>D</code>' and $N - 1$ occurrences of '<code>R</code>'.
</ul>

### Grading

If your program is judged as any type of <strong>Wrong Answer [1]</strong> or <strong>Wrong Answer [2]</strong> (see Implementation Details), Time Limit Exceeded, Memory Limit Exceeded, or Runtime Error, in any testcase, your score is $0$ points.

Otherwise, let $L^{*}$ be the minimum of the following values for all test cases of this task. Your score is calculated as in the following table.

<ul>
<li> The maximum value of $L$ such that Azzurro and Bordeaux win all the turns satisfying $L_i \leq L$. However, if they win all the turns in the test case, we set $L = 51$.
</ul>

<img src="https://img.atcoder.jp/joi2026final/casino-fig0-en.png" class="img-responsive center-block" style="max-width: 100%; width: 330px;">

### Sample Communication

Here is a sample input for the sample grader and corresponding function calls.

### Sample Input 1

~~~
2 2
1
B
RD
3
ABB
DR
~~~


<img src="https://img.atcoder.jp/joi2026final/casino-fig1-en.png" class="img-responsive center-block" style="max-width: 100%; width: 500px;">

This sample input consists of $Q \ (= 2)$ turns, and in each turn an $N \times N$ grid ($N = 2$) is used. In this example, the first turn proceeds as follows.

<ol>
<li> Azzurro colors $(0, 1)$ and $(1, 0)$ blue, and $(0, 0)$ and $(1, 1)$ red. He then hands the grid to Chiaro.
<li> Chiaro performs the following operations out of sight of Azzurro and Bordeaux.
<ol>
<li> He selects the path $(0, 0) \rightarrow (0, 1) \rightarrow (1, 1)$ as a path from $(0, 0)$ to $(N - 1, N - 1)$ by repeatedly moving only to an adjacent cell either down or to the right.
<li> For the three cells $(0, 0), (0, 1), (1, 1)$ on this path, he changes their colors. As a result, the colors of $(0, 0), (0, 1), (1, 1)$ become blue, red, and blue, respectively.
</ol>
<li> Bordeaux can win this turn by writing "<code>B</code>" on the paper.
</ol>

The second turn proceeds as follows.

<ol>
<li> Azzurro colors all cells blue. He then hands the grid to Chiaro.
<li> Chiaro performs the following operations out of sight of Azzurro and Bordeaux.
<ol>
<li> He selects the path $(0, 0) \rightarrow (1, 0) \rightarrow (1, 1)$ as a path from $(0, 0)$ to $(N - 1, N - 1)$ by repeatedly moving only to an adjacent cell either down or to the right.
<li> For the three cells $(0, 0), (1, 0), (1, 1)$ on this path, he changes their colors. As a result, the colors of $(0, 0), (1, 0), (1, 1)$ all become red.
</ol>
<li> Bordeaux can win this turn by writing "<code>ABB</code>" on the paper.
</ol>

Note that this sample input <strong>does not satisfy</strong> the constraints of the problem. The file <code>sample-01-in.txt</code>, which can be downloaded from the contest site, corresponds to Sample Input $1$. The file <code>sample-02-in.txt</code>, which can be downloaded from the contest site, is a sample input that satisfies the constraints.
