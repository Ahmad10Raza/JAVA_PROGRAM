def palindrome(number):
    original_number=number
    reverse_number=0
    while number>0:
        ramainder=number%10
        reverse_number=(reverse_number*10)+ramainder
        number/=10


        if original_number==reverse_number:
            print("Number is plindrome:");
        else:
            print("Not palindrome")

    number=int(input("Enter the number:"))
