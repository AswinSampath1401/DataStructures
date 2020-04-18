#include <bits/stdc++.h>
using namespace std;
int n = 8;
int visited[8][8];

bool isValid (int x, int y) {
  if (x >= 0 && x < n && y >= 0 && y < n)
    return true;
  return false;
}

void printPath (int sx, int sy, int dx, int dy) {
  vector <pair <int, int> > ans;
  ans.push_back(make_pair(dx, dy));

  int possibleX[] = {2, 1, -1, -2, -2, -1, 1, 2};
  int possibleY[] = {1, 2, 2, 1, -1, -2, -2, -1};

  queue <pair <int, int> > q;
  q.push(make_pair(dx, dy));
  
  while (!q.empty()) {
    pair <int, int> temp = q.front();
    q.pop();

    if (temp.first == sx && temp.second == sy) {
      for (auto i : ans)
	cout << i.first << " " << i.second << endl;
      return;
    }

    for (int i = 0; i < 8; i ++) {
      int x = temp.first + possibleX[i];
      int y = temp.second + possibleY[i];

      if (isValid(x, y) && (visited[x][y] == (visited[temp.first][temp.second] - 1))) {
	ans.push_back(make_pair(x, y));
	q.push(make_pair(x, y));
	break;
      }
    }
  }
}

int knight (int sx, int sy, int dx, int dy) {
  int possibleX[] = {2, 1, -1, -2, -2, -1, 1, 2};
  int possibleY[] = {1, 2, 2, 1, -1, -2, -2, -1};

  queue <pair <int, int> > q;
  q.push(make_pair(sx, sy));
  visited[sx][sy] = 0;
  
  while (!q.empty()) {
    pair <int, int> temp = q.front();
    q.pop();

    if (temp.first == dx && temp.second == dy)
      return visited[temp.first][temp.second];

    for (int i = 0; i < 8; i ++) {
      int x = temp.first + possibleX[i];
      int y = temp.second + possibleY[i];

      if (isValid(x, y) && visited[x][y] == -1) {
	visited[x][y] = visited[temp.first][temp.second] + 1;
	q.push(make_pair(x, y));
      }
    }
  }
  return -1;
}

int main() {
  int sx = 0, sy = 0, dx = 0, dy = 1;
  memset(visited, -1, sizeof(visited));
  cout << knight(sx, sy, dx, dy) << endl;
  printPath(sx, sy, dx, dy);
  return 0;
}
