// MNLIBPAOCLG$$ECPBBMDOEKB @ RVA 0x31E795C

void MNLIBPAOCLG__ECPBBMDOEKB
               (MNLIBPAOCLG_o *__this,System_Byte_array *CLNMDFIMKAK,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  NHBBOEHHEKG_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  MEHKKHFBNLM_o *pMVar4;
  System_Collections_Generic_List_MEHKKHFBNLM__o *pSVar5;
  
  if ((DAT_04566d70 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Count__);
    DAT_04566d70 = 1;
  }
  pNVar3 = (__this->fields).CNHHLPPHNCO;
  if (pNVar3 != (NHBBOEHHEKG_o *)0x0) {
    NHBBOEHHEKG__ECPBBMDOEKB(pNVar3,CLNMDFIMKAK,(MethodInfo *)0x0);
    pMVar4 = (__this->fields).DDDKDGIEBFP;
    if (pMVar4 == (MEHKKHFBNLM_o *)0x0) {
      return;
    }
    pNVar3 = (__this->fields).CNHHLPPHNCO;
    if (((pNVar3 != (NHBBOEHHEKG_o *)0x0) &&
        (pSVar5 = (pNVar3->fields).JDLKPFCELNF,
        pSVar5 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) &&
       (CLNMDFIMKAK != (System_Byte_array *)0x0)) {
      uVar2 = (pSVar5->fields)._size;
      uVar1 = (uint)CLNMDFIMKAK->max_length;
      if ((int)uVar1 <= (int)uVar2) {
        return;
      }
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      __this_00 = (pMVar4->fields)._KDDKJJLDFFO_k__BackingField;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive
                  (__this_00,CLNMDFIMKAK->m_Items[(int)uVar2] != 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

