import kotlin.math.abs
import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var (n,k)=readInts()
var vect=readLongs()
var som:Long=0
var val2=0
var ans=10000000000
for (i in 0..k-1){
som=0
for( j in 0..n/k-1){
som+=vect[(i+j*k)%n]
}
 
if(som<ans){
ans=som
val2=i+1}
}
println(val2)
 
 
 
 
 
 
}