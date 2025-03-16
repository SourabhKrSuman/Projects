import tkinter as tk
from tkinter import messagebox
from automation.scraper import download_excel
from automation.processor import process_excel

class ReptoApp:
    def __init__(self, master):
        self.master = master
        master.title("Repto 2.0 - Excel Automation")

        self.label = tk.Label(master, text="Enter NBK ID:")
        self.label.pack()

        self.nbk_id_entry = tk.Entry(master)
        self.nbk_id_entry.pack()

        self.download_button = tk.Button(master, text="Download Excel", command=self.download_excel)
        self.download_button.pack()

        self.process_button = tk.Button(master, text="Process Excel", command=self.process_excel)
        self.process_button.pack()

    def download_excel(self):
        nbk_id = self.nbk_id_entry.get()
        if nbk_id:
            try:
                download_excel(nbk_id)
                messagebox.showinfo("Success", "Excel file downloaded successfully.")
            except Exception as e:
                messagebox.showerror("Error", f"Failed to download Excel file: {e}")
        else:
            messagebox.showwarning("Input Error", "Please enter a valid NBK ID.")

    def process_excel(self):
        nbk_id = self.nbk_id_entry.get()
        if nbk_id:
            try:
                process_excel(nbk_id)
                messagebox.showinfo("Success", "Excel file processed successfully.")
            except Exception as e:
                messagebox.showerror("Error", f"Failed to process Excel file: {e}")
        else:
            messagebox.showwarning("Input Error", "Please enter a valid NBK ID.")

if __name__ == "__main__":
    root = tk.Tk()
    app = ReptoApp(root)
    root.mainloop()