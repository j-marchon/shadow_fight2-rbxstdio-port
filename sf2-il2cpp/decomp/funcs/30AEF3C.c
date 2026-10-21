// CFEANGJDHEE$$CMACDPGGCHO @ RVA 0x30AEF3C

System_String_o * CFEANGJDHEE__CMACDPGGCHO(int32_t DPJIDNBJIBG,MethodInfo *method)

{
  CFEANGJDHEE_c *pCVar1;
  CFEANGJDHEE_o *pCVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_string__o *pSVar4;
  
  if ((DAT_045661cf & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_045661cf = 1;
    method = extraout_x1;
  }
  if (DPJIDNBJIBG < 0) {
    return (System_String_o *)0x0;
  }
  pCVar1 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    pCVar1 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  pCVar2 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar1);
  if ((pCVar2 != (CFEANGJDHEE_o *)0x0) &&
     (pSVar4 = (pCVar2->fields).CDDNOMEDBKF,
     pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
    if ((pSVar4->fields)._size <= DPJIDNBJIBG) {
      return (System_String_o *)0x0;
    }
    pCVar1 = CFEANGJDHEE_TypeInfo;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      pCVar1 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
    }
    pCVar2 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar1);
    if ((pCVar2 != (CFEANGJDHEE_o *)0x0) &&
       (pSVar4 = (pCVar2->fields).CDDNOMEDBKF,
       pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
      pSVar3 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

