// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$PGEMCFICNLA @ RVA 0x303424C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__PGEMCFICNLA
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ChatSFView__o *pSVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *exists;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04565d22 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<ChatSFView>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d22 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).CACFIIMNJMG;
  if (pSVar2 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
    if (1 < (pSVar2->fields)._size) {
      __this_00 = (UnityEngine_Component_o *)
                  DJNBJHPDKDP__KIKGKKGDCKK<object>
                            ((System_Collections_Generic_List_T__o *)pSVar2,
                             Method_DJNBJHPDKDP_KIKGKKGDCKK<ChatSFView>__);
      pSVar2 = (__this->fields).CACFIIMNJMG;
      if ((pSVar2 == (System_Collections_Generic_List_ChatSFView__o *)0x0) ||
         (System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar2,(pSVar2->fields)._size + -1
                     ,Method_System_Collections_Generic_List<ChatSFView>_RemoveAt__),
         __this_00 == (UnityEngine_Component_o *)0x0)) goto LAB_03134370;
      pUVar3 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
    exists = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH(__this,method);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if ((exists != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)exists,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03134370:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

