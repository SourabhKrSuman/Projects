import tkinter as tk
import subprocess

def execute_script():
    script_path = "Python/test_script.sh"
    try:
        output = subprocess.check_output(["sh", script_path], stderr=subprocess.STDOUT, universal_newlines=True)
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

# Entry widget for entering the path to the script
# entry = tk.Entry(root, width=50)
# entry.pack(pady=10)

# Button to execute the script
execute_button = tk.Button(root, text="Execute Script", command=execute_script)
execute_button.pack()

# Console widget to display the output
console = tk.Text(root, height=20, width=80, state=tk.DISABLED)
console.pack(pady=10)

# Run the event loop
root.mainloop()
