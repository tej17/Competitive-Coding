/*
https://www.codechef.com/problems/FLIPCOIN
Segment tree, lazy propogation
https://www.hackerearth.com/practice/notes/segment-tree-and-lazy-propagation/
*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 100005

vector<int> seg(MAX*4);
vector<bool> lazy(MAX*4);

void updateRange(int index, int start, int end, int rStart, int rEnd){
	int mid = (start+end)/2;
	int child1 = (2*index);
	int child2 = (2*index+1);

	if(lazy[index]){
		seg[index] = (end-start+1) - seg[index];
		if(start != end){
			lazy[child1] = !lazy[child1];
			lazy[child2] = !lazy[child2];
		}
		lazy[index] = false;
	}
	if(start > rEnd || end < rStart)//outside
		return;
	if(rStart <= start && end <= rEnd){
		//completely inside
		seg[index] = (end-start+1) - seg[index];
		if(start != end){
			lazy[child1] = !lazy[child1];
			lazy[child2] = !lazy[child2];
		}
		return;
	}
	updateRange(child1,start,mid,rStart,rEnd);
	updateRange(child2,mid+1,end,rStart,rEnd);
	seg[index] = seg[child1] + seg[child2];
}

int readRange(int index, int start, int end, int rStart, int rEnd){
	int mid = (start+end)/2;
	int child1 = (2*index);
	int child2 = (2*index+1);

	if(lazy[index]){
		seg[index] = (end-start+1) - seg[index];
		if(start != end){
			lazy[child1] = !lazy[child1];
			lazy[child2] = !lazy[child2];
		}
		lazy[index] = false;
	}

	if(start > rEnd || end < rStart)
		return 0;

	if(rStart <= start && end <= rEnd){
		return seg[index];
	}
	return readRange(child1,start,mid,rStart,rEnd) + 
	readRange(child2,mid+1,end,rStart,rEnd);
}

int main(){
	int n,q,x,a,b;
	cin>>n>>q;
	while(q--){
		cin>>x>>a>>b;
		if(x)
			cout<<readRange(1,0,n-1,a,b)<<endl;
		else
			updateRange(1,0,n-1,a,b);
	}
	return 0;
}