# include <iostream> 
 using namespace std;
  int main(){
   int n ; 
    cin >> n; 
     int  think;
 for ( int i=0; i< n; i++){
     cin>> think;
     if( think==1){
         cout<<"HARD"<<endl;
         return 0; 
     }
 }
 cout<<"EASY"<< endl; 
   return 0;

  }