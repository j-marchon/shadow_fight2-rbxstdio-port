// NJNCPNBIPCD$$.cctor @ RVA 0x3139440

void NJNCPNBIPCD___cctor(MethodInfo *method)

{
  NJNCPNBIPCD_StaticFields *pNVar1;
  
                    /* catch() { ... } // from try @ 03239424 with catch @ 03239450 */
  if ((DAT_04566717 & 1) == 0) {
                    /* try { // try from 03239460 to 03339467 has its CatchHandler @ 0323947c */
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
                    /* try { // try from 03239468 to 03339473 has its CatchHandler @ 0323928c */
    DAT_04566717 = 1;
  }
                    /* try { // try from 03239474 to 0333947b has its CatchHandler @ 0323947c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03239460 with catch @ 0323947c
                       catch(type#2 @ 00000000) { ... } // from try @ 03239474 with catch @ 0323947c
                        */
  NJNCPNBIPCD_TypeInfo->static_fields->CBDMFFMCJBK = (NJNCPNBIPCD_o *)0x0;
  thunk_FUN_01c20e04(NJNCPNBIPCD_TypeInfo->static_fields,0);
  pNVar1 = NJNCPNBIPCD_TypeInfo->static_fields;
  pNVar1->KCDGBMIGCND = 0.001;
  pNVar1->CGOPLAKCJDF = 1e+08;
  pNVar1->DPNIFBNEBLB = 0;
  pNVar1->JHMDBNGCKNN = 0;
  pNVar1->DKDPLLLACKC = 0;
  pNVar1->MDCGJFFAJAP = 0.0;
  return;
}

