// AMHFFFODDOC$$NDNPGAKJLHM @ RVA 0x343C330

void AMHFFFODDOC__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_045681df & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Clear__);
    DAT_045681df = 1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this,Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

