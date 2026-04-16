// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t knapsack(int64_t idx, int64_t N, int64_t W, const vector<int64_t> w,
                 vector<int64_t> v) {
  if(idx == N) {
    return 0;
  }
  if(w[idx] > W) {
    return 0;
  }
  int64_t take = v[idx] + knapsack(idx + 1, N, W - w[idx], w, v);
  int64_t ntake = knapsack(idx + 1, N, W, w, v);
  return max(take, ntake);
}

int main() {
  size_t N, W;
  cin >> N >> W;
  vector<int64_t> w(N), v(N);
  for (size_t i = 0; i < N; ++i) {
    cin >> w[i] >> v[i];
  }
  cout << knapsack(0, N, W, w, v) << endl;
  return 0;
}
