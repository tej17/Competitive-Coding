#include <bits/stdc++.h>
using namespace std;

int n;
pair<int,int> p;
queue <pair<int,int> > q;
pair<int,int> curr;
char a[52][52];
bool visited[52][52];

bool isValid(int x,int y)
{
	if(x>=1 && x<=n && y>=1 && y<=n && a[x][y]=='0' && !visited[x][y])
		return true;
	return false;
}

void BFS(vector<pair<int,int> > &src)
{
	while(!q.empty())
	{
		pair<int,int> temp;
		curr = q.front();
		//cout << curr.first << " " << curr.second << endl; 
		if(isValid(curr.first+1,curr.second))
		{
			temp.first = curr.first+1;
			temp.second = curr.second;
			q.push(temp);
			src.push_back(temp);
			visited[temp.first][temp.second]=true;
		}
		if(isValid(curr.first-1,curr.second))
		{
			temp.first = curr.first-1;
			temp.second = curr.second;
			q.push(temp);
			src.push_back(temp);
			visited[temp.first][temp.second]=true;
		}
		if(isValid(curr.first,curr.second+1))
		{
			temp.first = curr.first;
			temp.second = curr.second+1;
			q.push(temp);
			src.push_back(temp);
			visited[temp.first][temp.second]=true;
		}
		if(isValid(curr.first,curr.second-1))
		{
			temp.first = curr.first;
			temp.second = curr.second-1;
			q.push(temp);
			src.push_back(temp);
			visited[temp.first][temp.second]=true;
		}
		//cout << "here" << endl;
		q.pop();
	}
}

int main()
{
	cin >> n;
	int i,j;
	int x1,y1,x2,y2;
	vector<pair<int,int> > src;
	vector<pair<int,int> > destination;
	cin >> x1 >> y1;
	cin >> x2 >> y2;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin >> a[i][j];
			visited[i][j] = false;
		}
	}
	//cout << "*" << endl;
	p.first = x1;
	p.second = y1;
	src.push_back(p);
	visited[x1][y1] = true;
	q.push(p);
	BFS(src);

	//cout << "***********************" << endl;

	p.first = x2;
	p.second = y2;
	destination.push_back(p);
	visited[x2][y2] = true;
	q.push(p);
	BFS(destination);

	//cout << "***********************" << endl;

	int n1 = src.size();
	int n2 = destination.size();
	int cost = INT_MAX;
	
	//cout << n1 << " " << n2 << endl;

	

	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			int f = pow((src[i].first - destination[j].first),2)+pow((src[i].second - destination[j].second),2);
			//cout << f << endl;
			if(f<=cost)
			{
				cost = f;
			}
		}
	}
	cout << cost;
	return 0;
}