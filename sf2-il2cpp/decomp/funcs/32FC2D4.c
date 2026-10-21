// Nekki.SF2.GUI.Menu.MenuExpPanel$$DKLDHKNAEBO @ RVA 0x32FC2D4

void Nekki_SF2_GUI_Menu_MenuExpPanel__DKLDHKNAEBO
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  ProgressBar_o *pPVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  ACHLOMELAJE_o **ppAVar4;
  ACHLOMELAJE_o *pAVar5;
  
                    /* catch() { ... } // from try @ 033fc154 with catch @ 033fc2d4 */
                    /* catch() { ... } // from try @ 033fc110 with catch @ 033fc2d8 */
                    /* catch() { ... } // from try @ 033fc0b8 with catch @ 033fc2dc */
                    /* catch() { ... } // from try @ 033fc0c4 with catch @ 033fc2e0 */
                    /* catch() { ... } // from try @ 033fc2a8 with catch @ 033fc2e4 */
                    /* catch() { ... } // from try @ 033fc0f4 with catch @ 033fc2e8 */
                    /* catch() { ... } // from try @ 033fc09c with catch @ 033fc2ec */
  if ((DAT_045676e7 & 1) == 0) {
                    /* catch() { ... } // from try @ 033fc088 with catch @ 033fc2f0 */
                    /* catch() { ... } // from try @ 033fc074 with catch @ 033fc2f4 */
                    /* catch() { ... } // from try @ 033fc2a4 with catch @ 033fc2f8 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 033fc060 with catch @ 033fc2fc */
                    /* catch() { ... } // from try @ 033fc04c with catch @ 033fc300 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuExpPanel_EBKOKBBGNFM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuExpPanel_EPPLHMKADOJ__);
                    /* try { // try from 033fc318 to 034fc31b has its CatchHandler @ 033fc33c */
                    /* try { // try from 033fc31c to 034fc343 has its CatchHandler @ 033fbeec */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuExpPanel_LFLEJNHDICA__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 033fc318 with catch @ 033fc33c */
    DAT_045676e7 = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields)._levelHintButton;
                    /* try { // try from 033fc344 to 034fc34b has its CatchHandler @ 033fc360 */
  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
                    /* try { // try from 033fc34c to 034fc357 has its CatchHandler @ 033fbeec */
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
                    /* try { // try from 033fc358 to 034fc35f has its CatchHandler @ 033fc360 */
                    /* catch() { ... } // from try @ 033fc344 with catch @ 033fc360
                       catch() { ... } // from try @ 033fc358 with catch @ 033fc360 */
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
                    /* try { // try from 033fc364 to 034fc477 has its CatchHandler @ 033fc364
                       catch() { ... } // from try @ 033fc364 with catch @ 033fc364
                       catch() { ... } // from try @ 033fc56c with catch @ 033fc364
                       catch() { ... } // from try @ 033fc5c0 with catch @ 033fc364
                       catch() { ... } // from try @ 033fc60c with catch @ 033fc364
                       catch() { ... } // from try @ 033fc648 with catch @ 033fc364 */
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pPVar1 = (__this->fields)._barExp;
      if (pPVar1 != (ProgressBar_o *)0x0) {
        (*(pPVar1->klass->vtable)._6_Init.methodPtr)(pPVar1,(pPVar1->klass->vtable)._6_Init.method);
        pPVar1 = (__this->fields)._barExp;
        if (pPVar1 != (ProgressBar_o *)0x0) {
          (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
                    (0,0x3f800000,pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
          pPVar1 = (__this->fields)._barExp;
          if (pPVar1 != (ProgressBar_o *)0x0) {
            (*(pPVar1->klass->vtable)._7_set_Value.methodPtr)
                      (0,pPVar1,(pPVar1->klass->vtable)._7_set_Value.method);
            Nekki_SF2_GUI_Menu_MenuExpPanel__HideHint(__this,method_00);
            Nekki_SF2_GUI_Menu_MenuExpPanel__EBKOKBBGNFM(__this,method_01);
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            ppAVar4 = &(__this->fields).OKNKKHGBECG;
            *ppAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            thunk_FUN_01c20e04(ppAVar4);
            pAVar5 = *ppAVar4;
            pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
                    /* try { // try from 033fc478 to 034fc47f has its CatchHandler @ 033fc5f0 */
            if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
              ACHLOMELAJE__DDKBPJIHMDN(pAVar5,pSVar2,(MethodInfo *)0x0);
              pAVar5 = (__this->fields).OKNKKHGBECG;
                    /* try { // try from 033fc49c to 034fc4a7 has its CatchHandler @ 033fc5e8 */
              pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 033fc4ac to 034fc4b7 has its CatchHandler @ 033fc5e4 */
              System_Action___ctor();
              if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
                ACHLOMELAJE__ACGOPMHICJF(pAVar5,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 033fc4cc to 034fc4cf has its CatchHandler @ 033fc5d4 */
                Nekki_SF2_GUI_Menu_MenuExpPanel__EBKOKBBGNFM(__this,method_02);
                    /* try { // try from 033fc4d8 to 034fc4f3 has its CatchHandler @ 033fc5d8 */
                Nekki_SF2_GUI_Menu_MenuExpPanel__EPPLHMKADOJ(__this,method_03);
                return;
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

