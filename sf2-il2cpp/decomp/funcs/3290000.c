// MCBGINPGJCD$$CJOHHBMFAAG @ RVA 0x3290000

Il2CppObject * MCBGINPGJCD__CJOHHBMFAAG(MCBGINPGJCD_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  
  pSVar2 = (__this->fields).DCJHEFNELKE;
  if (pSVar2 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (__this->fields).JFNNLEIIIFM;
  if (uVar1 < (uint)pSVar2->max_length) {
    return (Il2CppObject *)pSVar2->m_Items[(int)uVar1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

