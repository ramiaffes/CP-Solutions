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
var test=true
var adj=mutableMapOf<Char, Char?>()
adj['O']='O'
adj['o']='o'
adj['A']='A'
adj['V']='V'
adj['v']='v'
adj['W']='W'
adj['w']='w'
adj['b']='d'
adj['d']='b'
adj['p']='q'
adj['q']='p'
adj['H']='H'
adj['U']='U'
adj['X']='X'
adj['x']='x'
adj['Y']='Y'
adj['I']='I'
adj['M']='M'
adj['T']='T'
if((s.length%2==1)and(adj[s[s.length/2]]!=s[s.length/2])){
 
println("NIE")}
else{
for( j in 0..(s.length/2-1)){
if(s[j]!=adj[s[s.length-1-j]]){
test=false
break}
}
if(test==true){
println("TAK")}
else{
println("NIE")}
}
 
}