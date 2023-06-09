
#include<bits/stdc++.h>
using namespace std;

#include "random_vector.cpp"
#include "sort_algorithm.cpp"


void exe(){
  clock_t start = clock();
  //----------------計測開始-------------------------


  vector<long long> array = random_vector(1, 1000000000000);
  vector<long long> result = insertion_sort(array);

  for (const auto& i : result) cout << i << ' ';
  

  //----------------計測終了-------------------------
  clock_t end = clock();

  const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
  printf("time %lf[ms]\n", time);
}
