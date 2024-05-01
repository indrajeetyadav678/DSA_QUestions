 #include <iostream>
 using namespace std;
 class sloution{
 public:
 int hammingweight( int n){
 int c=0;
 while (n!=0){
    if(n&1){
        c++;
    }
    n=n>>1;
 }
 return c;
 }
 };

 int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    sloution c;
    cout<< c.hammingweight(n);
 }