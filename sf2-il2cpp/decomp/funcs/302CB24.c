// Nekki.SF2.GUI.SimpleScroll$$ForceInvokeOnScroll @ RVA 0x302CB24

void Nekki_SF2_GUI_SimpleScroll__ForceInvokeOnScroll
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar1;
  System_Action_o *pSVar2;
  
  pSVar2 = (__this->fields).JFFDCLAAPBE;
  if (pSVar2 != (System_Action_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method);
                    /* WARNING: Could not recover jumptable at 0x0312cb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,pNVar1,(pSVar2->fields).super.super.method);
    return;
  }
  return;
}

