// JHJLHLANACF.OICMKLMNDMI$$MoveNext @ RVA 0x301BBC8

bool JHJLHLANACF_OICMKLMNDMI__MoveNext(JHJLHLANACF_OICMKLMNDMI_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  JHJLHLANACF_o *__this_01;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_LLBEEBNCOND_o *pMVar2;
  Il2CppObject **ppIVar3;
  float seconds;
  
  if ((DAT_04565c12 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04565c12 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (JHJLHLANACF_o *)0x0) goto LAB_0311bcac;
    JHJLHLANACF__POBKBBAGBJE(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
    if (pMVar2 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
      seconds = (pMVar2->fields).OLHCJPEKLLA;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_0311bcac:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

