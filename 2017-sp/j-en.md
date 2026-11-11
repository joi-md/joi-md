Score: $100$ points

### Problem Statement

On a sunny day, there was an abduction incident at a crossing in a city. It is suspected that the criminals were Anna and Bruno, and they escaped from the abduction scene by a car. The car was not yet found. The police is searching it even now.

The urban area where the criminals was driving the car is a city of rectangular grid with $H$ streets running in the east-west direction and $W$ streets running in the south-north direction. The distance between two adjacent crossings is 1 kilometer.

Each street has an integer, the congestion degree. The congestion degree of the $i$-th street ($1 \le i \le H$) from north running in the east-west direction is $A_{i}$, and the congestion degree of the $j$-th street ($1 \le j \le W$) from west running in the south-north direction is $B_{j}$. These $H + W$ values are different from each other. For each street, the congestion degree has the same value at any points on it.

The investigation by the police revealed that the criminals moved in the city in the following way:

- They did not go out of the city, and they did not go out of the streets.
- In the beginning, the criminals chose one of the movable directions from the abduction scene, and moved toward that direction.
- When they came to a crossing, if the congestion degree of the transversing street is larger than that of the current street, they turned at that crossing. If it was possible to turn to the both directions, they could choose any one of them.
- When they came to a crossing, if the congestion degree of the current street is larger than that of the transversing street, they kept going straight. However, if they were in the boundary of the city and could not go straight, they stopped moving at that place.

There are $Q$ candidates of crossings for the abduction scene. These $Q$ candidates are different from each other. To determine the number of investigators, the police wants to know, for each candidate of crossings, the maximum possible travel distance for the criminals assuming the abduction incident was occurred at that place.

For each of $Q$ queries, calculate the maximum possible travel distance from the given candidate of crossings.

### Task

Given the congestion degrees of the streets in the city and $Q$ candidates of crossings for the abduction scene, write a program which calculates the maximum possible travel distance from each candidate of crossings.

### Input

Read the following data from the standard input.

- The first line of input contains three space separated integers $H, W, Q$. This means the city is a rectangular grid with $H$ streets running in the east-west direction and $W$ streets running in the south-north direction, and there are $Q$ candidates of crossings for the abduction scene.
- The second line of input contains $H$ space separated integers $A_{1}, A_{2}, \ldots, A_{H}$. This means the congestion degree of the $i$-th street ($1 \le i \le H$) from north running in the east-west direction is $A_{i}$.
- The third line of input contains $W$ space separated integers $B_{1}, B_{2}, \ldots, B_{W}$. This means the congestion degree of the $j$-th street ($1 \le j \le W$) from west running in the south-north direction is $B_{j}$.
- The $k$-th line ($1 \le k \le Q$) of the following $Q$ lines contains two space separated integers $S_{k}, T_{k}$. This means the $k$-th candidate of crossings for the abduction scene is the crossing of the $S_{k}$-th street from north running in the east-west direction and the $T_{k}$-th street from west running in the south-north direction.

### Output

Write $Q$ lines to the standard output. The $k$-th line of output should contain an integer, the maximum possible travel distance (in kilometers) from the $k$-th candidate of crossings for the abduction scene.

### Constraints

All input data satisfy the following conditions.

- $2 \le H \le 50\,000$.
- $2 \le W \le 50\,000$.
- $1 \le Q \le 100$.
- $1 \le A_{i} \le 1\,000\,000\,000$ ($1 \le i \le H$).
- $1 \le B_{j} \le 1\,000\,000\,000$ ($1 \le j \le W$).
- The $H + W$ integers $A_{1}, A_{2}, \ldots, A_{H}, B_{1}, B_{2}, \ldots, B_{W}$ are different from each other.
- $1 \le S_{k} \le H$ ($1 \le k \le Q$).
- $1 \le T_{k} \le W$ ($1 \le k \le Q$).
- $(S_{k}, T_{k}) \ne (S_{l}, T_{l})$ ($1 \le k < l \le Q$).

### Subtask

There are 5 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$13$ points]

- $H \le 8$.
- $W \le 8$.
- $Q = 1$.

#### Subtask 2 [$10$ points]

- $H \le 2\,000$.
- $W \le 2\,000$.
- $Q = 1$.

#### Subtask 3 [$17$ points]

- $Q = 1$.

#### Subtask 4 [$4$ points]

- $H \le 2\,000$.
- $W \le 2\,000$.

#### Subtask 5 [$56$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 3 5
3 2 6
1 4 5
1 1
1 2
2 2
3 1
3 3
~~~

### Sample Output 1

~~~
4
5
4
4
2
~~~

For example, for the third query, the travel distance achieves the maximum value if the criminals moved in the following way:

- They moved east for $1$ kilometer from the crossing of the second street from north and the second street from west.
- They could move south or north from the crossing of the second street from north and the third street from west. They chose to move south for 1 kilometer.
- They could move west only from the crossing of the third street from north and the third street from west. They moved west for 1 kilometer.
- They could move west only from the crossing of the third street from north and the second street from west. They moved west for 1 kilometer.
- They could not move from the crossing of the third street from north and the first street from west. They stopped moving at that place.

If they moved as above, the travel distance is 4 kilometers.

### Sample Input 2

~~~
4 5 6
30 10 40 20
15 55 25 35 45
1 3
4 3
2 2
4 1
2 5
3 3
~~~

### Sample Output 2

~~~
7
6
9
4
6
9
~~~
