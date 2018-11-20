 /*----------------------------------------------------------------------------
 *  @file    ss_init_main.h
 *  @brief   Single-sided two-way ranging (SS TWR) initiator with interrupt example code -- Header file
 *
 * 
 * @attention
 *
 * Copyright 2018 (c) Decawave Ltd, Dublin, Ireland.
 *
 * All rights reserved.
 *
 * @author Decawave
 */

void ss_init_run(void);

void rx_ok_cb(const dwt_cb_data_t *cb_data);

void rx_to_cb(const dwt_cb_data_t *cb_data);

void rx_err_cb(const dwt_cb_data_t *cb_data);

void tx_conf_cb(const dwt_cb_data_t *cb_data);

void ss_initiator_task_function (void * pvParameter);
