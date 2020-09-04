#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,tc;
	string inp;
	int score;
	vector<pair<string,int> > v;
	map<string, int> scoreMap1;
	map<string, int> scoreMap2;
	cin >> t;
	tc = t;
	while(t--) {
		cin >> inp >> score;
		v.push_back(make_pair(inp, score));
	}
	score = INT_MIN;
	for(int i=0;i<tc;i++) {
		scoreMap1[v[i].first] += v[i].second;
	}
	for(int i=0;i<tc;i++) {
		score = max(score, scoreMap1[v[i].first]);
	}
	for(int i=0;i<tc;i++) {
		scoreMap2[v[i].first] += v[i].second;
		if(scoreMap2[v[i].first] >= score && scoreMap1[v[i].first] == score) {
			cout << v[i].first << endl;
			break;
		}
	}

	return 0;
}