#include <iostream>

using namespace std;

int main(){
  
  int N;
  int z;
 
  int i;
  
  cout << " Nummer der gewünschten Fibonacci-Zahl eingeben z.B. 10 für 10te Zahl " << endl;
  
  cin >> N;
  
  if(N==0){
    cout << " Fibonacci-Zahl = 0 " << endl;
    
  }
  
  
  if(N==1){
    cout << " Fibonacci-Zahl = 1 " << endl;
    
  }
  
  if(N>1){
    
   int y=0;
   int x=1;
  
  
  for(i=2;i<=N;i++){
    
    
    
    
    z = y + x;
    
   y = x; 
   
   x = z;
   
  }
  
  cout << "Fibnacci-Zahl = "<< z << endl;
  }
  
  return 0;
}
      
