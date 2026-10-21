// Nekki.SF2.GUI.Map.ZoneScrollItem$$JJBHJFAOOBN @ RVA 0x33472CC

Nekki_SF2_GUI_Map_BattleButton_o *
Nekki_SF2_GUI_Map_ZoneScrollItem__JJBHJFAOOBN
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,UnityEngine_RaycastHit2D_o *MJIIBFNDCGL,
          OOMHDDBCBJP_o *BMCECOIGLNL,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_Map_BattleButton_o *pNVar3;
  OOMHDDBCBJP_o *pOVar4;
  
  if ((DAT_045679cc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<BattleButton>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679cc = 1;
  }
  pUVar2 = UnityEngine_RaycastHit2D__get_transform(MJIIBFNDCGL,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
  }
  else {
    pUVar2 = UnityEngine_RaycastHit2D__get_transform(MJIIBFNDCGL,(MethodInfo *)0x0);
    if ((((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pNVar3 = (Nekki_SF2_GUI_Map_BattleButton_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar2,
                              Method_UnityEngine_Component_GetComponent<BattleButton>__),
         pNVar3 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0)) ||
        (pOVar4 = (pNVar3->fields).CLMFOMEABFA, pOVar4 == (OOMHDDBCBJP_o *)0x0)) ||
       (BMCECOIGLNL == (OOMHDDBCBJP_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pOVar4->fields).IAJPHAAMKPC != (BMCECOIGLNL->fields).IAJPHAAMKPC) {
      pNVar3 = (Nekki_SF2_GUI_Map_BattleButton_o *)0x0;
    }
  }
  return pNVar3;
}

