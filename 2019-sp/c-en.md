Score: $100$ points

### Problem Statement

JOI Curry Shop is famous for serving very long naans. They have $L$ kinds of flavors, numbered from $1$ through $L$, to flavor naans. “JOI Special Naan” is the most popular menu in the shop. The length of the naan is $L$ cm. We define “the position $x$” as the position on the naan which is $x$ cm distant from the left end of the naan. The segment between position $j - 1$ and position $j$ is flavored by flavor $j$ ($1 \le j \le L$).

$N$ people came to JOI Curry Shop. Their preferences are different from each other. Specifically, when the $i$-th ($1\le i\le N$) person eats naan with flavor $j$ ($1 \le j \le L$), they will get happiness $V_{i,j}$ per 1 cm.

They ordered only one JOI Special Naan. They will share the naan in the following manner:

1. Choose $N - 1$ rational numbers $X_{1}, \ldots, X_{N - 1}$ which satisfy $0 < X_{1} < X_{2} < \cdots < X_{N - 1} < L$.
2. Choose $N$ integers $P_{1}, \ldots, P_{N}$ which form a permutation of $1$, $\ldots$, $N$.
3. For each $k$ ($1 \le k \le N - 1$), cut the naan at the position $X_{k}$. Thus, the naan will be separated into $N$ pieces.
4. For each $k$ ($1 \le k \le N$), give the piece between the position $X_{k - 1}$ and position $X_{k}$ to the $P_{k}$-th person. We consider $X_{0}$ as 0 and $X_{N}$ as $L$.

We want to distribute the naan fairly. We say a distribution is fair if each person gets happiness of more than or equal to $\dfrac{1}{N}$ of the amount of happiness they will get by eating the whole JOI Special Naan.

Write a program which, given the information of preferences of $N$ people, determines if it is possible to distribute the naan in a fair way, and if it is possible, finds such a fair way.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $L$
$V_{1,1}$ $V_{1,2}$ $\cdots$ $V_{1,L}$
$\vdots$
$V_{N,1}$ $V_{N,2}$ $\cdots$ $V_{N,L}$
~~~

### Output

Write to the standard output. If it is impossible to distribute naan in a fair way, write $-1$ in a line. If it is possible, output $N - 1$ rational numbers $X_{1}, \ldots, X_{N - 1}$ and $N$ integers $P_{1}, \ldots, P_{N}$ which represent a fair distribution, in the following format.

~~~
$A_{1}$ $B_{1}$
$A_{2}$ $B_{2}$
$\vdots$
$A_{N - 1}$ $B_{N - 1}$
$P_{1}$ $P_{2}$ $\cdots$ $P_{N}$
~~~

$A_k$ and $B_k$ are a pair of integers which satisfies $X_k=\dfrac{A_k}{B_k}$ ($1\le k\le N - 1$). These integers have to follow the “Constraints of Output” section.

### Constraints of Input

- $2 \le N \le 2\,000$.
- $1 \le L \le 2\,000$.
- $1 \le V_{i,j} \le 100\,000$ ($1 \le i \le N$, $1 \le j \le L$).

### Constraints of Output

If it is possible to distribute the naan in a fair way, the output must satisfy the following constraints:

- $1\le B_k\le1\,000\,000\,000\ {}$ ($1\le k\le N - 1$).
- $0<\dfrac{A_1}{B_1}<\dfrac{A_2}{B_2}<\cdots<\dfrac{A_{N - 1}}{B_{N - 1}}< L$.
- $P_1,\ldots,P_N$ is a permutation of $1,\ldots,N$.
- In the distribution, the amount of happiness which $i$-th person will get is more than or equal to $\dfrac{V_{i,1}+V_{i,2}+\cdots+V_{i,L}}{N}$ ($1\le i\le N$).

$A_k$ and $B_k$ are not necessary to be coprime ($1\le k\le N - 1$).

Under the constraints of the input, it can be proved that if a fair distribution exists, there is a correct output which satisfies $1\le B_k\le1\,000\,000\,000\ {}$ ($1\le k\le N - 1$).

### Subtasks

1. ($5$ points) $N = 2$.
2. ($24$ points) $N \le 6$, $V_{i,j} \le 10$ ($1 \le i \le N$, $1 \le j \le L$).
3. ($71$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
2 5
2 7 1 8 2
3 1 4 1 5
~~~

### Sample Output 1

~~~
14 5
2 1
~~~

In this sample, the first person will get happiness of $2+7+1+8+2=20$ when she eats the whole naan and the second person will get happiness of $3+1+4+1+5=14$ when she eats the whole naan. Thus, if the first person gets happiness of more than or equal to $\dfrac{20}{2}=10$ and the second person gets happiness of more than or equal to $\dfrac{14}{2}=7$, the distribution is fair.

If you cut the naan at the position $\dfrac{14}{5}$, the first person will get happiness of $1\times\dfrac{1}{5}+8+2=\dfrac{51}{5}$ and the second person will get happiness of $3+1+4\times\dfrac{4}{5}=\dfrac{36}{5}$. Hence, this is a fair distribution.

### Sample Input 2

~~~
7 1
1
2
3
4
5
6
7
~~~

### Sample Output 2

~~~
1 7
2 7
3 7
4 7
5 7
6 7
3 1 4 2 7 6 5
~~~

In this sample, the naan has only one flavor. If you equally divide the naan into 7 pieces, the distribution will be fair, regardless of $P_{1}, \ldots, P_{N}$.

### Sample Input 3

~~~
5 3
2 3 1
1 1 1
2 2 1
1 2 2
1 2 1
~~~

### Sample Output 3

~~~
15 28
35 28
50 28
70 28
3 1 5 2 4
~~~

Note that $A_{k}$ and $B_{k}$ are not necessary to be coprime ($1 \le k \le N - 1$).
