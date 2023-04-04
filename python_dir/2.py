import time

def decor(func,*args,**kwargs):

    def inner_func(*args,**kwargs):
        return func(args,kwargs)
    
    print(args)

    start = time.time()
    x = inner_func(args,kwargs)
    print(f"Time Taken {(time.time()-start)*1000} ms")
    return x




@decor    
def fact1(n):
    mult = 1
    
    for i in range(2,n+1):
        mult *= i
        
    return mult
class Factorial:    
        
    @decor
    def fact2(self,n):
        # base case
        if n == 1 or n == 0:
            return 1
        
        # recursive case
        return n*self.fact2(n-1)
    
obj = Factorial()

print(fact1(6))

print(obj.fact2(6))


fact(6)


  
        
    
