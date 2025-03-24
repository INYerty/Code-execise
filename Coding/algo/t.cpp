//http://219.231.223.98/s/o1isqP6mHmHVAFR

/*Description
汉诺塔（又称河内塔）问题是印度的一个古老的传说。开天辟地的神勃拉玛在一个庙里留下了三根金刚石的棒A、B和C，
A上面套着n个圆的金片，最大的一个在底下，其余一个比一个小，依次叠上去，
庙里的众僧不倦地把它们一个个地从A棒搬到C棒上，规定可利用中间的一根B棒作为帮助，
但每次只能搬一个，而且大的不能放在小的上面。僧侣们搬得汗流满面，
可惜当n很大时这辈子恐怕就很搬了 聪明的你还有计算机帮你完成，
你能写一个程序帮助僧侣们完成这辈子的夙愿吗？

Input
输入金片的个数n。这里的n<=10。

Output
输出搬动金片的全过程。格式见样例。

Sample Input
2
Sample Output
Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C
HINT
递归

Source*/ 

#include <iostream>
using namespace std;

// 汉诺塔递归函数
void hanoi(int n, char source, char target, char auxiliary) {
    if (n > 0) {
        // 将n-1个盘子从source移动到auxiliary，以target作为辅助柱
        hanoi(n - 1, source, auxiliary, target);

        // 将剩下的盘子从source移动到target
        cout << "Move disk " << n << " from " << source << " to " << target << endl;

        // 将n-1个盘子从auxiliary移动到target，以source作为辅助柱
        hanoi(n - 1, auxiliary, target, source);
    }
}

int main() {
    // 测试2个盘子的汉诺塔问题
    hanoi(2, 'A', 'C', 'B');
    return 0;
}