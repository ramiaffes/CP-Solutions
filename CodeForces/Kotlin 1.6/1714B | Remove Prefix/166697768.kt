private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readLongs() = readStrings().map { it.toLong() } // list of ints
fun main(args: Array<String>) {
    var t = readInt()
    for(j in 1..t){
   var n=readInt()
   var vect=readLongs() 
   val map = mutableMapOf<Long, Long?>()
   for(i in n-1 downTo 0){
   map.put(vect[i],0)
   }
   var res=0
    for(i in n-1 downTo 0){
    var valeur=map.get(vect[i])
    if(valeur==null){
   map.put(vect[i],valeur)}
   else{
 map.put(vect[i],valeur+1)
 var rh=map.get(vect[i])
 if(rh!=null){
 if(rh>1){
 res=i+1 
 break}
 }}
 
 
   } 
         println(res)
    }
 
 
 
    }