#   Program to create a vector of 5 numerics, then calculate and display the mean, median
#   and standard deviation, plus plot the points to a graph
#

#    Written by Kevin W.
#    Language: R 
#    Compiler: rdrr online compiler
#    November 2025

# Create a numeric vector of 5 numbers
data <- c(10, 15, 21, 25, 33)

# Calculate and display statistics
cat("Mean:", mean(data), "\n")
cat("Median:", median(data), "\n")
cat("Standard Deviation:", sd(data), "\n")

# Plot the vector
plot(data, type = "b", main = "Vector Plot", xlab = "Index", ylab = "Values")