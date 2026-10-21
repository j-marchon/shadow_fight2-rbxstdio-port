// Nekki.SF2.GUI.Fight.RewardPanel$$GKJKNKCEMPN @ RVA 0x33210DC

Nekki_SF2_GUI_Fight_RewardPanelItem_o *
Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN
          (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,System_String_o *HCAAAAMDCNO,
          System_String_o *EHNFGMGKCHO,float PFIFJCMHGGB,int32_t ABMDLEIKNBO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_RewardPanelItem__o *__this_00;
  Nekki_SF2_GUI_Fight_RewardPanelItem_array *pNVar4;
  Nekki_SF2_GUI_Fight_RewardPanelItem_o *pNVar5;
  UnityEngine_RectTransform_o *pUVar6;
  
  if ((DAT_0456784b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<RewardPanelItem>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456784b = 1;
  }
  pNVar5 = (__this->fields)._RewardPanelItemPrefab;
  pUVar6 = (__this->fields)._Panel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar6 = (__this->fields)._Panel;
  }
  else {
    pUVar6 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar5 = (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pNVar5,(UnityEngine_Transform_o *)pUVar6,false,
                      Method_UnityEngine_Object_Instantiate<RewardPanelItem>__);
  if (pNVar5 != (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)0x0) {
    Nekki_SF2_GUI_Fight_RewardPanelItem__Init
              (pNVar5,HCAAAAMDCNO,EHNFGMGKCHO,PFIFJCMHGGB,ABMDLEIKNBO,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<RewardPanelItem>_Add__;
    __this_00 = (__this->fields).MAHKJDKCNPC;
    if (__this_00 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
      pNVar4 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar4 != (Nekki_SF2_GUI_Fight_RewardPanelItem_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = pNVar5;
          thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,pNVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return pNVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

