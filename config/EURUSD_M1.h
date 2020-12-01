/*
 * @file
 * Defines strategy's and indicator's default parameter values
 * for the given pair symbol and timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_TMA_CG_Params_M1 : Indi_TMA_CG_Params {
  Indi_TMA_CG_Params_M1() : Indi_TMA_CG_Params(indi_tmacg_defaults, PERIOD_M1) { shift = 0; }
} indi_tmacg_m1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_TMA_CG_Params_M1 : StgParams {
  // Struct constructor.
  Stg_TMA_CG_Params_M1() : StgParams(stg_tmacg_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = 0;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = 0;
    price_stop_method = 0;
    price_stop_level = 2;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_tmacg_m1;
