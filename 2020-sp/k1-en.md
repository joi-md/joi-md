<blockquote markdown="1">

**Submission on AtCoder**

This task accepts the output for test case 01. Submit the corresponding output file using the language `Text (cat)`.

Submission pages for each test case: [01](https://atcoder.jp/contests/joisc2020/tasks/joisc2020_k) | [02](https://atcoder.jp/contests/joisc2020/tasks/joisc2020_l) | [03](https://atcoder.jp/contests/joisc2020/tasks/joisc2020_m) | [04](https://atcoder.jp/contests/joisc2020/tasks/joisc2020_n) | [05](https://atcoder.jp/contests/joisc2020/tasks/joisc2020_o) | [06](https://atcoder.jp/contests/joisc2020/tasks/joisc2020_p)

[Input data](https://www2.ioi-jp.org/camp/2020/2020-sp-tasks/day4/dango2-data.zip)

</blockquote>

Score: $15$ points

### Problem Statement

You are a professional making delicious rice dumplings, called dangos. Now you are skewering dangos with sticks.

Dangos are located in a rectangular grid of cells with $R$ rows and $C$ columns. Each cell contains one dango. The color of a dango is pink (`P`), white (`W`), or green (`G`). You will choose three consecutive dangos in the vertical direction (from top to bottom), the horizontal direction (from left to right), or the oblique direction (from left-top to right-bottom, or from right-top to left-bottom). Then you will take three dangos from these cells from end to end, and skewer them to a stick in order, to get a stick of dangos. For example, if you choose three consecutive dangos in the vertical direction, you can take dangos from top-middle-bottom or bottom-middle-top cells, in this order, and skewer them to a stick. You cannot take dangos from middle-bottom-top or bottom-top-middle cells. Moreover, you cannot skewer a dango to more than one stick.

A stick of dangos is beautiful if the colors of the dangos in the stick are pink-white-green or green-white-pink, in this order. You want to make as many beautiful sticks of dangos as possible.

How many beautiful sticks of dangos can you make?

### Input

For this task, there are six input data.

The input is given in the following format.

~~~
$R$ $C$
$D_{1}$
$\vdots$
$D_{R}$
~~~

Here $D_{i}$ ($1 \le i \le R$) is a string of length $C$ consisting of `P`, `W`, and `G`. The $j$-th character ($1 \le j \le C$) of $D_{i}$ is the color of the dango in the cell located in the $i$-th row from the top and the $j$-th column from the left.

### Output

The format of the output data is as follows.

~~~
$S_{1}$
$\vdots$
$S_{R}$
~~~

Here $S_{i}$ ($1 \le i \le R$) is a string of length $C$ consisting of `P`, `W`, `G`, `|`, `-`, `\`, and `/`. The $j$-th character ($1 \le j \le C$) of $S_{i}$ describes how to skewer the dango in the cell located in the $i$-th row from the top and the $j$-th column from the left.

- The $j$-th character of $S_{i}$ is the character `|` if you will make a beautiful stick of dangos using the dangos in that cell, the adjacent cell above, and the adjacent cell below.
- The $j$-th character of $S_{i}$ is the character `-` if you will make a beautiful stick of dangos using the dangos in that cell, the adjacent cell to the left, and the adjacent cell to the right.
- The $j$-th character of $S_{i}$ is the character `\` if you will make a beautiful stick of dangos using the dangos in that cell, the touching cell left above, and the touching cell right below.
- The $j$-th character of $S_{i}$ is the character `/` if you will make a beautiful stick of dangos using the dangos in that cell, the touching cell right above, and the touching cell left below.
- Otherwise, the $j$-th character of $S_{i}$ is `P`, `W`, or `G` according the color of the dango in that cell, i.e. it is the same as the $j$-th character of $D_{i}$.

### Submission

Submit output data for each input data.

### Constraints

- $3 \le R \le 500$.
- $3 \le C \le 500$.
- $D_{i}$ ($1 \le i \le R$) is a string of length $C$ consisting of `P`, `W`, and `G`.

### Grading

Your score for this task is calculated in the following way.

For each test case, we define four values $S$ (denoting the assigned score), $X, Y$ and $Z$ as follows.

<div class="joisc2020-dango2-en-table" markdown="1">

| Test Case | $S$ | $X$ | $Y$ | $Z$ |
| --- | --- | --- | --- | --- |
| $01$ | $15$ | $44000$ | $47000$ | $47220$ |
| $02$ | $15$ | $39000$ | $41700$ | $41980$ |
| $03$ | $15$ | $45000$ | $51000$ | $51390$ |
| $04$ | $15$ | $18000$ | $19000$ | $19120$ |
| $05$ | $20$ | $43000$ | $48200$ | $48620$ |
| $06$ | $20$ | $44000$ | $46000$ | $46500$ |

</div>

For each test case, let $N$ be the number of beautiful sticks of dangos you can make by your submission. Your score for the test case is calculated as follows.

- If $N<X$, your score is $0$.
- If $X\le N<Y$, your score is $\dfrac{N - X}{2(Y - X)}\times S$.
- If $Y\le N<Z$, your score is $\left(\dfrac{1}{2}+\dfrac{N - Y}{2(Z - Y)}\right)\times S$.
- If $Z\le N$, your score is $S$.

Your score for this task is the sum of your scores for the test cases, rounded to the nearest integer.

However, your score for a test case is $0$ if your output data is incorrect, i.e. you cannot make beautiful sticks of dangos according to the characters `|`, `-`, `\`, `/` in your output data, the characters `P`, `W`, or `G` in your output data conflict with the input data, or the format of your output data is wrong.

### Sample Input and Output

### Sample Input 1

~~~
3 4
PWGP
WGPW
GWPG
~~~

### Sample Output 1

~~~
P-GP
WGP|
G-PG
~~~

In this sample, you make three beautiful sticks of dangos.

Note that you cannot make a beautiful stick of dangos using `W G P`, in this order.

### Sample Input 2

~~~
3 4
PWWP
WWWW
PGGP
~~~

### Sample Output 2

~~~
PWWP
W\/W
PGGP
~~~

In this sample, you make two beautiful sticks of dangos.

### Visualizer

A visualizer is available for this task, which shows the overview of the input data or the output data in a visual way. You can download the visualizer from the contest system as an attachment file to this task.

To use the visualizer, you should open the attached `visualizer.html` by a web browser and choose or drag-and-drop the file. Note that the visualizer does not completely check the correctness of the format of the given file. It might not be executed correctly if the format of the input file is wrong. Also, it might not be executed correctly if the value of $R$ or $C$ exceeds the constraints.

<style>
.joisc2020-dango2-en-table { position:relative;max-width:100%;overflow-x:auto;margin:1em 0; }
.joisc2020-dango2-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisc2020-dango2-en-table th,.joisc2020-dango2-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisc2020-dango2-en-table th { background-color:#f5f5f5; }
.joisc2020-dango2-en-table .katex { position:relative; }
</style>
