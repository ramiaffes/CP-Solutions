import kotlin.math.abs
import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 
fun main(args: Array<String>) {
var n=readInt()
var vect=readInts()
val hashing = mutableMapOf<Int, Int?>()
val hashing1 = mutableMapOf<Int, Int?>()
val hashing2 = mutableMapOf<Int, Int?>()
var vect1=readInts()
var vect2=readInts()
for(i in 0..(n-1)){
var valeur=hashing.get(vect[i])
if(valeur==null){
hashing.put(vect[i],1)}
else{
hashing.put(vect[i],valeur+1)}}
for(i in 0..(n-2)){
var valeur=hashing1.get(vect1[i])
if(valeur==null){
hashing1.put(vect1[i],1)}
else{
hashing1.put(vect1[i],valeur+1)}}
for(i in 0..(n-3)){
var valeur=hashing2.get(vect2[i])
if(valeur==null){
hashing2.put(vect2[i],1)}
else{
hashing2.put(vect2[i],valeur+1)}}
var valeur1=0
var valeur2=0
for(i in 0..(n-1)){
var valeur=hashing1.get(vect[i])
var valeur3=hashing.get(vect[i])
if(valeur!=valeur3){ valeur1=vect[i]
break}
}
for(i in 0..(n-2)){
var valeur=hashing1.get(vect1[i])
var valeur3=hashing2.get(vect1[i])
 if(valeur3!=valeur){ valeur2=vect1[i]
break}
}
println(valeur1)
println(valeur2)
 
 
 
}