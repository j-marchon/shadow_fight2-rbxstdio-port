// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_TitleText @ RVA 0x34420D0

System_String_o *
Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_TitleText
          (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
                    /* try { // try from 035420dc to 036420e7 has its CatchHandler @ 0354222c */
                    /* try { // try from 035420e8 to 0364211f has its CatchHandler @ 03541ea8 */
  if ((DAT_0456822c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456822c = 1;
    method = extraout_x1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03541ff8 with catch @ 03542104
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03541fe8 with catch @ 03542108
                        */
  pNVar3 = (__this->fields)._text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03542120 to 03642123 has its CatchHandler @ 03542208 */
                    /* try { // try from 03542124 to 03642217 has its CatchHandler @ 03541ea8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._text;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03542148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pNVar3->klass->vtable)._74_get_text.methodPtr)
                         (pNVar3,(pNVar3->klass->vtable)._74_get_text.method);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (System_String_o *)0x0;
}

