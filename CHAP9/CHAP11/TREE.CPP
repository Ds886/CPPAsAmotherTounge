#include <iostream.h>
#include <string.h>
#include <process.h>
#include "tree.h"
void tree::print(block *root)
   {
    if (root==NULL) return;
	print(root->left);
	root->print();
	print(root->right);
    }
void tree::insert(block *root,block *bnew)
  {
    if (r==NULL)
	{
	r=bnew;
	bnew->height=0;
	return;
       }
    if (root==NULL)
	{
	root=bnew;
	return;
	}
   if (bnew->num >= root->num)
	{
	 if (root->right==NULL)
	    {
	     bnew->height++;
	     root->right=bnew;
	    }
	 else
	    {
	    bnew->height++;
	    insert(root->right,bnew);
	    return;
	    }

	 }
    if (bnew->num < root->num)
	{
	    if (root->left==NULL)
		{
		bnew->height++;
		root->left=bnew;
		}
	    else
		{
		bnew->height++;
		insert(root->left,bnew);
		return;
		}

	}
   }

main()
{
    int i;
    block *tmp;
    tree t;
    int num;
    char name[SIZE];
    cout<<"input number than name\n";
    for(i=0;i<5;i++)
      {
	cin>>num>>name;
	tmp=new block(num,name);
	t.insert(t.r,tmp);
      }
    t.print(t.r);
  return 0;
  }
