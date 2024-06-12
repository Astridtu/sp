Report on Reading mini-riscv-os Source Code
Introduction
mini-riscv-os is a minimal operating system designed to run on RISC-V architecture. It serves as an educational tool to help understand the basics of operating system design and the RISC-V instruction set. The purpose of this report is to document the sections of the mini-riscv-os source code that I found difficult to understand.

Methodology
To read and understand the source code, I utilized the following approach:

Reviewed the README and any available documentation.
Used an Integrated Development Environment (IDE) for better code navigation.
Ran the code to see its output and behavior.
Referred to online resources and forums for additional context.
Sections of Code

Section 1: Bootloader
Description: The bootloader initializes the system and loads the kernel into memory.

Understanding: I understand that the bootloader is responsible for setting up the initial environment and transitioning control to the kernel.

Questions/Confusions:

The assembly instructions used for setting up the stack pointer and jumping to the kernel entry point are not clear to me. For example:
la sp, boot_stack
j kernel_entry

Section 2: Memory Management
Description: This section of the code handles memory allocation and management.

Understanding: The code appears to set up page tables and manage virtual memory.

Section 3: Interrupt Handling
Description: This part of the code deals with handling hardware and software interrupts.

Understanding: I understand that the system must handle interrupts to respond to hardware events and system calls.
Conclusion
Reading the mini-riscv-os source code has been a challenging but educational experience. The areas of confusion primarily involve low-level assembly instructions, memory management details, and the interrupt handling mechanism. To gain a better understanding, I plan to consult additional resources, such as the RISC-V ISA documentation and operating systems textbooks.

Appendix
Additional notes on RISC-V assembly instructions.
Diagrams of the memory layout and page table structure.

