#include <iostream>
#include <string>
using namespace std;

void isKPeriodic(const string& str, int k)
{
	cout << " String sample: " << str << endl;
	cout << " Coefficient K =  " << k << endl;
	//Checking if 0 < K < Sample String length 
	if (k <= 0 || k > str.length())
	{
		cout << "Invalid k" << endl;
		return;
	}
	
	bool flag = false;

	for (int i = 0; i < (str.length() - k); i++)
	{
		if (str[i] != str[i + k])
		{
			flag = true;
			i = str.length();
		}
	}
	if (flag) cout << "Stroka ne kratna " << k << endl;
	else cout << "Stroka kratna " << k << endl;
	
		return;
}
//************** tset function ************
void autoTest()
{
	int arr_k[]{ -1, 0, 1, 2, 3, 4, 12, 13 }; //Samples of coefficient K
	// Strings samplers for tests
	string arr1 = "aaaaaaaaaaaa";
	string arr2 = "abababababab";
	string arr3 = "abcabcabcabc";
	string arr4 = "abcdegfhijkl";
	string arr[]{ arr1, arr2, arr3, arr4 };//String samplers grouped in an array
	
	//test sequence 
	int arr_k_length = sizeof(arr_k) / sizeof(int);
	int arr_length = sizeof(arr) / sizeof(string);
	for (int i = 0; i < arr_length; i++)
	{
		for (int j = 0; j < arr_k_length; j++)
			isKPeriodic(arr[i], arr_k[j]);
	}
	return;
}

int main()
{
	autoTest();// auto test function call
		return 0;
}