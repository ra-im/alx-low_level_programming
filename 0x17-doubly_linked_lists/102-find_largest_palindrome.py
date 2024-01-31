# check if number is a palindrome
def is_palindrome(n):
  return str(n) == str(n)[::-1]

largest_palindrome = 0

# Iterate 2ru all possible products of two 3-digit numbers
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result to the file "102-result"
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))