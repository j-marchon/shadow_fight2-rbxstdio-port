// Nekki.SF2.GUI.Dialogs.StoryDialog$$AOHAKEEHGKG @ RVA 0x32C18CC

void Nekki_SF2_GUI_Dialogs_StoryDialog__AOHAKEEHGKG
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Action_object__o *pSVar2;
  LabelButton_o *pLVar3;
  
  if ((DAT_045674ce & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    DAT_045674ce = 1;
  }
  ppSVar1 = &(__this->fields).super.NIEHEOKFPAN;
  *ppSVar1 = EHNFGMGKCHO;
  thunk_FUN_01c20e04(ppSVar1,EHNFGMGKCHO);
  (*(__this->klass->vtable)._15_ACICKHKFILK.methodPtr)
            (__this,(__this->fields).super._btnOK,1,(__this->klass->vtable)._15_ACICKHKFILK.method);
  pLVar3 = (__this->fields).super._btnOK;
  pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (pLVar3 != (LabelButton_o *)0x0) {
    SFButton__RemoveEventListener((SFButton_o *)pLVar3,2,pSVar2,(MethodInfo *)0x0);
    pLVar3 = (__this->fields).super._btnOK;
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pLVar3 != (LabelButton_o *)0x0) {
      SFButton__RemoveEventListener((SFButton_o *)pLVar3,2,pSVar2,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).super._btnOK;
      pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pLVar3 != (LabelButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)pLVar3,2,pSVar2,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x033c1a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                  (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

