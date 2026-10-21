// OCMLPCKBHPN$$HPGKPPILFKI @ RVA 0x3277610

void OCMLPCKBHPN__HPGKPPILFKI(MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_string__o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_0456727b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456727b = 1;
  }
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  method_00 = extraout_x1;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  OCMLPCKBHPN__NAGPPHPAKJA(pSVar1,method_00);
  pSVar1 = OCMLPCKBHPN_TypeInfo->static_fields->BCGGCOBJPAB;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
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

