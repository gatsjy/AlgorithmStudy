#include <iostream>
#include <stack>

using namespace std;

int tower[500001];
stack<pair<int, int>> st;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> tower[i];
    }

    // 1. 일차적으로 하나 넣어준다 (맨 위에 들어갈것은 무조건 0 출력)
    st.push({ 1, tower[1] });
    cout << "0 ";

    // 2. 2번째 tower값부터 검증
    for (int i = 2; i <= n; i++) {
        // 3. 만약 스택이 비어있지 않으면서
        // 스택의 맨위의 값이 더 큰경우 그냥 둔다
        // - 그냥 넘어간다(break)
        // 스택의 맨위보다 들어온 값이 클 경우
        // - 맨위의 것을 최신의 것으로 바꿔준다.
        while (!st.empty()) {
            if (tower[i] < st.top().second) {
                break;
            }
            st.pop();
        }

        if (!st.empty()) {
            cout << st.top().first << " ";
        }
        else {
            cout << "0 ";
        }

        st.push({ i,tower[i] });
    }
}