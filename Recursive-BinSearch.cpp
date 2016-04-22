#include <iostream>
using namespace std;
int n, aux, i = 0, f;
int A[1000002];
int BinSearch(int start, int end, int find){
	int mid = (start + end) / 2;
	if(end > start){
		cout << A[mid] << " " << find << endl;
		if(A[mid] > find){
		return BinSearch(start, mid, find);
		} 
		else if(A[mid] < find){
		return	BinSearch(mid, end, find);
		} 
		else{
		return mid;
		}
	}
	return -1;
}

int main(){
	cin >> n >> f;
	while(i++ < n) cin >> A[i];
	cout << BinSearch(0, i, f) << "\n";
	return 0;
}
