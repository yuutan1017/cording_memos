#include <bits/stdc++.h>
#include <random>

using namespace std;


random_device seed;
mt19937 mt(seed());

vector<int> random_vector(int min, int max)
{
  vector<int> arg;
  uniform_int_distribution<> dist(min, max);
  int i = 0;

  while (i < 10)
  {
    arg.push_back(dist(mt));
    i++;
  }
  return arg;
}
