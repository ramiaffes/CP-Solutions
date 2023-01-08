import kotlin.math.abs
import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 
fun main(args: Array<String>) {
var(n,k)=readInts()
var s=readLn()
val map = mutableMapOf<Char, Int?>()
val vis = mutableMapOf<Char, Int?>()
for( i in 0..(n-1)){
map.put(s[i],i)
}
var k1=0
var test=true
for( i in 0..(n-1)){
if(vis.get(s[i])==null){vis.put(s[i],1)
k1+=1}
if(k1>k){test=false
break}
if(map.get(s[i])==i)k1-=1
}
if(test==false)println("YES")
else println("NO")
 
 
 
}