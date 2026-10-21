// OCMLPCKBHPN.<>c$$NLIGBCPEFHN @ RVA 0x328048C

void OCMLPCKBHPN_<>c__NLIGBCPEFHN
               (OCMLPCKBHPN___c_o *__this,MGNDHCBAPEN_string__List_OANGEOLKMJG___o *x,
               MethodInfo *method)

{
  System_Action_OANGEOLKMJG__o **ppSVar1;
  System_Collections_Generic_List_OANGEOLKMJG__o *__this_00;
  System_Action_OANGEOLKMJG__o *action;
  
                    /* catch() { ... } // from try @ 03380470 with catch @ 03380494 */
                    /* try { // try from 0338049c to 034804a3 has its CatchHandler @ 033804b8 */
                    /* try { // try from 033804a4 to 034804af has its CatchHandler @ 03380200 */
  if ((DAT_04567288 & 1) == 0) {
                    /* try { // try from 033804b0 to 034804b7 has its CatchHandler @ 033804b8 */
    FUN_01bab630(&System_Action<OANGEOLKMJG>_TypeInfo);
                    /* catch() { ... } // from try @ 03380444 with catch @ 033804b8
                       catch() { ... } // from try @ 0338049c with catch @ 033804b8
                       catch() { ... } // from try @ 033804b0 with catch @ 033804b8 */
                    /* try { // try from 033804bc to 034805bf has its CatchHandler @ 033804bc
                       catch() { ... } // from try @ 033804bc with catch @ 033804bc
                       catch() { ... } // from try @ 033805dc with catch @ 033804bc
                       catch() { ... } // from try @ 0338067c with catch @ 033804bc
                       catch() { ... } // from try @ 033806ac with catch @ 033804bc
                       catch() { ... } // from try @ 033806dc with catch @ 033804bc
                       catch() { ... } // from try @ 03380714 with catch @ 033804bc
                       catch() { ... } // from try @ 03380730 with catch @ 033804bc
                       catch() { ... } // from try @ 03380760 with catch @ 033804bc */
    FUN_01bab630(&Method_System_Collections_Generic_List<OANGEOLKMJG>_ForEach__);
    FUN_01bab630(&Method_OCMLPCKBHPN_<>c_FPKIFMACGLG__);
    __this = (OCMLPCKBHPN___c_o *)FUN_01bab630(&OCMLPCKBHPN_<>c_TypeInfo);
    DAT_04567288 = 1;
  }
  if (x != (MGNDHCBAPEN_string__List_OANGEOLKMJG___o *)0x0) {
    __this_00 = (x->fields).DOKHHBGJICA;
    if ((OCMLPCKBHPN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = OCMLPCKBHPN_<>c_TypeInfo->static_fields->__9__119_3;
    __this = (OCMLPCKBHPN___c_o *)OCMLPCKBHPN_<>c_TypeInfo;
    if (action == (System_Action_OANGEOLKMJG__o *)0x0) {
      if ((OCMLPCKBHPN_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_OANGEOLKMJG__o *)
               thunk_FUN_01bda818(System_Action<OANGEOLKMJG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &OCMLPCKBHPN_<>c_TypeInfo->static_fields->__9__119_3;
      *ppSVar1 = action;
      __this = (OCMLPCKBHPN___c_o *)thunk_FUN_01c20e04(ppSVar1,action);
    }
    if (__this_00 != (System_Collections_Generic_List_OANGEOLKMJG__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<OANGEOLKMJG>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

