from sys import argv
from os.path import exists

script, from_file, to_file = argv

print(f"Copying from {from_file} to {to_file}")

# we could do these two on one line. How??
#in_file = open(from_file)
#indata = in_file.read()

indata = open(from_file,'r').read()

print(f"The input file {from_file} is {len(indata)} bytes long.")

print(f"Does the output file exits? {exists(to_file)}")
print("Ready? Hit return to continue, Ctrl-C to abort!")
input()

out_file = open(to_file, 'w')
out_file.write(indata)

print("All right. All done.")

out_file.close()


