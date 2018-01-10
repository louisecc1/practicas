#include <iostream>

using namespace std;
int sum(int a[][3],int b[][3],int c[][3],int i,int j,int i_1,int j_1,int i_2,int j_2){
    if(i!=i_1&&i!=i_2){
        return 0;
    }
     if(j!=j_1&&j!=j_2){
        return 0;
    }
    for(int m=0;m<i;++m){
            for(int n=0;n<j;++n){
                c[m][n]=a[m][n]+b[m][n];
            }

    }
    return 1;
}
int multi_1(int a[][2],int b[][2],int d[][2],int m,int n,int c,int c_1=0){
    if(c_1==n-1){
        return a[c][c_1]*b[c][c_1];
    }
    return a[c][c_1]*b[c_1][c]+multi_1(a,b,d,m,n,c,++c_10);
}
int multi(int a[][2],int b[][2],int d[][2],int m,int n,int m_1,int n_1,int c=0,int c_1=0){
        if(c==(m-1)&&c_1==(n_1-1)){
            return 1;
        }
        d[c][c_1]=multi_1(a,b,d,m,n,c);
        if((c_1+1)%n==0){
            return multi(a,b,d,m,n,m_1,n_1,++c,0);
        }
        return multi(a,b,d,m,n,m_1,n_1,c,++c_1);
}

int main()
{ int a[2][2]={{1,2},{1,2}};
  int b[2][2]={{1,2},{1,2}};
  int c[2][2];
  multi(a,b,c,2,2,2,2);
  for(int i=0;i<2;++i){
    for(int j=0;j<2;++j){
            cout<<c[i][j];
    }
    cout<<endl;
  }
    return 0;
}
