# MerlynLang
A coding language for fans of the band BrockHampton and espcially those fond of Merlyn
The language can be prompt based or file based.
The only convention is that all letters must be uppercase at all times.
Single line commands simply end with \newline.
Multiple line commands are tabbed in the below lines.

## Variables / Merlyns:
To define Merlyns use the keyword: MERLYN
A Merlyn stores one single Entity.
They can be of the following types:
* CASH: any whole integer, positive or negative.
* GOLD: any whole number fraction where they denominator is non zero.
* FACE: a word, consisting of characters.
* BAG: an indexed mutable collection of Merlyn/s.
note: Bag can take in existing Merlyns or initialize them in its own initialization.

Definition for base types goes as followed:
MERLYN <TYPE> <NAME> <VALUE>

Example of CASH:
MERLYN CASH MONEY 5
This gives the Merlyn called Money the value of 5.

Example of GOLD:
MERLYN GOLD COMPLETE 4 7
This gives the Merlyn called Complete the value of 5/7.

Example of FACE:
MERLYN FACE GREET HELLO WORLD
This gives the Merlyn called Greet the value of "HELLO WORLD".

Example of BAG:
MERLYN BAG HOES:
    MERLYN CASH FIRST 19
    MERLYN GOLD SECOND 13 18
    MERLYN FACE THIRD DICK COMPLEXION OF A BACKWOODS
This creates a Bag called Hoes which has 3 values.

## Functions / Stoopids:
To define functions use the keyword: STOOPID

## Containers / Voodoo Man:
Voodoo Men are encapsulations with a name. They encapsulate Merlyns and Stoopids.

## KILL
Kill is a command that uses the following syntax
KILL <Merlyn/Stoopid/Voodoo Man> <2nd entity> ...
It removes these entities.
