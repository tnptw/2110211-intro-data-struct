// d63_q2b_queue_b2f : Queue Back to Front
#include <vector>
#include "queue.h"
#include "student.h"
#include <cstdio>

using namespace std;

int main() {
    CP::queue<int> q;
    char c;
    scanf("%c", &c);
    while (c != 'q') {
        if (c == 'u') {
            // add data
            int v;
            scanf("%d", &v);
            q.push(v);
        } else if (c == 'o') {
            q.pop();
        } else if (c == 'p') {
            q.print();
        } else if (c == 'm') {
            q.back_to_front();
        }
        scanf("%c", &c);
    }
    return 0;
}
