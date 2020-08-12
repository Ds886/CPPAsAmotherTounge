#include <iostream.h>
#include  <iomanip.h>
#include  <process.h>
class chess{
 int board[8][8];
  int cont;
  int num,max;
 public:
 chess();
 check(int x,int y);
 move(int x,int y);
void print();
  } ;

void chess::print()
  {
    int i;
    cout<<"+----+----+----+----+----+----+----+----+\n";
    for(i=0;i<8;i++)
     {
    cout<<"| "<<setw(2)<<board[i][0]<<" | "<<setw(2)<<board[i][1];
    cout<<" | "<<setw(2)<<board[i][2]<<" | "<<setw(2)<<board[i][3];
    cout<<" | "<<setw(2)<<board[i][4]<<" | "<<setw(2)<<board[i][5];
    cout<<" | "<<setw(2)<<board[i][6]<<" | "<<setw(2)<<board[i][7]<<" |\n";
    cout<<"+----+----+----+----+----+----+----+----+\n";
     }
  }


chess::move(int x,int y)
  {

    if (num>max)
	 {
	    max=num;
	    print();
	    cout<<"the number of steps are "<<max<<'\n';
	    cout<<"to continue press 1 0 to stop\n";
	    cin>>cont;
	    if (!cont) exit(0);
	  }
    if (check(x+1,y+2))
	 {
	 board[x+1][y+2]=++num;
	 if (num==64) return(1);
	 if (move(x+1,y+2))
	     return(1);
	 else
	    {
	    board[x+1][y+2]=0;
	    num--;
	    }
	  }
     if (check(x+1,y-2))
	 {
	 board[x+1][y-2]=++num;
	 if (num==63) return(1);
	 if (move(x+1,y-2))
	     return(1);
	 else
	    {
	    board[x+1][y-2]=0;
	    num--;
	    }
	  }
     if (check(x+2,y+1))
	 {
	 board[x+2][y+1]=++num;
	 if (num==63) return(1);
	 if (move(x+2,y+1))
	     return(1);
	 else
	    {
	    board[x+2][y+1]=0;
	    num--;
	    }
	  }
     if (check(x+2,y-1))
	 {
	 board[x+2][y-1]=++num;
	 if (num==63) return(1);
	 if (move(x+2,y-1))
	     return(1);
	 else
	    {
	    board[x+2][y-1]=0;
	    num--;
	    }
	  }
    if (check(x-1,y+2))
	 {
	 board[x-1][y+2]=++num;
	 if (num==63) return(1);
	 if (move(x-1,y+2))
	     return(1);
	 else
	    {
	    board[x-1][y+2]=0;
	    num--;
	    }
	  }
     if (check(x-1,y-2))
	 {
	 board[x-1][y-2]=++num;
	 if (num==63) return(1);
	 if (move(x-1,y-2))
	     return(1);
	 else
	    {
	    board[x-1][y-2]=0;
	    num--;
	    }
	  }
     if (check(x-2,y+1))
	 {
	 board[x-2][y+1]=++num;
	 if (num==63) return(1);
	 if (move(x-2,y+1))
	     return(1);
	 else
	    {
	    board[x-2][y+1]=0;
	    num--;
	    }
	  }
     if (check(x-2,y-1))
	 {
	 board[x-2][y-1]=++num;
	 if (num==63) return(1);
	 if (move(x-2,y-1))
	     return(1);
	 else
	    {
	    board[x-2][y-1]=0;
	    num--;
	    }
	  }
       return(0);
      }

chess::chess()
   {
    int i,j;
    for(i=0;i<8;i++)
      for(j=0;j<8;j++)
	 board[i][j]=0;
    num=0;
    max=0;
    }
chess::check(int x,int y)
  {
    if (x>=8 || x<0 || y>=8 || y<0 || board[x][y]>0)
	return(0);
    else
	return(1);
  }
main()
 {
    chess x;
    x.print();
    x.move(0,0);
 return(0);
 }
