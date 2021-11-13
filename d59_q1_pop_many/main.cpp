// d59_q1_pop_many : Pop Many
#include "stack.h"
#include "student.h"
#include <cstdio>

using namespace std;


int main() {
    CP::stack<int> s;
    char c;
    scanf("%c", &c);
    while (c != 'q') {
        if (c == 'a' || c == 'm' || c == 'r') {
            // add data
            int n;
            scanf("%d", &n);
            if (c == 'a') {
                s.push(n);
            } else if (c == 'm') {
                s.multi_pop(n);
            } else if (c == 'r') {
                auto s1 = s.remove_top(n);
                printf("remove_top Result: Size = %d Data =", (int) s.size());
                while (!s1.empty()) {
                    printf(" %d", s1.top());
                    s1.pop();
                }
                printf("\n");
            }
        } else if (c == 'd') {
            s.pop();
        } else if (c == 'p') {
            s.print();
        }
        scanf("%c", &c);
    }
    return 0;
}
