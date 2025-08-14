import sys

if len(sys.argv) != 2:
    print("Erro")
    sys.exit(1)

print("Hi {} !".format(sys.argv[1]))
sys.exit(0)