package main

import java.util.*

fun check(s1: String, s2: String): Boolean {
    for (c in s2.indices) {
        if (!s1.contains(s2[c]))
            return false
    }
    return true
}

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`)
    var s1 = readLine()
    var s2 = readLine()

    if (check(s1, s2)) println("YES") else println("NO")
}