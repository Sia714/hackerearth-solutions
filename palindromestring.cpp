/*Palindromic String--Problem
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format: The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format:Print the required answer on a single line.

Note->String S consists of lowercase English Alphabets only.

Sample Input:aba
Sample Output:YES
Time Limit: 1
Memory Limit: 256
Source Limit:
*/
#include <iostream>
using namespace std;
bool palindrome(string s){
	int l=0;
	int r=s.length()-1;
	while(l<r){
		if(s[l]!=s[r]){
			return false;
		}
		l++;
		r--;
	}
	return true;
}
int main() {
	string s;
	cin >> s;    //Reading input from STDIN
		// Writing output to STDOUT
	if(palindrome(s)){cout<<"YES";}
	else{cout<<"NO";}
}
