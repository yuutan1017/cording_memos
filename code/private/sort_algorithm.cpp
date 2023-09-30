#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//Bubble Sort

vector<int> bubble_sort(vector<int> array){
  for (int i = 0; i < array.size(); i++){
    for (int j = 0; j < array.size() - i - 1; j++){
      if(array[j] > array[j+1]){
        swap(array[j], array[j + 1]);
      }
    }
  }
  return array;
}


//Cooktail Sort

vector<int> cooktail_sort(vector<int> array){
  bool swapped = true;
  int start = 0;
  int end = array.size() - 1;
  while (swapped){

    swapped = false;
    for (int i = start; i < end; i++){
      if(array[i] > array[i+1]){
        swap(array[i], array[i + 1]);
        swapped = true;
      }
    }

    if(swapped == false) break;

    swapped = false;
    end -= 1;

    for (int i = end - 1; i > start - 1; i--){
      if(array[i] > array[i+1]){
        swap(array[i], array[i + 1]);
        swapped = true;
      }
    }
    start += 1;
  }
  return array;
}


//Comb Sort

vector<int> comb_sort(vector<int> array){
  int gap = array.size();
  bool swapped = true;

  while(gap != 1 || swapped){
    gap = gap / 1.3;
    if(gap < 1) gap = 1;

    swapped = false;

    for (int i = 0; i < array.size() - gap; i++){
      if(array[i] > array[i + gap]){
         swap(array[i], array[i + gap]);
         swapped = true;
      }
    }
  }
  return array;
}


// Select Sort

vector<int> selection_sort(vector<int> array){
  for (int i = 0; i < array.size(); i++){
    int min_idx = i;
    for (int j = i + 1; j < array.size(); j++){
      if(array[min_idx] > array[j]){
        min_idx = j;
      }
    }
    swap(array[i], array[min_idx]);
  }
  return array;
}


//Gnome Sort

vector<int> gnome_sort(vector<int> array){
  int idx = 0;
  while(idx < array.size()){
    if(idx == 0) idx += 1;
    if(array[idx] >= array[idx - 1]) idx += 1;
    else {
      swap(array[idx], array[idx - 1]);
      idx -= 1;
    }
  }
  return array;
}

 
// Insertion Sort

vector<ll> insertion_sort(vector<ll> array){
  for(ll i = 1; i < array.size(); i++){
    ll tmp = array[i];
    ll j = i - 1;
    while(j >= 0 && array[j] > tmp){
      array[j + 1] = array[j];
      j -= 1;
    }
    array[j + 1] = tmp;
  }
  return array;
}

