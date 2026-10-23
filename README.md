# BITS — Introduction to Programming: Staff Graded Assignment (Week 4)

Solutions to three C programming labs, each written as a multi-file C program
(function file + header + main).

## Problems

| Folder      | Problem | Function to implement |
|-------------|---------|----------------------|
| `FREQUENCY` | Count how many times a given digit appears in a number | `int frequency(int num, int digit)` |
| `GRADES`    | Report card: map marks (0–100) to grades A–F using `switch`, reject invalid input | `char grades(int marks)` |
| `ROTATION`  | Check if a number reads the same when rotated 180° (upside down) | `bool is_rotationally_same(int num)` |

## Key ideas used

- **Digit peeling:** `num % 10` extracts the last digit, `num / 10` removes it —
  repeat until the number becomes 0. Used in FREQUENCY and ROTATION.
- **Switch-case buckets:** `marks / 10` groups marks into ranges
  (90–99 → 9, 80–89 → 8, …). Used in GRADES.
- **Upside-down digit twins:** `0→0, 1→1, 8→8, 6→9, 9→6`; digits `2,3,4,5,7`
  have no valid upside-down form. A rotated number also reverses digit order.
  Used in ROTATION.

## Compile & run

```bash
cd FREQUENCY        # or GRADES / ROTATION
gcc main.c          # main.c includes the .c implementation file
./a.out
```

Note: the `.h` files are fixed headers from the course and were not modified.
