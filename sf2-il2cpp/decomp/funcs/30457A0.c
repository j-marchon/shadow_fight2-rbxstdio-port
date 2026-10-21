// PJKHAJKEHEL$$OEJDDLDOCIK @ RVA 0x30457A0

void PJKHAJKEHEL__OEJDDLDOCIK(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  int32_t length;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_LDHGBBPECKF__o *pSVar1;
  
  if ((DAT_04565dcc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LDHGBBPECKF>_Clear__);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    DAT_04565dcc = 1;
    method = extraout_x1;
  }
  if ((PJKHAJKEHEL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PJKHAJKEHEL_TypeInfo,method);
  }
  pSVar1 = PJKHAJKEHEL_TypeInfo->static_fields->KCAOHMFJGIC;
  if (pSVar1 != (System_Collections_Generic_List_LDHGBBPECKF__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

