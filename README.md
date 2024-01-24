# Operating-Systems
![image](https://user-images.githubusercontent.com/90320839/170823490-cae9149f-c105-4038-91a0-c1f64fb1057b.png)
![image](https://user-images.githubusercontent.com/90320839/170823641-cda8b156-b3ba-4b12-9cbd-0cbf0e560078.png)

- *An operating system (OS) is system software that manages computer hardware, software resources, and provides common services for computer programs.*
- *For the most part, the IT industry largely focuses on the top five OSs, including Apple macOS, Microsoft Windows, Google's Android OS, Linux Operating System, and Apple iOS.*
- *The communication between a user and a system takes place with the help of an operating systems. Windows, Linux, and Android are examples of operating systems that enable the user to use programs like MS Office, Notepad, and games on the computer or mobile phone*

![image](https://user-images.githubusercontent.com/90320839/170823596-6af712e2-9a9c-4ae4-b5f1-42189a2bd2ca.png)

## ⭐ Different types of operating systems 👇👇
- *Batch Operating System.*
- *Multitasking/Time Sharing OS.*
- *Multiprocessing OS.*
- *Real Time OS.*
- *Distributed OS.*
- *Network OS.*
- *Mobile OS.*

## CPU Scheduling
**_CPU scheduling_** in OS is a method by which one process is allowed to use the CPU while the other processes are kept on hold or are kept in the waiting state. This hold or waiting state is implemented due to the unavailability of any of the system resources like I/O etc.

### Important Terms Related to CPU Scheduling in OS
- **Arrival time in OS:** It is the time of arrival of a process in the ready queue.
- **Completion Time in OS:** It is the time at which the selected process completes its execution.
- **Burst Time in OS:** This is the time required by a process for its execution by the CPU.
- **Turn Around Time in OS:** Turnaround time for each process is the difference in completion time and the time of arrival of that process. 

**_[ Turn around time = Completion time – Arrival time ]_**
- **Waiting time in OS:** The waiting time for each and every process is the difference between the turnaround time and burst time of that process.

**_[ Waiting time = Turnaround time – Burst time ]._**


## Criteria for CPU Scheduling in OS
_There are many different CPU scheduling algorithms and choosing a particular one depends on a number of factors. The following conditions may be considered before selecting the most appropriate CPU scheduling algorithm:_

- **CPU Utilization :**
A CPU algorithm must keep a CPU busy to the maximum level. Theoretically, CPUs are considered to be working in the range of 0% to 100%, where 100 is the ideal; but practically, depending on the load the range of CPU usage is 40% to 90%.

- **Throughput :**
Throughput refers to the average performance of a CPU, i.e. the number of processes processed and executed to completion during each unit of time. The throughput of a CPU varies on the basis of the length or duration of a process.

- **Turnaround Time :**
Turnaround time is the time taken for the execution of a particular process. It is the duration in which a process is performed, i.e. time elapsed between the time of submission of the process to its time of completion.

- **Waiting Time :**
Once a process has started its execution is not affected much by any scheduling algorithm. The scheduling algorithms have a definite effect on the waiting time of the processes that are already in the ready queue and need to acquire the CPU control. 

- **Load Average :**
Load average refers to the average number of processes that are already present in the ready queue and are waiting to acquire control of the CPU.

- **Response Time :**
Response time is measured as the duration between submission of the process for execution till the time the first response is produced.

_To summarize the effect of the factors listed above, it can be said that for **optimal performance** the **CPU utilization** and **Throughput** be maximized with the minimization of the other factors._