import ctypes

if __name__ == '__main__':

    libc = ctypes.CDLL("./ex_lib.so")

    counter = libc.count_function()


