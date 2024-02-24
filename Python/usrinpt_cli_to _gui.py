import tkinter as tk
import subprocess

def execute_script():
    script_path = "Python/test_script1.sh"
    num1 = num1_entry.get()
    num2 = num2_entry.get()
    try:
        output = subprocess.check_output(["sh", script_path, num1, num2], stderr=subprocess.STDOUT, universal_newlines=True)
        console.config(state=tk.NORMAL)
        console.insert(tk.END, output)
        console.config(state=tk.DISABLED)
    except subprocess.CalledProcessError as e:
        console.config(state=tk.NORMAL)
        console.insert(tk.END, f"Error: {e.output}")
        console.config(state=tk.DISABLED)

# Create the main application window
root = tk.Tk()
root.title("Script Executor")

# Entry widgets for entering numbers
num1_label = tk.Label(root, text="Enter first number:")
num1_label.pack()

num1_entry = tk.Entry(root, width=50)
num1_entry.pack()

num2_label = tk.Label(root, text="Enter second number:")
num2_label.pack()

num2_entry = tk.Entry(root, width=50)
num2_entry.pack()

# Button to execute the script
execute_button = tk.Button(root, text="Calculate Sum", command=execute_script)
execute_button.pack()

# Console widget to display the output
console = tk.Text(root, height=20, width=80, state=tk.DISABLED)
console.pack(pady=10)

# Run the event loop
root.mainloop()