// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$Show @ RVA 0x3256900

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Show
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03356904 to 0345690b has its CatchHandler @ 03356a0c */
  if ((DAT_04567166 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
                    /* try { // try from 0335692c to 0345692f has its CatchHandler @ 03356a08 */
    DAT_04567166 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
                    /* try { // try from 03356948 to 0345694b has its CatchHandler @ 03356a04 */
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat = true;
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0335696c to 0345696f has its CatchHandler @ 03356a00 */
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

