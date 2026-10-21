// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$Exists @ RVA 0x3441C00

bool Nekki_SF2_GUI_Dialogs_DownloadingScreen__Exists(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *x;
  
                    /* catch() { ... } // from try @ 03541b54 with catch @ 03541c00 */
                    /* catch() { ... } // from try @ 03541b44 with catch @ 03541c04 */
                    /* try { // try from 03541c1c to 03641c1f has its CatchHandler @ 03541ce8 */
                    /* try { // try from 03541c20 to 03641cf7 has its CatchHandler @ 03541a04 */
  if ((DAT_04568225 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568225 = 1;
  }
  x = Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

