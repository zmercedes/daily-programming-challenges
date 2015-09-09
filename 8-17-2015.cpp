/**
 Zoilo Mercedes
 Daily programming challenge, 8-17-2015
 Letters in alphabetical order
 Checks to see if letters in word are in alphabetical order
 */
#include <string>
#include <iostream>

using namespace std;

bool ordered(string word){
	for(int i = 0; i < word.length() - 1;i++){
		if(word[i] >= word[i+1])
			return false;
	}
	return true;
}

int main(){
	string word;

	while(cin >> word){
		if(ordered(word))
			cout << word << " IN ORDER\n";
		else
			cout<< word << " NOT IN ORDER\n";
	}
	return 0;
}
/**
 Note: <algorithm> has methods for checking if things are in alph order. (is_sorted())
 */