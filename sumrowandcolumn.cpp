//question 2
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,3,3,5,5,6};
//     int brr[6];
//     int k=0;
//     for(int i=0;i<6;i++){
//         bool flag=false;
//         for(int j=i+1;j<6;j++){
//             if(arr[i]==arr[j]) flag=true;}
//         if(!flag) {
//             brr[k]=arr[i];
//             k++;}
//         }
//     	for(int i=0;i<k;i++){
// 		    cout<<brr[i]<<" ";
//     }}

// question 3-10000
// int main()
// {
// int i;
// int arr[5] = {1};
// for (i = 0; i < 5; i++) printf("%d",arr[i]);
// return 0;
// }

// question 4
// #include<iostream>
// using namespace std;
// int main(){
// 	int a[10];
// 	for(int i=0;i<6;i++){
// 		cout<<"enter number :";
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<3;i++){
// 	    int temp=a[i];
// 	    a[i]=a[6-i-1];
// 	    a[6-i-1]=temp;
// 	}
// 	for(int i=0;i<6;i++){
// 		cout<<a[i]<<" ";
// 	}
// 	return 0;

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int arr[2][3]={1,2,3,4,5,6};
//     int brr[3][2]={1,2,3,4,5,6};
//     int crr[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             crr[i][j]=0;
//             for(int k=0;k<3;k++){
//             crr[i][j]+=arr[i][k]*brr[k][j];}}}
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<crr[i][j]<<" ";}
//         cout<<endl;}
//     }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int arr[2][3]={1,2,3,4,5,6};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[j][i];}
//         cout<<endl;}
//     }




//question 5
//  #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int arr[2][3]={1,2,3,4,5,6};
//     for(int i=0;i<2;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];}
//         cout<<"sum of row"<<i<<": "<<sum;
//         cout<<endl;}
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<2;j++){
//             sum+=arr[j][i];}
//         cout<<"sum of column"<<i<<": "<<sum;
//         cout<<endl;}
//     }
 

