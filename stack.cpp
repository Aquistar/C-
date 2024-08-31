#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    // 스택에 값 추가 (push)
    s.push(10);
    s.push(20);
    s.push(30);

    // 스택의 최상단 값 출력 (top) 및 제거 (pop)
    while (!s.empty()) {
        std::cout << "Top: " << s.top() << std::endl;
        s.pop();
    }

    return 0;
}
