#include<iostream>
using namespace std;

template <typename T>
int countIf(T arr[],int length,T target){
		for(int i=0; i<=12; i++){
			for(int j=0; j<=i; j++ ){
				if(j==0) cout << arr[j];
				else if (j==8) cout << arr[j];
			}
		}
		for(int i=0; i<=6; i++){
			for(int k=0;k<=i;k++){
			}

		}

}


int main(){
	int a[] = {1,0,2,3,4,0,1,0,0,5,1,9};
	cout << countIf(a,12,0) << "\n";
	cout << countIf(a,12,8) << "\n";
	
	char b[] = "CPECMU";
	cout << countIf(b,6,'C') << "\n";
	cout << countIf(b,6,'E') << "\n";
	
	return 0;
}
