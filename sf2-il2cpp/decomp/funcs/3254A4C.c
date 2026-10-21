// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$HEMCHIANOBD @ RVA 0x3254A4C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__HEMCHIANOBD
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  ulong uVar3;
  AKOMJPINHEN_o *pAVar4;
  Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this_00;
  int DFIBGGDJPLM;
  
  if ((DAT_04567155 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567155 = 1;
  }
  uVar3 = (*(__this->klass->vtable)._15_IsOpened.methodPtr)
                    (__this,(__this->klass->vtable)._15_IsOpened.method);
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 03354a98 to 03454a9b has its CatchHandler @ 03354a9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a38 with catch @ 03354a9c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03354a98 with catch @ 03354a9c
                       try { // try from 03354a9c to 03454ac7 has its CatchHandler @ 033548d8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a08 with catch @ 03354aa0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a0c with catch @ 03354aa4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a20 with catch @ 03354aa8
                        */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354a90 with catch @ 03354aac
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033549e4 with catch @ 03354ab0
                        */
    pAVar4 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
    if (pAVar4 == (AKOMJPINHEN_o *)0x0) goto LAB_03354b00;
    iVar1 = AKOMJPINHEN__ILGBGMMJHMK(pAVar4,2,(MethodInfo *)0x0);
                    /* try { // try from 03354ac8 to 03454acb has its CatchHandler @ 03354aec */
                    /* try { // try from 03354acc to 03454af3 has its CatchHandler @ 033548d8 */
    pAVar4 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
    if (pAVar4 == (AKOMJPINHEN_o *)0x0) goto LAB_03354b00;
    iVar2 = AKOMJPINHEN__ILGBGMMJHMK(pAVar4,3,(MethodInfo *)0x0);
    DFIBGGDJPLM = iVar2 + iVar1;
  }
  else {
                    /* try { // try from 03354a90 to 03454a93 has its CatchHandler @ 03354aac */
    DFIBGGDJPLM = 0;
                    /* try { // try from 03354a94 to 03454a97 has its CatchHandler @ 033548d8 */
  }
  __this_00 = (__this->fields)._btnHandle;
                    /* catch() { ... } // from try @ 03354ac8 with catch @ 03354aec */
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *)0x0) {
                    /* try { // try from 03354af4 to 03454afb has its CatchHandler @ 03354b10 */
                    /* try { // try from 03354afc to 03454b07 has its CatchHandler @ 033548d8 */
    Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__SetUnreadedMsgCount
              (__this_00,DFIBGGDJPLM,(MethodInfo *)0x0);
    return;
  }
LAB_03354b00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

