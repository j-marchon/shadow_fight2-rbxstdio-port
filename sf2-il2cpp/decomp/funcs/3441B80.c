// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_TitleAlias @ RVA 0x3441B80

System_String_o *
Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_TitleAlias
          (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568224 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568224 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
                    /* try { // try from 03541be0 to 03641be7 has its CatchHandler @ 03541d10 */
  if (bVar1) {
    pNVar3 = (__this->fields)._text;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03541bfc to 03641c1b has its CatchHandler @ 03541a04 */
      FUN_01bab8c8();
    }
    pSVar2 = *(System_String_o **)&(pNVar3->fields)._useLabelLineSpacing;
  }
                    /* try { // try from 03541bf0 to 03641bfb has its CatchHandler @ 03541d0c */
  return pSVar2;
}

