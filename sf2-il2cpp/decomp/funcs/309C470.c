// Nekki.SF2.GUI.Fight.EndFightContent$$FEFLGCCPJEC @ RVA 0x309C470

bool Nekki_SF2_GUI_Fight_EndFightContent__FEFLGCCPJEC
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Predicate_BNKBGIIJNLF__o **ppSVar2;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  System_Predicate_BNKBGIIJNLF__o *match;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
                    /* try { // try from 0319c47c to 0329c483 has its CatchHandler @ 0319c498 */
                    /* try { // try from 0319c484 to 0329c48f has its CatchHandler @ 0319bae4 */
  if ((DAT_04566120 & 1) == 0) {
                    /* try { // try from 0319c490 to 0329c497 has its CatchHandler @ 0319c498 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_Exists__);
                    /* catch() { ... } // from try @ 0319c47c with catch @ 0319c498
                       catch() { ... } // from try @ 0319c490 with catch @ 0319c498 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&System_Predicate<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_<>c_COIHDLLGDLJ__);
    auVar3 = FUN_01bab630(&Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo);
    DAT_04566120 = 1;
  }
  __this_00 = (__this->fields).IJONCLJPNDO;
  if (__this_00 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      bVar1 = false;
    }
    else {
      if ((Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->static_fields->__9__39_0;
      if (match == (System_Predicate_BNKBGIIJNLF__o *)0x0) {
        if ((Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_BNKBGIIJNLF__o *)
                thunk_FUN_01bda818(System_Predicate<BNKBGIIJNLF>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar2 = &Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->static_fields->__9__39_0;
        *ppSVar2 = match;
        thunk_FUN_01c20e04(ppSVar2,match);
      }
      bVar1 = System_Collections_Generic_List<object>__Exists
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (System_Predicate_T__o *)match,
                         Method_System_Collections_Generic_List<BNKBGIIJNLF>_Exists__);
      bVar1 = !bVar1;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

