// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$LFENGGKOJDO @ RVA 0x32E89EC

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,int32_t ACCIHBHMFPN,
               System_String_o *CJNHFNHJHPE,bool BDMNPNHEAEC,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  
  if ((DAT_04567627 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<GeneralPlayerInfoCell>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567627 = 1;
  }
  pUVar1 = (__this->fields)._cellPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar1,
                             Method_UnityEngine_GameObject_GetComponent<GeneralPlayerInfoCell>__),
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__Init
              (__this_00,ACCIHBHMFPN,CJNHFNHJHPE,BDMNPNHEAEC,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._simpleScroll;
    if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__AddItem
                (__this_01,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

