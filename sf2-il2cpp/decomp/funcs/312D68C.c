// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$SetItem @ RVA 0x312D68C

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetItem
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,UnityEngine_GameObject_o *IKKAMAMLIKA
               ,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((IKKAMAMLIKA != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(IKKAMAMLIKA,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent
              (__this_00,(__this->fields)._cellContainer,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

