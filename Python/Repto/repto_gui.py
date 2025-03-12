import tkinter as tk
from tkinter import ttk, messagebox
from file_stg import process_and_store_data
import pandas as pd
import sys
import os

class ReptoGUI:
    def __init__(self, root):
        self.root = root
        self.root.title("Repto Data Processor")
        self.root.geometry("600x400")
        
        # Main frame
        main_frame = ttk.Frame(root, padding="20")
        main_frame.grid(row=0, column=0, sticky="nsew")
        
        # Title
        title_label = ttk.Label(
            main_frame, 
            text="Repto Data Processor", 
            font=('Helvetica', 16, 'bold')
        )
        title_label.grid(row=0, column=0, columnspan=2, pady=(0, 20))
        
        # UserId input
        ttk.Label(main_frame, text="Enter UserId:").grid(row=1, column=0, sticky="e", padx=5)
        self.user_id_var = tk.StringVar()
        self.user_id_entry = ttk.Entry(main_frame, textvariable=self.user_id_var, width=30)
        self.user_id_entry.grid(row=1, column=1, sticky="w")
        
        # Process button
        self.process_btn = ttk.Button(
            main_frame, 
            text="Process Data",
            command=self.process_data
        )
        self.process_btn.grid(row=2, column=0, columnspan=2, pady=20)
        
        # Status area
        self.status_text = tk.Text(main_frame, height=10, width=50, wrap=tk.WORD)
        self.status_text.grid(row=3, column=0, columnspan=2, pady=10)

    def process_data(self):
        user_id = self.user_id_var.get().strip()
        if not user_id:
            messagebox.showerror("Error", "Please enter a UserId")
            return
        
        try:
            self.status_text.delete(1.0, tk.END)
            self.status_text.insert(tk.END, "Processing data...\n")
            self.process_btn.state(['disabled'])
            self.root.update()
            
            filtered_df, excel_path = process_and_store_data()
            
            if filtered_df.empty:
                self.status_text.insert(tk.END, f"\nNo data found for UserId: {user_id}\n")
            else:
                self.status_text.insert(tk.END, f"\nData processed successfully!\n")
                self.status_text.insert(tk.END, f"Excel file saved at: {excel_path}\n")
                
        except Exception as e:
            messagebox.showerror("Error", f"An error occurred: {str(e)}")
        finally:
            self.process_btn.state(['!disabled'])

def main():
    root = tk.Tk()
    app = ReptoGUI(root)
    root.mainloop()

if __name__ == "__main__":
    main()