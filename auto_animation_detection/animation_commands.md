# Documentation of commands that define animations between equations

Note that:
- some animations will have much more complexity into them e.g. long move - when move than one have to do long move at the same time terms have to arrange in first animation in a pattern so they are spaced out nicely. These discriptions are simplifications

### Animation command "definitions":

- **"l_move": long move**: two part animation when moving terms great distance
    - description: animation consists of two parts. Term going above the equation and then going to given location
    - arguments: same as s_move
- **"s_move" short move**: one part animation when moving tem short distance
    - description: just terms goes straight to given point, through other terms not above.
    - arguments: start_coordinates, end_coordinates (if at given coordinates sth already exists place at one intex greater and
    shift all elements by one), change_to(optional)
    - example: [1, 1, 0], [0, 1], "-x" 
- **"rearrange"**: when more than two elements move at the same time. If two move it's just switch, so two short moves
    - description: two part animation like l_move but elements have to space out nicely and gaps to fill each one have to appear

- **"spawn"**: make given element appear
- **"merge"**: two or more terms merge to one. Terms can be both parts of common fraction (different animation)
     - Two or more tems fade away and then new one fades in
- **"del"**: term/terms dissapears
     - just term fading away
- **"swap"**: when we use formula or sth (no other transformation was detected) just swap whole or part of equation to other one
    - one term fades away and another fades in

- **"add_bracket": bracket appears**
- **"add_frac": fraction appears**
    - term/terms go up or down and fraction line appears with given term up or down 
- **"add_root": root appears**: e.g. imaqgine animation of $x^{-2}$ to $\sqrt{x}$
- **"add_abs": absolute value appears**
- **"add_matrix": matrix or determinant appears**

### Animation commnds synthax:
