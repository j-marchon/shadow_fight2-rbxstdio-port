// KDDOKHLOKMI$$IIIFFANNPHP @ RVA 0x34B74C8

void KDDOKHLOKMI__IIIFFANNPHP(int32_t OOGPLJBADCD,MethodInfo *method)

{
  System_String_array *BFPCMHPBAGL;
  System_String_o *pSVar1;
  int32_t local_14;
  
  local_14 = OOGPLJBADCD;
  if ((DAT_0456859a & 1) == 0) {
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_0456859a = 1;
  }
  BFPCMHPBAGL = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if ((int)BFPCMHPBAGL->max_length != 0) {
      BFPCMHPBAGL->m_Items[0] = pSVar1;
      thunk_FUN_01c20e04();
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      BDGDJDGHMJI__IIIFFANNPHP(BFPCMHPBAGL,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

