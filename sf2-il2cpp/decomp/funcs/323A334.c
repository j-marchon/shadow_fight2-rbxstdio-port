// Nekki.SF2.GUI.Map.MapContainer$$SetLampsAndNameEnabled @ RVA 0x323A334

void Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._lampsPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CMPKOOEKFKF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

