// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$GetSelectionID @ RVA 0x312D6C0

int32_t Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                  (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,
                  MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x20;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x28;
  }
  lVar1 = *(long *)((long)&__this->klass + lVar1);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x40) + (__this->fields).FLHKJAKLFPH * *(int *)(lVar1 + 0x44);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

