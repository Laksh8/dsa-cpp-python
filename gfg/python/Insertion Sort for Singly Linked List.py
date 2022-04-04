class Node:
    def __init__(self,data):
        self.value = data
        self.node = None
    

head_node = Node(int(input("Enter a Value in a Head:")))

def InsertNode(node,data):
    if node.node != None:
        return InsertNode(node.node,data)
    else:
        node.node = Node(data)
        return node.node

def DisplayNode(node):
    print(node.value)
    return DisplayNode(node.node)