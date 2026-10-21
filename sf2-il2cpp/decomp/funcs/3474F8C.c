// Nekki.SF2.GUI.Map.BattleButton$$Init @ RVA 0x3474F8C

void Nekki_SF2_GUI_Map_BattleButton__Init
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool AOMBONOOJFP;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *str0;
  System_String_o *str0_00;
  System_String_o *str0_01;
  MethodInfo *method_00;
  int32_t iVar4;
  uint NKIAFKKEOBI;
  
  if ((DAT_04568322 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_1377);
    FUN_01bab630(&StringLiteral_16217);
    DAT_04568322 = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    bVar1 = OOMHDDBCBJP__KFMAFEPOEIB(BANHBMINMMP,(MethodInfo *)0x0);
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      ((BANHBMINMMP->fields)._OKDCDPMNNJJ_k__BackingField,(MethodInfo *)0x0);
    NKIAFKKEOBI = (uint)bVar1;
    if (NKIAFKKEOBI == 0) {
      pSVar3 = OOMHDDBCBJP__JKFEMMGGLGJ(BANHBMINMMP,(MethodInfo *)0x0);
      str2 = OOMHDDBCBJP__ACJJCGLDLAP(BANHBMINMMP,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = OOMHDDBCBJP__IOJBCFGAGKJ(BANHBMINMMP,(MethodInfo *)0x0);
      str2 = OOMHDDBCBJP__KJHGGFNOHCE(BANHBMINMMP,(MethodInfo *)0x0);
    }
    if (pSVar3 != (System_String_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      AOMBONOOJFP = System_String__EndsWith(pSVar3,StringLiteral_16217,(MethodInfo *)0x0);
      if (bVar2) {
        iVar4 = 3;
        if (bVar1) {
          iVar4 = 4;
        }
        str0 = Nekki_SF2_GUI_Map_BattleButton__AIHEAPNKCIG((uint)bVar1,AOMBONOOJFP,method_00);
        str0_00 = Nekki_SF2_GUI_Map_BattleButton__AIHEAPNKCIG(2,AOMBONOOJFP,method_00);
        str0_01 = Nekki_SF2_GUI_Map_BattleButton__AIHEAPNKCIG(iVar4,AOMBONOOJFP,method_00);
      }
      else {
        iVar4 = 3;
        if (NKIAFKKEOBI != 0) {
          iVar4 = 4;
        }
        str0 = Nekki_SF2_GUI_Map_BattleButton__BIDLPMOMPND
                         ((BANHBMINMMP->fields)._OKDCDPMNNJJ_k__BackingField,NKIAFKKEOBI,method_00);
        str0_00 = Nekki_SF2_GUI_Map_BattleButton__BIDLPMOMPND
                            ((BANHBMINMMP->fields)._OKDCDPMNNJJ_k__BackingField,2,method_00);
        str0_01 = Nekki_SF2_GUI_Map_BattleButton__BIDLPMOMPND
                            ((BANHBMINMMP->fields)._OKDCDPMNNJJ_k__BackingField,iVar4,method_00);
      }
      pSVar3 = System_String__Concat(str0,StringLiteral_1377,pSVar3,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092,pSVar3,
                 (MethodInfo *)0x0);
      pSVar3 = System_String__Concat(str0_01,StringLiteral_1377,str2,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092,pSVar3,
                 (MethodInfo *)0x0);
      pSVar3 = OOMHDDBCBJP__FNGDEJNOBPK(BANHBMINMMP,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(str0_00,StringLiteral_1377,pSVar3,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092,pSVar3,
                 (MethodInfo *)0x0);
      pSVar3 = System_String__Concat(str0_01,StringLiteral_1377,str2,(MethodInfo *)0x0);
      (__this->fields).PNDBLOIHIJJ = pSVar3;
      thunk_FUN_01c20e04(&(__this->fields).PNDBLOIHIJJ);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

