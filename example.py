import ctypes

if __name__ == '__main__':

    libc = ctypes.CDLL("./ex_lib.so")

    for i in range(5):
        counter = libc.count_function()
        print(counter)
