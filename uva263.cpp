 #include <stdio.h>
  #include <stdlib.h>
   #include <algorithm>
   #include <iostream>
   #include <string.h>
   #include <string>
   #include <set>
   using namespace std;
   int main()
  {
      string str;
      while(cin>>str && str[0]!='0')
      {
          int start=atoi(str.c_str());
          set<int> ss;
          int coun=0;
          printf("Original number was %s\n",str.c_str());
          int ans=0,pre=-10000000,c=0;
          while(1)
          {
              string second=str;
              sort(second.begin(),second.end());
              string first=second;
              reverse(first.begin(),first.end());
              int f=atoi(first.c_str()),s=atoi(second.c_str());
              ans=f-s;
              printf("%d - %d = %d\n",f,s,ans);
              c++;
              ss.insert(ans);
              if(coun==ss.size()) break;
              coun=ss.size();
             if(ans==pre) break;
             pre=ans;
              char tmp[15];
             sprintf(tmp,"%d",ans);
              str=tmp;
          }
          printf("Chain length %d\n\n",c);
      }
     return 0;

  }
