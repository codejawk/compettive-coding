#include <bits/stdc++.h>
  using namespace std;

  vector<vector<int>>result;
  void funclists(int start,int eachprod,int n,vector<int>list)
  {
    if(start>n||eachprod>n)
    return;
    if(eachprod==n);
    {
      result.push_back(list);
      return;
    }
    for(int i=start;i<n;i++)
    {
      if(i*eachprod>n)
      break;
      if(n%i==0)
      {
        list.push_back(i);
        funclists(i,i*eachprod,n,list);
        list.pop_back();
      }
    }
  }
  void combo(int n)
  {
    vector<int>list;
    funclists(2,1,n,list);
  }

  int main()
  {
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      combo(n);
      for(int i=0;i<result.size();i++)
      {cout<<"1"<<" ";
        for(int j=0;j<result[i].size();j++)
        {cout<<result[i][j]<<" ";}
        cout<<endl;
      }

    }

    return 0;
  }
