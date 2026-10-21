// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$GLCNPHCKIJP @ RVA 0x30287A8

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__GLCNPHCKIJP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,int32_t JEGMMDPFNIL,
               int32_t KMOHFJKJBMK,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  int32_t local_38;
  int32_t local_34;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312875c with catch @ 031287d4
                        */
  if ((DAT_04565c9e & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 031287ec to 03228803 has its CatchHandler @ 03128854 */
    FUN_01bab630(&StringLiteral_15827);
    DAT_04565c9e = 1;
  }
                    /* try { // try from 03128804 to 03228843 has its CatchHandler @ 031286e8 */
  pNVar1 = (__this->fields)._TaskRefreshADViewsLabel;
  local_34 = JEGMMDPFNIL;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  local_38 = KMOHFJKJBMK;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
  CJNHFNHJHPE = System_String__Format(StringLiteral_15827,arg0,arg1,(MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 03128844 to 03228853 has its CatchHandler @ 03128854 */
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031287ec with catch @ 03128854
                       catch() { ... } // from try @ 03128844 with catch @ 03128854 */
    pNVar1 = (__this->fields)._TaskRefreshADViewsLabel;
                    /* try { // try from 03128858 to 0322885b has its CatchHandler @ 03128864 */
                    /* try { // try from 0312885c to 03228867 has its CatchHandler @ 031286e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03128858 with catch @ 03128864
                        */
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,1 < KMOHFJKJBMK,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

