// Nekki.SF2.GUI.Map.LampsPanel$$OKELAKIIBAO @ RVA 0x32C9570

void Nekki_SF2_GUI_Map_LampsPanel__OKELAKIIBAO
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Component_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_Collections_Generic_List_Button__o *pSVar1;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567511 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Item__);
    DAT_04567511 = 1;
  }
  pSVar1 = (__this->fields).NPKEJHGOGOE;
  if (pSVar1 != (System_Collections_Generic_List_Button__o *)0x0) {
    if ((pSVar1->fields)._size < 1) {
      return;
    }
    __this_00 = (__this->fields)._lampOn;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).NPKEJHGOGOE;
      if ((((pSVar1 != (System_Collections_Generic_List_Button__o *)0x0) &&
           (__this_02 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar1,DPJIDNBJIBG,
                                   Method_System_Collections_Generic_List<Button>_get_Item__),
           __this_02 != (UnityEngine_Component_o *)0x0)) &&
          (__this_03 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0),
          __this_03 != (UnityEngine_Transform_o *)0x0)) &&
         (value = UnityEngine_Transform__get_position(__this_03,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

