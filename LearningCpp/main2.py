_len = int(input( "Input : " ))
t = 9
sum = 0

for i in range( 0, _len ) :
   sum = sum + t
   if i != 0 : print( " + ", end='' )
   print( t, end='' )
   t = t * 10 + 9
   
print( "" )
print( "Sum : ", sum )