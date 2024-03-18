#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    for nam in dir(hidden_4):
        if nam[0] != '_' and nam[1] != '_':
            print(nam)
