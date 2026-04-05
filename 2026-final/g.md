配点： $100$ 点

### 問題文

JOI 国は，点 $A, B, C$ を頂点とする一辺の長さが $L$ の正三角形である．ここで $L$ は正整数である．辺 $AB$ は頂点 $A, B$ を東西方向に結んでおり，頂点 $A$ は JOI 国の最西端，頂点 $B$ は JOI 国の最東端である．頂点 $C$ は JOI 国の最北端である．

JOI 国は，一辺の長さが $1$ の正三角形の<strong>区画</strong> $L^2$ 個に区切られている．ある区画の頂点であるような点は<strong>格子点</strong>と呼ばれている．$0\leqq y\leqq L$，$0\leqq x\leqq L-y$ を満たす整数 $x,y$ に対して，南側から $1+y$ 番目，西側から $1+x$ 番目の格子点は $(x,y)$ と表される．特に $A$ は $(0,0)$，$B$ は $(L,0)$，$C$ は $(0,L)$ と表される．例えば次の図は $L=5$ の場合の区画，格子点を表している．

<img src="https://img.atcoder.jp/joi2026final/rainfall-fig1.png" class="img-responsive center-block" style="max-width: 100%; width: 400px;">

JOI 国ではこれから $N$ 日の間の天気予報が発表された．
$i$ 日目には，格子点 $(X_i, Y_i)$, $(X_i + Z_i, Y_i)$, $(X_i, Y_i + Z_i)$ を頂点とする正三角形状の地域 $T_i$ に雨が降ると予報されている．
$i$ 日目に雨が降ると予報されている区画とは，区画全体が $T_i$ に含まれるような区画のことである．

降雨による災害に備えるため，$k=1,2,\ldots,K$ について，$k$ 日以上雨が降ると予報されている区画の個数を調べる必要がある．

JOI 国の大きさ，天気予報の情報，$K$ が与えられたときに，$k=1,2,\ldots,K$ について，$k$ 日以上雨が降ると予報されている区画の個数を求めるプログラムを作成せよ．

---

### 入力

入力は以下の形式で標準入力から与えられる．

~~~
$L$ $N$ $K$
$X_1$ $Y_1$ $Z_1$
$X_2$ $Y_2$ $Z_2$
$\vdots$
$X_N$ $Y_N$ $Z_N$
~~~

### 出力

標準出力に $K$ 行出力せよ．$k$ 行目 ($1\leqq k\leqq K$) には，$k$ 日以上雨が降ると予報されている区画の個数を出力せよ．

---

### 制約

<ul>
<li> $2\leqq L\leqq 10^9$．
<li> $2 \leqq N \leqq 200\,000$．
<li> $1 \leqq K \leqq 5$．
<li> $0\leqq X_i\leqq L$ ($1\leqq i\leqq N$)．
<li> $0\leqq Y_i\leqq L$ ($1\leqq i\leqq N$)．
<li> $1 \leqq Z_i\leqq L$ ($1\leqq i\leqq N$)．
<li> $X_i+Y_i+Z_i\leqq L$ ($1\leqq i\leqq N$)．
<li> 入力される値はすべて整数である．
</ul>

### 小課題

<ol>
<li> ($4$ 点) $N = 2$，$K = 2$．
<li> ($5$ 点) $L\leqq 100$，$N\leqq 100$．
<li> ($5$ 点) $L\leqq 1\,000$．
<li> ($7$ 点) $N\leqq 2\,000$．
<li> ($10$ 点) $X_i = 0$ ($1\leqq i\leqq N$)，$K = 1$．
<li> ($10$ 点) $X_i = 0$ ($1\leqq i\leqq N$)．
<li> ($23$ 点) $K = 1$．
<li> ($18$ 点) $K \leqq 2$．
<li> ($18$ 点) 追加の制約はない．
</ol>

---

### 入力例 1

~~~
5 2 2
1 0 3
0 1 4
~~~

### 出力例 1

~~~
21
4
~~~

それぞれの区画について，雨が降ると予報されている日数を図示すると，次の図のようになる．

<img src="https://img.atcoder.jp/joi2026final/rainfall-fig2.png" class="img-responsive center-block" style="max-width: 100%; width: 400px;">

この入力例は小課題 $1, 2, 3, 4, 8, 9$ の制約を満たす．

---

### 入力例 2

~~~
5 4 5
1 0 4
0 1 3
2 0 2
1 2 2
~~~

### 出力例 2

~~~
21
10
2
0
0
~~~

それぞれの区画について，雨が降ると予報されている日数を図示すると，次の図のようになる．

<img src="https://img.atcoder.jp/joi2026final/raillfall-fig3.png" class="img-responsive center-block" style="max-width: 100%; width: 400px;">

この入力例は小課題 $2, 3, 4, 9$ の制約を満たす．


