Score: $100$ points

### Problem Statement

JOI, Ltd. is a company known for their “just odd inventions.” Recently, JOI, Ltd. developed a text editor called “Just Odd Editor.”

Using this text editor, we can input a string of characters by performing the following operations several times. Let $X$ be the string displayed on the screen of the text editor. Let $Y$ be the string saved in the clipboard. In the beginning, both of $X$ and $Y$ are the empty string.

- Operation A : We add one character in the end of the string. Namely, we choose a character $c$, and update $X$ to be $X + c$.
- Operation B : We select all the characters and cut them. Namely, we update $Y$ to be $X$. After that, we set $X$ to be the empty string.
- Operation C : We paste the string from the clipboard at the end of the string. Namely, we update $X$ to be $X + Y$.

Here, for characters or strings $x, y$, the string $x + y$ means the string obtained by connecting $x$ with $y$ in this order. Performing an operation takes time. If we perform the operation A, B, C once, it takes $A, B,C$ unit time, respectively.

You installed Just Odd Editor. You want to input a string $S$ of length $N$ as soon as possible. Performing operations, you want to make the string on the display be $S$ as soon as possible.

Write a program which, given the length $N$, the string $S$, and the amount of unit time needed to perform an operation, calculates the least amount of time needed to input the string $S$.

### Input

Read the following data from the standard input.

~~~
$N$
$S$
$A$
$B$
$C$
~~~

### Output

Write one line to the standard output. The output should contain the least amount of time needed to input the string $S$.

### Constraints

- $1 \le N \le 2\,500$.
- $S$ is a string of length $N$. Each character of $S$ is a lower-case alphabet (’`a`’ - ’`z`’).
- $1 \le A \le 1\,000\,000\,000 (= 10^{9})$.
- $1 \le B \le 1\,000\,000\,000 (= 10^{9})$.
- $1 \le C \le 1\,000\,000\,000 (= 10^{9})$.
- $N, A, B,C$ are integers.

### Subtasks

1. ($7$ points) $N = 3$.
2. ($18$ points) Every character of $S$ is ’`a`’.
3. ($18$ points) $N \le 30$.
4. ($11$ points) $N \le 200$.
5. ($22$ points) $N \le 1\,000$.
6. ($24$ points) No additional constraints.

### Sample Input 1

~~~
11
mississippi
10
5
2
~~~

### Sample Output 1

~~~
88
~~~

By performing the following operations, we can input `mississippi` by $88$ unit time. Since it is the least amount of time needed to input `mississippi`, output 88.

<div class="joigsc2022-copypaste3-joig-en-table" markdown="1">

| Order | Operation | Explanation | $X$ | $Y$ | Time | Total Time |
| --- | --- | --- | --- | --- | --- | --- |
| - | - | - | `""` | `""` | - | $0$ |
| $1$ | Operation A | Add a character in end | `"s"` | `""` | $10$ | $10$ |
| $2$ | Operation B | Select all &amp; Cut | `""` | `"s"` | $5$ | $15$ |
| $3$ | Operation C | Paste at end | `"s"` | `"s"` | $2$ | $17$ |
| $4$ | Operation C | Paste at end | `"ss"` | `"s"` | $2$ | $19$ |
| $5$ | Operation A | Add a character in end | `"ssi"` | `"s"` | $10$ | $29$ |
| $6$ | Operation B | Select all &amp; Cut | `""` | `"ssi"` | $5$ | $34$ |
| $7$ | Operation A | Add a character in end | `"m"` | `"ssi"` | $10$ | $44$ |
| $8$ | Operation A | Add a character in end | `"mi"` | `"ssi"` | $10$ | $54$ |
| $9$ | Operation C | Paste at end | `"missi"` | `"ssi"` | $2$ | $56$ |
| $10$ | Operation C | Paste at end | `"mississi"` | `"ssi"` | $2$ | $58$ |
| $11$ | Operation A | Add a character in end | `"mississip"` | `"ssi"` | $10$ | $68$ |
| $12$ | Operation A | Add a character in end | `"mississipp"` | `"ssi"` | $10$ | $78$ |
| $13$ | Operation A | Add a character in end | `"mississippi"` | `"ssi"` | $10$ | $88$ |

</div>

This sample input satisfies the constraints of Subtasks $3$, $4$, $5$, $6$.

### Sample Input 2

~~~
16
aaaaaaaaaaaaaaaa
1
1
1
~~~

### Sample Output 2

~~~
9
~~~

By performing the following operations, we can input `aaaaaaaaaaaaaaaa` by $9$ unit time. Since it is the least amount of time needed to input `aaaaaaaaaaaaaaaa`, output 9.

<div class="joigsc2022-copypaste3-joig-en-table" markdown="1">

| Order | Operation | Explanation | $X$ | $Y$ | Time | Total Time |
| --- | --- | --- | --- | --- | --- | --- |
| - | - | - | `""` | `""` | - | $0$ |
| $1$ | Operation A | Add a character in end | `"a"` | `""` | $1$ | $1$ |
| $2$ | Operation A | Add a character in end | `"aa"` | `""` | $1$ | $2$ |
| $3$ | Operation A | Add a character in end | `"aaa"` | `""` | $1$ | $3$ |
| $4$ | Operation A | Add a character in end | `"aaaa"` | `""` | $1$ | $4$ |
| $5$ | Operation B | Select all &amp; Cut | `""` | `"aaaa"` | $1$ | $5$ |
| $6$ | Operation C | Paste at end | `"aaaa"` | `"aaaa"` | $1$ | $6$ |
| $7$ | Operation C | Paste at end | `"aaaaaaaa"` | `"aaaa"` | $1$ | $7$ |
| $8$ | Operation C | Paste at end | `"aaaaaaaaaaaa"` | `"aaaa"` | $1$ | $8$ |
| $9$ | Operation C | Paste at end | `"aaaaaaaaaaaaaaaa"` | `"aaaa"` | $1$ | $9$ |

</div>

This sample input satisfies the constraints of Subtasks $2$, $3$, $4$, $5$, $6$.

### Sample Input 3

~~~
18
aababbbababbbaabbb
1000000000
100000
10000000
~~~

### Sample Output 3

~~~
8060200000
~~~

This sample input satisfies the constraints of Subtasks $3$, $4$, $5$, $6$.

<style>
.joigsc2022-copypaste3-joig-en-table { position:relative; max-width:100%;overflow-x:auto;margin:1em 0; }
.joigsc2022-copypaste3-joig-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joigsc2022-copypaste3-joig-en-table th,.joigsc2022-copypaste3-joig-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; white-space:nowrap; }
.joigsc2022-copypaste3-joig-en-table th { background:#f5f5f5; }
.joigsc2022-copypaste3-joig-en-table code { white-space:nowrap; }
.joigsc2022-copypaste3-joig-en-table .katex { position:relative; }
</style>
