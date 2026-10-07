clrs = []
count = int(input("Enter the number of colors: "))
print("Enter the colors:")
for x in range(count):
    color = input()
    clrs.append(color)
print("First color:", clrs[0])
print("Last color:", clrs[count - 1])
