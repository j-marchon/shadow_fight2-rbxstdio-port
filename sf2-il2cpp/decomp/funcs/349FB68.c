// Nekki.SF2.GUI.HintBoxAutoKilled$$Init @ RVA 0x349FB68

void Nekki_SF2_GUI_HintBoxAutoKilled__Init
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,float NMFKJBOAOLK,float DAPHCPICAAC,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  Nekki_SF2_GUI_HintBox__Init
            ((Nekki_SF2_GUI_HintBox_o *)__this,NMFKJBOAOLK,DAPHCPICAAC,(MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

