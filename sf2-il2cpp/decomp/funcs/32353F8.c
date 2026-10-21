// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$ODEBFIFHLBF @ RVA 0x32353F8

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__ODEBFIFHLBF
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,int32_t NMLPMBCLOHA,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this_01;
  UnityEngine_Events_UnityAction_T0__o *call;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *__this_02;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_03;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_array *pNVar3;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *__this_04;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_0456701e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_BDGMIPJPICN__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ControlsInfoCategoryTab>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ControlsInfoCategoryTab>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ControlsInfoCategoryTab>_AddListener__);
    DAT_0456701e = 1;
  }
  if (NMLPMBCLOHA != -1) {
                    /* try { // try from 03335488 to 0343548f has its CatchHandler @ 033354c8 */
    pUVar4 = (__this->fields)._TabPrefab;
                    /* try { // try from 03335490 to 03435493 has its CatchHandler @ 033354bc */
                    /* try { // try from 03335494 to 03435497 has its CatchHandler @ 033354b8 */
                    /* try { // try from 03335498 to 0343549b has its CatchHandler @ 0333521c */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0333549c to 0343549f has its CatchHandler @ 033354a8 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033354a0 to 034354df has its CatchHandler @ 0333521c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333549c with catch @ 033354a8
                        */
    pUVar4 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033353d0 with catch @ 033354ac
                        */
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033353b4 with catch @ 033354b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033353c0 with catch @ 033354b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03335494 with catch @ 033354b8
                        */
      __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03335490 with catch @ 033354bc
                        */
      __this_03 = (__this->fields)._TabsLayout;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333534c with catch @ 033354c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033352f0 with catch @ 033354c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03335488 with catch @ 033354c8
                        */
      if ((__this_03 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
         (parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 033354e0 to 034354e3 has its CatchHandler @ 033354f0 */
                    /* catch() { ... } // from try @ 033354e0 with catch @ 033354f0 */
        UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
                    /* try { // try from 033354f8 to 0343555f has its CatchHandler @ 03335574 */
        __this_01 = (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar4,
                               Method_UnityEngine_GameObject_GetComponent<ControlsInfoCategoryTab>__
                              );
        if (__this_01 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)0x0) {
          Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__set_Category
                    (__this_01,NMLPMBCLOHA,(MethodInfo *)0x0);
          __this_04 = (__this_01->fields)._OnClicked;
          call = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<ControlsInfoCategoryTab>_TypeInfo
                                   );
          UnityEngine_Events_UnityAction<object>___ctor();
          if (__this_04 !=
              (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_KMMLFEFAHNM_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_04,call,
                       Method_UnityEngine_Events_UnityEvent<ControlsInfoCategoryTab>_AddListener__);
            lVar2 = Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_Add__;
                    /* try { // try from 03335560 to 0343556b has its CatchHandler @ 0333521c */
            __this_02 = (__this->fields).HCJLLBHBLBE;
            if (__this_02 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
                    /* try { // try from 0333556c to 03435573 has its CatchHandler @ 03335574 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033354f8 with catch @ 03335574
                       catch(type#2 @ 00000000) { ... } // from try @ 0333556c with catch @ 03335574
                        */
              pNVar3 = (__this_02->fields)._items;
              (__this_02->fields)._version = (__this_02->fields)._version + 1;
              if (pNVar3 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_array *)0x0)
              {
                uVar1 = (__this_02->fields)._size;
                if (uVar1 < (uint)pNVar3->max_length) {
                  (__this_02->fields)._size = uVar1 + 1;
                  pNVar3->m_Items[(int)uVar1] = __this_01;
                  thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_01);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,
                           (Il2CppObject *)__this_01,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

