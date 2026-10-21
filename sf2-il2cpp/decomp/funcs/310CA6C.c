// Nekki.SF2.GUI.Profile.TrickCell$$Init @ RVA 0x310CA6C

void Nekki_SF2_GUI_Profile_TrickCell__Init
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,KCLPNDAPADO_o *EKBENIDNAEE,
               JEIEEMKCNOJ_o *JJHEGPBBMLG,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_TrickSubItem_o *__this_00;
  MethodInfo *method_00;
  JEIEEMKCNOJ_o **ppJVar1;
  
  (*(__this->klass->vtable)._17_Clear.methodPtr)(__this,(__this->klass->vtable)._17_Clear.method);
  Nekki_SF2_GUI_Profile_TrickCell__GJNMBGMOEHH(__this,method_00);
  ppJVar1 = &(__this->fields).super.MKAAKGJNBHI;
  *ppJVar1 = JJHEGPBBMLG;
  thunk_FUN_01c20e04(ppJVar1,JJHEGPBBMLG);
  if ((EKBENIDNAEE != (KCLPNDAPADO_o *)0x0) &&
     (__this_00 = (__this->fields)._trickSubItem,
     __this_00 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0)) {
    Nekki_SF2_GUI_Profile_TrickSubItem__Init
              (__this_00,(EKBENIDNAEE->fields).KPDPJONADPJ,EKBENIDNAEE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

