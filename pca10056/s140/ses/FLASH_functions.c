#include <stdint.h>
#include <stdbool.h>
#include <string.h>






/*int main(void)
{
    

    print_flash_info(&fstorage);

    /* It is possible to set the start and end addresses of an fstorage instance at runtime.
     * They can be set multiple times, should it be needed. The helper function below can
     * be used to determine the last address on the last page of flash memory available to
     * store data. 
    (void) nrf5_flash_end_addr_get();

    /* Let's write to flash. 
    NRF_LOG_INFO("Writing \"%x\" to flash.", m_data);
    rc = nrf_fstorage_write(&fstorage, 0x3e000, &m_data, sizeof(m_data), NULL);
    APP_ERROR_CHECK(rc);

    wait_for_flash_ready(&fstorage);
    NRF_LOG_INFO("Done.");

#ifdef SOFTDEVICE_PRESENT
    /* Enable the SoftDevice and the BLE stack. 
    NRF_LOG_INFO("Enabling the SoftDevice.");
    ble_stack_init();

    m_data = 0xDEADBEEF;

    NRF_LOG_INFO("Writing \"%x\" to flash.", m_data);
    rc = nrf_fstorage_write(&fstorage, 0x3e100, &m_data, sizeof(m_data), NULL);
    APP_ERROR_CHECK(rc);

    wait_for_flash_ready(&fstorage);
    NRF_LOG_INFO("Done.");
#endif

    NRF_LOG_INFO("Writing \"%s\" to flash.", m_hello_world);
    rc = nrf_fstorage_write(&fstorage, 0x3f000, m_hello_world, sizeof(m_hello_world), NULL);
    APP_ERROR_CHECK(rc);

    wait_for_flash_ready(&fstorage);
    NRF_LOG_INFO("Done.");

    NRF_LOG_INFO("Use 'read' to read bytes from the flash.");
    NRF_LOG_INFO("Use 'write' to write bytes to the flash.");
    NRF_LOG_INFO("Use 'erase' to erase flash pages.");
    NRF_LOG_INFO("Use 'flasharea' to print and configure the flash read boundaries.");

    cli_start();

    /* Enter main loop. 
    for (;;)
    {
        if (!NRF_LOG_PROCESS())
        {
            power_manage();
        }
        cli_process();
    }
}


/**
 * @}
 */
