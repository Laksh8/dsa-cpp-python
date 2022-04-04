
class Node:

    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

class BinarySearchTree:

    # def __init__(self,data):
    #     self.root = Node(data)

    def insert_element_into_tree(self,node,data):
        flag = False
        if node.data >= data and node.left == None:
            print(node.data,data)
            node.left = Node(data)
            flag = True

        elif node.data < data and node.right == None:
            print(node.data,data)
            node.right = Node(data)
        
        if flag:
            return self.insert_element_into_tree(node.left,data)
        else: 
            return self.insert_element_into_tree(node.right,data)
    
    def traverse(self,node):
        if node:
            self.traverse(node.left)
            print(node.data)
            self.traverse(node.right)


root = Node(int(input("Root Node: ")))
n = int(input("Enter Number of Elements: "))
bst = BinarySearchTree()
for i in range(n):
    bst.insert_element_into_tree(root,int(input("Enter Element : ")))

bst.traverse(root)