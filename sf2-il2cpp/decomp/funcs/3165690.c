// GALHNMPIEHA$$MOFPGBHFKMM @ RVA 0x3165690

void GALHNMPIEHA__MOFPGBHFKMM(GALHNMPIEHA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  BPBGAAHBFKH_o *CHGANLEMEGJ;
  System_String_o *message;
  KEFHDOHHHML_o *IDCGLBOIAFJ_00;
  Il2CppObject *pIVar2;
  int32_t local_24;
  
  if ((DAT_045668c4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<BPBGAAHBFKH>__);
    FUN_01bab630(&StringLiteral_10955);
    FUN_01bab630(&StringLiteral_5924);
    DAT_045668c4 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10955,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      CHGANLEMEGJ = (BPBGAAHBFKH_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<BPBGAAHBFKH>__);
      GALHNMPIEHA__CDGDOLDEIBD(__this,CHGANLEMEGJ,method);
      GALHNMPIEHA__MFKHGFEDMIO(__this,IDCGLBOIAFJ_00,method);
      pIVar2 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar2->klass == (Il2CppClass *)System_Action_TypeInfo)) {
        (*pIVar2[1].monitor)(pIVar2[4].klass,pIVar2[2].monitor);
      }
    }
    else {
      local_24 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
      message = System_String__Format(StringLiteral_5924,pIVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    (__this->fields).HDPCPPJGGCI = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

