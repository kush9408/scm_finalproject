#include<iostream>
using namespace std;
struct node
{
int data;
node * right,*left;
};
node* getnewnode(int d)
{
node* temp=new node();
temp->data=d;
temp->left=NULL;
temp->right=NULL;
return temp;
}

node* insert(node* k,int data)
{
if(k==NULL)
{
k=getnewnode(data);
}
else if(data<=k->data)
{
k->left=insert(k->left,data);
}
else if(data>=k->data)
{
k->right=insert(k->right,data);
}
return k;
}
int search( node* temp,int data)
{
if(temp==NULL) return 0;
else if(data==temp->data) return 1;
else if( data<temp->data) return (search(temp->left,data));
else return search(temp->right,data);
}
void postorder(struct Node* head)
{
    struct Node* temp = head;
    while (temp && temp->visited == false) {
 
        // Visited left subtree
        if (temp->left && temp->left->visited == false)
            temp = temp->left;
 
        // Visited right subtree
        else if (temp->right && temp->right->visited == false)                 
            temp = temp->right;
 
        // Print node
        else {
            printf("%d ", temp->data);
            temp->visited = true;
            temp = head;
        }
    }
}
        // Visited right subtree
        else if (temp->right && temp->right->visited == false)                 
            temp = temp->right;
 
        // Print node
        else {
            printf("%d ", temp->data);
            temp->visited = true;
            temp = head;
        }
    }
}
        // Visited right subtree
        else if (temp->right && temp->right->visited == false)                 
            temp = temp->right;
 
        // Print node
        else {
           cout<<temp->data<<"\n";
            temp->visited = true;
            temp = head;
        }
    }
}
int main()
{
int b,element;                                      
node *root=NULL;                               
root=insert(root,6);                                  
root=insert(root,4);                         
root=insert(root,8);                       
root=insert(root,12);                          
root=insert(root,1);
root=insert(root,5);
cout<<"Enter the element to be searched from the tree"<<endl;
cin>>element;
if(search(root,element)==1) cout<<"Element found"<<endl;
else cout<<"Element not found"<<endl;
return 0;
}
              /*         6
                        / \
                       4   8
                      / \   \
                     1   5   12
             */
