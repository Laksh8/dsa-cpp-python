
class Queue:
    
    lst = []
    s = 0

    def push(self,ele):
        self.lst.append(ele)
        self.s +=1
    
    def pop(self):
        if self.lst:
            value = self.lst[0]
            self.lst = self.lst[1:] 
            self.s -=1
            return value

    def size(self):
        return self.s

    def display(self):
        for i in self.lst:
            print(i,end=" ")
    
queue = Queue()
queue.push(5)
queue.pop()
queue.pop()
print("Size",queue.size())
queue.pop()
queue.push(5)
queue.push(3)
queue.pop()
queue.push(4)
queue.display()




