"""A unival tree (which stands for "universal value") is a tree where all nodes under it have the same value. 
 
Given the root to a binary tree, count the number of unival subtrees. 
 
For example, the following tree has 5 unival subtrees: 
 
   0 
  / \ 
 1   0 
    / \ 
   1   0 
  / \ 
 1   1

"""

class Node:
    def __init__(self, value, left=None, right=None):
        self.data = value
        self.left = left
        self.right = right


def univalsubtreenumber(root, count):
    if root is None:
        return True
    left = univalsubtreenumber(root.left, count)
    right = univalsubtreenumber(root.right, count)
    if left == False or right == False:
        return False
    if root.left and root.data != root.left.data:
        return False
    if root.right and root.data != root.right.data:
        return False
    count[0] += 1
    return True


def countTrees(root):
    count = [0]
    # calling a new function, to maintain the value of count in recursive calls
    univalsubtreenumber(root, count)
    return count[0]


root = Node(0, Node(1), Node(0, Node(1, Node(1), Node(1)), Node(0)))
print("number of unival subtrees is  ", countTrees(root))