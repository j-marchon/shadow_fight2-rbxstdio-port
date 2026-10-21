// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$ForcedImmediateScrollForward @ RVA 0x330EFA0

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ForcedImmediateScrollForward
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  MethodInfo *extraout_x1;
  
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    (*(pNVar1->klass->vtable)._41_StopMovement.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._41_StopMovement.method);
    pNVar1 = (__this->fields)._scroll;
    method = extraout_x1;
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems(pNVar1,1,0.0,8,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

