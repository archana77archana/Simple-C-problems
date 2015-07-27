#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

struct interval
{
	int start;
	int end;
};

bool compare(interval i1, interval i2)
{ 
	return (i1.start < i2.start)?true:false;
}

void merge(vector<interval>& intervals)
{
	if(intervals.size() <= 0)
		return;

	stack<interval> s;
	sort(intervals.begin(), intervals.end(), compare);
	s.push(intervals[0]);

	for(int i = 1; i < intervals.size(); i++)
	{
		interval top = s.top();

		if(top.end < intervals[i].start)
			s.push(intervals[i]);


		else if(top.end < intervals[i].end)
		{
			top.end = intervals[i].end;
			s.pop();
			s.push(top);
		}
	}

	cout << "The merged intervals are: ";

	while(!s.empty())
	{
		interval t = s.top();
		cout <<  "[" << t.start << "," << t.end << "]" << " ";
		s.pop();
	}

	return;
}


	void testcase1()
	{
		interval intvs[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
		vector<interval> intervals{intvs, intvs+4};
		merge(intervals);
	}

int main()
{
	testcase1();

	return 0;
}
