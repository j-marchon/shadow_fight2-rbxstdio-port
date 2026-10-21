// BEPJMNAHCAD$$HFGIELHOBJC @ RVA 0x318A978

void BEPJMNAHCAD__HFGIELHOBJC(BEPJMNAHCAD_o *__this,MBALPICJBHF_o *KOIIFKBDEDM,MethodInfo *method)

{
  int32_t iVar1;
  MBALPICJBHF_o *pMVar2;
  MBALPICJBHF_o **ppMVar3;
  
  if ((DAT_04566a08 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_04566a08 = 1;
  }
  if (KOIIFKBDEDM != (MBALPICJBHF_o *)0x0) {
    ppMVar3 = &(__this->fields).IMEDLCCHGNH;
    *ppMVar3 = KOIIFKBDEDM;
    thunk_FUN_01c20e04(ppMVar3,KOIIFKBDEDM);
    (__this->fields).MHNMALPDJFL = true;
    if (*ppMVar3 != (MBALPICJBHF_o *)0x0) {
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         ((*ppMVar3)->fields).LCLBBHFEHDC.fields,(MethodInfo *)0x0);
      pMVar2 = (__this->fields).IMEDLCCHGNH;
      (__this->fields).NLIBJEPHLNK = (float)iVar1;
      (__this->fields).ANNBPCDGAHJ = true;
      if (pMVar2 != (MBALPICJBHF_o *)0x0) {
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar2->fields).EOOHODKJDHH.fields,(MethodInfo *)0x0);
        pMVar2 = (__this->fields).IMEDLCCHGNH;
        (__this->fields).CDCDGKDNDAL = (float)iVar1;
        if (pMVar2 != (MBALPICJBHF_o *)0x0) {
          iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pMVar2->fields).EOOHODKJDHH.fields,(MethodInfo *)0x0);
          (__this->fields).OLFPNIHIDIN = (float)iVar1;
          OMLLDCIMLBB<object>__CallEvent
                    ((OMLLDCIMLBB_object__o *)__this,0,(Il2CppObject *)0x0,
                     Method_OMLLDCIMLBB<object>_CallEvent__);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

