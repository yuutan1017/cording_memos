#include <bits/stdc++.h>
#include <random>

using namespace std;

typedef long long ll;


random_device seed;
mt19937 mt(seed());

vector<long long> random_vector(long long min, long long max)
{
  vector<long long> arg;
  uniform_int_distribution<> dist(min, max);
  ll i = 0;

  while (i < 10)
  {
    arg.push_back(dist(mt));
    i++;
  }
  return arg;
}
