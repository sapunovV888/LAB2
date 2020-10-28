import math
print('Введіть значення Х')
x=float(input())
if(x>0 and x<math.pi):
     y=float(math.cos(x))
     print(y)
elif(x<0):
     y=float(1)
     print('y=',y)
else:
     y=float(-1)
     print('y=',y)
    
    
    
    
