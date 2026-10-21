// LHKALFIIJKB$$HFNKPNEHBHO @ RVA 0x34FED80

void LHKALFIIJKB__HFNKPNEHBHO(MethodInfo *method)

{
  LHKALFIIJKB_c *method_00;
  
  if ((DAT_0456883f & 1) == 0) {
                    /* catch() { ... } // from try @ 035fed68 with catch @ 035fed9c */
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
                    /* try { // try from 035fedac to 036fedb3 has its CatchHandler @ 035fedc8 */
    DAT_0456883f = 1;
  }
                    /* try { // try from 035fedb4 to 036fedbf has its CatchHandler @ 035fea48 */
  method_00 = LHKALFIIJKB_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
  }
                    /* try { // try from 035fedc0 to 036fedc7 has its CatchHandler @ 035fedc8 */
                    /* catch() { ... } // from try @ 035fecf4 with catch @ 035fedc8
                       catch() { ... } // from try @ 035fedac with catch @ 035fedc8
                       catch() { ... } // from try @ 035fedc0 with catch @ 035fedc8 */
  LHKALFIIJKB__JJILNPKKHAF((MethodInfo *)method_00);
  return;
}

