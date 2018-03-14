#include <iostream>
#include <chrono>
#include "ArrayDeque.h"
#include "PriorQueueSort.h"
#include "array.h"
#include <deque>
using namespace std;
using namespace ods;

int main(){

     auto start = chrono::steady_clock::now();

     ods::ArrayDeque<int> intset;
     for (int i =0; i<10;i++)
        {

        intset.add(i,i);
        intset.sorting(i,5000);

     }

}
