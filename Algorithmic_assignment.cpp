#include <iostream>  
using namespace std;  
void palindrome(int n);
void matrix(int row,int col);
void armstrong(int num);
void dragon(int a, int b, int g, int s);
 void min(int a, int b);
int main()  
{
   int choice,n,row,col,a,b,g,s;
	
cout<<"\n\n**********  MENU  **********  1. Palindrome Number \n2. Transpose of matrix\n3. Armstrong Number \n4. The dragon egg \n5. Mex of 2\n";	
cout<<"\nEnter your choice here = ";
cin>>choice;
    
switch(choice){			
			case 1:
				   {
					cout << "\nEnter number here = ";
					cin>> n;
					palindrome(n);
                    break;
                   }			
			case 2:
				{
					cout << "\nEnter no of row in matrix = ";
					cin>> row;
					cout << "\nEnter no of column in matrix = ";
					cin >> col;
					matrix(row,col);
				break;
                }
			case 3:
				{
					cout<< "\nEnter a number here = ";
					cin >> n;
					armstrong(n);
                    break;
				}
			case 4:
				{
					cout<<"\nenter kg of gold here = ";
					cin >> a;
					cout<<"enter kg of silver here = ";
					cin >> b;
					cout<<"enter coins for gold here = ";
					cin >> g;
					cout<<"enter coins for silver here = ";
					cin >> s;
					dragon(a,b,g,s);
		            break;
				}								
			case 5:
				{
					cout<<"\nenter value here = ";
					cin >> a >> b;
					min(a,b);
	            	break;
				}
			default :
				cout<<"\n invalid ";
		} 
    return 0;  
}  
void palindrome(int n){
		int remainder,temp;
		int reverse = 0;
		temp = n;
		while(n!=0){
			remainder = n%10;
			reverse = reverse *10 + remainder;
			n = n/10;
		}
			
		if (temp == reverse){
			cout << "Yes this is a palindrome number\n";
		}
		else{
			cout<< "This is not a palindrome number\n";
		}
	};
void matrix(int row,int col){
		int arr[row][col],transpose[row][col];
	 for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> arr[i][j];
      }
   }
	 for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
         transpose[j][i] = arr[i][j];
      } 
	  cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < col; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }
	};
void armstrong(int num){
		int remainder,result = 0,temp;
		temp = num;
		
		while(temp != 0 ){
			remainder = temp %10;
			result = result + (remainder*remainder*remainder);
			temp = temp/10;
		}
		
		if(result == num){
			cout<<" anarmstrong number\n";
		}
		else{
			cout<<" Not an armstrong number\n";
		}
	};
void dragon(int a, int b, int g, int s){
		a = a*g; b = b*s;
		if(a>=b){
			cout<<"Gold\n";
		}
		else{
			cout<<"silver\n";
		}
	};
    void min(int a, int b){
		int temp;
		temp = 0;
		while(true){
			if (temp != a && temp!=b){
				break;
			}
			temp++;
		}
		cout<<temp<<"\n";
	};