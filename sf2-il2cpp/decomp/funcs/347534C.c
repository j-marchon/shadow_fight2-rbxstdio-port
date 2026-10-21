// Nekki.SF2.GUI.Map.BattleButton$$HJMEGMDAINK @ RVA 0x347534C

void Nekki_SF2_GUI_Map_BattleButton__HJMEGMDAINK
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,UnityEngine_Vector3_o KEFILECBPMF,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localPosition(__this_00,KEFILECBPMF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

