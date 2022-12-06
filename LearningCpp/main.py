a = int(input("Input = "))
num = 0
sum = 0

for i in range( 0, a ) :
   num = 9 * (10**i) + num
   print( num , end='' )
   if i != a-1 : print( " + " , end='' )
   sum = sum + num

print("")
print("Output : ", sum) 