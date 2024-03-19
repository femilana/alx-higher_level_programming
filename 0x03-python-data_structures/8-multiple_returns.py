#!/usr/bin/python3
def multiple_returns(sentence):
    if not sentence:
        sentence = None
    if sentence:
        sen = len(sentence)
    else:
        sen = 0
    return (sen, sentence if not sentence else sentence[:1])
