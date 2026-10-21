// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelsInfoTable$$Init @ RVA 0x313CE10

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *__this,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *GEFKGPIDOGL,MethodInfo *method
               )

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar3;
  Nekki_SF2_GUI_SimpleScroll_o *x;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o **ppNVar4;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar5;
  
  if ((DAT_0456673a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456673a = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 != (JMDPBFOCHHP_o *)0x0) {
    pJVar3 = (pJVar2->fields)._LGFNDLOCGPB_k__BackingField;
    if (pJVar3 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0) {
      (__this->fields).MHGDKPABBHD = (pJVar3->fields).GDIJHLHCEDA;
      thunk_FUN_01c20e04();
    }
    ppNVar5 = &(__this->fields).PDHMLFAMNCO;
    *ppNVar5 = MGFBPKIBNJI;
    thunk_FUN_01c20e04(ppNVar5,MGFBPKIBNJI);
    ppNVar4 = &(__this->fields).KFCHMBGIPJK;
    *ppNVar4 = GEFKGPIDOGL;
    thunk_FUN_01c20e04(ppNVar4,GEFKGPIDOGL);
    x = *ppNVar5;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (*ppNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__Init(*ppNVar5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

