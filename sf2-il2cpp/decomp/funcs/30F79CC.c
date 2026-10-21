// Nekki.SF2.GUI.Dialogs.NotificationsGame$$ImmediateCloseNotifications @ RVA 0x30F79CC

void Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar2;
  
  if ((DAT_04566476 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566476 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 031f7a44 to 032f7a47 has its CatchHandler @ 031f7a50 */
                    /* try { // try from 031f7a48 to 032f7a6b has its CatchHandler @ 031f78d4 */
    pNVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f79bc with catch @ 031f7a4c
                        */
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f7a44 with catch @ 031f7a50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f79a0 with catch @ 031f7a54
                        */
    if ((pNVar2->fields).BDDIHIFJADE != false) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD(pNVar2,true,method_00);
      return;
    }
  }
                    /* try { // try from 031f7a6c to 032f7a6f has its CatchHandler @ 031f7aa0 */
                    /* try { // try from 031f7a70 to 032f7aaf has its CatchHandler @ 031f78d4 */
  return;
}

