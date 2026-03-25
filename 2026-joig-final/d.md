配点： $100$ 点

[配布ファイル](https://img.atcoder.jp/joi2026final/casino.zip?_gl=1*13kd1yr*_ga*MjkxNTEwOTk5LjE3NzQyMzI5MTM.*_ga_RC512FD18N*czE3NzQzNjg4MzIkbzE3JGcxJHQxNzc0MzY5MTkzJGo2MCRsMCRoMA..)

### 問題文

イタリアのカジノを訪れた Azzurro と Bordeaux の $2$ 人組は，ディーラーの Chiaro に提案されたゲームを遊ぶことにした．

このゲームでは，$N$ 行 $N$ 列 ($N = 8$) のマス目を介して情報を伝える．マス目の各行には上から順に $0$ から $N - 1$ までの行番号が，各列には左から順に $0$ から $N - 1$ までの列番号が付けられている．行番号が $r$ であり，列番号が $c$ であるマスを $(r, c)$ と表記する．

このゲームでは，Azzurro と Bordeaux が別々の部屋に隔離された状態で $Q$ 回の<strong>ターン</strong>が行われる．$i$ 回目 ($1 \leqq i \leqq Q$) のターンは次のように進行する．

<ol>
<li> Azzurro は Chiaro から，整数 $N, L_i$ ($1 \leqq L_i \leqq 51$) および '<code>A</code>' と '<code>B</code>' からなる $L_i$ 文字の文字列 $S_i$ が書かれたカードと，すべてのマスが白色で塗られた $N$ 行 $N$ 列のマス目を受け取る．
<li> Azzurro は，$N^2$ 個のマスについて，各マスを青色か赤色で塗る．その後，Chiaro にマス目を渡す．
<li> Chiaro は，以下の操作を Azzurro と Bordeaux から見えない場所で行う．
<ol>
<li> 下または右に隣接するマスへの移動のみを繰り返して $(0, 0)$ から $(N - 1, N - 1)$ まで到達する経路を $1$ つ選ぶ．
<li> 経路上にあるすべてのマスについて，そのマスが青色で塗られているならば赤色で塗り直し，赤色で塗られているならば青色で塗り直す．
</ol>
<li> Bordeaux は Chiaro から，整数 $N, L_i$ が書かれたカードとマス目を受け取る．
<li> Bordeaux は '<code>A</code>' と '<code>B</code>' からなる $L_i$ 文字の文字列を紙に書く．書いた文字列が $S_i$ と一致していれば，Azzurro と Bordeaux の勝利となる．
</ol>

Azzurro と Bordeaux がこのゲームで勝利するための戦略を実装せよ．なお，この課題の採点方法については，<strong>採点基準</strong>の項を参照すること．

### 実装の詳細

あなたは $2$ つのファイルを提出しなければならない．

$1$ つ目のファイルは <code>Azzurro.cpp</code> という名前である．このファイルは Azzurro の戦略を実装したファイルであり，以下の関数を実装していなければならない．また，<code>\#include</code> プリプロセッサ指令によって <code>Azzurro.h</code> を読み込むこと．

<ul>
<li> <code>std::vector&lt;std::vector&lt;int&gt;&gt; Azzurro(int N, int L, std::string S)</code>

この関数は合計 $Q$ 回呼び出される．$i$ 回目 ($1 \leqq i \leqq Q$) の呼び出しは，ゲームにおける $i$ 回目のターンの手順 1.，手順 2. に相当する．

<ul>

<li> 引数 <code>N</code> は $i$ 回目のターンの手順 1. で Azzurro が受け取るカードに書かれた整数 $N$ である．
<li> 引数 <code>L</code> は $i$ 回目のターンの手順 1. で Azzurro が受け取るカードに書かれた整数 $L_i$ である．
<li> 引数 <code>S</code> は $i$ 回目のターンの手順 1. で Azzurro が受け取るカードに書かれた文字列 $S_i$ である．
</ul>

関数 <code>Azzurro</code> の $1$ 回の呼び出しについて，各要素が $0$ または $1$ である $N \times N$ の $2$ 次元配列 $\texttt{x}$ を返さなければならない．これが満たされない場合，<strong>不正解 [1]</strong> と判定される．

<ul>
<li> $\texttt{x}[\texttt{r}][\texttt{c}] = 0$ ($0 \leqq \texttt{r} \leqq N - 1$，$0 \leqq \texttt{c} \leqq N - 1$) のとき，マス $(\texttt{r}, \texttt{c})$ を青色で塗ることを表す．
<li> $\texttt{x}[\texttt{r}][\texttt{c}] = 1$ ($0 \leqq \texttt{r} \leqq N - 1$，$0 \leqq \texttt{c} \leqq N - 1$) のとき，マス $(\texttt{r}, \texttt{c})$ を赤色で塗ることを表す．
</ul>
</ul>

$2$ つ目のファイルは <code>Bordeaux.cpp</code> という名前である．このファイルは Bordeaux の戦略を実装したファイルであり，以下の関数を実装していなければならない．また，<code>\#include</code> プリプロセッサ指令によって <code>Bordeaux.h</code> を読み込むこと．

<ul>
<li> <code>std::string Bordeaux(int N, int L, std::vector&lt;std::vector&lt;int&gt;&gt; T)</code>

この関数は Azzurro がマス目を塗り終わるたびに $1$ 回，合計で $Q$ 回呼び出される．$i$ 回目 ($1 \leqq i \leqq Q$) の呼び出しは，ゲームにおける $i$ 回目のターンの手順 4.，手順 5. に相当する．

<ul>

<li> 引数 <code>N</code> は，$i$ 回目のターンの手順 4. で Bordeaux が受け取るカードに書かれた整数 $N$ である．
<li> 引数 <code>L</code> は，$i$ 回目のターンの手順 4. で Bordeaux が受け取るカードに書かれた整数 $L_i$ である．
<li> 引数 <code>T</code> は，$i$ 回目のターンの手順 4. で Bordeaux が受け取るマス目の各マスの色を表す $N \times N$ の $2$ 次元配列である．マス $(\texttt{r}, \texttt{c})$ ($0 \leqq \texttt{r} \leqq N - 1$，$0 \leqq \texttt{c} \leqq N - 1$) の色は，$\texttt{T[r][c]} = 0$ であれば青色，$\texttt{T[r][c]} = 1$ であれば赤色である．
</ul>

関数 <code>Bordeaux</code> の $1$ 回の呼び出しについて，'<code>A</code>' と '<code>B</code>' からなる $L_i$ 文字の文字列 <code>s</code> を返さなければならない．これが満たされない場合，<strong>不正解 [2]</strong> と判定される．
</ul>

#### 重要な注意

<ul>
<li> 内部での使用のために他の関数を実装したり，グローバル変数を宣言するのは自由である．
ただし，提出された $2$ つのプログラムは，採点プログラムとまとめてリンクされて $1$ つの実行ファイルになるので，
各ファイル内のすべてのグローバル変数と内部関数を無名名前空間内で宣言して，他のファイルとの干渉を避ける必要がある．
採点時には，このプログラムは Azzurro 側，Bordeaux 側として $2$ 個のプロセスとして実行されるので，
Azzurro 側と Bordeaux 側でプログラム中のグローバル変数を共有することはできない．
<li> あなたの提出したプログラムは，標準入力・標準出力，あるいは他のファイルといかなる方法でもやりとりしてはならない．
ただし，標準エラー出力にデバッグ情報等を出力することは許される．
</ul>

### コンパイル・実行の方法

作成したプログラムをテストするための，採点プログラムのサンプルが，コンテストサイトからダウンロードできるアーカイブの中に含まれている．このアーカイブには，提出しなければならないファイルのサンプルも含まれている．

採点プログラムのサンプルは $1$ つのファイルからなる．そのファイルは <code>grader.cpp</code> である．作成したプログラムをテストするには，<code>grader.cpp</code>，<code>Azzurro.cpp</code>，<code>Bordeaux.cpp</code>，<code>Azzurro.h</code>，<code>Bordeaux.h</code> を同じディレクトリに置き，次のようにコマンドを実行する．

~~~
g++ -std=gnu++20 -O2 -o grader grader.cpp Azzurro.cpp Bordeaux.cpp
~~~

なお，アーカイブの中に含まれている <code>compile.sh</code> というファイルを代わりに実行してもよい．その場合，次のようにコマンドを実行する．

~~~
./compile.sh
~~~

コンパイルが成功すれば，<code>grader</code> という実行ファイルが生成される．

実際の採点プログラムは，採点プログラムのサンプルとは異なることに注意すること．採点プログラムのサンプルは単一のプロセスとして起動する．このプログラムは，標準入力から入力を読み込み，標準出力に結果を出力する．

なお，実際の採点プログラムにおいて，<strong>Chiaro の選ぶ経路はあらかじめ定まっている．</strong>すなわち，あなたの提出したプログラムにおける関数 <code>Azzurro</code> や関数 <code>Bordeaux</code> が呼び出される前に，Chiaro の選ぶ経路は確定している．

#### 採点プログラムのサンプルの入力

採点プログラムのサンプルは標準入力から以下の形式で入力を読み込む．

~~~
$Q$ $N$ 
$L_1$ 
$S_1$ 
$R_1$ 
$L_2$ 
$S_2$ 
$R_2$ 
$\vdots$ 
$L_Q$ 
$S_Q$ 
$R_Q$
~~~

ここで，$R_i$ ($1 \leqq i \leqq Q$) は，'<code>D</code>' と '<code>R</code>' を $N - 1$ 文字ずつ含む $2(N - 1)$ 文字の文字列である．この文字列は Chiaro が $i$ 回目のターンで選ぶ，下または右に隣接するマスへの移動のみを繰り返して $(0, 0)$ から $(N - 1, N - 1)$ まで到達する経路を表す．その経路は，$(0, 0)$ からスタートして，$j = 1, 2, \cdots , 2(N - 1)$ の順に，$R_i$ の $j$ 文字目が '<code>D</code>' であれば下に隣接するマスに，'<code>R</code>' であれば右に隣接するマスに移動する，という操作を繰り返すことで最終的に $(N - 1, N - 1)$ に到達する経路である．

#### 採点プログラムのサンプルの出力

採点プログラムのサンプルは標準出力へ以下の情報を出力する（引用符は実際には出力されない）．

<ul>
<li> 正解の場合，$L^{*}$ の値が "<code>Accepted: 26</code></code>" のように出力される．$L^{*}$ の値については採点基準の項を参照せよ．
<li> 不正解の場合，不正解の種類が "<code>Wrong Answer [1]</code>" のように出力される．
</ul>

実行するプログラムが複数の不正解の条件を満たした場合，表示される不正解の種類はそれらのうち $1$ つのみである．採点プログラムのサンプルは，不正解の条件を満たした場合，途中で実行を打ち切ることがある．

---

### 制約

すべての入力データは以下の条件を満たす．

<ul>
<li> $1 \leqq Q \leqq 30\,000$．
<li> $N = 8$．
<li> $1 \leqq L_i \leqq 51$ ($1 \leqq i \leqq Q$)．
<li> $Q, L_i$ ($1 \leqq i \leqq Q$) は整数である．
<li> $S_i$ ($1 \leqq i \leqq Q$) は '<code>A</code>' と '<code>B</code>' からなる $L_i$ 文字の文字列である．
<li> $R_i$ ($1 \leqq i \leqq Q$) は '<code>D</code>' と '<code>R</code>' を $N - 1$ 文字ずつ含む $2(N - 1)$ 文字の文字列である．
</ul>

### 採点基準

この課題のテストケースの中で，$1$ つでも<strong>不正解 [1]</strong> または<strong>不正解 [2]</strong>（実装の詳細を参照）と判定されたものや，実行時エラー（実行時間制限超過，メモリ制限違反，異常終了など）と判定されたものがあった場合，他のテストケースでどのターンに勝利したかにかかわらず無条件で $0$ 点となる．

そうでない場合，この課題のすべてのテストケースに対する以下の値の最小値を $L^{*}$ とするとき，下表のように得点が与えられる．

<ul>
<li> $L_i \leqq L$ を満たすすべてのターンについて勝利したような最大の整数 $L$．ただし，テストケース内のすべてのターンに勝利した場合は $L = 51$ とする．
</ul>

<img src="https://img.atcoder.jp/joig2026final/casino-fig1.png" class="img-responsive center-block" style="max-width: 100%; width: 330px;">

### やりとりの例

採点プログラムのサンプルが読み込む入力の例と，それに対応する関数の呼び出しの例を以下に示す．

### 入力例 1

~~~
2 2
1
B
RD
3
ABB
DR
~~~

<img src="https://img.atcoder.jp/joi2026final/casino-fig1.png" class="img-responsive center-block" style="max-width: 100%; width: 500px;">

この入力例は $Q \ (= 2)$ 回のターンからなり，$2$ 回のターンでは $N$ 行 $N$ 列 ($N = 2$) のマス目を使用する．この例では，$1$ 回目のターンは次のように進行する．

<ol>
<li> Azzurro は $(0, 1)$ と $(1, 0)$ を青色に，$(0, 0)$ と $(1, 1)$ を赤色に塗る．その後，Chiaro にマス目を渡す．
<li> Chiaro は，以下の操作を Azzurro と Bordeaux から見えない場所で行う．
<ol>
<li> 下または右に隣接するマスへの移動のみを繰り返して $(0, 0)$ から $(N - 1, N - 1)$ まで到達する経路として，$(0, 0) \rightarrow (0, 1) \rightarrow (1, 1)$ を選ぶ．
<li> この経路上にある $3$ つのマス $(0, 0), (0, 1), (1, 1)$ について，そのマスに塗られた色を変更する．これにより，$(0, 0), (0, 1), (1, 1)$ の色はそれぞれ青色，赤色，青色に変更される．
</ol>
<li> Bordeaux は "<code>B</code>" と紙に書くことで，このターンでは勝利できる．
</ol>

また，$2$ 回目のターンは次のように進行する．

<ol>
<li> Azzurro はすべてのマスを青色に塗る．その後，Chiaro にマス目を渡す．
<li> Chiaro は，以下の操作を Azzurro と Bordeaux から見えない場所で行う．
<ol>
<li> 下または右に隣接するマスへの移動のみを繰り返して $(0, 0)$ から $(N - 1, N - 1)$ まで到達する経路として，$(0, 0) \rightarrow (1, 0) \rightarrow (1, 1)$ を選ぶ．
<li> この経路上にある $3$ つのマス $(0, 0), (1, 0), (1, 1)$ について，そのマスに塗られた色を変更する．これにより，$(0, 0), (1, 0), (1, 1)$ の色はすべて赤色に変更される．
</ol>
<li> Bordeaux は "<code>ABB</code>" と紙に書くことで，このターンでは勝利できる．
</ol>

この入力例は<strong>制約を満たさない</strong>ことに注意すること．コンテストサイトからダウンロードできるファイルのうち，<code>sample-01-in.txt</code> は入力例 $1$ に対応する．コンテストサイトからダウンロードできるファイルのうち，<code>sample-02-in.txt</code>は制約を満たす．


