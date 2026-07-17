# Control Structures Assignment — Computer Programming (Summer 2026)

**Course:** Computer Programming
**Section:** [Your Section, e.g. BSCS-2A]
**Instructor:** [Instructor Name]
**Department:** Department of Computer Science, Bahria University, Lahore Campus

## Group Members

| Name | Roll Number | Folder |
|---|---|---|
| [Your Full Name] | [Your Roll No] | `student_name/` |

> This submission is by a single student. Replace `student_name/` with your
> actual name (e.g. `ali_hassan/`) and update the table above with your
> real name and roll number before pushing to GitHub.

## Repository Structure

```
control-structures-assignment/
│
├── README.md                     ← this file
├── MEMBER_CONTRIBUTION_LOG.md    ← upload/contribution log
└── student_name/                 ← rename to your own name
    ├── P01_if.cpp
    ├── P01_if_else.cpp
    ├── P01_if_else_if.cpp
    ├── P01_switch.cpp
    ├── P01_nested_if.cpp
    ├── P02_if.cpp
    ├── ...
    └── P10_nested_if.cpp
```

Each of the 10 problems (`P01`–`P10`) is solved five times, once with each
required control structure: `if`, `if-else`, `if-else-if`, `switch`, and
`nested if`. That gives **10 problems × 5 versions = 50 C++ files** for this
student, matching the workload rule in the assignment brief.

## Problems Solved

| ID | Problem |
|---|---|
| P01 | Traffic Light Signal Action |
| P02 | Day of the Week Classifier |
| P03 | Season by Month Code |
| P04 | Fast Food Menu Selector |
| P05 | Letter Grade to GPA Points |
| P06 | Vehicle Fuel Type Selector |
| P07 | Employee Designation Allowance |
| P08 | Ticket Category Discount |
| P09 | Bank Account Type Interest Rate |
| P10 | Shipping Method Selector |

All problems use coded, category-based input (e.g. entering `1`, `2`, `3` for
a menu choice) as suggested in the assignment brief, since this design suits
`switch` naturally while still allowing `if`, `if-else`, `if-else-if`, and
`nested if` to solve the same problem meaningfully.

## Total Expected Files

- 50 `.cpp` files for this student
- 1 `README.md`
- 1 `MEMBER_CONTRIBUTION_LOG.md`

## How to Compile and Run Any File

```bash
g++ -std=c++17 -o program student_name/P01_switch.cpp
./program
```
