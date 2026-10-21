// Nekki.SF2.GUI.Dialogs.WebViewDialog$$OnClose @ RVA 0x333C14C

void Nekki_SF2_GUI_Dialogs_WebViewDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  GOLIJCLCCBA_o *pGVar1;
  System_Action_o *pSVar2;
  
  pGVar1 = (__this->fields).PAAIEEFEBKK;
  if ((pGVar1 != (GOLIJCLCCBA_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).MIMKJIKCPGP, pSVar2 != (System_Action_o *)0x0)) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}

