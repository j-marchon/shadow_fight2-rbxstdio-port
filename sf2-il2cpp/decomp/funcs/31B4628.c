// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$HCOPLDHOCBA @ RVA 0x31B4628

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__HCOPLDHOCBA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *pNVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o **ppNVar2;
  
  if ((DAT_04566ba0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<FindClanWidget>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<FindClanWidget>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ba0 = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields)._findClanWidgetPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  __this_00 = (UnityEngine_Component_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)pNVar1,
                         Method_UnityEngine_Object_Instantiate<FindClanWidget>__);
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)
             UnityEngine_Component__GetComponent<object>
                       (__this_00,Method_UnityEngine_Component_GetComponent<FindClanWidget>__);
    ppNVar2 = &(__this->fields).OFPMMKBLEGH;
    *ppNVar2 = pNVar1;
    thunk_FUN_01c20e04(ppNVar2,pNVar1);
    if (*ppNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__Init(*ppNVar2,(MethodInfo *)0x0);
      if (*ppNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
        __this_02 = (__this->fields).super.super._content;
        if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
           (parent = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
          if (*ppNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__SearchRecommended
                      (*ppNVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

