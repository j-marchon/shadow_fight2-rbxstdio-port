// Nekki.SF2.GUI.Profile.BattlePassPanel$$GNFAMCPHEEC @ RVA 0x3591C1C

void Nekki_SF2_GUI_Profile_BattlePassPanel__GNFAMCPHEEC
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int DHEJIHJMOGL;
  EGMONPGHHDP_o *pEVar1;
  System_Action_o *OGIPJCNPEOP;
  MethodInfo *extraout_x1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar2;
  
  if ((DAT_04568d7e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_PGMEJIGDFIK__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_12220);
    DAT_04568d7e = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (pEVar1 != (EGMONPGHHDP_o *)0x0) {
    DHEJIHJMOGL = EGMONPGHHDP__JEPAEBOBBMA(pEVar1,(MethodInfo *)0x0);
    if (DHEJIHJMOGL == -1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar1 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if (pEVar1 == (EGMONPGHHDP_o *)0x0) goto LAB_03691da4;
      DHEJIHJMOGL = EGMONPGHHDP__APIOBOAFKKN(pEVar1,(MethodInfo *)0x0);
    }
    if (__this != (Nekki_SF2_GUI_Profile_BattlePassPanel_o *)0x0) {
      (__this->fields).KEEBABPJPJK = DHEJIHJMOGL;
      if (DHEJIHJMOGL == -1) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_12220,(MethodInfo *)0x0);
      }
      else {
        (__this->fields).APPMGPBDDFD = true;
        pEVar2 = (__this->fields)._scroller;
        OGIPJCNPEOP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pEVar2 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03691da4;
        EnhancedUI_EnhancedScroller_EnhancedScroller__JumpToDataIndex
                  (pEVar2,DHEJIHJMOGL,0.5,0.5,true,0,0.0,OGIPJCNPEOP,0,true,(MethodInfo *)0x0);
      }
      pEVar2 = (__this->fields)._scroller;
      if (pEVar2 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
        EnhancedUI_EnhancedScroller_EnhancedScroller__RefreshActiveCellViews
                  (pEVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03691da4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

