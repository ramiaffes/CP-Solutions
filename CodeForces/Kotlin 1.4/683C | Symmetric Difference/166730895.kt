private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var vect1= readInts()
var vect2=readInts()
val map = mutableMapOf<Int, Int?>()
for(i in -1000..1000){
map.put(i,0)}
for(i in 1..vect1.size-1){
var valeur=map.get(vect1[i])
    if(valeur==null){
   map.put(vect1[i],valeur)}
   else{
 map.put(vect1[i],valeur+1)
}}
 for(i in 1..vect2.size-1){
var valeur=map.get(vect2[i])
    if(valeur==null){
   map.put(vect2[i],valeur)}
   else{
 map.put(vect2[i],valeur+1)
}}
val res = mutableListOf<Int>()
for(i in -1000..1000){
if(map.get(i)==1)res.add(i)}
print(res.size)
print(" ")
for(i in res){
print(i)
print(" ")}
 
    }