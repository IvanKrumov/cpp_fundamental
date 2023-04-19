#include<iostream>
 
using namespace std;
 
void FirtsTrig(int lenght);
void SecTrig(int lenght, int i);
 
int main(){
 
 int lenght;
 cin>>lenght;
 int i;
 
    FirtsTrig(lenght);
     
    /*
       lenght=3
       1
       12
       123  
    */
   SecTrig(lenght,i);
    /*
       lenght=3
 
       12
       1
       
    */
 
  
    return 0;
}
void FirtsTrig(int lenght){
    for (int rows = 1; rows <= lenght; rows++) 
 {
    for (int col = 1; col <= rows; col++) 
    { 
        cout<<col<<" ";
    }
    cout<<endl;
 }
 
}
 
void SecTrig(int lenght, int i){
    i = 0;
 for (int rows = 1; rows <= lenght; rows++) //reverse
 {
    for (int col = lenght-1; col >= rows; col--) 
    { 
        i++;
        cout<<i<<" ";
    }
    i=0;
    cout<<endl;
 }
}