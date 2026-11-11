<blockquote class="joisp2025-i-submission" markdown="1">

**Submission on AtCoder**

[Input files](https://img.atcoder.jp/joisp2025/multi-inputs-5fcb5a0416.zip)

There are three inputs, with $N=4,32,48$. Submit a program that reads the input from standard input and prints your result for the corresponding input to standard output.

</blockquote>

Score: $100$ points

### Problem Statement

Chairman K has prepared a game for the participants of the spring training camp.

There are $N$ participants in the training camp, each assigned a unique number from 1 to $N$. Each participant has a board. The game follows these steps:

1. Chairman K selects one participant to be the parent, while all other participants become children. However, the identity of the parent is not revealed to the participants.
2. Chairman K writes the letter ‘`T`’ on the parent’s board and the letter ‘`F`’ on all the children’s boards.
3. Each participant reads the letter on their own board. Then, following a predefined strategy, they perform the following turn-based process for $L$ turns:
    - (1) Each participant erases the letter on their board and writes either ‘`T`’ or ‘`F`’. Then, they submit their board to Chairman K.
    - (2) For each participant $i$ ($i = 1, 2, \ldots, N$):
        - Participant $i$ selects a participant $p$ ($1 \le p \le N$) and informs Chairman K of the number $p$. Chairman K shows the board of participant $p$ to participant $i$, who then reads the letter on it. A participant is allowed to choose themselves as $p$.
4. After $L$ turns, each participant must guess who the parent is.

The goal of the game is to establish a strategy beforehand so that, regardless of who is chosen as the parent, all participants can correctly identify the parent by the end of the process.

A smaller value of $L$ results in a higher score. Your goal is to devise a strategy that minimizes $L$ while ensuring that all participants correctly identify the parent by the end of the process.

A strategy consists of a non-negative integer $L$, representing the number of turns, and a set of rules that determine the actions of each participant. The rules are as follows:

- For participant $i$ ($1 \le i \le N$), at the beginning of turn $t$ ($1 \le t \le L$), if the sequence of letters they have read up to that point is $a_{0}, a_{1}, \ldots, a_{t - 1}$, then based only on this information $(i, t, a_{0}, a_{1}, \ldots, a_{t - 1})$, they must determine:

    - The letter they will write on their board for turn $t$.
    - The participant number they will choose to observe for turn $t$.

- For participant $i$ ($1 \le i \le N$), after the $L$-th turn, if the sequence of letters they have read up to that point is $a_{0}, a_{1}, \ldots, a_{L}$, then based only on this information $(i, L, a_{0}, a_{1}, \ldots, a_{L})$, they must determine the participant number of the parent.

Devise a strategy that allows all participants to correctly identify the parent, regardless of who is chosen as the parent. Then, for each possible parent selection $(1, 2, \ldots, N)$, output the values that each participant writes on their board and the participant they choose to observe in each turn, following the established strategy.

### Input

Read the following data from the standard input.

~~~
$N$
~~~

### Output

Print the output in the following format:

~~~
$L$
$\mathrm{acts}_1$
$\mathrm{acts}_2$
$\vdots$
$\mathrm{acts}_N$
~~~

Here, $\mathrm{acts}_s$ represents the sequence of actions taken by each participant when participant $s$ is the parent. The format of $\mathrm{acts}_s$ is as follows:

First, print the integer $s$. For each participant $i$ ($1 \le i \le N$), print a single line containing the sequence of actions they take during the $L$ turns. Each line should have the following values:

- The character $c_{i,t}$ (‘`T`’ or ‘`F`’), which the participant writes on their board in turn $t$.
- The participant number $p_{i,t}$, which they choose to observe in turn $t$.

These values should be printed for each turn $t$ ($1 \le t \le L$) in sequence. Thus, the output format for $\mathrm{acts}_s$ is:

~~~
$s$
$c_{1,1}$ $p_{1,1}$ $c_{1,2}$ $p_{1,2}$ $\cdots$ $c_{1,L}$ $p_{1,L}$
$c_{2,1}$ $p_{2,1}$ $c_{2,2}$ $p_{2,2}$ $\cdots$ $c_{2,L}$ $p_{2,L}$
$\vdots$
$c_{N,1}$ $p_{N,1}$ $c_{N,2}$ $p_{N,2}$ $\cdots$ $c_{N,L}$ $p_{N,L}$
~~~

### Grading

The output is considered correct if and only if it can be obtained as the result of participants following a valid strategy that ensures all of them can correctly identify the parent. Specifically, the following two conditions must be met:

- For any participant $i$ ($1 \le i \le N$), turn $t$ ($1 \le t \le L$), and any two distinct parent candidates $x, y$ ($1 \le x, y \le N, x \ne y$): If the sequence of letters read by participant $i$ before turn $t$ is identical when $x$ is the parent and when $y$ is the parent, then participant $i$ must take the same action in turn $t$ (i.e., write the same letter and choose the same participant).
- For any participant $i$ ($1 \le i \le N$) and any two distinct parent candidates $x, y$ ($1 \le x, y \le N, x \ne y$): The sequence of letters read by participant $i$ by the end of turn $L$ must be different when $x$ is the parent compared to when $y$ is the parent.

### Submission

Submit only the output files `output_01.txt`, `output_02.txt`, `output_03.txt`, corresponding to the given input files `input_01.txt`, `input_02.txt`, `input_03.txt`.

### Constraints

- $N$ is one of 4, 32, or 48.

### Scoring

The total score is the sum of the scores for the three input cases.

If the output is incorrect (e.g., incorrect format or failing to follow a valid strategy), the score for that test case is $0$.

If the output is correct, the score is calculated as following criteria:

<div class="joisp2025-multi-en-table" markdown="1">

| Subtask | Input File | $N$ | Score | Maximum Score |
|---|---|---|---|---|
| $1$ | `input_01.txt` | $4$ | $0$ if $4 < L$<br>$16 - 7(L - 2)$ if $2 < L \le 4$<br>$16$ if $L \le 2$ | $16$ |
| $2$ | `input_02.txt` | $32$ | $0$ if $27 < L$<br>$60 - 3(L - 8)$ if $8 < L \le 27$<br>$60$ if $L \le 8$ | $60$ |
| $3$ | `input_03.txt` | $48$ | $0$ if $9 < L$<br>$24$ if $L \le 9$ | $24$ |

</div>

Note that if your score is $0$, the grading system displays “Output isn’t correct”.

### Sample Input 1

~~~
3
~~~

### Sample Output 1

~~~
3
1
T 1 T 2 T 3
F 1 F 2 F 3
F 1 F 2 F 3
2
F 1 F 2 F 3
T 1 T 2 T 3
F 1 F 2 F 3
3
F 1 F 2 F 3
F 1 F 2 F 3
T 1 T 2 T 3
~~~

This output example can be obtained as the result of participants following the strategy below:

- Set $L = 3$.
- In each turn $t$ ($1 \le t \le L$), participant $i$ writes ‘`T`’ if they are the parent, ‘`F`’ if they are a child. Note that they know whether they are a parent or a child according to the character they see in the initial step.
- In each turn $t$ ($1 \le t \le L$), participant $i$ observes participant $t$, regardless of the letters they have read so far.
- By the end of turn 3, each participant will have read the board of every participant including themselves at least once. Each participant then identifies the participant whose board contained ‘`T`’ and submits their number as the parent.

This ensures that everyone correctly identifies the parent, achieving the game’s objective. Since the strategy successfully meets the game’s objective for any chosen parent, the output is considered correct.

Note that the given example does not correspond to an actual test case, as it does not satisfy the given constraints.

<style>
.joisp2025-multi-en-table { position:relative; max-width:100%;overflow-x:auto;margin:1em 0; }
.joisp2025-multi-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisp2025-multi-en-table th,.joisp2025-multi-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisp2025-multi-en-table th { background:#f5f5f5; }
.joisp2025-multi-en-table code { white-space:nowrap; }
</style>

<style>
.joisp2025-multi-en-table .katex {position:relative;}
</style>
