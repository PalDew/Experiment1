cars = 100
space_in_a_car = 4
drivers = 30
passengers = 90
cars_not_driven = cars - drivers
cars_driven = drivers
carpool_capacity = cars_driven * space_in_a_car
average_passsengers_per_car = passengers / cars_driven


print("There are",cars,"cars availale.")
print("There are only",drivers,"drivers availale.")
print("There will be",cars_not_driven,"empty cars.")
print("We can transport",carpool_capacity,"people today.")
print("We have",passengers,"passengers to carpool today")
print("We need to put about",average_passsengers_per_car,"in each car")
