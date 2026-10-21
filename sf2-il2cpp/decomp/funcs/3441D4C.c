// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$set_ProgressBarActive @ RVA 0x3441D4C

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_ProgressBarActive
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  ProgressBar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._progressBar;
  if ((__this_00 != (ProgressBar_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

