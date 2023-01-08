import kotlin.math.abs
import kotlin.math.min
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() }// list of ints
private fun readInts() = readStrings().map { it.toInt() }// list of ints
 
fun main(args: Array<String>) {
var (n,m)=readLongs()
var var1=n
var var2=m
var val3=0
var var3=val3.toLong()
while(true){
    if((var1==var3)or(var2==var3))break
    if(var1>=2*var2){
        var1=var1%(2*var2)
    }
    else if(var2>=2*var1){
        var2=var2%(2*var1)
    }
    else break
    
}
print(var1)
print(" ")
println(var2)
 
 
 
 
 
 
 
 
}