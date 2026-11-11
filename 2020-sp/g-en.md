Score: $100$ points

### Problem Statement

JOI-kun took a picture of the night view. The picture consists of $N \times N$ pixels, i.e. $N$ pixels along horizontal and vertical directions. The pixel in the $x$-th column from the left and the $y$-th row from the bottom ($1 \le x \le N$, $1 \le y \le N$) is called the pixel $(x, y)$.

Each pixel of the picture shows building, night sky, or star. Its color is white, black, or yellow, respectively. For each $i$ with $1 \le i \le N$, in the $i$-th column, the pixels from the bottommost row to the $A_{i}$-th row from the bottom are white pixels showing buildings. There are $M$ yellow pixels showing stars. The $j$-th yellow pixel ($1 \le j \le M$) is the pixel $(X_{j}, Y_{j})$. All the other pixels are black pixels showing night sky.

We say a rectangular region in the picture shows a constellation if the following two conditions are satisfied.

- There is no white pixel in the rectangular region.
- There are two or more yellow pixels in the rectangular region.

JOI-kun is tired with watching constellations. By painting some yellow pixels into black, he wants to make a picture such that no rectangular region shows a constellation. However, the picture becomes unnatural if he paints many yellow pixels. More precisely, if he paints the $j$-th yellow pixel ($1 \le j \le M$) into black, then the unnatural level of the picture is increased by $C_{j}$. Initially the picture has unnatural level 0.

Write a program which, given the information of the picture and the integer for each yellow pixel which describes how much the unnatural level is increased if the pixel is painted into black, calculates the minimum unnatural level of the picture after painting some yellow pixels such that no rectangular region shows a constellation.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$
$A_{1}$ $\cdots$ $A_{N}$
$M$
$X_{1}$ $Y_{1}$ $C_{1}$
$\vdots$
$X_{M}$ $Y_{M}$ $C_{M}$
~~~

### Output

Write one line to the standard output. Output the minimum unnatural level of the picture after painting some yellow pixels such that no rectangular region shows a constellation.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le A_{i} \le N$ ($1 \le i \le N$).
- $1 \le M \le 200\,000$.
- $1 \le X_{j} \le N$ ($1 \le j \le M$).
- $1 \le Y_{j} \le N$ ($1 \le j \le M$).
- $1 \le C_{j} \le 1\,000\,000\,000$ ($1 \le j \le M$).
- $A_{X_{j}} < Y_{j}$ ($1 \le j \le M$).
- $(X_{j}, Y_{j}) \ne (X_{k}, Y_{k})$ ($1 \le j < k \le M$).

### Subtasks

1. ($14$ points) $N \le 300$, $M \le 300$.
2. ($21$ points) $N \le 2\,000$, $M \le 2\,000$.
3. ($65$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5
1 3 4 2 3
3
1 5 3
4 3 2
2 4 2
~~~

### Sample Output 1

~~~
2
~~~

In this sample input, the rectangular region whose left-top vertex is the pixel $(1, 5)$ and right-bottom vertex is the pixel $(2, 4)$ shows a constellation. If JOI-kun paints the third yellow pixel into black, then the unnatural level of the picture is increased by 2 and no rectangular region in the picture shows a constellation. Since this is the minimum value, output 2.

Figure 1 is the picture of this sample input.

<p><img src="https://img.atcoder.jp/joisc2020/constellation3-en-p3-1.png" alt="Figure" style="max-width:100%;height:auto;"></p>

Figure 1

### Sample Input 2

~~~
7
5 6 2 3 6 7 6
5
7 7 5
3 3 7
3 7 10
1 7 6
4 7 8
~~~

### Sample Output 2

~~~
16
~~~

In this sample input, it is optimal to paint the third yellow pixel and the fourth one.

### Sample Input 3

~~~
8
6 8 5 7 3 4 2 1
10
8 2 9
6 6 7
8 3 18
5 8 17
8 5 3
5 5 3
5 4 8
1 8 13
1 7 5
7 4 13
~~~

### Sample Output 3

~~~
44
~~~
