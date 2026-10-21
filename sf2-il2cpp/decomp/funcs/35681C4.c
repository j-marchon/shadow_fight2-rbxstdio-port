// CIOBNDOOGIM$$CLNAOMIIBLH @ RVA 0x35681C4

void CIOBNDOOGIM__CLNAOMIIBLH(CIOBNDOOGIM_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c07 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_Remove__);
    DAT_04568c07 = 1;
    method = extraout_x1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CIOBNDOOGIM_TypeInfo,method);
  }
  __this_00 = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  if (__this_00 != (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               Method_System_Collections_Generic_List<CIOBNDOOGIM>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

