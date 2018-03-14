#ifndef PriorQueueSort_h
#define PriorQueueSort_h
#include"ArrayQueue.h"
#include"array.h"
#include<iostream>

namespace ods{

template<class T>
    class PriorQueueSort : public ArrayQueue <T>
    {


        public :
        virtual bool  add(T x);
        void sorting(int,int);


    };

  template<class T>
    bool PriorQueueSort<T>::add(T x)
    {


    }
  template<class T>
    void PriorQueueSort<T>::sorting(int n,int j)
    {
        for(int i=0;i<n;i++)
            for( int index=0;index<n;index++)
            {  if(a[index]>a[index+1])
                {
                    std::swap(a[index],a[index+1]);
                }

            }





    }








#endif /* PriorQueueSort_h */
