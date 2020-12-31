#include <iostream>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	string strings[50];
	for (int i = 0; i < t; i++) {
		// getline(cin, strings[i]);
		cin>>strings[i];
	}
	for (int i = 0; i < t; i++) {
		if (strings[i].length() < 5) {
			cout << "NO\n";
		}
		else {
			int found = strings[i].find("iecse");
			if (found >= 0) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
	}
}