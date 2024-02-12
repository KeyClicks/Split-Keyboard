nrfutil settings generate --family NRF51 --application .\kc_ergo_left_app_v2.1.hex --application-version 1 --bootloader-version 4 --bl-settings-version 1 --no-backup kc_ergo_left_bl_settings_v1.hex
nrfutil settings generate --family NRF51 --application .\kc_ergo_right_app_v2.1.hex --application-version 1 --bootloader-version 4 --bl-settings-version 1 --no-backup kc_ergo_right_bl_settings_v1.hex
mergehex --merge .\kc_ergo_left_bl_s130_v2.0.hex .\kc_ergo_left_bl_settings_v1.hex --output ergo_left_bl_setting.hex
mergehex --merge .\s130_nrf51_2.0.1_softdevice.hex .\ergo_left_bl_setting.hex --output ergo_left_bl_settings_sd130.hex
mergehex --merge .\ergo_left_bl_settings_sd130.hex .\kc_ergo_left_app_v2.1.hex --output ergo_left_bl_settings_sd130_app2.1.hex
mergehex --merge .\kc_ergo_right_bl_s130_v2.0.hex .\kc_ergo_right_bl_settings_v1.hex --output ergo_right_bl_setting.hex
mergehex --merge .\s130_nrf51_2.0.1_softdevice.hex .\ergo_right_bl_setting.hex --output ergo_right_bl_settings_sd130.hex
mergehex --merge .\ergo_right_bl_settings_sd130.hex .\kc_ergo_right_app_v2.1.hex --output ergo_right_bl_settings_sd130_app2.1.hex

