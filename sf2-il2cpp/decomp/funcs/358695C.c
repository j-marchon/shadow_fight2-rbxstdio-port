// Nekki.SF2.GUI.Map.MapScene$$OnApplicationPause @ RVA 0x358695C

void Nekki_SF2_GUI_Map_MapScene__OnApplicationPause
               (Nekki_SF2_GUI_Map_MapScene_o *__this,bool DGBEEJNJCHH,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar1;
  
  pNVar1 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    if ((pNVar1->fields).DBNNMLAONOF == false) {
      (__this->fields).CNKIBIHKLKA = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

