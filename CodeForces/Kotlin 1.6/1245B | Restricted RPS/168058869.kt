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
for ( j in 0..t-1){
var n=readInt()
var (a,b,c)=readInts()
val res = mutableListOf<Char>()
var s=readLn()
var som=0
var test=true
for(i in 0..n-1){
if((s[i]=='R')){
if(b>0){
res.add('P')
som+=1
b-=1}
else{
res.add('?')}
}
else if((s[i]=='P')){
if(c>0){
res.add('S')
som+=1
c-=1}
else{
res.add('!')}
 
}
else if((s[i]=='S')){
if(a>0){
res.add('R')
som+=1
a-=1}
else{
res.add('.')}
}
 
 
 
}
for(i in 0..n-1){
if(res[i]=='.'){
if(b!=0){
res[i]='P'
b-=1}
else if(c!=0){
res[i]='S'
c-=1}
else{test=false
break}
}
else if(res[i]=='?'){
if(a!=0){
res[i]='R'
a-=1}
else if(c!=0){
res[i]='S'
c-=1}
else{test=false
break}
}
else if(res[i]=='!'){
if(a!=0){
res[i]='R'
a-=1}
else if(b!=0){
res[i]='P'
b-=1}
else{test=false
break}
}
 
}
if((test==false)or(som<(n/2+(n%2))))
println("NO")
else {
println("YES")
for(m in res){
print(m)}
println()
}
}
 
 
 
 
 
 
}