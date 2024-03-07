import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QFrame, QGridLayout, QWidget
from PyQt5.QtCore import Qt


class Person:
    def __init__(self, name, age, gender, binary_data):
        self.name = name
        self.age = age
        self.gender = gender
        self.binary_data = binary_data

    def introduce(self):
        return f"Hi, my name is {self.name}, I'm {self.age} years old, and I am {self.gender}."

    def get_binary_data(self, variable_name):
        if variable_name in self.binary_data:
            return self.binary_data[variable_name]
        else:
            return None

    def get_bits_for_variable(self, variable_name):
        binary_data = self.get_binary_data(variable_name)
        if binary_data is None:
            return None
        # Convert binary data to string and strip the '0b' prefix
        binary_string = bin(binary_data)[2:]
        # Pad with zeros to make it 8 bits if necessary
        binary_string = binary_string.zfill(8)
        return [int(bit) for bit in binary_string]

class DataProcessor:
    @staticmethod
    def print_all_bits(person):
        if isinstance(person, Person):
            print(f"Printing all bit variables for {person.name}:")
            for variable_name, binary_data in person.binary_data.items():
                bits_list = person.get_bits_for_variable(variable_name)
                print(f"Variable: {variable_name}")
                if bits_list is not None:
                    for i, bit_value in enumerate(bits_list):
                        print(f"  bit_{i + 1}: {bit_value}")
                else:
                    print("No binary data found.")
        else:
            print("Invalid input! Please provide a valid Person instance.")

class LEDWindow(QMainWindow):
    def __init__(self, person):
        super().__init__()

        self.person = person
        self.initUI()

    def initUI(self):
        self.setWindowTitle('LEDs')
        self.setGeometry(100, 100, 600, 400)

        self.grid_layout = QGridLayout()
        self.grid_layout.setSpacing(5)

        self.leds = []

        for variable_name, binary_data in self.person.binary_data.items():
            bits_list = self.person.get_bits_for_variable(variable_name)
            if bits_list is not None:
                for i, bit_value in enumerate(bits_list):
                    led = QFrame(self)
                    led.setStyleSheet("background-color: green" if bit_value == 1 else "background-color: red")
                    self.grid_layout.addWidget(led, i // 16, i % 16)
                    self.leds.append(led)

        widget = QWidget()
        widget.setLayout(self.grid_layout)
        self.setCentralWidget(widget)

if __name__ == '__main__':
    app = QApplication(sys.argv)

    binary_data = {
        "var1": 0b00001111,
        "var2": 0b10101010,
        "var3": 0b11001100,
        "var4": 0b11110000,
        "var5": 0b01010101,
        "var6": 0b00110011,
        "var7": 0b11111111,
        "var8": 0b00000000,
        "var9": 0b11110000,
        "var10": 0b00001111,
        "var11": 0b11001100,
        "var12": 0b00111100,
        "var13": 0b11110000,
        "var14": 0b00000000,
        "var15": 0b11111111,
        "var16": 0b10101010,
        "var17": 0b01010101,
        "var18": 0b11110000,
        "var19": 0b00001111,
        "var20": 0b00110011,
        "var21": 0b11001100,
        "var22": 0b00000000,
        "var23": 0b11111111,
        "var24": 0b11111111,
        "var25": 0b00001111,
        "var26": 0b11110000,
        "var27": 0b00110011,
        "var28": 0b11001100,
        "var29": 0b10101010,
        "var30": 0b01010101,
        "var31": 0b11001100,
        "var32": 0b00110011
    }

    person1 = Person("Alice", 30, "female", binary_data)

    window = LEDWindow(person1)
    window.show()

    sys.exit(app.exec_())

