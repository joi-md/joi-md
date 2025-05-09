配点： $100$ 点

### 問題文

Just Odd Inventions 社は，「ただ奇妙な発明 (just odd inventions)」をすることで知られている会社である．
ここでは略して JOI 社と呼ぶ．

JOI 社は，看板商品である「長いだけのネクタイ」発売 $5$ 周年を記念し，新しく「長くなるだけのネクタイ」を開発した．
この新型ネクタイの特徴は，その名の通り長さをいくらでも伸ばせることである．

JOI 社は，新型ネクタイの宣伝を目的とした披露会の開催を決定し，その司会にあなたを抜擢した．
披露会ではまず，新型ネクタイを着用した何人かのモデルが舞台上に登壇する．
最初，各モデルが着用しているネクタイの<b>長さ</b>はすべて $1$ である．

その後，あなたはネクタイの長さを伸ばせる機能を観客に実感してもらうための<b>パフォーマンス</b>を $N$ 回行う．
各パフォーマンスは以下のように行われる．

<ol>
<li> まず，観客に好きな数を $1$ つ唱えてもらう．ここで観客が唱えた数を $x$ とおく．
<li> 次に，司会のあなたはこれに反応するか無視するかを選ぶ．
<ul>
<li> 反応することを選んだ場合，あなたは登壇しているモデルのうち着用しているネクタイの長さが $x$ <b>以下</b>であるような者を $1$ 人選び，そのモデルのネクタイの長さを $x$ にする（着用しているネクタイの長さが元々 $x$ であるようなモデルも選ぶことができる点に注意せよ）．
ただし，選ぶことのできるモデルが $1$ 人も存在しない場合，披露会は失敗に終わる．
<li> 無視することを選んだ場合，何もしない．
</ul>
</ol>

ただし，観客の唱えた数を $2$ 回以上連続で無視してしまうと，観客が機嫌を損ね，披露会は失敗に終わる．

舞台上に登壇させるモデルの人数 $k$ ($k\geqq 1$) はまだ決まっていないが，モデルを雇うのにはお金がかかるため，$k$ の値はできるだけ小さい方が望ましい．
披露会が失敗に終わらないために必要なモデルの人数は各パフォーマンスで観客が唱える数に依存するが，あなたはその予知能力により，$i$ 回目 ($1\leqq i\leqq N$) のパフォーマンスで観客が唱える数が $A_i$ であることを予見した．

披露会で観客が唱える数の情報が与えられたとき，披露会が失敗に終わらないために必要なモデルの人数 $k$ の最小値を求めるプログラムを作成せよ．

---

### 入力

入力は以下の形式で標準入力から与えられる．

~~~
$N$
$A_1$ $A_2$ $\cdots$ $A_N$
~~~

### 出力

標準出力に，披露会が失敗に終わらないために必要なモデルの人数 $k$ の最小値を $1$ 行で出力せよ．

---

### 制約

<ul>
<li> $2 \leqq N \leqq 5\,000\,000$．
<li> $1\leqq A_i \leqq 21$ ($1 \leqq i \leqq N$)．
<li> 入力される値はすべて整数である．
</ul>

### 小課題

<ol>
<li> ($10$ 点) $N\leqq 15$．
<li> ($6$ 点) $N\leqq 500$，$A_i \leqq 2$ ($1 \leqq i \leqq N$)．
<li> ($12$ 点) $N\leqq 500$，$A_i \leqq 5$ ($1 \leqq i \leqq N$)．
<li> ($18$ 点) $N\leqq 500$，$A_i \leqq 15$ ($1 \leqq i \leqq N$)．
<li> ($26$ 点) $N\leqq 500\,000$，$A_i \leqq 15$ ($1 \leqq i \leqq N$)．
<li> ($10$ 点) $N\leqq 500\,000$．
<li> ($18$ 点) 追加の制約はない．
</ol>

---

### 入力例 1

~~~
5
5 3 4 2 1
~~~

### 出力例 1

~~~
2
~~~

$k=2$ のとき，例えば以下のように披露会を行うことができる．

<ul>
<li> まず，新型ネクタイを着用した $2$ 人のモデルが舞台上に登壇する．最初，各モデルのネクタイの長さはいずれも $1$ である．
<li> $1$ 回目のパフォーマンスでは，観客は $5$ を唱える．あなたはこれを無視する．
<li> $2$ 回目のパフォーマンスでは，観客は $3$ を唱える．あなたはこれに反応して，$1$ 人目のモデルを選び，そのネクタイの長さを $3$ にする．各モデルのネクタイの長さはそれぞれ $3,1$ になる．
<li> $3$ 回目のパフォーマンスでは，観客は $4$ を唱える．あなたはこれに反応して，$1$ 人目のモデルを選び，そのネクタイの長さを $4$ にする．各モデルのネクタイの長さはそれぞれ $4,1$ になる．
<li> $4$ 回目のパフォーマンスでは，観客は $2$ を唱える．あなたはこれに反応して，$2$ 人目のモデルを選び，そのネクタイの長さを $2$ にする．各モデルのネクタイの長さはそれぞれ $4,2$ になる．
<li> $5$ 回目のパフォーマンスでは，観客は $1$ を唱える．あなたはこれを無視する．
</ul>

$k=1$ のとき，披露会は必ず失敗に終わる．
例えば，上記の進行例のように $2,3,4$ 回目のパフォーマンスで観客の唱えた数に反応した場合，$3$ 回目のパフォーマンスが終了した時点で登壇している唯一のモデルのネクタイの長さが $4$ になっているため，
$4$ 回目のパフォーマンスにおいて，着用しているネクタイの長さが $2$ 以下であるようなモデルを選ぶことができず，披露会は失敗に終わる．

よって，披露会が失敗に終わらないために必要なモデルの人数 $k$ の最小値は $2$ であるため，$2$ を出力する．

この入力例は小課題 $1,3,4,5,6,7$ の制約を満たす．

---

### 入力例 2

~~~
6
2 1 1 2 2 1
~~~

### 出力例 2

~~~
1
~~~

$k=1$ のとき，例えば以下のように披露会を行うことができる．

<ul>
<li> まず，新型ネクタイを着用した $1$ 人のモデルが舞台上に登壇する．最初，モデルのネクタイの長さは $1$ である．
<li> $1$ 回目のパフォーマンスでは，観客は $2$ を唱える．あなたはこれを無視する．
<li> $2$ 回目のパフォーマンスでは，観客は $1$ を唱える．あなたはこれに反応して，登壇している唯一のモデルを選び，そのネクタイの長さを $1$ にする．
<li> $3$ 回目のパフォーマンスでは，観客は $1$ を唱える．あなたはこれに反応して，登壇している唯一のモデルを選び，そのネクタイの長さを $1$ にする．
<li> $4$ 回目のパフォーマンスでは，観客は $2$ を唱える．あなたはこれに反応して，登壇している唯一のモデルを選び，そのネクタイの長さを $2$ にする．
<li> $5$ 回目のパフォーマンスでは，観客は $2$ を唱える．あなたはこれに反応して，登壇している唯一のモデルを選び，そのネクタイの長さを $2$ にする．
<li> $6$ 回目のパフォーマンスでは，観客は $1$ を唱える．あなたはこれを無視する．
</ul>

なお，上記の進行例における $2,3$ 回目のパフォーマンスでは，元々ネクタイの長さが $1$ であるようなモデルを選んでそのネクタイの長さを $1$ にしているが，そのように，ネクタイの長さが変化しないようなモデルの選び方も許されていることに注意せよ．

よって，披露会が失敗に終わらないために必要なモデルの人数 $k$ の最小値は $1$ であるため，$1$ を出力する．

この入力例はすべての小課題の制約を満たす．

---

### 入力例 3

~~~
10
2 4 6 7 4 5 5 3 4 1
~~~

### 出力例 3

~~~
3
~~~

この入力例は小課題 $1,4,5,6,7$ の制約を満たす．
