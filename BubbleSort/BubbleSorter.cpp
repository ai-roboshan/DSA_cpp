#include <iostream>
#include <vector>
using namespace std;
int main(){
    //User Input
    cout<<"How many items do you want to sort? "<<endl;
    int n;
   
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements"<<endl;
    for(int z=0;z<n;z++){
        cin>>arr[z];
    }

    int i;
    int j;
    int s;
    for(i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    cout<<"----OUTPUT----"<<endl;
    for(s=0;s<n;s++){
        cout<<arr[s]<<"\n";
    }
    return 0;
}