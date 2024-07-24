#include<bits/stdc++.h>
using namespace std;
int main(void){
	// vector<int>marks(5, -1);
	// cout<< *(marks.begin())<<endl;
	// return 0;

// 	vector<int> marks;
// 	marks.push_back(10);
// 	marks.push_back(100);
// 	marks.push_back(200);
// 	marks.push_back(300);
// 	cout<<"Size: "<<marks.size()<<endl;
// 	// marks.clear();
// 	marks.pop_back();
// 	cout<<"Size: "<<marks.size()<<endl;
// 	cout<<marks.front()<<endl;
//     cout<<marks.back()<<endl;
// 	marks.insert(marks.begin(), 50);
// 	cout<<marks.size()<<endl;
// 	cout<<marks[0]<<endl;
// 	cout<<marks.capacity()<<endl;
// 	cout<<marks.at(0)<<endl;
// 	// marks.erase(marks.begin(), marks.end());
// 	// cout<<marks.size()<<endl;
// 	vector<int> second = {1, 2, 3, 4};
// // swwap
// marks.swap(second);
// cout<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<endl;
vector<int> first;

first.push_back(10);
first.push_back(11);
first.push_back(12);
first.push_back(13);
// traversing the vector using iterator
// create an iterator

vector<int>::iterator it = first.begin();
while(it != first.end()){
	cout<<*it<<" ";
	it++;
}

}