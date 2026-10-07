c = int(input("How many elements: "))
list1 = []
for i in range(c):
    element = int(input("Enter the element: "))
    list1.append(element)
for i in list1[:]:
    if i % 2 == 0:
        list1.remove(i)
print(list1)
