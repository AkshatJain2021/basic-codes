#include <iostream>

using namespace std;
void sliding(int *arr,int n){
for(int i=0;i<n-2;i++)
{
    for(int j=i;j<i+3;j++)
    {
        cout<<arr[j]<<' ';
    }
    cout<<endl;
}
}
int main()
{
    int arr[20];
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    sliding(arr,6);

    return 0;
}