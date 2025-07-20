# include <iostream>
using namespace std;

int main(){

    int soa=4;
    int arr[soa]={2,7,11,15};

    for(int i=0;i<soa;i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;
    cout<<endl;
    cout<<"we have to sum two numbers and target is 9"<<endl;

    int target=0;
    for(int i=0;i<soa;i++){
        for(int j=0;i<soa;j++){
            if(arr[j]==7){
               target=arr[i]+arr[j];
                cout<<target;
            }
        }
        break;
    }




}
