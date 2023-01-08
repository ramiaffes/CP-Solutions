private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var str=readLn()
var n=str.length
val map = mutableMapOf<String, Long?>()
for(i in 0..n-1){
for(j in i..n-1){
var val2=str.substring(i,j+1)
if(val2.startsWith("0")){
continue}
var test=true
for(s in val2){
if((s!='4')and(s!='7')){test=false
break}}
if(test==false)continue
var valeur=map.get(val2)
    if(valeur==null){
   map.put(val2,1)}
   else{
 map.put(val2,valeur+1)
 
 
 
 
}}
 
    }
val res2 = mutableListOf<Long>()
for(v in map.values){if((v!=null)){
var mc=v
res2.add(mc)
}}
res2.sort()
if(res2.size==0){
println(-1)}
else{var ans=res2[res2.size-1]
val res = mutableListOf<String>()
for(v in map.keys){
if(map[v]==null)continue
if(ans==map[v]){res.add(v)}}
res.sort()
println(res[0])
 
}}