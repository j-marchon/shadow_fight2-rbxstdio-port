// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$GGJKMIMPIDJ @ RVA 0x3553AC8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__GGJKMIMPIDJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar3;
  JMDPBFOCHHP_CMLEEJPGHNC_o *pJVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o UVar10;
  
  if ((DAT_04568b57 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1223);
    DAT_04568b57 = 1;
  }
  pJVar4 = (__this->fields).LLLCBLJMPIH;
  if (pJVar4 == (JMDPBFOCHHP_CMLEEJPGHNC_o *)0x0) {
    pNVar3 = (__this->fields).DICNIMJBGML;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
      pNVar5 = (__this->fields)._playerPos;
      pSVar1 = System_Int32__ToString((int)pNVar3 + 0x28,(MethodInfo *)0x0);
      if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03653ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                  (pNVar5,pSVar1,(pNVar5->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
  else {
    pNVar3 = (__this->fields).DICNIMJBGML;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
      pNVar5 = (__this->fields)._playerPos;
      if ((pNVar3->fields).HHOPNIKFJNE < (pJVar4->fields).AKAGFOOMLFB) {
        if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                    (pNVar5,StringLiteral_1223,(pNVar5->klass->vtable)._75_set_text.method);
          pNVar5 = (__this->fields)._points;
          UVar10 = CFBGPBCDAGA__NFFPCFGDOKG(0x50,0x50,0x50,0xff,(MethodInfo *)0x0);
          fVar9 = UVar10.fields.a;
          fVar8 = UVar10.fields.b;
          fVar7 = UVar10.fields.g;
          fVar6 = UVar10.fields.r;
          if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            UNRECOVERED_JUMPTABLE = (pNVar5->klass->vtable)._23_set_color.methodPtr;
            pMVar2 = (pNVar5->klass->vtable)._23_set_color.method;
LAB_03653bf8:
                    /* WARNING: Could not recover jumptable at 0x03653c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(fVar6,fVar7,fVar8,fVar9,pNVar5,pMVar2);
            return;
          }
        }
      }
      else {
        pSVar1 = System_Int32__ToString((int)pNVar3 + 0x28,(MethodInfo *)0x0);
        if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                    (pNVar5,pSVar1,(pNVar5->klass->vtable)._75_set_text.method);
          pNVar5 = (__this->fields)._points;
          if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            fVar6 = 0.0;
            fVar7 = 0.0;
            fVar8 = 0.0;
            UNRECOVERED_JUMPTABLE = (pNVar5->klass->vtable)._23_set_color.methodPtr;
            pMVar2 = (pNVar5->klass->vtable)._23_set_color.method;
            fVar9 = 1.0;
            goto LAB_03653bf8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

