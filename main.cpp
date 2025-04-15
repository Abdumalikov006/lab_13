#include <iostream>
#include <cstdlib>
using namespace std;
void greet() {
    cout<<"Hello from greet()";
}
void bye() {
    cout<<"Bye from Bye()";
}
int add(int a, int b) {
    return a+b;
}
int multiply(int a, int b) {
    return a*b;
}
void calculate(int (*op)(int, int), int x, int y) {
    int result = op(x, y);
    cout<<result<<endl;
}

int main() {
    //problem 1
    // int arr[5]={10,20,30,40,50};
    // int* parr=arr;
    // //cout<<*parr<<endl;
    // for (int i=0;i<5;i++) {
    //     cout<<*(parr+i)<<' ';
    // }
    // return 0;
    //problem 2
    // int arr[6]={2,4,6,8,10,12};
    // int* ptr=arr;
    // for(int i=0;i<6;i++) {
    //     *ptr=*(ptr+i)*3;
    //     cout<<*ptr<<' ';
    // }
    //problem 3
    // int arr[4]={5,10,15,20};
    // int* parr=arr;
    // cout<<*parr<<endl;
    // cout<<"arr[2]="<<arr[2]<<endl;
    // cout << "*(parr + 2) = " << *(parr + 2) << endl;
    // return 0;
    //problem 4
    // int size=5;
    // int arr[size];
    // for(int i=0;i<size;i++) {
    //     cin>>arr[i];
    // }
    // int* parr=arr+size-1;
    //
    // for(int i=size;i>1;i--) {
    //     parr--;
    //     cout<<' '<<*parr<<' ';
    // }
    //problem 5
    //problem 6
    // int arr[4]={10,20,30,40};
    // int* parr=arr;
    // for(int i=0;i<4;i++) {
    //     cout<<"Value: "<<*(parr+i)<<" Adress: "<<parr<<endl;
    // }
    // return 0;
    //problem 7
    // int arr[7] = {11, 4, 7, 18, 5, 2, 9};
    // int* parr=arr;
    // for (int i = 0; i < 7; i++) {
    //     if (*parr%2==0) {
    //         cout<<*parr<<' ';
    //     }
    //     parr++;
    //
    // }
    //
    // return 0;
    //problem 8
    //     int matrix[2][3] = {1, 2, 3, 4, 5, 6} ;
    //     int* pmatrix=&matrix[0][0] ;
    //     for (int i = 0; i < 2; i++) {
    //         for (int j = 0; j < 3; j++) {
    //             cout<<*pmatrix<<' ';
    //             pmatrix++;
    //         }
    //     }
    //
    //
    //
    // }
    //problem 9

    // int a = 7, b = 14, c = 21;
    //
    // int* ptrs[3] = { &a, &b, &c };
    //
    // for (int i = 0; i < 3; i++) {
    //     cout << *ptrs[i] << " ";
    // }
    //
    // cout << endl;
    // return 0;
    //problem 10
    // int arr[5] = {9, 3, 7, 1, 6};
    // int* parr=arr;
    // int* parr1;
    // int* parr2;
    // for (int i = 0; i < 5 - 1; i++) {
    //     for (int j = 0; j < 5 - i - 1; j++) {
    //         parr1 = arr + j;
    //         parr2 = arr + j + 1;
    //         if (*parr1 > *parr2) {
    //             int temp = *parr1;
    //             *parr1 = *parr2;
    //             *parr2 = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++) {
    //     cout << *(parr+i) << " ";
    // }
    // cout << endl;
    //problem 11
//     const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
//
//     for (int i = 0; i < 4; i++) {
//         cout << *suit[i] << " ";
//     }
//
//     cout << endl;
//     return 0;
    //problem 12
    // const char* days[3] = {"Mon","Tue","Wed"};
    // for(int i = 0; i < 3; i++) {
    //     cout<<*(days[i]+1)<<' ';
    // }
    // cout<<endl;
    // return 0;
    //problem 13
    // int deck[4][13] = {0};
    // string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // string faces[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven","Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    //
    // srand(42);
    // for (int i = 0; i < 5; ) {
    //     int suit = rand() % 4;
    //     int face = rand() % 13;
    //     if (deck[suit][face] == 0) {
    //         deck[suit][face] = 1;
    //         cout << faces[face] << " of " << suits[suit] << endl;
    //         i++;
    //     }
    // }
    //
    // return 0;
    //problem 14
    // int deck[4][13] = {0};
    //
    // const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // const char* faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
    //                        "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    //
    // srand(42);
    // for (int card = 1; card <= 52; ) {
    //     int suit = rand() % 4;
    //     int face = rand() % 13;
    //
    //     if (deck[suit][face] == 0) {
    //         deck[suit][face] = card;
    //         card++;
    //     }
    // }
    // for (int i = 1; i <= 52; i++) {
    //     for (int suit = 0; suit < 4; suit++) {
    //         for (int face = 0; face < 13; face++) {
    //             if (deck[suit][face] == i) {
    //                 cout << faces[face] << " of " << suits[suit] << endl;
    //             }
    //         }
    //     }
    // }
    //
    // return 0;
    //problem 15
    // void(*fptr)();
    // fptr = &greet;
    // fptr();
    // cout<<endl;
    // fptr = &bye;
    // fptr();
    //problem 16
    // int (*fptr)(int, int);
    // fptr = &multiply;
    // int a,b;
    // cin>>a>>b;
    // int choice;
    // cout << "Enter 1 for addition or 2 for multiplication: ";
    // cin >> choice;
    // if (choice == 1) {
    //     fptr = add;
    // } else if (choice == 2) {
    //     fptr = multiply;
    // } else {
    //     cout << "Invalid choice!" << endl;
    //     return 1; }
    //
    // int result = fptr(a, b);
    // cout<<"Result is "<<result<<endl;
    //problem 17
    // int a , b;
    // cin>>a>>b;
    // calculate(add, a, b);
    // calculate(multiply, a, b);
    // return 0;
    //problem 18
    int (*ops[])(int, int) = {add, multiply};
    int a,b;
    cin>>a>>b;

    cout<<"Enter your choice :";
    int choice;
    cin>>choice;
    if (choice == 1) {
        cout<<ops[0](a, b);
    }
    else if (choice == 2) {
        cout<<ops[1](a, b);
    }
    else {
        cout<<"Invalid Choice";
    }
    return 0;


















}
