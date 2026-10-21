// Nekki.SF2.GUI.Common.Indicator$$SetLabelState @ RVA 0x34A0000

void Nekki_SF2_GUI_Common_Indicator__SetLabelState
               (Nekki_SF2_GUI_Common_Indicator_o *__this,bool HJEBKCDDBAB,MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._Label;
  if ((__this_00 != (UnityEngine_UI_Text_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,HJEBKCDDBAB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

