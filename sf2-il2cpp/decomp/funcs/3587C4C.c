// Nekki.SF2.GUI.Map.MapScene$$UpdateBattleButtonHidden @ RVA 0x3587C4C

void Nekki_SF2_GUI_Map_MapScene__UpdateBattleButtonHidden
               (Nekki_SF2_GUI_Map_MapScene_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_00;
  MEJIKMPNBNL_o *pMVar2;
  
  if ((DAT_04568d09 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d09 = 1;
  }
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
LAB_03687cf4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (((BANHBMINMMP->fields).LFJPDELEIHG != (OLKPEJMEBPJ_o *)0x0) &&
     (pMVar2 = (BANHBMINMMP->fields).IAJPHAAMKPC, pMVar2 != (MEJIKMPNBNL_o *)0x0)) {
    __this_00 = Nekki_SF2_GUI_Map_MapScene__DAECLPKNLGE(__this,(pMVar2->fields).DEKCPPOJFEH,method);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
        Nekki_SF2_GUI_Map_ZoneScrollItem__UpdateBattleHidden
                  (__this_00,BANHBMINMMP,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03687cf4;
    }
  }
  return;
}

