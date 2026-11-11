Score: $100$ points

<style>
.joisp2023-f-table table { position:relative;
    display: table;
    width: auto;
    max-width: none;
    overflow: visible;
    border-collapse: collapse;
    margin: 0;
}
.joisp2023-f-table table td {
    border: 1px solid #aaa;
    padding: 0.3em 0.6em;
    text-align: left;
    vertical-align: top;
}
.joisp2023-f-table table.mizuyokan-figure {
    display: table;
    width: 480px;
    table-layout: fixed;
    margin: 0.2em 0;
}
.joisp2023-f-table table.mizuyokan-figure td {
    text-align: center;
}
.joisp2023-f-table table.mizuyokan-figure .join-left {
    border-left: 0;
}
.joisp2023-f-table table.mizuyokan-figure .join-right {
    border-right: 0;
}

.joisp2023-f-table {position:relative;max-width:100%;overflow-x:auto;margin:1em 0;}
</style>

### Problem Statement

Mizuyokan is a Japanese confectionery made of azuki beans paste. It was made by cooking azuki beans paste with agar, and solidifying them in a rectangular-shaped form.

Now, JOI-kun has a mizuyokan machine. Using it, JOI-kun can make a horizontally long rectangular-shaped mizuyokan with $N - 1$ vertical cutlines. The length of the mizuyokan and the positions of the cutlines are determined by the $N$ parameters $d_1, d_2, \ldots, d_N$ set on the machine. The length of the mizuyokan is $d_1 + d_2 + \cdots + d_N$. The distance between the $(i - 1)$-th cutline ($1 \le i \le N$) from the left and the $i$-th cutline from the left is $d_i$. Here, we consider the leftmost edge of the mizuyokan as the $0$-th cutline, and the rightmost edge of the mizuyokan as the $N$-th cutline. In the beginning, the parameters of the mizuyokan machine satisfy $d_i = L_i$ ($1 \le i \le N$).

JOI-kun has a plan to organize $Q$ tea parties. The $j$-th tea party ($1 \le j \le Q$) is described by the integers $X_j, Y_j, A_j, B_j$. It proceeds as follows.

1. The parameter $d_{X_j}$ of the mizuyokan machine is updated, and it is set as $Y_j$.
2. JOI-kun makes a new mizuyokan using the mizuyokan machine. He takes the part of the mizuyokan between the $A_j$-th cutline and the $B_j$-th cutline, and uses it for the tea party. He eats the rest.
3. JOI-kun cuts the part of the mizuyokan for the tea party along some of the cutlines. He cuts the part of the mizuyokan into one or more pieces. In this process, the following condition should be satisfied: if the pieces are ordered from the left as in the original positions, the sequence of the lengths of the pieces is zigzag.

Here, a sequence is called zigzag if the elements of the sequence increase and decrease alternately. For example, the sequences $(2, 9, 2, 7)$, $(7, 1, 9, 4, 6)$, $(5)$, $(2, 1)$ are zigzag, but the sequences $(1, 2, 3)$, $(7, 1, 4, 4, 6)$, $(2, 2)$ are not zigzag. Precisely, a sequence $(x_1, x_2, \ldots, x_m)$ is called zigzag if one (or both) of the following conditions are satisfied:

- For $k = 1, 2, \ldots, m - 1$, the inequality $x_k < x_{k+1}$ is satisfied if $k$ is odd, and the inequality $x_k > x_{k+1}$ is satisfied if $k$ is even.
- For $k = 1, 2, \ldots, m - 1$, the inequality $x_k > x_{k+1}$ is satisfied if $k$ is odd, and the inequality $x_k < x_{k+1}$ is satisfied if $k$ is even.

Since JOI-kun wants to give mizuyokan to as many friends as possible, he wants to maximize the number of pieces obtained by the procedure $3$. of the tea party.

Write a program which, given information of the initial parameters of the mizuyokan machine and the plan of the tea parties, calculates, for each tea party, the maximum possible number of pieces obtained by cutting the part of the mizuyokan so that the condition is satisfied. Note that, under the constraints of this task, it is always possible to cut the part of the mizuyokan so that the condition is satisfied.

---

### Input

Read the following data from the standard input.

~~~
$N$
$L_1$ $L_2$ $\cdots$ $L_N$
$Q$
$X_1$ $Y_1$ $A_1$ $B_1$
$X_2$ $Y_2$ $A_2$ $B_2$
$\vdots$
$X_Q$ $Y_Q$ $A_Q$ $B_Q$
~~~

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) of output corresponds to the $j$-th tea party. It contains the maximum possible number of pieces obtained by cutting the part of the mizuyokan in the $j$-th tea party so that the condition is satisfied.

---

### Constraints

- $1 \le N \le 250\,000$.
- $1 \le L_i \le 10^9$ ($1 \le i \le N$).
- $1 \le Q \le 50\,000$.
- $1 \le X_j \le N$ ($1 \le j \le Q$).
- $1 \le Y_j \le 10^9$ ($1 \le j \le Q$).
- $0 \le A_j < B_j \le N$ ($1 \le j \le Q$).
- Given values are all integers.

### Subtasks

1. ($6$ points) $N \le 200$, $Q \le 10$.
2. ($9$ points) $N \le 2\,000$, $Q \le 10$.
3. ($13$ points) $Q \le 10$.
4. ($32$ points) $Y_j = L_{X_j}$ ($1 \le j \le Q$).
5. ($29$ points) $L_i \le 120\,000$ ($1 \le i \le N$), $Y_j \le 120\,000$ ($1 \le j \le Q$).
6. ($11$ points) No additional constraints.

---

### Sample Input 1

~~~
6
5 6 8 7 4 9
1
6 9 0 5
~~~

### Sample Output 1

~~~
3
~~~

In the first tea party, the parameters of the mizuyokan machine is set as $(d_1, d_2, d_3, d_4, d_5, d_6) = (5, 6, 8, 7, 4, 9)$. JOI-kun uses the part of the mizuyokan between the $0$-th cutline and the $5$-th cutline as in Figure $1$.

Figure $1$. The mizuyokan for the tea party

<div class="joisp2023-f-table" markdown="1">

<table class="mizuyokan-figure">
<colgroup><col style="width: 16.6667%;"><col style="width: 20%;"><col style="width: 26.6666%;"><col style="width: 23.3334%;"><col style="width: 13.3333%;"></colgroup>
<tbody><tr><td>$5$</td><td>$6$</td><td>$8$</td><td>$7$</td><td>$4$</td></tr></tbody>
</table>

</div>

For example, JOI-kun can cut the part of the mizuyokan as follows.

Figure $2$. Three methods to cut the mizuyokan. Method $1$, Method $2$, Method $3$ from the top.

<div class="joisp2023-f-table" markdown="1">

<table class="mizuyokan-figure">
<colgroup><col style="width: 16.6667%;"><col style="width: 20%;"><col style="width: 26.6666%;"><col style="width: 23.3334%;"><col style="width: 13.3333%;"></colgroup>
<tbody><tr><td>$5$</td><td class="join-right">$6$</td><td class="join-left">$8$</td><td>$7$</td><td>$4$</td></tr></tbody>
</table>

</div>
<div class="joisp2023-f-table" markdown="1">

<table class="mizuyokan-figure">
<colgroup><col style="width: 16.6667%;"><col style="width: 20%;"><col style="width: 26.6666%;"><col style="width: 23.3334%;"><col style="width: 13.3333%;"></colgroup>
<tbody><tr><td class="join-right">$5$</td><td class="join-left">$6$</td><td>$8$</td><td class="join-right">$7$</td><td class="join-left">$4$</td></tr></tbody>
</table>

</div>
<div class="joisp2023-f-table" markdown="1">

<table class="mizuyokan-figure">
<colgroup><col style="width: 16.6667%;"><col style="width: 20%;"><col style="width: 26.6666%;"><col style="width: 23.3334%;"><col style="width: 13.3333%;"></colgroup>
<tbody><tr><td class="join-right">$5$</td><td class="join-left join-right">$6$</td><td class="join-left join-right">$8$</td><td class="join-left join-right">$7$</td><td class="join-left">$4$</td></tr></tbody>
</table>

</div>

In Method $1$, the lengths of the pieces are $5, 14, 7, 4$. Since this sequence is not zigzag, it does not satisfy the condition. On the other hand, in Method $2$, the lengths of the pieces are $11, 8, 11$. Since this sequence is zigzag, it satisfies the condition. In Method $3$, the length of the piece is $30$. Since this sequence is zigzag, it also satisfies the condition.

If JOI-kun cuts the part of the mizuyokan by Method $2$, he gets $3$ pieces. Since it is not possible for him to cut the part of the mizuyokan so that the condition is satisfied and he gets more than or equal to $4$ pieces, output $3$ in the first line.

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 2

~~~
4
6 2 3 6
3
3 2 1 3
4 5 1 4
1 1 0 4
~~~

### Sample Output 2

~~~
1
2
3
~~~

In the first tea party, the length of the part of the mizuyokan for the tea party is $4$. There is a cutline whose distance is $2$ from the leftmost edge. If JOI-kun uses the mizuyokan without cutting it, he gets one piece. The sequence of the lengths of the pieces is $(4)$, which is zigzag. Since he cannot obtain more than one piece, output $1$.

In the second tea party, the length of the part of the mizuyokan for the tea party is $9$. There are two cutlines whose distances are $2, 4$ from the leftmost edge. If JOI-kun cuts the mizuyokan at the cutline whose distance is $4$ from the leftmost edge, he gets two pieces. The sequence of the lengths of the pieces is $(4, 5)$, which is zigzag. Since he cannot obtain more than two pieces, output $2$.

In the third tea party, the length of the part of the mizuyokan for the tea party is $10$. There are three cutlines whose distances are $1, 3, 5$ from the leftmost edge. If JOI-kun cuts the mizuyokan at the cutlines whose distances are $3, 5$ from the leftmost edge, he gets three pieces. The sequence of the lengths of the pieces is $(3, 2, 5)$, which is zigzag. Since he cannot obtain more than three pieces, output $3$.

This sample input satisfies the constraints of Subtasks $1, 2, 3, 5, 6$.

<style>
.joisp2023-f-table .katex {position:relative;}
</style>
