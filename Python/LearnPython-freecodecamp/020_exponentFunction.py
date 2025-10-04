#!/usr/bin/env python3


def raiseToPower(base, power):
    result = 1
    for _ in range(power):
        result = result * base
    return result


print(raiseToPower(7, 3))
