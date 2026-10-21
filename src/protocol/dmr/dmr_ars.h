// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * Copyright (C) 2026 by arancormonk <180709949+arancormonk@users.noreply.github.com>
 */

/**
 * @file
 * @brief Motorola MOTOTRBO Automatic Registration Service (ARS) message decode.
 */

#ifndef DSD_NEO_SRC_PROTOCOL_DMR_DMR_ARS_H_
#define DSD_NEO_SRC_PROTOCOL_DMR_DMR_ARS_H_

#include <dsd-neo/core/state_fwd.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void dmr_ars_print_message(dsd_state* state, const uint8_t* msg, uint16_t len);

// Nonzero when `msg` frames as an ARS message to the letter of the spec. Use it to recognise ARS on a
// port that does not name it, such as a manufacturer-specific compressed UDP/IP index.
int dmr_ars_is_plausible(const uint8_t* msg, uint16_t len);

#ifdef __cplusplus
}
#endif

#endif /* DSD_NEO_SRC_PROTOCOL_DMR_DMR_ARS_H_ */
