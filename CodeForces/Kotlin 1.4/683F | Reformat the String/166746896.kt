private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var res=""
var vect=readStrings()
for(str in vect){
var str2=" "
str2=str.replace(" ","")
if(str2=="")continue
res=res.plus(str2)
res=res.plus(" ")
}
res=res.toLowerCase()
res=res.capitalize()
var res3=""
for(i in 0..res.length-2){
var val1=res[i+1].toString().toUpperCase()
var val2=res[i+1].toString().toLowerCase()
var val3=res[i].toString().toLowerCase()
var val4=res[i].toString().toUpperCase()
if((res[i]==' ')and((res[i+1]!=' ')and(val1==val2) )){
continue}
if(res3.length>=2){
if((res3[res3.length-2]=='.')){
res3=res3.plus(res[i].toString().capitalize())}
else{res3=res3.plus(res[i])
}}
else{res3=res3.plus(res[i])}
if(((res[i]!=' ')and(val3==val4) )and(val2!=val1)){
res3=res3.plus(" ")}
 
 
 
}
if(res[res.length-1]!=' ')
res3=res3.plus(res[res.length-1])
println(res3)
}