import ctypes
import os

lib = ctypes.CDLL(os.path.join(os.path.dirname(__file__), "libsocialchain.so"))

lib.create_user.argtypes = [ctypes.c_char_p]
lib.create_user.restype = ctypes.c_bool

lib.connect_users.argtypes = [ctypes.c_char_p, ctypes.c_char_p]
lib.connect_users.restype = ctypes.c_bool

lib.transfer_token.argtypes = [ctypes.c_char_p, ctypes.c_char_p, ctypes.c_double]
lib.transfer_token.restype = ctypes.c_bool

lib.get_balances.restype = ctypes.c_char_p

def create_user(username):
    return lib.create_user(username.encode())

def connect_users(user1, user2):
    return lib.connect_users(user1.encode(), user2.encode())

def transfer_token(sender, receiver, amount):
    return lib.transfer_token(sender.encode(), receiver.encode(), float(amount))

def get_balances():
    raw = lib.get_balances().decode()
    import json
    return json.loads(raw.replace("'", "\""))

