// Nekki.SF2.GUI.Dialogs.StoryDialog$$EGHBJLDNOMA @ RVA 0x32C139C

void Nekki_SF2_GUI_Dialogs_StoryDialog__EGHBJLDNOMA
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  System_Action_object__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  int32_t DNBBBGEENMM;
  LabelButton_o *pLVar2;
  
  if ((DAT_045674cb & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StoryDialog_FGBCBEAPMCH__);
    DAT_045674cb = 1;
  }
  DNBBBGEENMM = 3;
  if ((__this->fields).ECIEHGDKKGO == false) {
    DNBBBGEENMM = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,DNBBBGEENMM,(MethodInfo *)0x0);
  pLVar2 = (__this->fields).super._btnOK;
  pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (pLVar2 != (LabelButton_o *)0x0) {
    SFButton__RemoveEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
    pLVar2 = (__this->fields).super._btnOK;
    pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pLVar2 != (LabelButton_o *)0x0) {
      SFButton__RemoveEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).super._btnOK;
      pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pLVar2 != (LabelButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
        pLVar2 = (__this->fields).super._btnCancel;
        if ((pLVar2 != (LabelButton_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (__this_00,(__this->fields).ECIEHGDKKGO,(MethodInfo *)0x0);
          if ((__this->fields).ECIEHGDKKGO == false) {
LAB_033c1554:
                    /* WARNING: Could not recover jumptable at 0x033c1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                      (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
            return;
          }
          pLVar2 = (__this->fields).super._btnCancel;
          pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          if (pLVar2 != (LabelButton_o *)0x0) {
            SFButton__RemoveEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
            pLVar2 = (__this->fields).super._btnCancel;
            pSVar1 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pLVar2 != (LabelButton_o *)0x0) {
              SFButton__AddEventListener((SFButton_o *)pLVar2,2,pSVar1,(MethodInfo *)0x0);
              goto LAB_033c1554;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

