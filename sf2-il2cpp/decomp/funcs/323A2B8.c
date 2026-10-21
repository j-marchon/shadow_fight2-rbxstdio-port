// Nekki.SF2.GUI.Map.MapContainer$$ShowUI @ RVA 0x323A2B8

void Nekki_SF2_GUI_Map_MapContainer__ShowUI
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._mapPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

