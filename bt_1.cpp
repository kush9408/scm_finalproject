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
<<<<<<< HEAD
=======
 //Added by Keshav
void postorder(struct Node* head)
{
    struct Node* temp = head;
    while (temp && temp->visited == false) {
 
        // Visited left subtree
        if (temp->left && temp->left->visited == false)
            temp = temp->left;
 void postorder(struct Node* head)
{
    struct Node* temp = head;
    while (temp && temp->visited == false) {
 
        // Visited left subtree
        if (temp->left && temp->left->visited == false)
            temp = temp->left;
>>>>>>> origin12/keshav
 
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

void PreOrderTraversal(struct tNode *root)
//Added a preorder traveral function without recursion
{
  struct tNode *current,*pre;
 
  if(root == NULL)
     return; 
 
  current = root;
  while(current != NULL)
  {                 
    if(current->left == NULL)
    {
      printf("%d ", current->data);
      current = current->right;      
    }    
    else
    {
      /* Find the inorder predecessor of current */
      pre = current->left;
      while(pre->right != NULL && pre->right != current)
        pre = pre->right;
 
      /* Make current as right child of its inorder predecessor */
      if(pre->right == NULL)
      {
        pre->right = current;
        current = current->left;
      }
             
      /* Revert the changes made in if part to restore the original 
        tree i.e., fix the right child of predecssor */   
      else 
      {
        pre->right = NULL;
        cout<<current->data;endl;
        current = current->right;      
      } /* End of if condition pre->right == NULL */
    } /* End of if condition current->left == NULL*/
  } /* End of while */
}

{
  /* set current to root of binary tree */
  struct tNode *current = root;
  struct sNode *s = NULL;  /* Initialize stack s */
  bool done = 0;
 
  while (!done)
  {
    /* Reach the left most tNode of the current tNode */
    if(current !=  NULL)
    {
      /* place pointer to a tree node on the stack before traversing 
        the node's left subtree */
      push(&s, current);                                               
      current = current->left;  
    }
        
    /* backtrack from the empty subtree and visit the tNode 
       at the top of the stack; however, if the stack is empty,
      you are done */
    else                                                             
    {
      if (!isEmpty(s))
      {
        current = pop(&s);
        printf("%d ", current->data);
 
        /* we have visited the node and its left subtree.
          Now, it's right subtree's turn */
        current = current->right;
      }
      else
        done = 1; 
    }
  } /* end of while */ 
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
