// OCMLPCKBHPN$$EFMLMIDOPCL @ RVA 0x32772CC

System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o *
OCMLPCKBHPN__EFMLMIDOPCL(int32_t DJFJIEDMAMJ,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o *pSVar1;
  System_String_o *pSVar2;
  long lVar3;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  System_Exception_o *__this;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
  *__this_00;
  undefined4 local_28;
  int32_t iStack_24;
  
  if ((DAT_0456726e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_get_Item__
                );
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456726e = 1;
    method = extraout_x1;
  }
  local_28 = 0;
  iStack_24 = DJFJIEDMAMJ;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
    method = extraout_x1_00;
  }
  __this_00 = OCMLPCKBHPN_TypeInfo->static_fields->JONKEOLIMBH;
  if (__this_00 !=
      (System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
       *)0x0) {
    if (((__this_00->fields)._size <= DJFJIEDMAMJ) || (DJFJIEDMAMJ < 0)) {
      pSVar2 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&OCMLPCKBHPN_TypeInfo);
      FUN_019bc5ec();
      lVar3 = thunk_FUN_01bb9178(&OCMLPCKBHPN_TypeInfo);
      lVar3 = **(long **)(lVar3 + 0xb8);
      FUN_019bb21c(lVar3);
      thunk_FUN_01bb9178(&
                         Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_get_Count__
                        );
      local_28 = *(undefined4 *)(lVar3 + 0x18);
      str3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
      str0 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_4300);
      str2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_539);
      pSVar2 = System_String__Concat(str0,pSVar2,str2,str3,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this = (System_Exception_o *)thunk_FUN_01bda818();
      System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
      uVar4 = thunk_FUN_01bb9178(&Method_OCMLPCKBHPN_EFMLMIDOPCL__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this,uVar4);
    }
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
      __this_00 = OCMLPCKBHPN_TypeInfo->static_fields->JONKEOLIMBH;
      if (__this_00 ==
          (System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
           *)0x0) goto LAB_03377390;
    }
    pSVar1 = (System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o
              *)System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,DJFJIEDMAMJ,
                           Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_get_Item__
                          );
    return pSVar1;
  }
LAB_03377390:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

