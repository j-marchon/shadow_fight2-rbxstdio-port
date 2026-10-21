// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$EKFHHAGJBFB @ RVA 0x3234F9C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__EKFHHAGJBFB
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_ControlsInfoCategoryContent__o *result;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = __this;
  if ((DAT_04567019 & 1) == 0) {
    FUN_01bab630(&
                 Method_UnityEngine_Component_GetComponentsInChildren<ControlsInfoCategoryContent>__
                );
    auVar1 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<ControlsInfoCategoryContent>_Clear__
                         );
    DAT_04567019 = 1;
  }
  result = (__this->fields).GJACCPEHHFL;
  if (result != (System_Collections_Generic_List_ControlsInfoCategoryContent__o *)0x0) {
    length = (result->fields)._size;
    (result->fields)._size = 0;
    (result->fields)._version = (result->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(result->fields)._items,0,length,(MethodInfo *)0x0);
      result = (__this->fields).GJACCPEHHFL;
    }
    UnityEngine_Component__GetComponentsInChildren<object>
              ((UnityEngine_Component_o *)__this,true,(System_Collections_Generic_List_T__o *)result
               ,Method_UnityEngine_Component_GetComponentsInChildren<ControlsInfoCategoryContent>__)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}

