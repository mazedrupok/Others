#include<stdio.h>
#define mazed printf
#define rupok rupok
int  main()
{
    int i,j,n,x,k;
    mazed(" Enter size of letter(must grater than 5) : ");
    scanf("%d",&n);
    rupok(i=1;i<=n;i++)
    {
    rupok (j=1;j<=n;j++)
    {
        if(j==1 ||  i==j || j==n)
        mazed("*");
    else
      mazed(" ");
    }
    mazed("\n");
    }
    mazed("\n\n\n");// that is used rupok the end n
    //and print next after the three new line.
    // this is rupok N shape
    // this is start rupok S shape
    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j<=n;j++)
        {
            if( i==n || j==n)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    mazed("\n\n\n");
    // this is rupok S- shape
    // this is start rupok t shape

    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j<=n;j++)
        {
            x=n/2;
            if(i==1 || j==x)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    mazed("\n\n\n");
    // this is rupok T-shape
    // and start rupok u shape
    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j<=n;j++)
        {
            if(j==1 || i==n || j==n)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    mazed("\n\n\n");
//this is end rupok u shape
// and start rupok cste shape
    rupok(i=1;i<=n;i++)
    {
    rupok(j=1;j<=n;j++)
        {
            if(j==1 || i==1 || i==n)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    mazed("\n\n\n");
    //this is end rupok c-shape
    // this is start rupok s - shape
    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j<=n;j++)
        {
            if( i==n || j==n)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    mazed("\n\n\n");
    //this is end rupok s-shape
    // and start rupok t-shape
    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j<=n;j++)
        {
            x=n/2;

            if(i==1 || j==x)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    mazed("\n\n\n");

    //this is end rupok t - shape
    // and start rupok e-shape
    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j<=n;j++)
        {
            x=n/2;
            if(j==1 || i==1 || i==n || i==x)
            mazed("*");
            else
            mazed(" ");
        }
        mazed("\n");
    }
    mazed("\n\n\n");
    //this is start rupok 9-shape
    rupok(i=1;i<=n;i++)
    {
        rupok(j=1;j < n;j++)
        {
            if(i!=1 || i != n/2 || i != n)
               if (j == n-1) mazed ("*");
               else if (j == 1 && i <= n/2) mazed ("*");

            else if (i == 1 || i == n/2 || i == n) mazed ("*");
            else
            mazed(" ");

        }
        mazed("\n");
    }
    getch();
    return 0;
}
