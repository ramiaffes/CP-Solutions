import kotlin.math.abs
import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 
fun main(args: Array<String>) {
var (n,t,c)=readInts()
var vect=readInts()
var dp =mutableListOf<Int>()
for(i in 0..(n-1)){
dp.add(0)}
if(vect[0]>t)
dp[0]+=1
for(i in 1..(n-1)){
dp[i]=dp[i-1]
if(vect[i]>t)
dp[i]+=1}
var som=0
var valeur=0
for( i in 0..(n-c)){
valeur=0
if(vect[i]>t)valeur+=1
if((dp[i+c-1]-dp[i]+(valeur))==0){
som+=1}
}
println(som)
 
 
 
 
}