// pattern problem 3rd

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     int i=1;
//     while(i<=n){
//        int j=1;
//        while(j<=n){
//         cout<<j;
//          j++;
//        }
//           cout<<endl;
//     i++;
//     }

// return 0;
// }


//revers of 3rd

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     int i=n;
//     while(i>=1){
//        int j=n;
//        while(j>=1){
//         cout<<j;
//          j--;
//        }
//           cout<<endl;
//     i--;
//     }

// return 0;
// }


#include<iostream>
using namespace std;
int main()
{  
     int n;
     cout<<"Enter n : ";
    cin>>n;
    int count=1;
    int i=1;
    while (i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
return 0;
}
