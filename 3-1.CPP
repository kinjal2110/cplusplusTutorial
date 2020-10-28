#include<iostream.h>
#include<conio.h>
void main()
{
   int i,j,a[10][10],b[10][10],c[10][10],d[10][10],n,m;
   clrscr();
   cout<<"\nEnter the Number of Rows and Columns of Matrix A and B:";
   cin>>n>>m;
   cout<<"\nEnter the Elements of Matrix A: \n";
   for(i=0; i<n;i++)
     {
             for(j=0;j<m;j++)
            {
               cin>>a[i][j];
            }
    }
        cout<<"\nEnter the Elements of Matrix B: \n";
        for(i=0; i<n; i++)
           {
                for(j=0;j<m;j++ )
                   {
                        cin>>b[i][j];
                   }
          }
                        for(i=0; i<n; i++)
                   {
                        for(j=0;j<m ;j++)
                            {
                                   c[i][j]=a[i][j]+b[i][j];
                                   d[i][j]=a[i][j]-b[i][j];
                            }
                  }
                             cout<<"\nThe Resultant Matrix C=A+B is :\n";
                             for(i=0; i<n; i++)
                         {
                              for(j=0; j<m; j++ )
                                 {
                                                       cout<<c[i][j]<<" ";
                                 }
                                       cout<<"\n";
                        }
                                          cout<<"\n The Resultant Matrix D=A-B is : \n";
                              for(i=0; i<n; i++)
                                  {
                                       for (j=0; j<m; j++ )
                                           {
                                                                   cout<<d[i][j]<<" ";
                                                               }
                                               cout<<"\n";
                                 }
                                                getche();
}