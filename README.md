# NGLAB_Ticket_System
> A Simple Train Ticket System Exercise for NTUST NGLab

# Motivation 
- Improve one's programming skill
* Know how to use Github more proficiently
+ Learn about the flow of how to build a project
# How to clone and run the project
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
>Structure
```tree .
.
├── Makefile
├── README.md
├── build
│   ├── account.o
│   ├── main.o
│   ├── map.o
│   ├── station_in.o
│   └── station_out.o
├── exe
│   └── start
├── include
│   ├── account.h
│   └── map.h
├── ref
│   └── station_map.png
└── src
    ├── Makefile
    ├── account.c
    ├── main.c
    ├── map.c
    ├── station_in.c
    └── station_out.c
```

>To Do List
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

# Station map
[ Charge_Fee ](https://www.metro.taipei/cp.aspx?n=ECEADC266D7120A7)

[ Map_reference ](https://www.metro.taipei/cp.aspx?n=91974F2B13D997F1)

> ![MRT_Map](./ref/station_map.png)
