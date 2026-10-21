// LJNJDFEAIOH$$FHJKIMLIDMP @ RVA 0x3039C78

void LJNJDFEAIOH__FHJKIMLIDMP(LJNJDFEAIOH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  
  if ((DAT_04565d6c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
    FUN_01bab630(&StringLiteral_10986);
    DAT_04565d6c = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    method_00 = (MethodInfo *)0x1;
    NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
    if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
      bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_10986,(MethodInfo *)0x0);
        return;
      }
      pNVar3 = (__this->fields).PDEAGAFHDFI;
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
        if ((pNVar3->fields)._BOGAKJOFOEK_k__BackingField != false) {
          return;
        }
        pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                           (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
        if (pIVar2 != (Il2CppObject *)0x0) {
          LJNJDFEAIOH__IGLJNCEHFOI(__this,pIVar2[1].monitor,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

