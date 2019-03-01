using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	int p[];
	int n;
	cin >> p[n];
	for(int i=0; i<=20; i++){
		cin >> p[i];
			for(int j=0; j<=20; j++){
				cout << p[n] << " = " << n+1 << "\n";
			}	 	
	}

	return 0;
}

