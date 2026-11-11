配点 : $100$ 点

### 問題文

JOI の春合宿が行われる施設の宿泊棟の部屋の鍵は，カードに穴がいくつか開いた形状をしている．穴を開ける位置の候補は $N$ 個あり，これらのうちいくつかに穴を開けた $2^{N}$ 枚の異なる鍵が作られた．

あなたは，JOI の春合宿のための $1$ 枚以上 $2^{N}$ 枚以下の鍵をまとめて受け取った．穴を開ける候補の位置を合わせて鍵を重ねてみたあなたは，ちょうど $K$ か所，受け取ったすべての鍵に穴が開いている位置があることに気づいた．

このようなことが起こるような，受け取った鍵の組み合わせは何通りあるだろうか．答えを $1\,000\,000\,007$ (素数) で割った余りを求めよ．

### 課題

$N$ と $K$ が与えられたとき，答えを $1\,000\,000\,007$ で割った余りを求めるプログラムを作成せよ．

### 制約

- $1 \leqq N \leqq 1\,000\,000$：穴を開ける位置の候補の個数．
- $0 \leqq K \leqq N$：受け取ったすべての鍵に穴が開いている位置の個数．


### 入力

標準入力から以下の入力を読み込め．

- $1$ 行目には整数 $N, K$ が空白を区切りとして書かれている．

### 出力

標準出力に鍵の組み合わせの個数を表す $1$ 行を出力せよ．出力の $1$ 行目には，答えを $1\,000\,000\,007$ で割った余りを書け．

### 採点基準

採点用データのうち，配点の $30\%$ 分については，$N \leqq 10$ を満たす．

採点用データのうち，配点の $70\%$ 分については，$N \leqq 1\,000$ を満たす．

### 入出力の例

### 入力例 1

~~~
3 3
~~~

### 出力例 1

~~~
1
~~~

$N = 3$ の時，鍵は全部で $8$ 枚存在するが，ここでは以下のように鍵に名前をつける．

<div class="joisc2011-keycards-ja-table" markdown="1">

| 穴の開き方 | 名前 |
| --- | --- |
| <span>　　　</span> | $\phi$ |
| <span>○　　</span> | `A` |
| <span>　○　</span> | `B` |
| <span>　　○</span> | `C` |
| <span>○○　</span> | `AB` |
| <span>　○○</span> | `BC` |
| <span>○　○</span> | `AC` |
| <span>○○○</span> | `ABC` |

</div>

たとえば `ABC` という $1$ 枚の鍵だけを受け取った場合，受け取ったすべての鍵に穴が開いている位置の数は $3$ か所である．また，それ以外の受け取り方では，受け取ったすべての鍵に穴が開いている位置の数が $3$ か所になることはない．したがって，条件を満たす鍵の受け取り方は $1$ 通りである．

### 入力例 2

~~~
3 2
~~~

### 出力例 2

~~~
6
~~~

$\lbrace\texttt{AB}, \texttt{ABC}\rbrace$ という $2$ 枚の鍵を受け取った場合，受け取ったすべての鍵に穴が開いている位置の数は $2$ か所である．同様に，$\lbrace\texttt{AC}, \texttt{ABC}\rbrace$，$\lbrace\texttt{BC}, \texttt{ABC}\rbrace$，$\lbrace\texttt{AB}\rbrace$，$\lbrace\texttt{AC}\rbrace$，$\lbrace\texttt{BC}\rbrace$ という受け取り方をした場合にも，受け取ったすべての鍵に穴が開いている位置の数は $2$ か所となる．

### 入力例 3

~~~
3 1
~~~

### 出力例 3

~~~
30
~~~

条件を満たす鍵の受け取り方は，$\lbrace\texttt{A}\rbrace$，$\lbrace\texttt{A}, \texttt{AB}\rbrace$，$\lbrace\texttt{A}, \texttt{AC}\rbrace$，$\lbrace\texttt{A}, \texttt{ABC}\rbrace$，$\lbrace\texttt{A}, \texttt{AB}, \texttt{AC}\rbrace$，$\lbrace\texttt{A}, \texttt{AB}, \texttt{ABC}\rbrace$，$\lbrace\texttt{A}, \texttt{AC}, \texttt{ABC}\rbrace$，$\lbrace\texttt{A}, \texttt{AB}, \texttt{AC}, \texttt{ABC}\rbrace$，$\lbrace\texttt{AB}, \texttt{AC}\rbrace$，$\lbrace\texttt{AB}, \texttt{AC}, \texttt{ABC}\rbrace$ など $30$ 通りである．

### 入力例 4

~~~
3 0
~~~

### 出力例 4

~~~
218
~~~

<style>
.joisc2011-keycards-ja-table { max-width:100%;overflow-x:auto;margin:1em 0; }
.joisc2011-keycards-ja-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisc2011-keycards-ja-table th,.joisc2011-keycards-ja-table td { border:1px solid #aaa;padding:0.3em 0.6em;text-align:left;vertical-align:top; }
.joisc2011-keycards-ja-table th { background:#f5f5f5; }
.joisc2011-keycards-ja-table td:first-child span { display:inline-block;width:3em;white-space:pre;font-family:monospace; }
</style>
