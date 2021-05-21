#include <iostream>
using namespace std;

void get_min_max(int *vetor, int val, int *max, int *min){
  int p;
  *min = vetor[0];
  *max = vetor[0];
  for(p=1; p<val; p++){
    if(vetor[p] > *max){
      *max = vetor[p];
    }
    else if(vetor[p] < *min){
      *min = vetor[p];
    }
  }
}

int main() {
  
  int val;
  int i;
  int n;
  int min;
  int max;

  cout <<  "Digite o tamanho desejado para o vetor: "; 
  cin >> val;
 
  if(val < 2){
    cout << "Valor inválido." << endl;
    exit(main());
  }

  int vetor[val];

  for(i=0; i<val; i++){
    cout << "Valor " << i << ": ";
    cin >> vetor[i];
  }

  get_min_max(vetor, val, &max, &min);
  
  for(n=0; n<val; n++){
    if(n<(val-1)){
      cout << vetor[n] << ",";
    }
    else{
      cout << vetor[n] << endl;
    }
  }

  cout << "Max=" << max << ", min=" << min;
 
}