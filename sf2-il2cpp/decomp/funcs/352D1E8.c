// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$OnDestroy @ RVA 0x352D1E8

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__OnDestroy
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  System_Action_o *pSVar1;
  System_Action_o **ppSVar2;
  
  ppSVar2 = &(__this->fields).MOIEPPGDHNH;
  pSVar1 = *ppSVar2;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    *ppSVar2 = (System_Action_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
  }
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

