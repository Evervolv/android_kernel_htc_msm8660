/*
 * This is part of the Sequans SQN1130 driver.
 * Copyright 2008 SEQUANS Communications
 * Written by Dmitriy Chumak <chumakd@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 */


#ifndef _SQN_POWER_MANAGEMENT_H
#define _SQN_POWER_MANAGEMENT_H

#include "sdio-sqn.h"

int sqn_notify_host_sleep(struct sdio_func *func);
int sqn_notify_host_wakeup(struct sdio_func *func);

int sqn_handle_lsp_packet(struct sqn_private *priv
	, struct sk_buff *skb);

int sqn_wakeup_fw(struct sdio_func *func);

void signal_card_sleep_completion(struct sqn_private *priv);

int sqn_is_tx_lsp_packet(const struct sk_buff *skb);
int sqn_is_rx_lsp_packet(const struct sk_buff *skb);

void register_android_earlysuspend(void);
void unregister_android_earlysuspend(void);

extern int mmc_wimax_get_hostwakeup_gpio(void);
extern void mmc_wimax_enable_host_wakeup(int on);
extern int mmc_wimax_get_sdio_wakelock_log(void);
extern int mmc_wimax_get_sdio_lsp_log(void);

extern int mmc_wimax_get_wimax_FW_freeze_WK_TX(void);
extern void mmc_wimax_enable_host_wakeup(int on);

#endif /* _SQN_POWER_MANAGEMENT_H */
