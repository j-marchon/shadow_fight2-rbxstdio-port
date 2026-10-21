// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$EAHCPJLBHEJ @ RVA 0x315B020

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__EAHCPJLBHEJ
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._danImage;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

