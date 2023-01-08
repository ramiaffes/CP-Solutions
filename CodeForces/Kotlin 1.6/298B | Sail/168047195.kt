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
var (t,sx,sy,ex,ey)=readInts()
var s=readLn()
var x=sx
var y=sy
var variable =-1
if(Pair(x,y)==Pair(ex,ey)){
variable=0
}
for(j in 0..t-1){
if(s[j]=='E'){
if(x>=ex){
continue}
}
if(s[j]=='W'){
if(x<=ex){
continue}
}
if(s[j]=='N'){
if(y>=ey){
continue}
}
if(s[j]=='S'){
if(y<=ey){
continue}}
if(s[j]=='E'){
x=x+1}
else if(s[j]=='W'){
x=x-1}
else if(s[j]=='N'){
y=y+1}
else y=y-1
if(Pair(x,y)==Pair(ex,ey)){
variable=j+1
break
}
}
if(variable==-1){
println(-1)}
else{
println(variable)}
 
 
 
 
 
 
}