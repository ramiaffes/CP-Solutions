private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() } // list of ints
fun main(args: Array<String>) {
    var n=readInt()
    var lis1=readLongs()
    var lis=lis1.distinct().sorted()
    if((lis.size)<3){
        print(-1)
        print(" ")
        print(-1)
        print(" ")
        print(-1)
    }
    else{
        print(lis1.indexOf(lis[0])+1)
        print(" ")
        print(lis1.indexOf(lis[1])+1)
        print(" ")
        print(lis1.indexOf(lis[2])+1)
    }
 
 
 
 
 
}