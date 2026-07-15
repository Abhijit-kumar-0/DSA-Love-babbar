#include<iostream>
using namespace std;

void fun(int arr[]) {
    cout << &arr[0] << endl;
    cout << &arr[-1] << endl;

}

void square(int *p) {
    int a = 60;
    p = &a;
    *p = (*p) * (*p);
} 

int main(){

    // int arr[] = {11,12,13,14};
    // cout << &arr << endl;
    // cout << (arr+1) << endl;
    // fun(arr + 1);
    // cout << arr[0] << endl;

    // int a = 70;
    // square(&a);
    // cout << a << endl;


    // question
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;


    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;

    // char arr[] = "abhi";
    // char *p = arr;
    // cout << p[0] << " " << arr[0] << endl;

    // int first = 10;
    // int* p = &first;
    // int**q = &p;
    // int second = 20;
    // *q = &second;
    // (*p)++;
    // cout << first << " " << second << endl;

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (*p)++ + 9;
    // cout << first << " " << second << endl;

    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;
return 0;
}