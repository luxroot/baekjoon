#include <iostream>

using namespace std;

int main()
{
	int h,w,map[501],water=0;
	cin>>h>>w;
	for (int i=0;i<w;i++)
		cin>>map[i];
	for (int i=1;i<=h;i++) {
		int start=-1,walls=0,end=-1;
		for (int j=0;j<w;j++) {
			if (map[j] >= i && start == -1)
				start = j;
			else if (map[j] >= i){
				walls++;
				end = j;
			}
		}
		if(start != -1 && end != -1){
			water+=(end-start-walls);
		}
	}
	cout<<water;
	return 0;
}