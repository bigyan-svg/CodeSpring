print("Hello World!")
print(2+2)
print(9) #this is because 09 is not a valid integer literal in Python
print(23)

# Starting python as a calculator
# first we write a program that counts how many seconds are there in 42 minutes
minutes =42
seconds = minutes *60
print(seconds)
# how many miles are there in 10 kilometers
kilometers = 10
miles = kilometers * 0.621371
print(miles)

# if you run a 10 kilometer race in 42 minutes 42 seconds, what is your average pace(time per mile in minutes and seconds)? what is your average speed in miles per hour?
# first we need to convert 42 minutes and 42 seconds into seconds
minutes = 42
seconds = 42 
total_seconds = (minutes * 60) + seconds
# now we need to convert 10 kilometers into miles
kilometers = 10
miles = kilometers * 0.621371
# now we need to calculate the average pace in minutes and seconds
average_pace_seconds = total_seconds / miles
average_pace_minutes = average_pace_seconds / 60 # here / is the division operator which returns a float if we want to get the integer part we can use // operator
average_pace_seconds = average_pace_seconds % 60
print("Average pace in minutes:", average_pace_minutes, "\nAverage pace in seconds:", average_pace_seconds)
# now we need to calculate the average speed in miles per hour
average_speed_mph = miles / (total_seconds / 3600)
print("Average speed in miles per hour:", average_speed_mph)