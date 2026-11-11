Score: $100$ points

### Problem Statement

The IOI Kingdom is represented as a square grid of $L$ rows and $L$ columns. The rows are numbered $1, 2, \ldots, L$ from top to bottom and the columns are numbered $1, 2, \ldots, L$ from left to right. A cell at row $i$ ($1 \le i \le L$) and column $j$ ($1 \le j \le L$) is denoted as cell $(i, j)$.

Recently, due to a widespread infection in the IOI Kingdom, the demand for improved medical facilities has increased. In response, the king, Bitaro, has decided to build hospitals in the four corners of the grid, which are cell $(1, 1)$, cell $(1, L)$, cell $(L, 1)$, and cell $(L, L)$. Each hospital is equipped with one ambulance.

The cautious Bitaro decided to run a simulation to prepare for actual emergency calls from patients. In the scenario he envisioned, emergency calls from $N$ patients arrive at time $0$, and he wants to determine whether all patients can be transported to one of the hospitals by time $T$. The $k$-th patient ($1 \le k \le N$) is located at cell $(X_{k}, Y_{k})$.

The ambulances transport patients according to the following rules:

- Each ambulance can start moving at time 0 or later. It repeats the following (possibly 0 times): depart from its hospital, move to the patient’s location, pick up the patient, and then return to the hospital to drop off the patient.
- Each ambulance can carry at most 1 patient at a time.
- Each ambulance can only transport patients to the hospital where it was initially stationed. Patients cannot be dropped off at any location other than a hospital.
- Each ambulance moves to an adjacent cell (up, down, left, or right) in 1 unit of time. The time taken to pick up and drop off a patient can be ignored.
- Ambulances from different hospitals may occupy the same cell at the same time.

Unfortunately, Bitaro was unable to determine the outcome of his envisioned scenario, so he has asked you to investigate it on his behalf.

Given the size of the IOI Kingdom and the scenario envisioned by Bitaro, write a program to determine whether all patients can be transported to a hospital by time $T$.

### Input

The input is given from Standard Input in the following format:

~~~
$L$ $N$ $T$
$X_1$ $Y_1$
$X_2$ $Y_2$
$\vdots$
$X_N$ $Y_N$
~~~

### Output

Print `Yes` if all patients can be transported to a hospital by time $T$ in the scenario envisioned by Bitaro. Otherwise, print `No`. The output should consist of a single line.

### Constraints

- $3 \le L \le 10\,000$.
- $1 \le N \le 160$.
- $1 \le T \le 20\,000$.
- $1 \le X_{k} \le L$ ($1 \le k \le N$)
- $1 \le Y_{k} \le L$ ($1 \le k \le N$)
- $(X_{k}, Y_{k})$ is not equal to any of $(1, 1), (1, L), (L, 1)$, or $(L, L)$. ($1 \le k \le N$)
- All input values are integers.

### Subtasks

1. ($4$ points) $T \le 50$.
2. ($8$ points) $T \le 160$.
3. ($5$ points) $N \le 10$.
4. ($18$ points) $N \le 20$.
5. ($15$ points) $N \le 45$. $L$ is an odd number, and $Y_k = \frac{L+1}{2}$ ($1 \le k \le N$).
6. ($31$ points) $N \le 45$.
7. ($19$ points) No additional constraints.

### Sample Input 1

~~~
6 4 8
1 3
2 2
3 4
5 5
~~~

### Sample Output 1

~~~
Yes
~~~

By transporting the 1st and 2nd patients to the hospital at $(1, 1)$, the 3rd patient to the hospital at $(1, 6)$, and the 4th patient to the hospital at $(6, 6)$, all patients can be transported to a hospital by time $8$, so the output is `Yes`.

For example, if the ambulance stationed at the hospital in $(1, 1)$ moves in the following order, it can transport both the 1st and 2nd patients to the hospital by time 8.

<div class="joisp2025-ambulance-en-table" markdown="1">

| Time | Ambulance Status |
| --- | --- |
| $0$ | Departs from cell $(1, 1)$ |
| $1$ | Arrives at cell $(2, 1)$ |
| $2$ | Arrives at cell $(2, 2)$, picks up the 2nd patient, and departs |
| $3$ | Arrives at cell $(1, 2)$ |
| $4$ | Arrives at cell $(1, 1)$, drops off the 2nd patient, and departs |
| $5$ | Arrives at cell $(1, 2)$ |
| $6$ | Arrives at cell $(1, 3)$, picks up the 1st patient, and departs |
| $7$ | Arrives at cell $(1, 2)$ |
| $8$ | Arrives at cell $(1, 1)$, drops off the 1st patient |

</div>

This sample input satisfies the constraints of subtasks $1, 2, 3, 4, 6$ and 7.

### Sample Input 2

~~~
9 5 19
5 5
5 5
7 5
2 5
9 5
~~~

### Sample Output 2

~~~
No
~~~

Since it is not possible to transport all patients to a hospital by time 19, the output is `No`.

This sample input satisfies the constraints of all subtasks.

### Sample Input 3

~~~
7 7 16
6 1
2 4
4 5
5 5
3 4
6 4
5 1
~~~

### Sample Output 3

~~~
Yes
~~~

This sample input satisfies the constraints of subtasks $1, 2, 3, 4, 6$ and 7.

### Sample Input 4

~~~
200 15 800
126 45
196 40
43 58
96 13
28 33
44 55
60 22
58 156
135 183
44 29
92 182
157 138
30 132
175 87
166 57
~~~

### Sample Output 4

~~~
No
~~~

This sample input satisfies the constraints of subtasks $4, 6$ and 7.

<style>
.joisp2025-ambulance-en-table { position:relative; max-width:100%;overflow-x:auto;margin:1em 0; }
.joisp2025-ambulance-en-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisp2025-ambulance-en-table th,.joisp2025-ambulance-en-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisp2025-ambulance-en-table th { background:#f5f5f5; }
</style>

<style>
.joisp2025-ambulance-en-table .katex {position:relative;}
</style>
