#include<iostream>
using namespace std;
template<class S>
void sort(S a[],S n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                S temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    
}
int main(){
    int array[5]={30,20,90,50,70};

    cout<<" The array consists of : ";
    for (int i = 0; i < 5; i++)
        cout<<array[i]<<" ";

    cout<<"\n The array sorted is : ";
    sort(array,5);
    for (int i = 0; i < 5; i++)
        cout<<array[i]<<" ";
    
}