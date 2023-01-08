import kotlin.math.min
import kotlin.math.max
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var t=readInt()
for( i in 0..t-1){
var n=readInt()
var ans=200000
var ans1=0
val vis = mutableMapOf<Int, Int?>()
for(j in 0..n-1){
var vect=readStrings()
var str1=vect[0]
var str2=vect[1]
var str3=vect[2]
if(str3=="1"){
ans=min(ans,str1.length)
ans=min(ans,str2.length)}
else{
ans1=max(ans1,str1.length)
ans1=max(ans1,str2.length)
}
var test=false
if(str3=="1"){if(vis.get(0)!=-1){vis.put(0,1)}
for(k in 1..min(str1.length,str2.length)){
if(test==true){
 vis.put(k,-1)
continue}
if(str1[str1.length-k]==str2[str2.length-k]){
if(vis.get(k)!=-1){
vis.put(k,1)}}
else{
vis.put(k,-1)
test=true}
}
}
else{vis.put(0,-1)
for(k in 1..min(str1.length,str2.length)){
if(test==true){
if(vis.get(k)!=-1){
 vis.put(k,1)}
continue}
if(str1[str1.length-k]==str2[str2.length-k]){
vis.put(k,-1)}
else{
if(vis.get(k)!=-1){
 vis.put(k,1)}
 test=true}
}
}
}
val res = mutableListOf<Int>()
for( m in vis.keys){
if((vis.get(m)==1)and(m<=ans)){
res.add(m)}
else if ((vis.get(m)==0)and(m>ans1)){
res.add(m)}}
println(res.size)
for(c in res){
print(c)
print(" ")}
println()}
 
}