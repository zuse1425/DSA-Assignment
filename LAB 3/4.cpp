#include <iostream>
using namespace std;
#include <string.h>

int main() {
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
  int result;

  result = strcmp(str1, str2);
  cout<<"strcmp(str1, str2) = "<<result<<endl;
  
  int result1;
  result1 = strcmp(str2,str1);
  cout<<"strcmp(str2,str1) = "<<result1<<endl;
  
  int result2;
  result2 = strcmp(str1, str3);
  cout<<"strcmp(str1,str3) = "<<result2<<endl;
  
  return 0;
}
  
  
