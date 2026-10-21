// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$Init @ RVA 0x31C7558

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               Nekki_SF2_GUI_Scripts_CheckBox_o *GPGOAFNNMPD,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  System_Action_BaseScrollItem__o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  Nekki_SF2_GUI_Scripts_CheckBox_o **ppNVar5;
  undefined8 uVar6;
  
  if ((DAT_04566c3e & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_HCOKJNGGENJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_JLBKGAANIAE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_OnScroll__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10920);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_10919);
    DAT_04566c3e = 1;
  }
  ppNVar5 = &(__this->fields).AAGPHDAMKOI;
  *ppNVar5 = GPGOAFNNMPD;
  thunk_FUN_01c20e04(ppNVar5,GPGOAFNNMPD);
  pNVar1 = (__this->fields)._scroll;
  uVar6 = NEON_fmov(0x3f800000,4);
  (__this->fields).FDMLNHPDHKJ = (float)(int)uVar6;
  (__this->fields).JKOANJLODNP = (float)(int)((ulong)uVar6 >> 0x20);
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    CJNHFNHJHPE = (System_Action_BaseScrollItem__o *)
                  thunk_FUN_01bda818(System_Action<BaseScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__add_OnScroll(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
      if ((pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._slideForward;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                    (pNVar2,StringLiteral_14092,StringLiteral_10919,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._slideForward;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                      (pNVar2,StringLiteral_14092,StringLiteral_10920,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._slideForward;
            if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 032c76c8 to 033c76cf has its CatchHandler @ 032c7b4c */
              pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032c76e4 to 033c76e7 has its CatchHandler @ 032c7ad8 */
                    /* try { // try from 032c76e8 to 033c76f3 has its CatchHandler @ 032c7b48 */
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 032c76f8 to 033c7703 has its CatchHandler @ 032c7b3c */
                UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar3,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._slideBackward;
                if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 032c7710 to 033c7717 has its CatchHandler @ 032c7b04 */
                  Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                            (pNVar2,StringLiteral_14092,StringLiteral_10919,(MethodInfo *)0x0);
                  pNVar2 = (__this->fields)._slideBackward;
                  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 032c7728 to 033c772f has its CatchHandler @ 032c7b30 */
                    /* try { // try from 032c7734 to 033c773b has its CatchHandler @ 032c7b00 */
                    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                              (pNVar2,StringLiteral_14092,StringLiteral_10920,(MethodInfo *)0x0);
                    pNVar2 = (__this->fields)._slideBackward;
                    if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                      pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                               (pNVar2->fields).super.super.m_OnClick;
                    /* try { // try from 032c774c to 033c7753 has its CatchHandler @ 032c7b24 */
                      pUVar3 = (UnityEngine_Events_UnityAction_o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032c7754 to 033c7763 has its CatchHandler @ 032c7b10 */
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 032c776c to 033c7773 has its CatchHandler @ 032c7b0c */
                        method_00 = (MethodInfo *)0x0;
                        UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 032c7784 to 033c778b has its CatchHandler @ 032c7b08 */
                    /* try { // try from 032c7790 to 033c7797 has its CatchHandler @ 032c7b2c */
                        Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LNAECHIOFNK
                                  (__this,true,method_00);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

