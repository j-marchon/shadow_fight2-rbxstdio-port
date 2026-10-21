// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KDBBHOPBFBE @ RVA 0x328A24C

int32_t Nekki_SF2_GUI_Dialogs_LotteryDialog__KDBBHOPBFBE(int32_t JAEAINBCJFC,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_int__o *__this;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_LAKDLMLPLND_o *pMVar3;
  
  if ((DAT_045672fc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045672fc = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar3 = MGNPHCAAEIO_TypeInfo->static_fields->KCHKHLMEBJM;
  if ((pMVar3 != (MGNPHCAAEIO_LAKDLMLPLND_o *)0x0) &&
     (__this = (pMVar3->fields).IAECGNCFBJK, __this != (System_Collections_Generic_List_int__o *)0x0
     )) {
    if ((0 < JAEAINBCJFC) && (iVar1 = (__this->fields)._size, 0 < iVar1)) {
      if (iVar1 <= JAEAINBCJFC) {
        JAEAINBCJFC = iVar1;
      }
      iVar2 = System_Collections_Generic_List<int>__get_Item
                        (__this,JAEAINBCJFC + -1,
                         Method_System_Collections_Generic_List<int>_get_Item__);
      return iVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

