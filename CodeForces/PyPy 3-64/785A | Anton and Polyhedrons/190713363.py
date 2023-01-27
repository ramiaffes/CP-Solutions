n=int(input())
dic={"Tetrahedron" :4,"Cube" :6,"Octahedron" :8,"Dodecahedron":12,"Icosahedron" :20}
som=0
for i in range(n):
    s=input()
    som+=dic[s]
print(som)