 #include<iostream>
 using namespace std;
 int n,val;
int a[5];
 int seq_search();

int main()
{ cout<<"\t\tSEQUENTIAL SEARCH \n ";
 cout<<"\nEnter the 5 elements : ";
 for(int i=0;i<5;i++)
 {
 cin>>a[i];
 }
 cout<<"\nEnter the value for search : ";
 cin>>val;
 seq_search();
 }
 int seq_search()
 {
 int chk=0;
 for (int i=0;i<5;i++)
 {
 if(val==a[i])
 {
 cout<<"\nValue Found at "<<i+1;
 chk=1;
 return 0;
 }
 }
 if(chk==0)
 {
 cout<<"\nValue Not Found ";
 }
 }
