// AAPGCAPGBLG$$DGLJCGNHLIG @ RVA 0x325DC4C

void AAPGCAPGBLG__DGLJCGNHLIG(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_CCLKPGBIBOP__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456719a & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Clear__);
    DAT_0456719a = 1;
  }
  pSVar1 = (__this->fields).AOCCHDFNLMC;
  if (pSVar1 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    (__this->fields)._KDBLLEPMIPL_k__BackingField = false;
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CLFCKIFNGHA__DGLJCGNHLIG((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

