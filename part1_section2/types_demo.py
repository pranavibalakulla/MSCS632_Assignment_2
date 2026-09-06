# Python: demonstrating a dynamic, strong type system
x = 10          # x is bound to an integer
print("x is", x, "of type", type(x).__name__)

x = "hello"     # the same name is rebound to a string; allowed at runtime
print("x is now", x, "of type", type(x).__name__)

# Python is strongly typed: it will NOT silently add a number to a string.
try:
    result = "The total is " + 5
    print(result)
except TypeError as e:
    print("TypeError caught:", e)
