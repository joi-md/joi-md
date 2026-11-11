Score: $100$ points

### Problem Statement

Bitaro, the brave hero, is about to take on the Defense Battle quest to protect the village from monsters. The difficulty of the Defense Battle is represented by an integer between 1 and $L$, inclusive, and this value can be chosen at the start of the challenge. In a Defense Battle of difficulty $\ell$ ($1 \le \ell \le L$), the HP of monsters is multiplied by $\ell$ compared to that at difficulty 1.

The Defense Battle lasts for $T$ seconds, and $N$ monsters will appear throughout the battle. Each monster is assigned a unique number from 1 to $N$. Time $t$ ($0 \le t \le T$) refers to the moment $t$ seconds after the battle starts. Monster $i$ ($1 \le i \le N$) appears at time $S_{i}$ ($0 \le S_{i} < T$), has strength $P_{i}$, and its HP at difficulty $\ell$ is given by $\ell \times H_{i}$.

During the Defense Battle, Bitaro can perform the following action any number of times.

- Select one of the monsters currently present and attack it, which takes $1$ second. The monster’s HP decreases by 1. Once a monster’s HP reaches 0, it is considered defeated and will no longer be attacked.

When time reaches $T$, the Defense Battle ends, and the penalty score is computed as follows.

- Let $h_{i}$ be the HP of monster $i$ ($1 \le i \le N$) immediately after time $T$. The penalty score is computed as $h_{1}P_{1} + h_{2}P_{2} + \cdots + h_{N}P_{N}$.

If the penalty score is less than or equal to a threshold value $m$ specified by the quest, Bitaro successfully completes the quest.

Since higher difficulties yield better rewards, Bitaro wants to determine the highest difficulty level at which he can complete the quest. However, the threshold value is unknown in advance. Thus, Bitaro decides to determine the highest difficulty level at which he can complete the quest for each of $Q$ candidate threshold values $M_{1}, M_{2}, \ldots, M_{Q}$.

Given the information about the Defense Battle and the candidate threshold values, write a program that determines whether the quest can be completed for each threshold value and, if possible, finds the maximum difficulty level at which the quest can be completed.

### Input

Read the following data from the standard input.

~~~
$N$ $L$ $T$
$S_1$ $H_1$ $P_1$
$S_2$ $H_2$ $P_2$
$\vdots$
$S_N$ $H_N$ $P_N$
$Q$
$M_1$
$M_2$
$\vdots$
$M_Q$
~~~

### Output

Write $Q$ lines to the standard output. In the $j$-th line ($1 \le j \le Q$), output the maximum difficulty level at which the quest can be completed when $m = M_{j}$. If the quest cannot be completed at any difficulty level, output `0` instead.

### Constraints

- $1 \le N \le 6\,000$.
- $1 \le L \le 10\,000\,000$.
- $1 \le T \le 10^{18}$.
- $0 \le S_{i} < T$ ($1 \le i \le N$).
- $1 \le H_{i}$ ($1 \le i \le N$).
- $1 \le P_{i}$ ($1 \le i \le N$).
- $H_{1}P_{1} + H_{2}P_{2} + \cdots + H_{N}P_{N} \le 10^{11}$.
- $1 \le Q \le 1\,000\,000$.
- $0 \le M_{j} \le 10^{18}$ ($1 \le j \le Q$).
- $M_{1} < M_{2} < \cdots < M_{Q}$.
- Given values are all integers.

### Subtasks

1. ($1$ point) $N \le 30$, $Q = 1$, $M_{1} = 0$, $L = 1$.
2. ($3$ points) $N \le 30$, $Q = 1$, $M_{1} = 0$.
3. ($10$ points) $N \le 30$, $Q \le 3$.
4. ($10$ points) $Q \le 3$.
5. ($35$ points) $N \le 30$.
6. ($8$ points) $N \le 400$.
7. ($20$ points) $N \le 1\,800$.
8. ($13$ points) No additional constraints.

### Sample Input 1

~~~
2 2 10
0 9 2
8 5 1
3
0
20
40
~~~

### Sample Output 1

~~~
0
1
2
~~~

In the Defense Battle of difficulty 1, the following actions can be taken to achieve a penalty score of 4. It is not possible to achieve a penalty score of 3 or lower.

<div class="joisp2025-brave3-en-table" markdown="1">

| Time | Event |
| --- | --- |
| $0$ | Monster 1 (HP 9) appears. |
| $0$–$8$ | Attack Monster 1 a total of 8 times. Monster 1’s HP decreases from 9 to 1. |
| $8$ | Monster 2 (HP 5) appears. |
| $8$–$9$ | Attack Monster 2 once. Monster 2’s HP decreases from 5 to 4. |
| $9$–$10$ | Attack Monster 1 once. Monster 1’s HP decreases from 1 to 0. |
| $10$ | Monster 1 is defeated. |
| $10$ | The Defense Battle ends. The penalty score is $0 \times P_{1} + 4 \times P_{2} = 4$. |

</div>

Additionally, in the Defense Battle of difficulty $2$, the following actions can be taken to achieve a penalty score of 26. It is not possible to achieve a penalty score of 25 or lower.

<div class="joisp2025-brave3-en-table" markdown="1">

| Time | Event |
| --- | --- |
| $0$ | Monster 1 (HP 18) appears. |
| $0$–$8$ | Attack Monster 1 a total of 8 times. Monster 1’s HP decreases from 18 to 10. |
| $8$ | Monster 2 (HP 10) appears. |
| $8$–$10$ | Attack Monster 1 a total of 2 times. Monster 1’s HP decreases from 10 to 8. |
| $10$ | The Defense Battle ends. The penalty score is $8 \times P_{1} + 10 \times P_{2} = 26$. |

</div>

Furthermore, in this input example, since $L = 2$, it is not possible to choose a Defense Battle of difficulty 3 or higher. Therefore, the output will be as follows:

- For the first threshold value $M_{1} = 0$, it is not possible to complete the quest at any difficulty, so output `0` on the first line.
- For the second threshold value $M_{2} = 20$, it is possible to complete the quest at most at difficulty $1$, so output 1 on the second line.
- For the third threshold value $M_{3} = 40$, it is possible to complete the quest at most at difficulty $2$, so output 2 on the third line.

This sample input satisfies the constraints of subtasks $3, 4, 5, 6, 7$, and 8.

### Sample Input 2

~~~
3 1 100000000000
60000000000 30000000000 1
30000000000 45000000000 1
10000000000 10000000000 1
1
0
~~~

### Sample Output 2

~~~
0
~~~

This sample input satisfies the constraints of all subtasks.

### Sample Input 3

~~~
3 10000000 100000000
60000000 4 1
30000000 6 1
0 2 1
1
0
~~~

### Sample Output 3

~~~
7000000
~~~

This sample input satisfies the constraints of subtasks $2, 3, 4, 5, 6, 7$, and 8.

### Sample Input 4

~~~
5 20 100
0 3 1
20 2 2
40 1 3
60 4 4
80 2 5
11
0
50
100
150
200
250
300
350
400
450
500
~~~

### Sample Output 4

~~~
6
8
10
12
13
15
16
18
19
20
20
~~~

This sample input satisfies the constraints of subtasks $5, 6, 7$, and 8.

### Sample Input 5

~~~
15 10000000 1000000000000
160278118759 43084 33592
442653603914 19490 23090
824219815410 50858 89563
502303340628 56629 45080
495062829942 87342 28821
234536700105 45384 34328
396080693809 78081 50812
734374391045 40873 92012
122606844331 25451 30426
204076581972 58431 13989
495156368673 54276 41670
812963939390 27614 50228
405067019838 96324 18477
464546304875 67562 45956
528559327980 41759 15546
10
216000000000000
1728000000000000
5832000000000000
13824000000000000
27000000000000000
46656000000000000
74088000000000000
110592000000000000
157464000000000000
216000000000000000
~~~

### Sample Output 5

~~~
995176
1135557
1431775
1824183
2359362
3059523
3942014
5106209
6594716
8448125
~~~

This sample input satisfies the constraints of subtasks $5, 6, 7$, and 8.

<style>
.joisp2025-brave3-en-table { position:relative; max-width:100%;overflow-x:auto;margin:1em 0; }
.joisp2025-brave3-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisp2025-brave3-en-table th,.joisp2025-brave3-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisp2025-brave3-en-table th { background:#f5f5f5; }
</style>

<style>
.joisp2025-brave3-en-table .katex {position:relative;}
</style>
