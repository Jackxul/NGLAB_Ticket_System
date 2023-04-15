# NGLAB_Ticket_System
> A Simple Train Ticket System Exercise for NTUST NGLab

# Motivation and Goal 🚩
- Improve one's programming skill
* Know how to use Github more proficiently
+ Learn about the flow of how to build a project

[![wakatime](https://wakatime.com/badge/user/a6276c2f-01fc-4408-bfeb-0f90face6872/project/fb59d47c-9d23-422f-8a97-58d431adea10.svg)](https://wakatime.com/badge/user/a6276c2f-01fc-4408-bfeb-0f90face6872/project/fb59d47c-9d23-422f-8a97-58d431adea10)

# How to clone and run the project ✍️
> clone
```
git clone  git@github.com:Jackxul/NGLAB_Ticket_System.git
```
> start
```
cd NGLAB_Ticket_System
make
./exe/start
```
>clean
```
make clean
```
>Structure 👷‍♂️
```tree .
.
├── Makefile
├── README.md
├── build
│   ├── account.o
│   ├── admin.o
│   ├── main.o
│   ├── map.o
│   ├── select.o
│   ├── station.o
│   └── user.o
├── exe
│   └── start
├── include
│   ├── account.h
│   ├── admin.h
│   ├── map.h
│   ├── select.h
│   ├── station.h
│   ├── station_in.h
│   ├── station_out.h
│   └── user.h
├── ref
│   └── station_map.png
└── src
    ├── Makefile
    ├── account.c
    ├── admin.c
    ├── main.c
    ├── map.c
    ├── select.c
    ├── station.c
    └── user.c
```

>To Do List 🔧
```
Ticket System
│ 
├── User mode
│   ├── Buy Card(Account init ---> account.h)
│   ├── Take MRT(Account set station info ---> account.h)
│   ├── Add value(Top up)
│   └── Buy one-way ticket( ? )
│ 
└── Admin mode
    ├── Set station info(Login for setting ---> station.h)
    ├── Set station info( set station info ---> station.h )
    ├── Store user info( ? )
    ├── Search user info( ? )
    └── Define station fee(Fee algo ---> map.h)
```



# Station map 🗺️
[ Charge_Fee ](https://www.metro.taipei/cp.aspx?n=ECEADC266D7120A7)

[ Map_reference ](https://www.metro.taipei/cp.aspx?n=91974F2B13D997F1)

> ![MRT_Map](./ref/station_map.png)
