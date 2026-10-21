// Nekki.SF2.GUI.Map.MapContainer$$UpdateName @ RVA 0x323A154

void Nekki_SF2_GUI_Map_MapContainer__UpdateName
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_String_o *ABKAJJOOIHM,
               MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,ABKAJJOOIHM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

