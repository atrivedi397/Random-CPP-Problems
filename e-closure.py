number_of_states = int(input("Please enter the number of states, considering states form A onwards"))
input_symbols = int(input("Enter the total input symbols, here we consider them starting from 0 onwards"))
total_symbols = [x for x in range(0, input_symbols)]
total_symbols.append("eps")
x = 65
y = 65 + number_of_states
total_states = [chr(x) for x in range(x, y)]
# print(total_states, "\n", total_symbols)

l = []

for state in total_states:
    row = []
    for input_symbol in total_symbols:
        value = input(f"Type the transition of {state} for {input_symbol}, if not existing type '-'. "
                      f"If multiple transition are there separate them with space")
        row.append(value)
    row.insert(0, state)
    l.append(row)

for row in l:
    print(row)

r = 0

e_closure = []
stack = total_states[:]


def find_eps(states, nfa):
    e_close = states
    for rows in nfa:
        for column in range(len(rows)):
            if rows[column] == states and rows[-1] != '-':
                e_close += rows[-1]
                states = e_close[-1]
    else:
        return e_close


for sta in total_states:
    print(find_eps(f"{sta}", l))
