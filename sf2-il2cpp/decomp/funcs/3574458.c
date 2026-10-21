// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$Init @ RVA 0x3574458

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__Init
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  ProgressBar_o *pPVar2;
  EGMONPGHHDP_o *pEVar3;
  System_Delegate_o *b;
  MethodInfo *extraout_x1;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Action_o **ppSVar5;
  System_Action_o *pSVar6;
  
  if ((DAT_04568c74 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_MMCHECDCGKF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_OPPAPHIKOLL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1888);
    DAT_04568c74 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields)._hintButton;
  if (pSVar4 != (SFButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._levelProgress;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                  (pNVar1,StringLiteral_1888,(pNVar1->klass->vtable)._75_set_text.method);
        pPVar2 = (__this->fields)._barPrice;
        (__this->fields).IKLIGGACIMH = false;
        if (pPVar2 != (ProgressBar_o *)0x0) {
          (*(pPVar2->klass->vtable)._6_Init.methodPtr)
                    (pPVar2,(pPVar2->klass->vtable)._6_Init.method);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar3 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          if (pEVar3 != (EGMONPGHHDP_o *)0x0) {
            ppSVar5 = &(pEVar3->fields)._MJGJOMCLIPN_k__BackingField;
            pSVar6 = *ppSVar5;
            b = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            pSVar6 = (System_Action_o *)
                     System_Delegate__Combine((System_Delegate_o *)pSVar6,b,(MethodInfo *)0x0);
            if ((pSVar6 != (System_Action_o *)0x0) && (pSVar6->klass != System_Action_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar6);
            }
            *ppSVar5 = pSVar6;
            thunk_FUN_01c20e04(ppSVar5,pSVar6);
            pPVar2 = (__this->fields)._barPrice;
            if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036745f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pPVar2->klass->vtable)._6_Init.methodPtr)
                        (pPVar2,(pPVar2->klass->vtable)._6_Init.method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

