// #include<iostream>
// using namespace std;

// void DISPLAY(int a[],int size){
//     cout<<" the numbers are:"<<endl;
//     for(int i=0;i<size;i++){
// 		cout<<a[i]<<" ";
// 	}
// }

// void INSERT(int a[],int size){
//     int idx;
//     cout<<"enter the index value you want to add";
//     cin>>idx;
//     int value;
//     cout<<"enter the value you want to add";
//     cin>>value;
//     for(int i=size-1;i>=idx;i++){
//             a[i+1]=a[i];}
//     a[idx]=value;
//     size++;
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//         }	
//         return;
//     }

// void DELETE(int a[],int size){
//     int idx;
//     cout<<"enter the index value you want to remove";
//     cin>>idx;
//     for(int i=idx;i<size-1;i++){
//             a[i]=a[i+1];}
//     size--;
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//         }	
//         return;
//     }
// int LINEARSEARCH(int a[],int size){
// 	int value;
//     cout<<"enter the value you want to search";
//     cin>>value;
//     bool flag=true;
// 	for(int i=0;i<6;i++){
// 		if(a[i]==value) flag=true; 
//         else flag=false;
// 	}
//     if(flag) return 1;
//     else return 0;
// 	return 0;
//  }
// int main(){
// 	int size;
//     cout<<"enter the size of array";
//     cin>>size;
// 	int n;
//     cout<<"enter the number of values you want to add in array";
//     cin>>n;
//     int a[size];
//     for(int i=0;i<n;i++){
// 		cout<<"enter number :";
// 		cin>>a[i];}
//     int number;
//     cout<<"enter the size of array";
//     cin>>number;
//     switch(number){
//         case 1:
//             DISPLAY(a,n);
//             break;
//         case 2:
//             INSERT(a,n);
//             break;
//         case 3:
//             DELETE(a,n);
//             break;
//         case 4:
//             LINEARSEARCH(a,n);
//             break;
//         case 5:
//             break;

//     }
// }

#include <stdio.h>

#define MAX 100 

int arr[MAX];
int n = 0;
void create();
void display();
void insert();
void delet();
void linearSearch();

int main() {
    int choice;

    do {
        printf("\n--- MENU ---\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT\n");
        printf("4. DELETE\n");
        printf("5. LINEAR SEARCH\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: delet(); break;
            case 5: linearSearch(); break;
            case 6: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}
void create() {
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > MAX || n <= 0) {
        printf("Invalid size!\n");
        n = 0;
        return;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void display() {
    int i;
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert() {
    int pos, val, i;
    if (n == MAX) {
        printf("Array is full!\n");
        return;
    }

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    n++;

    printf("Element inserted successfully.\n");
}

void delet() {
    int pos, i;
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return;
    }

    for (i = pos-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    printf("Element deleted successfully.\n");
}

void linearSearch() {
    int key, i, found = 0;
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}
