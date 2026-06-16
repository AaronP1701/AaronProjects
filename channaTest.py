
def loops(): 
    """
    While program is running, "Hello" will be printed 5 consecutive times before program expires

    string = int(1)
    string = "Hello" 

    while string >= 1:
        flag = false
        print(string)
        if string = 5:
        flag = true
    

    """

    flag = 0
    string = "Hello"

    while flag < 5: # while loop
        print(flag)
        print(string)
        flag += 1
        print(str(flag )+ "\n")

    print("")

    for i in range(0,5): # for loop
        print(string)
        if i == 3:
            print("caca")
    


def twoSum():
    "write a program that adds two of a user's inputs together --- how to get input: value = input()"

    "try and focus on adding the numbers first, do error checking later"


    value = int (input("what is your number?: "))
    value1 = int (input("Enter another number: "))


    value2 = (value1 + value)
    print(value2)
    

def addElement():
    # itterate through channaList by using a For Loop, and add the letter s to each one of the elements in the list
    # after that, add the element "Bubble" to the list
    # the final line should be to print any loop that shows these changes. 
   
    channaList = []

    poop = "butt"
    channaList.append("poop")
    channaList.append("cacacaca")
    channaList.append("bubbleboi")
    channaList.append(poop)
  
  
    channaList[1] += "s"

    for i in range(0, len(channaList)):
        channaList[i] += "s"
      
    channaList += "s"
    channaList.append("s")


    print (channaList)

#          READ ME!!!!!
# all of the above functions are previous projects you have done
if __name__ == "__main__":

    
    myList = [1,4,7,2,10,4,6,3,2,9,6]
    s = input("what is your favorite number?: ")

    # Here we have a list - your job is determine if the user's input (an integer) is greater than an element in the list. 
    # Have the program print out each integer that is less than the user input s



    

       

    



