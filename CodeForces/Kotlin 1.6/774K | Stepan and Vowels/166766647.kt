private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
fun main(args: Array<String>) {
var n=readInt()
var str=readLn()
var test=false
var test2=true
var str2=str[0].toString()
var str3="aiuy"
for(i in 1..(n-1)){
if((str[i]==str[i-1])and(str3.contains(str[i]))){
continue}
else if ((str[i]==str[i-1])and((str[i]=='e')or(str[i]=='o'))){
if(test2==false)continue
if(test==true){
test2=false 
continue
}
test=true 
if(i==(n-1)){
str2=str2.plus(str[i])}
continue
}
else if(str[i]!=str[i-1]){
if((str[i-1]=='e')or(str[i-1]=='o')){
if((test==true)and(test2==true)){
str2=str2.plus(str[i-1])
}}
test2=true
test=false}
str2=str2.plus(str[i])
 
}
println(str2)
 
}