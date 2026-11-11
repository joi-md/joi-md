Score: $100$ points

### Problem Statement

<p style="text-align:center;"><img src="https://img.atcoder.jp/joisc2018/bitaro-en-p1-1.png" alt="Figure" style="width:249.6px;max-width:80%;height:auto;"></p>

There are $N$ towns of beavers numbered from 1 to $N$ in the descending order of their heights. No two towns have the same height. There are $M$ canals connecting two different towns unidirectionally. The $i$-th canal ($1 \le i \le M$) flows from town $S_{i}$ to town $E_{i}$. These canals flow from high towns to low towns. You cannot move against flow of the canals.

Bitaro, a beaver, has N friends, one of whom lives in each of $N$ towns.

Bitaro is going to have parties $Q$ times, inviting his friends. It is known for the $j$-th ($1 \le j \le Q$) party that $Y_{j}$ friends are too busy to attend it. The $j$-th party is held in town $T_{j}$, so his friends who cannot go from their towns to town $T_{j}$ only via canals cannot attend it either. Other friends come to the party.

Each friend come to the town where the party is held via canals. There may be several paths they can take. But Bitaro’s friends love canals, so they must choice one of the paths which have the largest number of canals.

Bitaro wonders how many canals the attendant who uses the largest number of canals uses.

### Task

Given the indexes of the towns where the parties are held and lists of busy friends for the $Q$ parties, write a program which calculates how many canals the attendant who uses the largest number of canals uses.

### Input

Read the following data from the standard input.

- The first line of input contains three space separeted integers $N, M, Q$. These mean there are $N$ towns of beavers and $M$ canals and $Q$ parties Bitaro has.
- The $i$-th line ($1 \le i \le M$) of following $M$ lines contains two space separated integers $S_{i}$ and $E_{i}$. These mean the canal flows from $S_{i}$ to $E_{i}$ unidirectionally.
- The $j$-th line ($1 \le j \le Q$) of following $Q$ lines contains two space separated integers $T_{j}, Y_{j}$ and $Y_{j}$ space separeted integers $C_{j,1},C_{j,2}, ...,C_{j,Y_{j}}$. These mean the $j$-th party is held in town $T_{j}$ and friends living in town $C_{j,1},C_{j,2}, ...,C_{j,Y_{j}}$ are busy.

### Output

Output contains $Q$ lines. The $j$-th line ($1 \le j \le Q$) contains the number of canals the attendant who uses the largest number of canals uses for the $j$-th party. If no one can attend the $j$-th party, the $j$-th line contains `-1`.

### Constraints

All input data satisfy the following conditions.

- $1 \le N \le 100\,000$．
- $0 \le M \le 200\,000$．
- $1 \le Q \le 100\,000$．
- $1 \le S_{i} < E_{i} \le N$ ($1 \le i \le M$)．
- $(S_{i}, E_{i}) \ne (S_{j}, E_{j})$ ($1 \le i < j \le M$)．
- $1 \le T_{j} \le N$ ($1 \le j \le Q$)．
- $0 \le Y_{j} \le N$ ($1 \le j \le Q$)．
- $1 \le C_{j,1} < C_{j,2} < \cdots < C_{j,Y_{j}} \le N$ ($1 \le j \le Q$)．
- $Y_{1} + Y_{2} + \cdots + Y_{Q} \le 100\,000$．

### Subtasks

There are 3 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$7$ points]

- $N \le 1\,000$．
- $M \le 2\,000$．
- $Q = 1$．

#### Subtask 2 [$7$ points]

- $Q = 1$．

#### Subtask 3 [$86$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5 6 3
1 2
2 4
3 4
1 3
3 5
4 5
4 1 1
5 2 2 3
2 3 1 4 5
~~~

### Sample Output 1

~~~
1
3
0
~~~

Among the friends attending the first party (the friends living in town 2, 3 or 4), the friends living in town 2 or 3 go to town 4, where the party is held, via the largest number of canals. This number is 1, so output 1.

Among the friends attending the second party (the friends living in town 1, 4, or 5), the friend living in town 1 goes to town 5, where the party is held, via the largest number of canals. This number is 3, so output 3.

The friend living in town 2 is the only one who attends the third party. He uses no canals, so output 0.

### Sample Input 2

~~~
12 17 10
1 2
2 3
3 4
1 5
2 6
3 7
4 8
5 6
6 7
7 8
5 9
6 10
7 11
8 12
9 10
10 11
11 12
6 3 1 7 12
3 7 1 2 3 4 5 6 7
11 3 1 3 5
9 2 1 9
8 4 1 2 3 4
1 1 1
12 0
10 3 1 6 10
11 8 2 3 5 6 7 9 10 11
8 7 2 3 4 5 6 7 8
~~~

### Sample Output 2

~~~
1
-1
3
1
3
-1
5
2
4
4
~~~
