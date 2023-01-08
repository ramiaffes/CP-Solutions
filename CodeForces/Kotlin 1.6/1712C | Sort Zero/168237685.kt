import kotlin.math.max
import kotlin.math.min
import java.util.Collections
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var t=readInt()
for (j in 0..t-1){
var n=readInt()
val hashing = mutableMapOf<Int, Int?>()
val vis = mutableMapOf<Int, Int?>()
val vis2 = mutableMapOf<Int, Int?>()
var dp=mutableListOf<Int>()
val vect2 = readInts()
var vect=vect2.toMutableList()
for (i in 0..n-1){
hashing.put(vect[i],i)}
for (i in 0..n-1){
dp.add(0)}
dp[n-1]=vect[n-1]
for (i in (n-2).downTo(0)){
dp[i]=min(dp[i+1],vect[i])
}
var ans=-1
var som=0
for(i in 0..n-2){
 
if(vis.get(vect[i])==1){
vect[i]=0
continue}
if((dp[i+1]<vect[i])or(ans>i)){
som+=1
vis.put(vect[i],1)
var valeur=hashing.get(vect[i])
if(valeur!=null){
ans=max(ans,valeur)}
vect[i]=0
}
 
 
 
}
for(i in 0..n-1){
if((vect[i]!=0)and(i<ans)and(vis2.get(vect[i])==null)and(vis.get(vect[i])!=1)){
som+=1
vis2.put(vect[i],1)}
}
println(som)
 
 
 
}
 
 
 
 
 
}