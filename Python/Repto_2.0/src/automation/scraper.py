from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time
import os

def download_excel(nbk_id):
    # Set up the Selenium WebDriver (make sure to specify the correct path to your WebDriver)
    driver = webdriver.Chrome(executable_path='path/to/chromedriver')
    
    try:
        # Navigate to the web portal
        driver.get("https://example.com/download")  # Replace with the actual URL
        
        # Find the input field for the NBK ID and enter the ID
        input_field = driver.find_element(By.NAME, "nbk_id")  # Adjust the selector as needed
        input_field.send_keys(nbk_id)
        input_field.send_keys(Keys.RETURN)
        
        # Wait for the download to complete (you may need to adjust the sleep time)
        time.sleep(10)  # Wait for the download to finish
        
    finally:
        # Close the browser
        driver.quit()

if __name__ == "__main__":
    # Example usage
    nbk_id = input("Enter the NBK ID: ")
    download_excel(nbk_id)