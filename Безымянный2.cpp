#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
double n,a,s,ss;
int main(){
	fast
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a;
		s+=a;
		ss+=100;
	}
	cout.precision(12);
	cout<<fixed<<(s*100)/ss;
	return 0;
}
/*srand(time(0));
    char c = 'A' + (rand() % 24);
    cout << c;
int to string
	int number = i;
		ostringstream convert;
		convert << number;
		string str = convert.str();
string to int

string str = "42";
    int number = atoi(str.c_str());
    cout << number << endl;

    string floatStr = "3.14";
    float floatValue = atof(floatStr.c_str());
    cout << floatValue << endl;

for(set<int>::iterator it=s.begin(); it!=s.end(); it++){
cout<<*it<<" ";
cout<<it->first<<" "<<it->second;
}

map
cin>>s>>ss;
s.insert(make_pair(s,ss));


	*/

