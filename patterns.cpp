#include <iostream>
using namespace std;
void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"* ";
		}
        cout << std::endl;
	}
}
void triangle(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
void nTriangle(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
		for(int j=0;j<(n-i+1);j++){
			
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern6(int n){
    for(int i=0;i<n;i++){
		for(int j=0;j<(n-i+1);j++){
			
			cout<<j+1;
		}
		cout<<endl;
	}
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<(n-i);k++){
            cout<<" ";
        }
		for(int j=0;j<(2*(i)+1);j++){
			
			cout<<"*";
		}
        for(int l=0;l<(n-i);l++){
            cout<<" ";
        }
		cout<<endl;
	}
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<(i);k++){
            cout<<" ";
        }
		for(int j=0;j<(2*(n-i)+1);j++){
			
			cout<<"*";
		}
        for(int l=0;l<(i);l++){
            cout<<" ";
        }
		cout<<endl;
	}
}
void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<(n-i);k++){
            cout<<" ";
        }
		for(int j=0;j<(2*(i)+1);j++){
			
			cout<<"*";
		}
        for(int l=0;l<(n-i);l++){
            cout<<" ";
        }
		cout<<endl;
	}
    
    for(int i=0;i<n;i++){
        for(int k=0;k<(i);k++){
            cout<<" ";
        }
		for(int j=0;j<(2*(n-i)+1);j++){
			
			cout<<"*";
		}
        for(int l=0;l<(i);l++){
            cout<<" ";
        }
		cout<<endl;
	}
}
void pattern10(int n){
    for(int i=1;i<(2*n-1);i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
}
}
void pattern11(int n){
    int start=1;
    for(int i=1;i<n;i++){
        if(i%2==0) start=0;
        else start=1;
        for(int j=0;j<=i;j++){
        cout<<start;
        start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    int space=2*(n-1);
    for(int i=0;i<n;i++){
        for(int k =0;k<=i;k++){
            cout<<k+1;
        }
        for(int j=1;j<=space;j++){
			
			cout<<" ";
		}
        for (int l=i ; l >= 0; l--)
        {
            cout<<l+1;
        }
        
        cout<<endl;
        space-=2;
    }
}
void pattern13(int n){
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<i+2;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<'A'+(n-i);ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern16(int n){
    char st='A';
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<st;
        }
        st++;
        cout << endl;
    }
}
void pattern17(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int k=0;k<(n-i);k++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
        }
        for(int l=0;l<(n-i);l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    // char ch='E';
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern19(int n){
    int spaces=8;
    
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<spaces;k++){
            cout<<" ";
        }
        for(int l=0;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
        spaces-=2;
    }
    spaces=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<spaces;k++){
            cout<<" ";
        }
        for(int l=0;l<=n-i;l++){
            cout<<"*";
        }
        cout<<endl;
        spaces+=2;
    } 
}
void pattern21(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            if(j==0||i==0||j==(n-1)||i==(n-1)){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    
}
void ninjaStar(int n){
    int size=2*n-1;
    for(int i=0;i<size;i++){
        for (int j = 0; j < size; j++)
        {
            /* code */
            int top=i;
            int left=j;
            int right=(size-1)-j;
            int bottom=(size-1)-i;
            int minimumDis=min(min(top,bottom),min(left,right));
            cout<<n-minimumDis<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n=4;
    nForest(n);
    cout<<endl;
    triangle(n);
    cout<<endl;
    nTriangle(n);
    cout<<endl;
    pattern4(n);
    cout<<endl;
    pattern5(n);
    cout<<endl;
    pattern6(n);
    cout<<endl;
    pattern7(n);
    cout<<endl;
    pattern8(n);
    cout<<endl;
    pattern9(n);
    cout<<endl;
    pattern10(n);
    cout<<endl;
    pattern11(n);
    cout<<endl;
    pattern12(n);
    cout<<endl;
    pattern13(n);
    cout<<endl;
    pattern14(n);
    cout<<endl;
    pattern15(n);
    cout << endl;
    pattern16(n);
    cout << endl;
    pattern17(n);
    cout << endl;
    pattern18(n);
    cout<<endl;
    pattern19(n);
    cout<<endl;
    pattern21(n);
    cout<<endl;
    ninjaStar(n);
    return 0;
}
