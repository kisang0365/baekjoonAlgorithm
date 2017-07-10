/*
 * 1717.cpp
 *
 *  Created on: 2017. 7. 9.
 *      Author: chokisang
 */

#include <stdio.h>
const int MAX_SIZE = 1000001;

int parent[MAX_SIZE];

int find(int x)
{
    if (x == parent[x])
        return x;
    else
        return parent[x] = find(parent[x]);
}

void merge(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x != y)
        parent[y] = x;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    while (m--)
    {
        int c, a, b;
        scanf("%d %d %d", &c, &a, &b);
        if (c == 0)
        {
            merge(a, b);
        }
        else
        {
            if (find(a) == find(b))
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}


