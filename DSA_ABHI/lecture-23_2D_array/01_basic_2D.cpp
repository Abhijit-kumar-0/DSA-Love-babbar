#include<iostream>
using namespace std;

int main(){
int array[3][4];
// hard code
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
int arr1[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

// take input row wise
/*cout << "enter data 3X3 matrix row wise\n";
for(int i=0; i<3; i++) {
    for(int j=0; j<4; j++) {
        cout << "Enter data at idx [" << i << "][" << j << "] : "; 
        cin >> array[i][j];
    }
    cout << endl;
}*/

// take input column wise
cout << "enter data 3X3 matrix column wise\n";
for(int i=0; i<4; i++) {
    for(int j=0; j<3; j++) {
        cout << "Enter data at idx [" << j << "][" << i << "] : "; 
        cin >> array[j][i];
    }
    cout << endl;
}

for(int i=0; i<3; i++) {
    for(int j=0; j<4; j++) {
        cout << array[i][j] << " ";
    }
    cout << endl;
}
return 0;
}