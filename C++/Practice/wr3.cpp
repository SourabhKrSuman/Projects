#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

#define M 10
#define N 10

bool isSafe(int mat[M][N], int visited[M][N], int x, int y)
{
            if (mat[x][y] == 0 || visited[x][y])
                        return false;
            return true;
}
bool isValid(int x, int y)
{
            if (x < M && y < N && x >= 0 && y >= 0)
                        return true;
            return false;
}
void findShortestPath(int mat[M][N], int visited[M][N], int i, int j,
                                                int x, int y, int& min_dist, int dist)
{
            if (i == x && j == y)
            {
                        min_dist = min(dist, min_dist);
                        return;
            }
            visited[i][j] = 1;
            if (isValid(i + 1, j) && isSafe(mat, visited, i + 1, j))
                        findShortestPath(mat, visited, i + 1, j, x, y, min_dist, dist + 1);
            if (isValid(i, j + 1) && isSafe(mat, visited, i, j + 1))
                        findShortestPath(mat, visited, i, j + 1, x, y, min_dist, dist + 1);
            if (isValid(i - 1, j) && isSafe(mat, visited, i - 1, j))
                        findShortestPath(mat, visited, i - 1, j, x, y, min_dist, dist + 1);
            if (isValid(i, j - 1) && isSafe(mat, visited, i, j - 1))
                        findShortestPath(mat, visited, i, j - 1, x, y, min_dist, dist + 1);
            visited[i][j] = 0;
}
int main()
{
            int mat[M][N] =
            {
                        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
                        { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
                        { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
                        { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
                        { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
                        { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
                        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
                        { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
                        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
                        { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
            };
            int visited[M][N];
            memset(visited, 0, sizeof visited);
            int min_dist = INT_MAX;
            findShortestPath(mat, visited, 0, 0, 7, 5, min_dist, 0);
            if (min_dist != INT_MAX)
                        cout << "The shortest path from source to destination has length " << min_dist;
            else
                        cout << "Destination can't be reached from given source";
            return 0;
}