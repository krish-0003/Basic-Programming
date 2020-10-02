#include<iostream>
using namespace std;
template <class T>
int search_element(T arr[], T num, int s){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        if(arr[i]==num)
            return i;
    }
    return -1;
}
int main()
{
    int s;
    cout<<"Enter size of array : "; cin>>s;
    int arr[s],f;
    cout<<"Enter element : ";
    for(int i=0; i<s; i++)
        cin>>arr[i];
    cout<<"Which element you want to find ? : ";    cin>>f;
    cout<<search_element(arr,f,s)<<endl;

    int s1;
    cout<<"Enter size of array : "; cin>>s1;
    float arr1[s],f1;
    cout<<"Enter element : ";
    for(int i=0; i<s1; i++)
        cin>>arr1[i];
    cout<<"Which element you want to find ? : ";    cin>>f1;
    cout<<search_element(arr1,f1,s1);
}
