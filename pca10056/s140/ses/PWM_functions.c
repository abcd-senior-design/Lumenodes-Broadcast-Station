#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "nrf_sdh.h"
#include "nrf_sdh_ble.h"
#include "nrf_sdh_soc.h"
#include "nrf_pwr_mgmt.h"
#include "app_timer.h"
#include "boards.h"
#include "bsp.h"
#include "bsp_btn_ble.h"
#include "ble.h"
#include "ble_hci.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "ble_db_discovery.h"
#include "ble_lbs_c.h"
#include "nrf_ble_gatt.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

// @BLAKE I added these 2 header files to use the new NRFX stuff instead of the legacy things
#include "nrf_pwm.h"
#include "nrfx_pwm.h"
// Kinda cheesy, just threw in NRF delay for my little demo
#include "nrf_delay.h"



/*void set_pwm_dootie_psykle(int16_t duty_cycle)
{
    // Super simple, lols--just sets the duty cycle and calls it a day
    sequence_values = duty_cycle;
    nrfx_pwm_simple_playback(&m_pwm0, &m_seq, 1, 0);
}*/
