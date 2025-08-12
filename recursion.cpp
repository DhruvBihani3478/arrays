// #include <iostream>
// using namespace std;
// int binarysearch(int a[6],int low,int high,int target){
//     int result=-1;
//     int mid=(low+high)/2;
//     if (a[mid] == target) {
//         result = mid;
//         return mid ;}
//     if (a[mid] > target) high = mid - 1;
//     else low = mid + 1;
//         return binarysearch(a[6],low,high,target);
//     }


// int main() {
//     int target;
//     cout << "Enter target number: ";
//     cin >> target;
//     int arr[6] = {8, 9, 45, 56, 78, 93};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int low = 0, high = n - 1;
//     int result=binarysearch(arr[6], low, high,target);
//     int result = -1;
//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     return 0;
// }
