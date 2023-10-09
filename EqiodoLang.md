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

## Data types
### natural
An non negative integer represented by one or more 0-9 digits with optional plus sign.
```
+123
123
0
```
### integer
An integer represented by one or more 0-9 digits with optional + or - sign.
```
+123
123
0
-123
```
### float
An floating point number represented by an integer optionally suffixed by . and one or more digits indicating digits after the point or E/e letter follower by an integer indicating an exponent ( $`prepoint.postpoint \times 10^{exponent}`$ ).
```
+123.321
-1238974182.8947198E-3
23e4
```
### enum value
(Case sensitive) An elelement of predefined fixed size list of ID's represented by @ character suffixed by the ID. For example for list postive, zero, negative:
```
@positive
@zero
@negative
```
### duration
An amount of time, ex. between two points in time; internally stored as number of milliseconds; denoted as one or more naturals without a sign each suffex by its unit either `m` (60000ms) `s` (1000ms) or `ms` (1ms) and each value-unit pair optionally suffixed by `_` for eventual readability. Value of duration is sum of its components each multiplied by number of milliseconds in one its unit - 

$`value \times ms = \sum \, value_{component} \times unit_{component} \times ms`$

```
10m_13s_5ms
5s
1s2ms
```

$`value_{10m\_13s\_5ms} \times ms = 10min + 13s + 5ms = 10min \times 60 \frac{s}{min} \times 1000 \frac{ms}{s} + 13s \times 1000 \frac{ms}{s} + 5ms \times 1 \frac{ms}{ms} = 613005ms`$
