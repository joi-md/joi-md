Score: $100$ points

### Problem Statement

JOI-kun runs a campsite. This campsite is divided into a rectangular grid of $H$ rows and $W$ columns. The rows are parallel to the east-west direction, and the columns are parallel to the north-south direction. The section in the $i$-th row from north and $j$-th column from east is called the section $(i, j)$.

JOI-kun is going to put up some tents in some sections. Each tent must occupy exactly one section. No two tents may occupy the same section.

Each tent has one entrance directed to one of the four directions: north, south, east or west. The directions of the entrances of the tents put up in the campsite must satisfy the following conditions.

- If both of the two sections ($i_{1}, j$) and $(i_{2}, j)$ ($1 \le i_{1} < i_{2} \le H$, $1 \le j \le W$) are occupied by tents, then the entrance of the tent in the section ($i_{1}, j$) must be directed to south, and the entrance of the tent in the section $(i_{2}, j)$ must be directed to north.
- If both of the two sections ($i, j_{1}$) and $(i, j_{2})$ ($1 \le i_{1} < i_{2} \le H$, $1 \le j \le W$) are occupied by tents, then the entrance of the tent in the section ($i, j_{1}$) must be directed to east, and the entrance of the tent in the section $(i, j_{2})$ must be directed to west.

JOI-kun became curious about the number of ways to put up at least one tent in the campsite. Two ways to put up tents are distinguished when there exists a section such that the status of the tent in the section (existence of a tent, or the direction of the entrance of the tent) differs.

### Task

Write a program which calculates the remainder of the number of ways to put up at least one tent satisfying the condition described in the problem statement, divided by 1 000 000 007.

### Input

Read the following data from the standard input.

- The first line of input contains two integers $H$ and $W$. This means that the campsite ran by JOI-kun is divided into $H$ rows and $W$ columns.

### Output

Write one line to the standard output. The output should contain the remainder of the number of ways to put up at least one tent satisfying the condition described in the problem statement, divided by 1 000 000 007.

### Constraints

All input data satisfy the following conditions.

- $1 \le H \le 3\,000$．
- $1 \le W \le 3\,000$．

### Subtask

There are 2 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$48$ points]

- $1 \le H \le 300$．
- $1 \le W \le 300$．

#### Subtask 2 [$52$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
1 2
~~~

### Sample Output 1

~~~
9
~~~

Let us denote a tent with the entrance directed to east, west, south and north by the characters ’`E`’, ’`W`’, ’`S`’, ’`N`’, respectively. There are nine ways to put up some tents as illustrated below.

<div class="joisc2018-tents-en-table" markdown="1">
<table><tr><td><code>E</code></td><td></td></tr></table>
<table><tr><td><code>W</code></td><td></td></tr></table>
<table><tr><td><code>S</code></td><td></td></tr></table>
<table><tr><td><code>N</code></td><td></td></tr></table>
<table><tr><td></td><td><code>E</code></td></tr></table>
<table><tr><td></td><td><code>W</code></td></tr></table>
<table><tr><td></td><td><code>S</code></td></tr></table>
<table><tr><td></td><td><code>N</code></td></tr></table>
<table><tr><td><code>E</code></td><td><code>W</code></td></tr></table>
</div>

### Sample Input 2

~~~
4 3
~~~

### Sample Output 2

~~~
3252
~~~

### Sample Input 3

~~~
100 100
~~~

### Sample Output 3

~~~
561068619
~~~

<style>
.joisc2018-tents-en-table { display:flex;flex-wrap:wrap;gap:0.8em 1.2em;max-width:100%;margin:1em 0; }
.joisc2018-tents-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisc2018-tents-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisc2018-tents-en-table code { white-space:nowrap; }
</style>
