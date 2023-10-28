 #include <iostream>
 using namespace std;
int binarySearch(int array[], int x, int low, int high)
 {
 while (low <= high) {
 int mid = low + (high - low) / 2;
 if (array[mid] == x)
 return mid;
 if (array[mid] < x)
 low = mid + 1;
 else
 high = mid - 1;
 }
 return -1;
 }
 int main()
 {
 int n;
 cout<<"\n\t\t BINARY SEARCH \n";
 cout<<"\nEnter the length of array : ";
cin>>n;
 int array[n];
 cout<<"Enter elements : \n";
 for(int i=0;i<n;i++)
 {
 cin>>array[i];
 }
int x;
 cout<<"\nEnter the element for search : ";
 cin>>x;
 int result = binarySearch(array, x, 0, n - 1);
 if (result == -1)
 cout<<"Not found";
 else
 cout<<"Element is found at position "<< result+1;
 }
