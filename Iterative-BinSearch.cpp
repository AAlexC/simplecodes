#include <iostream>
using namespace std;
int n, aux, i = 0, f;
int A[1000002];
int BinSearch(int *a, int tam, int find){
	int start = 0; 
	int end = tam;
	int mid = (start + end) / 2;
	while(end > start){
		if(A[mid] > find){
			end = mid;
			mid = (start + end) / 2;
		} else if(A[mid] < find){
			start = mid;
			mid =  (start + end) / 2;
		} else {
			return mid;
		}
	}
	return -1;
}

int main(){
	cin >> n >> f;
	while(i++ < n) cin >> A[i];
	cout << BinSearch(A, i, f) << "\n";
	return 0;
}
