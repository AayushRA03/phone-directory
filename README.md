
# 📞 Phone Directory (C++)

An **interactive, menu-driven phone directory** program written in **C++** that uses a **stack implemented via a linked list** to store contacts.
The program allows you to **add, remove, search, and display** contacts with a simple console interface.

---

## ✨ Features

* ➕ **Add Contact** – Add a new contact with name & phone number
* 🗑 **Remove Contact** – Delete the most recently added contact (LIFO order)
* 🔍 **Search Contact** – Find a contact by name
* 👀 **View Latest Contact** – Peek at the most recently added contact without deleting
* 📋 **Display All Contacts** – View the full contact list
* 🧹 **Clear All Contacts** – Free all memory before exit

---

## 📂 How It Works

This project uses:

* **Struct `Contact`** → Stores name & phone number
* **Struct `Node`** → Linked list node storing a contact
* **Class `PhoneDirectory`** → Implements:

  * `push(Contact)` → Add contact to stack
  * `pop()` → Remove top contact
  * `peek()` → View top contact
  * `display()` → Show all contacts
  * `search()` → Find contact by name
  * `dispose()` → Free all allocated memory

---

## 🎯 Menu Options

When you run the program, you’ll see:

```
----------------------------------------------------
|    Choose the operation to be performed          |
----------------------------------------------------
     ************OPERATION***************
##############################################
##      a. Add a contact                    ##
##      b. Remove recent added contact      ##
##      c. Show recent added contact        ##
##      d. Show all contacts                ##
##      f. Search Number                    ##
##      e. Exit                             ##
##############################################
```

---

## 🛠 Installation & Run

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/your-username/phone-directory-cpp.git
cd phone-directory-cpp
```

### 2️⃣ Compile the Code

```bash
g++ phone_directory.cpp -o phone_directory
```

### 3️⃣ Run the Program

```bash
./phone_directory
```

---

## 🕹 How to Use

| Option | Action                         |
| ------ | ------------------------------ |
| `a`    | Add a new contact              |
| `b`    | Remove the most recent contact |
| `c`    | Show the most recent contact   |
| `d`    | Display all contacts           |
| `f`    | Search contact by name         |
| `e`    | Exit the program               |

---

## 📌 Example Interaction

```
Enter your choice: a

Enter The Contact Name:
John
Enter The Number:
9876543210
CONTACT ADDED SUCCESSFULLY!!!

Enter your choice: f
Enter the name to search:
John
User found
Name: John
Phone Number: 9876543210
```

---

## ⚠ Known Issues / Improvements

* 🔹 **Exit condition** uses wrong type — should be `opt != 'e'` instead of `opt != 5`
* 🔹 `dispose()` function has a memory bug (access after delete) → fixed in suggestions
* 🔹 Search is **case-sensitive** — could be improved to ignore case
* 🔹 No phone number validation (accepts non-numeric input)
* 🔹 No duplicate name handling

---

## 🚀 Future Enhancements

* 📝 Save contacts to a file & load them at startup
* 🔍 Case-insensitive search
* 🗑 Delete by name, not just last-added
* 📱 Validate phone numbers (only digits, length check)
* 📊 Sort contacts alphabetically

---


