// Nekki.SF2.GUI.Fight.ActivePerkItem$$CompareTo @ RVA 0x3085C9C

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__CompareTo
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,
                  Nekki_SF2_GUI_Fight_ActivePerkItem_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  MMDDDDFHOLG_DOCBHLNBECF_o *pMVar4;
  int local_24;
  
  if ((DAT_04566023 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566023 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)IBKIPBJJCPG,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    pMVar4 = (__this->fields)._EKIGEJEMNNN_k__BackingField;
    if (pMVar4 == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      iVar3 = 0;
      iVar2 = 0;
    }
    else {
      iVar2 = (pMVar4->fields).AEPIFFHAKJG;
      iVar3 = (pMVar4->fields).CMPJANOIJAF;
    }
    local_24 = iVar3 - iVar2;
    if (IBKIPBJJCPG == (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar4 = (IBKIPBJJCPG->fields)._EKIGEJEMNNN_k__BackingField;
    if (pMVar4 == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      iVar3 = 0;
      iVar2 = 0;
    }
    else {
      iVar2 = (pMVar4->fields).AEPIFFHAKJG;
      iVar3 = (pMVar4->fields).CMPJANOIJAF;
    }
    iVar2 = System_Int32__CompareTo((int32_t)&local_24,iVar3 - iVar2,(MethodInfo *)0x0);
  }
  return iVar2;
}

