// Nekki.SF2.GUI.Shop.ParametersPanelContent$$PFFPCAEKIDC @ RVA 0x30F8AF0

void Nekki_SF2_GUI_Shop_ParametersPanelContent__PFFPCAEKIDC
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,IHDFIJGDCBL_o *BHOLKPLJMNI,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_00;
  FPLCEOJCPOD_o *__this_01;
  UnityEngine_Object_o *__this_02;
  System_Collections_Generic_List_BaseScrollItem__o *__this_03;
  PJKHAJKEHEL_o *pPVar4;
  Nekki_SF2_GUI_BaseScrollItem_array *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  int32_t local_24;
  
  if ((DAT_04566482 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10128);
    DAT_04566482 = 1;
  }
  pUVar6 = (__this->fields)._scrollItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar6 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar6,Method_UnityEngine_Object_Instantiate<GameObject>__);
  __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)0x0;
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (pUVar6,Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__)
    ;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)(ulong)bVar3;
    if (!bVar3) {
      return;
    }
    local_24 = 0;
    pPVar4 = (__this->fields).GFGOPEKNBPF;
    if ((pPVar4 != (PJKHAJKEHEL_o *)0x0) && (BHOLKPLJMNI != (IHDFIJGDCBL_o *)0x0)) {
      __this_01 = (pPVar4->fields).ACHJNNOKEDK;
      __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)0x0;
      if (__this_01 != (FPLCEOJCPOD_o *)0x0) {
        bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                          (__this_01,(BHOLKPLJMNI->fields).NPFMOEOIEKM,&local_24,true,false,
                           (MethodInfo *)0x0);
        __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)(ulong)bVar3;
        if (__this_00 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0) {
          __this_02 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)
                      System_String__Format
                                (StringLiteral_10128,
                                 (Il2CppObject *)(BHOLKPLJMNI->fields).NPFMOEOIEKM,(MethodInfo *)0x0
                                );
          if (__this_02 != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_name(__this_02,(System_String_o *)__this_03,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
                      (__this_00,(BHOLKPLJMNI->fields).NPFMOEOIEKM,(BHOLKPLJMNI->fields).OPBJKMDPKLG
                       ,local_24,local_24,false,(System_String_o *)0x0,1.0,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<BaseScrollItem>_Add__;
            __this_03 = (__this->fields).DNHMKKDMGFA;
            if (__this_03 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
              pNVar5 = (__this_03->fields)._items;
              (__this_03->fields)._version = (__this_03->fields)._version + 1;
              if (pNVar5 != (Nekki_SF2_GUI_BaseScrollItem_array *)0x0) {
                uVar1 = (__this_03->fields)._size;
                if (uVar1 < (uint)pNVar5->max_length) {
                  (__this_03->fields)._size = uVar1 + 1;
                  pNVar5->m_Items[(int)uVar1] = (Nekki_SF2_GUI_BaseScrollItem_o *)__this_00;
                  thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,__this_00);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,
                           (Il2CppObject *)__this_00,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this_03);
}

