#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long rand , mod;
	ofstream outp;
    outp.open("decryptoutput.txt" , ios::app);
    ofstream clear;
    clear.open("cryptoutput.txt" , ios::out);
    clear << ' ';
    
	cout << "digits of code :" << endl;
	cin >> mod;
	cout << "key :" << endl;
	cin >> rand;
	int n = mod;
	char arr_char[n];
    //key&<inputstring>(as char in array)crypt in digits
    //input
    cout << "type in Ur code:" << endl;
    for (int i = 0; i < n ; i++){
        cin >> arr_char[i];
    }
    //decrypt
    for (int i = n; i > 0 ; i--){
        arr_char[i] -= (rand % 10);
        rand /= 10;
    }
    //output
    for (int i = 0; i < n ; i++){
        outp << arr_char[i];
    }
    //¼ÓÃÜ²¿·Ö 
    return 0;
}
