// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$MoveSelection @ RVA 0x312D980

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__MoveSelection
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,
               int32_t MKACJBMOMHC,int32_t JJBKAMIAMNE,float LFJGFLNMBMC,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x20;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x28;
  }
  lVar1 = *(long *)((long)&__this->klass + lVar1);
  if (lVar1 != 0) {
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetSelection
              (__this,HEHMPFLAEGE,*(int *)(lVar1 + 0x40) + MKACJBMOMHC,
               *(int *)(lVar1 + 0x44) + JJBKAMIAMNE,LFJGFLNMBMC,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

