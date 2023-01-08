import kotlin.math.abs
import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 
fun main(args: Array<String>) {
var (n,m)=readInts()
var vect=mutableListOf<String>()
var vect1=mutableListOf<String>()
val vis1 = mutableMapOf<String, Int?>()
    val vis2 = mutableMapOf<String, Int?>()
val res1=mutableListOf<String>()
val res2=mutableListOf<String>()
val res3=mutableListOf<String>()
for( i in 0..(n-1)){
var a=readLn()
vect.add(a)
vis1.put(a,1)
}
for( i in 0..(m-1)){
var a=readLn()
vect1.add(a)
vis2.put(a,1)
}
for( i in 0..(n-1)){
if((vis1.get(vect[i])==1)and(vis2.get(vect[i])==1)){
res3.add(vect[i])
}
else{
res2.add(vect[i])}
}
for( i in 0..(m-1)){
if((vis1.get(vect1[i])==1)and(vis2.get(vect1[i])==1)){
continue
}
else{
res1.add(vect1[i])}
}
var test=true
for(m in res3){
test=test.not()}
var i=0
var j=0
while(true){
if((test==true)and(j==res2.size))break
if((test==false)and(i==res1.size))break
if(test==true){
j+=1
}
else i+=1
test=test.not()
}
if(test==false){
println("YES")}
else println("NO")
 
 
 
 
 
 
 
 
 
 
}