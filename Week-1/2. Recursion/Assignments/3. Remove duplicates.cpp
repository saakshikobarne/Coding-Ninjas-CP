//Problem: Given a string S, remove consecutive duplicates from it recursively.

#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char *input) {
	if (input[0] == '\0' || input[1] == '\0') {
			return;
		}

		if (input[0] == input[1]) {
			int i = 0;
		
			while (input[i] != '\0') {
				input[i] = input[i + 1];
				i++;
			}
			removeConsecutiveDuplicates(input);
		} else {
			removeConsecutiveDuplicates(input + 1);
		}
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
