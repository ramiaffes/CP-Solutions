private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var vect=readInts()
var n=vect[0]
var l=vect[1]
var r=vect[2]
var vect1=readLongs()
var vect2=readLongs()
var test=true
for( i in 0..l-2){
if(vect1[i]!=vect2[i]){
test=false
break}}
if(test==true){
for( i in r..n-1){
if(vect1[i]!=vect2[i]){
 
test=false
break}}}
if(test==false){
println("LIE")}
else{
val map = mutableMapOf<Long, Long?>()
val map2 = mutableMapOf<Long, Long?>()
for(i in l-1..r-1){
var valeur=map.get(vect1[i])
    if(valeur==null){
   map.put(vect1[i],0)}
   else{
 map.put(vect1[i],valeur+1)
}}
for(i in l-1..r-1){
var valeur=map2.get(vect2[i])
    if(valeur==null){
   map2.put(vect2[i],0)}
   else{
 map2.put(vect2[i],valeur+1)
}}
var test2=true
for( i in map2.keys){
if(map2.get(i)!=map.get(i)){
test2=false
break}}
for( i in map.keys){
if(map2.get(i)!=map.get(i)){
test2=false
break}}
if(test2==true){
println("TRUTH")
}
else{
println("LIE")}
 
}
 
}