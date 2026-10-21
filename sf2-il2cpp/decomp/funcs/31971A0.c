// Nekki.SF2.Core.Fights.Controls.ActionButtons$$SetBulletsCountToActBtn @ RVA 0x31971A0

void Nekki_SF2_Core_Fights_Controls_ActionButtons__SetBulletsCountToActBtn
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,int32_t CEJGCIAOOKI,
               int32_t PIOBNKACDJE,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  int32_t local_14;
  
  if (CEJGCIAOOKI == 0xd) {
    pNVar2 = (__this->fields)._raidChargeCount;
    local_14 = PIOBNKACDJE;
    pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
  }
  return;
}

