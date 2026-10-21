// Nekki.SF2.GUI.Scenes.GameLoaderScene$$SetLogoEnabled @ RVA 0x31D2304

void Nekki_SF2_GUI_Scenes_GameLoaderScene__SetLogoEnabled
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields).logo;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

