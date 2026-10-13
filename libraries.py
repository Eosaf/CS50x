class Book:
    def __init__(self, title, author, price):
        self.title = title
        self.author = author
        self.__price = price

    def display_info(self):
        print(f"Title: {self.title}, Author: {self.author}")

    def get_price(self):
        return self.__price

    def set_price(self, new_price):
        self.__price = new_price


# Inheriting from parent (Book) to create the child (EBook)
class Ebook(Book):
    def __init__(self, title, author, price, file_size_mb):
        super().__init__(title, author, price)
        self.file_size_mb = file_size_mb

    def download(self):
        print(f"Downloading {self.title}... Size: {self.file_size_mb}MB")


# Instantiate and test objects
book1 = Book("Clean Code", "Robert C. Martin", 45)
book2 = Book("The Pragmatic Programmer", "Andrew Hunt", 35)

book1.display_info()
print("Original price:", book1.get_price())

book1.set_price(40)
print("Updated price:", book1.get_price())

ebook1 = Ebook("Introduction to Algorithms", "Thomas H. Cormen", 55, 12)
ebook1.display_info()
ebook1.download()
print("E-book price:", ebook1.get_price())