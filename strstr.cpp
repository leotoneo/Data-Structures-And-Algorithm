#include <iostream>

using namespace std;


const char* strstr(const char* src,const char* dest)
{
  if(src==NULL || dest==NULL)
    return NULL;
    const char* p = src;
    while(*p)
    {
      const char* p1 = p;
      const char* p2 = dest;
      while(*p1 && *p2 &&(*p1==*p2))
      {
        p1++;
        p2++;
      }
      if(!*p2)
        return p;
      p++
    }
    return NULL;
}
