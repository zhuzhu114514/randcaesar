#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long rand , mod;
    ofstream outp;
    outp.open("cryptoutput.txt" , ios::app);
    ofstream clear;
    clear.open("cryptoutput.txt" , ios::out);
    clear << ' ';
	cout << "type in numbers randomly & stop if the digits goes beyond the sum of letters & spaces :" << endl;
	cin >> rand;
	cout << "type in the sum of letters & spaces :" << endl;
	cin >> mod;
	int n = mod;
	char arr_char[n];
	mod = pow(10 , mod);
	rand %= mod;
	cout << "key :" << rand << endl;
	outp << rand << " ";
    //key&<inputstring>(as char in array)crypt in digits
    //input
    cout << "type in Ur information:";
    cin >> arr_char;
    //crypt
    for (int i = n; i > 0 ; i--){
        arr_char[i] += (rand % 10);
        rand /= 10;
    }
    //output
    //ios::app in .txt file
    for (int i = 0; i < n ; i++){
        outp << arr_char[i];
    }
    return 0;
}
