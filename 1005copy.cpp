#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <memory.h>

#define MAX_NODE 1001

using namespace std;

int line[MAX_NODE]; // 정점으로 들어오는 간선의 수
int result[MAX_NODE]; // x번째 건물 짓는데 최종 걸리는 시간
int waiting[MAX_NODE]; // x번째 건물 짓는데 걸리는 시간

int main()
{
    int tCase;
    scanf("%d", &tCase);

    while(tCase--)
    {
        vector<int> vc[MAX_NODE];
        memset(line, 0, sizeof(line));
        memset(result, 0, sizeof(result));
        memset(waiting, 0, sizeof(waiting));

        int n, m;
        scanf("%d %d", &n, &m);

        // 입력 부분
        for (int i = 1; i <= n; i++)
            scanf("%d", &waiting[i]);

        for (int i = 1; i <= m; i++)
        {
            int prev, cur;
            scanf("%d %d", &prev, &cur);

            line[cur]++;

            vc[prev].push_back(cur);
        }

        int target;
        scanf("%d", &target);

        queue<int> q;

        // 위상 정렬을 하기 위해 line가 0인 정점은 q에 넣어준다.
        for (int i = 1; i <= n; i++)
        {
            if (line[i] == 0)
                q.push(i);

            // result에 자기 자신 건설 시간을 추가해준다.
            result[i] += waiting[i];
        }

        for (int i = 0; i < n; i++)
        {
            int cur = q.front();
            q.pop();

            for (int j = 0; j < vc[cur].size(); j++)
            {
                int next = vc[cur][j];

                // 만약 a가 지어지기 위해 b와 c가 우선 완료되어야 하는데
                // b가 10초, c가 20초 걸린다면 a는 10초후에 건설할 수 있는게 아닌
                // c가 완료된 20초 뒤 부터 지어질 수 있는 것이다.
                result[next] = max(result[next], result[cur] + waiting[next]);

                if (--line[next] == 0)
                    q.push(next);

            }

        }


        printf("%d\n", result[target]);
    }

    return 0;
}

//                                                       This source code Copyright belongs to Crocus
//


//출처: http://www.crocus.co.kr/723 [Crocus]
