// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_ProgressBarActive @ RVA 0x3441E1C

bool Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_ProgressBarActive
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  ProgressBar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* try { // try from 03541e1c to 03641e2f has its CatchHandler @ 03541ea4 */
  __this_00 = (__this->fields)._progressBar;
                    /* catch() { ... } // from try @ 03541dc0 with catch @ 03541e30
                       try { // try from 03541e30 to 03641e4b has its CatchHandler @ 03541a04 */
  if ((__this_00 != (ProgressBar_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 03541db0 with catch @ 03541e34 */
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

