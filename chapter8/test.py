x = input("请输入要求平方根的数： ")
guess = 1.0
epsilon = 0.00001
x = float(x)
while(abs(guess / x - 1) >= epsilon):
    print('abs(guess / x - 1)', abs(guess / x - 1))
    guess = (x / guess + guess) / 2
    print('guess', guess)
print(guess)


# for (i = 0; i < n - 1; i++){
# for (j = i + 1; j < n; j++){
#   if (a[i] > a[j]) {
#     temp = a[i];
#     a[i] = a[j];
#     a[j] = temp;
#   }
# }
# }

# array = [4, 1, 5, 3, 7, 2 ,8, 9]
# temp = 0
# print("len(array)-1: ", len(array)-1)
# for i in range(len(array) - 1):
#     for j in range(i+1, len(array)):
#         if array[i] > array[j]:
#             temp = array[i]
#             array[i] = array[j]
#             array[j] = temp
#
# print(array)
