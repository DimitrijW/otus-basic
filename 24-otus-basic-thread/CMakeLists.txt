cmake_minimum_required(VERSION 3.5)

project(Multithreads)

find_package(Threads REQUIRED)

add_executable(ex0_sum ex0_sum.cpp)
set_target_properties(ex0_sum PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(ex0_sum_thread ex0_sum_thread.cpp)
set_target_properties(ex0_sum_thread PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(ex0_sum_thread_arr ex0_sum_thread_arr.cpp)
set_target_properties(ex0_sum_thread_arr PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)


add_executable(ex1_tickets ex1_tickets.cpp)
set_target_properties(ex1_tickets PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(ex1_tickets_mutex ex1_tickets_mutex.cpp)
set_target_properties(ex1_tickets_mutex PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(ex1_tickets_guard ex1_tickets_guard.cpp)
set_target_properties(ex1_tickets_guard PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(ex2_bank ex2_bank.cpp)
set_target_properties(ex2_bank PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(ex2_bank_fixed ex2_bank_fixed.cpp)
set_target_properties(ex2_bank_fixed PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)


