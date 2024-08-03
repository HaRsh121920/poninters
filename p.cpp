#include<iostream>
#include<vector>
using namespace std;



void solve(int* arr, int size) {
    cout << sizeof(arr) << endl;
}

void solve(vector<int> &v) {
    cout << sizeof(v) << endl;
}

int main() {

    // int a = 50;
    // int* p = &a;
    // int** q = &p;
    // int** r = q;

    // cout << **r << endl;

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // solve(v);

    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    
    // solve(arr,size);

    // return 0;




// simple pointer question 
    // int a = 5;
    // int *p = &a;

    // cout << a << endl;
    // cout << &a << endl;
    // cout << p << endl;
    // cout << &p << endl;
    // cout << *p << endl;
// ans 
// 5
// 0x61ff0c
// 0x61ff0c
// 0x61ff08
// 5

// reference variable :- a same variable different name

// declearation :- int *p
                //    if  int *p 
                    //  cout<< p ;
                    // give segmeantaion fault  or 1 or 0 depend on compiler version 
// null pointer :- int *p = 0;
            //    null pointer 


// question 2

// int a = 5;
// int *p = &a;

// cout<<a<<endl;
// cout<<&a<<endl;
// // cout<<*a<<endl; -> this show error (because this is interger and integer is not decleration )
// cout<<p<<endl;
// cout<<&p <<endl;
// cout<<*p<<endl;
// p = p+1;
// cout<<p<<endl;
// *p = *p/2;
// cout<<*p<<endl;

// ans:
// 5
// 0x61ff0c
// 0x61ff0c
// 0x61ff08
// 5
// 0x61ff10
// 2100648

// pointers with arrays

// int arr[] = {1,2,3,4};
// int *p = arr;

// // question
//    cout<<arr<<endl;
//    cout<<&arr<<endl;
// //    cout<<*arr<<endl;
//    cout<<arr[0]<<endl;
//    cout<<&arr[0]<<endl;
//    cout<<*(arr+1)<<endl;
//    cout<<*(arr+3)<<endl;
//    cout<<p<<endl;
//    cout<<*p<<endl;
//    cout<<&p<<endl;
//    cout<<*arr+1<<endl;


// solution 

// 0x61ff00
// 0x61ff00
// 1
// 0x61ff00
// 2
// 4
// 0x61ff00
// 1
// 0x61fefc
// 2

// arr[i] = i[arr]

// *(arr+i) = *(i+arr)


//   int arr[] = {1,2,3,4};
//   int *p = arr;
//   int *q = arr+1;

// // question
// cout<<arr<<endl;
// cout<<&arr<<endl;
// // cout<<*arr<<endl; eoror 
// cout<<arr[0]<<endl;
// cout<<&arr[0]<<endl;
// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<&p<<endl;
// cout<<q<<endl;
// cout<<*q<<endl;
// cout<<&q<<endl;
// cout<<*p+1<<endl;
// cout<<*(p)+2<<endl;
// cout<<*(p+2)<<endl;

// solve
// 0x61ff00
// 0x61ff00
// 1
// 0x61ff00
// 0x61ff00
// 1
// 0x61fefc
// 0x61ff04
// 2
// 0x61fef8
// 2
// 3
// 3

// string working pointer 

// char ch[100] = "love babbar";
// char *p = ch;

// question 
// cout<<ch<<endl;

}