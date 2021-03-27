# [BOJ] 1149번 RGB 거리 (CPP)

백준온라인저지(BOJ) https://www.acmicpc.net/problem/1149

아이디: song98987


## 1. 문제 설명

### 문제
RGB거리에는 집이 N개 있다. 거리는 선분으로 나타낼 수 있고, 1번 집부터 N번 집이 순서대로 있다.

집은 빨강, 초록, 파랑 중 하나의 색으로 칠해야 한다. 각각의 집을 빨강, 초록, 파랑으로 칠하는 비용이 주어졌을 때, 아래 규칙을 만족하면서 모든 집을 칠하는 비용의 최솟값을 구해보자.

1번 집의 색은 2번 집의 색과 같지 않아야 한다.
N번 집의 색은 N-1번 집의 색과 같지 않아야 한다.
i(2 ≤ i ≤ N-1)번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다.

### 입력
첫째 줄에 집의 수 N(2 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 각 집을 빨강, 초록, 파랑으로 칠하는 비용이 1번 집부터 한 줄에 하나씩 주어진다. 집을 칠하는 비용은 1,000보다 작거나 같은 자연수이다.

### 출력
첫째 줄에 모든 집을 칠하는 비용의 최솟값을 출력한다.

## 2. 내 소스 코드

```c++
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int n;
    int cost[1000][3];

    // 입력 받기
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

    // 답 구하기
    for (int i = 1; i < n; i++) {
        cost[i][0] = cost[i][0] + min(cost[i - 1][1], cost[i - 1][2]);
        cost[i][1] = cost[i][1] + min(cost[i - 1][0], cost[i - 1][2]);
        cost[i][2] = cost[i][2] + min(cost[i - 1][0], cost[i - 1][1]);
    }

    cout << min(min(cost[n-1][0], cost[n-1][1]), cost[n-1][2]);
}
```

비교적 쉽게 풀었다.

## 3. 개선점

없음