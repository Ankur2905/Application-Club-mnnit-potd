#include<iostream>
using namespace std;


    int missingNumber(int nums[],int size) {
       
       for(int i=0;i<size;++i)
       {
           size^=i^nums[i];
       }
       return size;
        
    }

