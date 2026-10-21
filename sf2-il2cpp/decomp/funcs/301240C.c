// AJOGJBFNELI$$BAIJDPBFIOF @ RVA 0x301240C

System_String_o * AJOGJBFNELI__BAIJDPBFIOF(System_Byte_array *CJNHFNHJHPE,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bb8 & 1) == 0) {
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_04565bb8 = 1;
    method = extraout_x1;
  }
  if ((CJNHFNHJHPE == (System_Byte_array *)0x0) || (CJNHFNHJHPE->max_length == 0)) {
    pSVar2 = (System_String_o *)0x0;
  }
  else {
    if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo,method);
    }
    EGFFLEKJFGN__LGAJPKLKGCM(CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar1 == (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(pSVar1->klass->vtable)._37_GetString.methodPtr)
                       (pSVar1,CJNHFNHJHPE,(pSVar1->klass->vtable)._37_GetString.method);
  }
  return pSVar2;
}

