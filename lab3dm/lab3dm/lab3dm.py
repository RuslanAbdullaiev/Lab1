x = {3,9,12}
y = {9}
print(x > y)
print(x < y)

x = {5,9,7}
y = {5,9,7}
print(x <= y)

x = {5,9,7}
y = {5,9,7}
print(x == y)

x = {5,9,7}
y = {5,9,7}
print(x != y)

x = {5,9,7}
y = {5,9}
print(x.issubset(y))
print(y.issubset(x))

x = {1,2,3,4,5,6,}
y = {5,6}
print(x.issuperset(y))
print(y.issuperset(x))