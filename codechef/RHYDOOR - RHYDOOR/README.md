<h2><a href="https://www.codechef.com/START262D/problems/RHYDOOR" target="_blank" rel="noopener noreferrer">RHYDOOR — RHYDOOR</a></h2>

| | |
|---|---|
| **Difficulty** | Beginner |
| **Language** | C++​ |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [CodeChef RHYDOOR](https://www.codechef.com/START262D/problems/RHYDOOR) |

## Topics
_No tags available_

---

## Problem Statement

<div class="_problemStatementWrapper_bh3c4_33"><div class="_problemBodyContent_bh3c4_71"><h3 class="notranslate">Rhythmic Door</h3><p>Nikhil discovers a sealed room hidden beneath an abandoned arcade. Its entrance is controlled by an old rhythm lock with two buttons, <code>A</code> and <code>B</code>.</p>
<p>The lock records every button press. Whenever the same button has been pressed <strong>three consecutive times</strong>, the door opens once, and the lock immediately resets its counter to zero.<br>
Any remaining presses start a fresh count, even if they use the same button.<br>
If the button changes before three consecutive presses are reached, the new button starts a new streak; and the old streak is lost.</p>
<p>Nikhil has recovered the complete sequence of button presses recorded by the lock. Given this sequence, determine how many times the door opened.</p>
<div class="notranslate">
<h3>Input Format</h3>
<ul>
<li>The first line of input contains a single integer <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>T</mi></mrow><annotation encoding="application/x-tex">T</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span></span></span></span></span>, the number of test cases.</li>
<li>Each test case consists of two lines of input.
<ul>
<li>The first line of each test case contains a single integer <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span>, the number of button presses.</li>
<li>The second line contains a string <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span> of length <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>N</mi></mrow><annotation encoding="application/x-tex">N</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span></span></span></span></span>, consisting only of the characters <code>A</code> and <code>B</code>, representing the sequence of button presses.</li>
</ul>
</li>
</ul>
</div><div class="notranslate">
<h3>Output Format</h3>
<p>For each test case, print a single integer: the number of times the door opened.</p>
</div>
<h3 class="notranslate">Constraints</h3>
<div class="_html_code__block_bh3c4_219 notranslate">
<ul>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>T</mi><mo>≤</mo><mn>100</mn></mrow><annotation encoding="application/x-tex">1 \le T \le 100</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7804em; vertical-align: -0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.136em;"></span><span class="mord mathnormal" style="margin-right: 0.13889em;">T</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">100</span></span></span></span></span></li>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>100</mn></mrow><annotation encoding="application/x-tex">1 \le N \le 100</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.7804em; vertical-align: -0.136em;"></span><span class="mord">1</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.8193em; vertical-align: -0.136em;"></span><span class="mord mathnormal" style="margin-right: 0.10903em;">N</span><span class="mspace" style="margin-right: 0.2778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right: 0.2778em;"></span></span><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">100</span></span></span></span></span></li>
<li><span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mi>S</mi></mrow><annotation encoding="application/x-tex">S</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6833em;"></span><span class="mord mathnormal" style="margin-right: 0.05764em;">S</span></span></span></span></span> consists only of the characters <code>A</code> and <code>B</code>.</li>
</ul>
</div>
<h3 class="notranslate">Sample 1:</h3>
<div class="_input_output__table_bh3c4_231 notranslate"><div class="_text_copy__container_bh3c4_235"><div class="_text_copy_bh3c4_235 _input_top__box_bh3c4_248"><span>Input</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div><div class="_text_copy_bh3c4_235 _ouput_top__box_bh3c4_251"><span>Output</span><div aria-label="Copy to clipboard" class="undefined css-1eiukdk" style="pointer-events: all;"><span class="_icon__box_10bs7_2 undefined"><i class="_copy__icon_10bs7_14"></i></span></div></div></div><div class="_values__container_bh3c4_254"><div class="_values_bh3c4_254"><pre>5
5
AABBB
6
AAABBB
8
AAAAAAAA
6
ABABBA
16
BBBBAAAAABBBBBBB</pre></div><div class="_values_bh3c4_254"><pre>1
2
2
0
4</pre></div></div></div>
<h3 class="notranslate">Explanation:</h3>
<div class="notranslate">
<p><strong>Test case <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>1</mn></mrow><annotation encoding="application/x-tex">1</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">1</span></span></span></span></span>:</strong> The last three presses are all <code>B</code>, so the door opens once.</p>
<p><strong>Test case <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>2</mn></mrow><annotation encoding="application/x-tex">2</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">2</span></span></span></span></span>:</strong> The first three presses are all <code>A</code> and the last three presses are all <code>B</code>, so the door opens twice.</p>
<p><strong>Test case <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">3</span></span></span></span></span>:</strong> The door opens after the <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>3</mn></mrow><annotation encoding="application/x-tex">3</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">3</span></span></span></span></span>-rd press and again after the <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>6</mn></mrow><annotation encoding="application/x-tex">6</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">6</span></span></span></span></span>-th press. The remaining two presses are not enough to open it again.</p>
<p><strong>Test case <span class="math math-inline"><span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML"><semantics><mrow><mn>4</mn></mrow><annotation encoding="application/x-tex">4</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 0.6444em;"></span><span class="mord">4</span></span></span></span></span>:</strong> No button is pressed three consecutive times, so the door never opens.</p>
</div><div></div></div></div>