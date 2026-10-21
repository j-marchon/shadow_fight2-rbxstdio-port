// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$MDLEKAACDNA @ RVA 0x3256810

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MDLEKAACDNA
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03356814 to 03456877 has its CatchHandler @ 03356814
                       catch() { ... } // from try @ 03356814 with catch @ 03356814
                       catch() { ... } // from try @ 033569f0 with catch @ 03356814
                       catch() { ... } // from try @ 03356a50 with catch @ 03356814
                       catch() { ... } // from try @ 03356aec with catch @ 03356814 */
  if ((DAT_04567162 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_TypeInfo);
    DAT_04567162 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
                    /* try { // try from 03356878 to 03456887 has its CatchHandler @ 03356a20 */
  return (System_Collections_IEnumerator_o *)__this_00;
}

