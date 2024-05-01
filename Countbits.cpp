 #include <iostream>
 #include<vector>
 using namespace std;

    vector<int> countBit(int n){
        vector<int>v(n+1);
        for(int i=1; i<=n; ++i)
        {
            v[i]=v[i/2] + i%2;
        }
        return v;
    }

    int main(){
    vector<int>v1;
    int n;
    cout<<"enter number : ";
    cin>>n;
    v1=countBit(n);
    cout<<v1;
 }