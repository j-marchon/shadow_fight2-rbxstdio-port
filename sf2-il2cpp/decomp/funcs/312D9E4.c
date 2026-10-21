// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$SetPlayerActive @ RVA 0x312D9E4

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetPlayerActive
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t FKIGDGJPIAC,bool CACBHBLOGPA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  
  if (FKIGDGJPIAC == 0) {
    __this_00 = (__this->fields)._playerOne;
  }
  else {
    __this_00 = (__this->fields)._playerTwo;
  }
  if ((__this_00 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_01,CACBHBLOGPA,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection(__this,FKIGDGJPIAC,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

