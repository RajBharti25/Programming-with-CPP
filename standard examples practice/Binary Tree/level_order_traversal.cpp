/*
You are given a tree and you need to do the level order traversal on this tree.
Level order traversal of a tree is breadth-first traversal for the tree.



Level order traversal of above tree is 1 2 3 4 5

Input:
First line of input contains the number of test cases T. For each test case, there will be only a single line of input which is a string representing the tree as described below: 

The values in the string are in the order of level order traversal of the tree where, numbers denotes node values, and a character “N” denotes NULL child.

For example:

For the above tree, the string will be: 1 2 3 N N 4 6 N 5 N N 7 N

Output:
The function should print the level order traversal of the tree as specified in the problem statement.

Your Task:
You don't have to take any input. Just complete the function levelOrder() that takes node as parameter and prints the level order. The newline is automatically appended by the driver code.

Constraints:
1 <= T <= 100
1 <= Number of nodes<= 104
1 <= Data of a node <= 104

Example:
Input:
2
1 3 2
10 20 30 40 60 N N
Output:
1 3 2
10 20 30 40 60

Explanation:
Testcase1: The tree is
        1
     /      \
   3       2
So, the level order would be 1 3 2
Testcase2: The tree is
                           10
                        /        \
                     20         30
                  /       \
               40       60
So, the level order would be 10 20 30 40 60
*/

void levelOrder(Node* node)
{
  //Your code here
  queue<Node*> q;
  q.push(node);
  while(!q.empty())
  {
      Node* temp=q.front();
      cout<<temp->data<<" ";
      if(temp->left!=NULL)
      {
          q.push(temp->left);
      }
      if(temp->right!=nullptr)
      {
          q.push(temp->right);
      }
      q.pop();
  }
}
