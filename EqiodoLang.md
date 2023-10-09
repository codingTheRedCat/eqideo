# EqiodoLang
## Data model
The Eqiodo data model consists of states and transitions between states.
|MODEL|
|--------------|
| State    |
| _Transition_ |
| State    |
| _Transition_ |
| State   |

States are represented by blocks of a latex like language; let's call it _eqtex_;
```eqiodo
$$
2 x = \frac{3}{x}
$$
```
and transitions are represented by command in EqiodoLang e.x.
```eqiodo
move 500ms; *element *place
```
There are also environment command that may alter settings of an animation until they are overwritten:
```eqiodo
_duration 400ms
```
## Example code (now only prototype)
```eqiodo
_duration 400ms
$$
2 x = \frac{3}{`'from' x`}
$$

move; *from *to

$$
2 x `'to' x`
$$

pop_collapse;

$$
`2` x^2 = 3
$$

move;

$$
x^2 = \frac{3}{`2`}
$$

pop_collapse;

$$
x = \sqrt{\frac{3}{2}} \vee -\sqrt{\frac{3}{2}}
$$

pop_collapse;

$$
x = `\frac{\sqrt{3}}{\sqrt{2}}` \vee `-\frac{\sqrt{3}}{\sqrt{2}}`
$$

move *=1; *f1 *t1
move *1; *f2 *t2

$$
x \in \{ `\frac{\sqrt{3}}{\sqrt{2}}`, `-\frac{\sqrt{3}}{\sqrt{2}}` \}
$$
```
Corresponding states:

$`2 x = \frac{3}{x}`$

$`2 x^2 = 3`$

$`x^2 = \frac{3}{2}`$

$`x = \sqrt{\frac{3}{2}} \vee -\sqrt{\frac{3}{2}}`$

$`x = \frac{\sqrt{3}}{\sqrt{2}} \vee -\frac{\sqrt{3}}{\sqrt{2}}`$

$`x \in \{ \frac{\sqrt{3}}{\sqrt{2}}, -\frac{\sqrt{3}}{\sqrt{2}} \}`$
