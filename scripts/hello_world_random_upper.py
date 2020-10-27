import random

if __name__ == "__main__":

    some_text = 'Hello World'

    rand_upper = lambda text: ''.join(x.upper() if random.randint(0,1) else x for x in text)

    print(rand_upper(some_text))
