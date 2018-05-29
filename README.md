# wildcard_matching

两个字符串的匹配。实质是正则表达式的匹配。？可表示任意一个字符，*可表达空或者任意一个字符串。

思路：用到指针，分别指向两个字符串s和p。当*p为？或者*s==*p，即可进行下一个字符的判断。当*p==*时，将另一个指针star指向p当前指向的字符，即该*，
p指向*后的一个字符用于比较，将另一个指针ss用来指向s指向的字符（用于记录s的位置）。当*p与*s不相等时，且star不为空，说明字符不匹配，令P仍指向*
后面的字符，等待匹配，令s指向下一个字符，并且始终用ss记录其当前位置。
需要ss的原因：当有一个s当前的字符与p当前字符匹配，但并不是我们要找的字符，仅仅是相同的字符，即下一个字符仍不匹配，ss保留“误匹配”的前一个字符，
有助于s回过头来，重新进行匹配。（之前自己写的代码就是忘记考虑这一层）
