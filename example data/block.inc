//Produced by slp2pov v2.0
//Extents of : BLOCK 
//     Min : <    0.000,    0.000,    0.000 >
//     Max : <    1.000,    2.000,    3.000 >
//     Triangle Count : 12

#declare COLOR_0 = texture { pigment { color red 0.000 green 1.000 blue 0.000 }}
#declare COLOR_1 = texture { pigment { color red 1.000 green 1.000 blue 1.000 }}

#declare BLOCK =
object {
union { // Union for all 2 colors
union { // Union for COLOR_0 
triangle {
< 0.000000, 2.000000, 0.000000 >
< 1.000000, 0.000000, 0.000000 >
< 0.000000, 0.000000, 0.000000 >
}
triangle {
< 1.000000, 0.000000, 3.000000 >
< 0.000000, 0.000000, 0.000000 >
< 1.000000, 0.000000, 0.000000 >
}
triangle {
< 0.000000, 0.000000, 3.000000 >
< 0.000000, 2.000000, 0.000000 >
< 0.000000, 0.000000, 0.000000 >
}
triangle {
< 1.000000, 0.000000, 3.000000 >
< 0.000000, 0.000000, 3.000000 >
< 0.000000, 0.000000, 0.000000 >
}
triangle {
< 0.000000, 2.000000, 0.000000 >
< 1.000000, 2.000000, 0.000000 >
< 1.000000, 0.000000, 0.000000 >
}
triangle {
< 0.000000, 2.000000, 3.000000 >
< 0.000000, 2.000000, 0.000000 >
< 0.000000, 0.000000, 3.000000 >
}
texture { COLOR_0 }
} // End of Union for COLOR_0
union { // Union for COLOR_1 
triangle {
< 1.000000, 2.000000, 3.000000 >
< 1.000000, 0.000000, 0.000000 >
< 1.000000, 2.000000, 0.000000 >
}
triangle {
< 1.000000, 0.000000, 3.000000 >
< 1.000000, 0.000000, 0.000000 >
< 1.000000, 2.000000, 3.000000 >
}
triangle {
< 0.000000, 2.000000, 3.000000 >
< 1.000000, 2.000000, 0.000000 >
< 0.000000, 2.000000, 0.000000 >
}
triangle {
< 1.000000, 2.000000, 3.000000 >
< 1.000000, 2.000000, 0.000000 >
< 0.000000, 2.000000, 3.000000 >
}
triangle {
< 1.000000, 2.000000, 3.000000 >
< 0.000000, 2.000000, 3.000000 >
< 0.000000, 0.000000, 3.000000 >
}
triangle {
< 1.000000, 0.000000, 3.000000 >
< 1.000000, 2.000000, 3.000000 >
< 0.000000, 0.000000, 3.000000 >
}
texture { COLOR_1 }
} // End of Union for COLOR_1
} // End of colors union
} // BLOCK
