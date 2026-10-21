// Nekki.SF2.GUI.Map.InfoBattle$$JLCLHIINBBM @ RVA 0x34181CC

void Nekki_SF2_GUI_Map_InfoBattle__JLCLHIINBBM
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnSkipFight;
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

