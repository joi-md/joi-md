<blockquote markdown="1">

**AtCoder での提出方法**

標準入力から入力を読み込み，標準出力へ出力すること．

</blockquote>

配点 : $100$ 点

### 問題文

平面上の $N$ 本の直線 $\ell_1, \ell_2, \ldots, \ell_N$ が入力として与えられる．これらの直線によって平面を分割したときの領域の個数を求めるプログラムを作成せよ．ただし，これらの直線には重複があるかもしれない．

下図では $14$ 個の領域に分割されている．

![width:354](https://img.atcoder.jp/joisc2007/2007-lines-partition.png)

### 入力

入力は $N + 1$ 行からなる．最初の行に $N$ ($1 \leqq N \leqq 1000$) の値が書かれている．$i + 1$ 行目 ($1 \leqq i \leqq N$) には，$4$ つの整数 $a_i, b_i, c_i, d_i$ ($0 \leqq a_i, b_i, c_i, d_i \leqq 1000$, $(a_i, b_i) \neq (c_i, d_i)$) が空白を区切りとして書かれている．これは，直線 $\ell_i$ が，点 $P_i(a_i, b_i)$ と点 $Q_i(c_i, d_i)$ を結ぶ直線であることを意味している．

### 出力

標準出力に $1$ 行で領域の個数を出力せよ．

### 入力例 1

~~~
4
0 4 6 4
0 0 6 6
1 0 1 6
0 6 6 0
~~~

### 出力例 1

~~~
11
~~~

![width:562](https://img.atcoder.jp/joisc2007/2007-lines-example.png)
