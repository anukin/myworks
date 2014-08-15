#include <queue>
#include <iostream>
#include <vector>
using namespace std;
struct compare
{
	bool operator()(const int &l,const int &r)
	{
		return l>r;
	}
};

int main()
{
	priority_queue <int ,vector<int>,compare> pq;
	pq.push(3);
	pq.push(8);
	pq.push(-9);
	while(!pq.empty())
	{
		cout<< pq.top()<< endl;
		pq.pop();
	}
	return 0;

}