def prime_number(n):
  if n != 1:
    for f in range(2, n):
      if n % f == 0:
        return False
  else:
    return False
  
  return True

x = int(input())
y = input()
if prime_number(x):
  print("Yes")
else:
  print("No")
