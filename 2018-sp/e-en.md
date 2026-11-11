<blockquote markdown="1">

**Submission on AtCoder**

The standard input contains only a test case number ($1, 2, \ldots, 6$). Compute the answers in advance, embed them in your program, and print the answer for the specified case to the standard output.

[Input data](https://img.atcoder.jp/joisc2018/road.zip)

</blockquote>

Score: $100$ points

### Problem Statement

There are $N$ cities in IOI kingdom, numbered from 1 to $N$. There are also $N - 1$ bidirectional roads, numbered from 1 to $N - 1$. The $i$-th road connects the $A_{i}$-th city and the $B_{i}$-th city. There exists a path between any pair of vertices.

The distance between two cities are defined as the smallest number of roads which connect the two cities. The total distance of IOI kingdom is defined as the sum of the distances between all pair of different cities.

The king of IOI kingdom plans to construct $K$ additional roads in order to reduce the total distance and improve convenience.

You, as an assistant of the king, help the king by finding a good plan.

### Task

Given the information of existing roads in IOI kingdom and the number of roads to construct, output a plan for constructing $K$ roads. The less the total distance is, the more points you gain.

### Input

There are 6 inputs for this task. Read the following data from each input.

- The first line of input contains three space separated integers $N, K$ and $W_{0}$. These mean that IOI kingdom has $N$ cities and that the king plans to construct $K$ roads. $W_{0}$ is a parameter for scoring.
- The $i$-th ($1 \le i \le N - 1$) line of the following $N - 1$ lines contains integers $A_{i}$ and $B_{i}$, the cities which the $i$-th road connects.

### Output

Write $K$ lines on your submission file.

The $j$-th line of the output contains two integers $X_{j}, Y_{j}$ ($1 \le X_{j} \le N$, $1 \le Y_{j} \le N$), representing the cities connected by a road to construct.

### Submission

Submit the output for each of the inputs. The output is valid only if it follows the format on the Output section above.

### Constraints

All input data satisfy the following conditions.

- $1 \le N \le 1\,000$．
- $1 \le A_{i} < B_{i} \le N$ ($1 \le i \le N - 1$)．
- $(A_{i}, B_{i}) \ne (A_{k}, B_{k})$ ($1 \le i < k \le N - 1$)．
- There are a path between any pair of cities.

### Scoring

For each inputs, your score is calculated as follows:

If your output does not follow the format, your score is zero point. Otherwise, let the total distance after constructing the roads according to your plan be $W$, and let the point for the input be $P$. Let us define

$S=1.0 - \dfrac{W}{W_0}$

Here, the score you gain for the input is

$\min(P, P \times 20^S)$

The score for this task is the sum of the scores for each input, rounded to the nearest integer.

The values of $N, K, W_{0}, P$ on each input are as follows:

<div class="joisc2018-road-en-table" markdown="1">

| Input Data | $N$ | $K$ | $W\_{0}$ | $P$ |
| --- | --- | --- | --- | --- |
| $1$ | $20$ | $4$ | $512$ | $10$ |
| $2$ | $1000$ | $100$ | $2650000$ | $18$ |
| $3$ | $1000$ | $300$ | $1755000$ | $18$ |
| $4$ | $1000$ | $100$ | $2900000$ | $18$ |
| $5$ | $1000$ | $100$ | $2690000$ | $18$ |
| $6$ | $1000$ | $300$ | $1745000$ | $18$ |

</div>

### Sample Input and Output

### Sample Input 1

~~~
4 1 8
1 2
2 3
3 4
~~~

### Sample Output 1

~~~
1 4
~~~

In addition to the existing roads, by constructing a road connecting the 1-st city and the 4-th city, the total distance becomes 8.

Let $P = 10$ for this input. Here, $S = 0$, thus the score is $10$ points.

### Sample Input 2

~~~
4 1 8
1 2
2 3
3 4
~~~

### Sample Output 2

~~~
1 2
~~~

In this case, the total distance is 10 after constrcting the road. Let $P = 10$ for this input. Here, $S = -0.25$, thus the score is $4.728 \cdots$ points.

<style>
.joisc2018-road-en-table { position:relative;max-width:100%;overflow-x:auto;margin:1em 0; }
.joisc2018-road-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisc2018-road-en-table th,.joisc2018-road-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisc2018-road-en-table th { background:#f5f5f5; }
.joisc2018-road-en-table .katex { position:relative; }
</style>
