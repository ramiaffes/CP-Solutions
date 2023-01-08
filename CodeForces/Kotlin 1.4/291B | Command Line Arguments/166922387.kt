import kotlin.math.min
import kotlin.math.max
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var s=readLn()
var test=false
val str1 = mutableListOf<Char>()
val res = mutableListOf<String>()
for ( i in 0..(s.length-1)){
if(s[i]=='"'){var str=str1.joinToString("")
if(test==false){
test=true
if(str!=""){
res.add(str)}
str1.clear()}
else{
test=false
res.add(str)
str1.clear()}
continue
}
if(s[i]==' '){
if(test==true){
str1.add(s[i])
continue
}
else{
var str=str1.joinToString("")
if(str!=""){
res.add(str)
str1.clear()}
continue
}}
str1.add(s[i])
 
 
 
 
 
 
 
}
var str=str1.joinToString("")
if(str!=""){
res.add(str)}
for(m in res){
print("<")
print(m)
print(">")
println()}
}