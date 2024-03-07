import sys
import numpy as np
import pyqtgraph as pg
from PyQt5.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QWidget, QPushButton, QComboBox, QLabel, QSlider


class OscilloscopeApp(QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("Oscilloscope")
        self.setGeometry(100, 100, 800, 600)

        self.central_widget = QWidget()
        self.setCentralWidget(self.central_widget)

        self.layout = QVBoxLayout()
        self.central_widget.setLayout(self.layout)

        self.plot_widget = pg.PlotWidget()
        self.layout.addWidget(self.plot_widget)

        self.channel_combobox = QComboBox()
        self.channel_combobox.addItems(["Channel 1", "Channel 2"])
        self.layout.addWidget(self.channel_combobox)

        self.trigger_label = QLabel("Trigger Level:")
        self.layout.addWidget(self.trigger_label)

        self.trigger_slider = QSlider()
        self.trigger_slider.setOrientation(1)  # Vertical orientation
        self.trigger_slider.setMinimum(-10)
        self.trigger_slider.setMaximum(10)
        self.trigger_slider.setValue(0)
        self.layout.addWidget(self.trigger_slider)

        self.timebase_combobox = QComboBox()
        self.timebase_combobox.addItems(["1 ms", "10 ms", "100 ms", "1 s"])
        self.layout.addWidget(self.timebase_combobox)

        self.measure_button = QPushButton("Measure")
        self.measure_button.clicked.connect(self.measure)
        self.layout.addWidget(self.measure_button)

        self.timer = None
        self.data_x = np.linspace(0, 10, 1000)
        self.data_y1 = np.sin(self.data_x)
        self.data_y2 = np.cos(self.data_x)

        self.plot_curve1 = self.plot_widget.plot(pen='r')
        self.plot_curve2 = self.plot_widget.plot(pen='g')

    def measure(self):
        selected_channel = self.channel_combobox.currentText()
        if selected_channel == "Channel 1":
            data_y = self.data_y1
        else:
            data_y = self.data_y2

        trigger_level = self.trigger_slider.value()
        timebase = self.timebase_combobox.currentText()

        # Perform measurement
        print(f"Measurement for {selected_channel}: Trigger Level={trigger_level}, Timebase={timebase}")

    def update_plot(self):
        # Generate some random data for demonstration
        self.data_y1 = np.roll(self.data_y1, -1)
        self.data_y2 = np.roll(self.data_y2, -1)
        self.plot_curve1.setData(self.data_x, self.data_y1)
        self.plot_curve2.setData(self.data_x, self.data_y2)


if __name__ == "__main__":
    app = QApplication(sys.argv)
    oscilloscope = OscilloscopeApp()
    oscilloscope.show()
    sys.exit(app.exec_())
