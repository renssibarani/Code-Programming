#include <iostream>

using namespace std;

long int a, i, j, l, mods, count ,arr[100000];

int main(void){
 cin>>a;
 for(int i=0; i<a; i++){
  cin>>arr[i];
 }
 mods = arr[0];
 l = 1;
 for (i = 0; i < a-1; ++i)
 {
    if (arr[i]>0)
    {
      count = 1;
      for (j= i+1; j < a; ++j)
      {
        if (arr[i] == arr[j])
        {
          arr[j] = 0;
          count = count + 1;
        }
      }
      if (count > l)
      {
        l = count;
        mods = arr[i];
      }else{
        if (count == l)
        {
          if (arr[i]> mods)
          {
            l = count;
            mods = arr[i];
          }
        }
      }
    }
 }
 cout<<mods<<endl;
}
