# Documentation of commands that define animations between equations

Note that:
- some animations will have much more complexity into them e.g. long move - when move than one have to do long move at the same time terms have to arrange in first animation in a pattern so they are spaced out nicely. These discriptions are simplifications

### Animation command "definitions":

1. **"l_move": long move**: two part animation when moving terms great distance
    - animation consists of two parts. Term going above two equation and then going to given location
2. **"s_move" short move**: one part animation when moving tem short distance
    -  just terms goes straight to given point, through other terms not above.

3. **"merge"**: two or more terms merge to one. Terms can be both parts of common fraction (different animation)
     - Two or more tems fade away and then new one fades in
4. **"del"**: term/terms dissapears
     - just term fading away
5. **"swap"**: when we use formula or sth (no other transformation was detected) just swap whole or part of equation to other one
    - one term fades away and another fades in

6. **"add_bracket": bracket appears**
7. **"add_frac": fraction appears**
    - term/terms go up or down and fraction line appears with given term up or down 
8. **"add_root": root appears**: e.g. imaqgine animation of $x^{-2}$ to $\sqrt{x}$
9. **"add_abs": absolute value appears**
10. **"add_matrix": matrix or determinant appears**

