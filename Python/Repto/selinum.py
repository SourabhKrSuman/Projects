from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.support.ui import Select

def automate_browser_task():
    try:
        # Get user input for user ID
        user_id = input("Please enter the user ID: ")

        # Set up Chrome options
        chrome_options = Options()
        chrome_options.add_argument("--use-system-default-browser")
        
        # Initialize the driver
        driver = webdriver.Chrome(options=chrome_options)
        
        # Navigate to the URL
        driver.get("https://abc.com")
        
        # ... existing code for GET and GO buttons ...
        
        # Wait for the filter input box to be present
        wait = WebDriverWait(driver, 10)
        user_id_input = wait.until(EC.presence_of_element_located(
            (By.XPATH, "//input[contains(@class, 'filter-input')]")))
        
        # Clear existing user ID and enter new one
        user_id_input.clear()
        user_id_input.send_keys(user_id)
        
        # Look for and click delete icons for other filters if present
        delete_buttons = driver.find_elements(By.XPATH, "//button[contains(@class, 'delete-filter')]")
        for delete_button in delete_buttons:
            delete_button.click()
        
        # Click the + button to add new filter
        add_filter_button = wait.until(EC.element_to_be_clickable(
            (By.XPATH, "//button[contains(text(), '+')]")))
        add_filter_button.click()
        
        # Wait for filter dropdowns to be present
        resource_type_dropdown = wait.until(EC.presence_of_element_located(
            (By.XPATH, "//select[contains(@class, 'first-dropdown')]")))
        service_id_dropdown = wait.until(EC.presence_of_element_located(
            (By.XPATH, "//select[contains(@class, 'second-dropdown')]")))
        
        # Select "ResourceType" from first dropdown
        Select(resource_type_dropdown).select_by_visible_text("ResourceType")
        
        # Select "ServiceId" from second dropdown
        Select(service_id_dropdown).select_by_visible_text("ServiceId")
                
    except Exception as e:
        print(f"An error occurred: {str(e)}")
        
    finally:
        input("Press Enter to close the browser...")
        driver.quit()

if __name__ == "__main__":
    automate_browser_task()