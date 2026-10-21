// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$IEMBODIJFHH @ RVA 0x32ED260

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__IEMBODIJFHH
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,HBNENINHPGF_o *MDGCHBMIJJJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Menu_MenuMaterialUI_o *__this_01;
  System_Collections_Generic_List_MenuMaterialUI__o *__this_02;
  Nekki_SF2_GUI_Menu_MenuMaterialUI_array *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_0456764d & 1) == 0) {
                    /* try { // try from 033ed288 to 034ed297 has its CatchHandler @ 033ed3b4 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MenuMaterialUI>__);
                    /* try { // try from 033ed298 to 034ed2a3 has its CatchHandler @ 033ed3a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuMaterialUI>_Add__);
                    /* try { // try from 033ed2a8 to 034ed2c3 has its CatchHandler @ 033ed3a0 */
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456764d = 1;
  }
  pUVar4 = (__this->fields)._MaterialUIPrefab;
                    /* try { // try from 033ed2d0 to 034ed2df has its CatchHandler @ 033ed39c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033ed2e0 to 034ed37f has its CatchHandler @ 033ed0c8 */
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,Method_UnityEngine_GameObject_GetComponent<MenuMaterialUI>__);
      if (__this_01 != (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)0x0) {
        Nekki_SF2_GUI_Menu_MenuMaterialUI__set_Material(__this_01,MDGCHBMIJJJ,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<MenuMaterialUI>_Add__;
        __this_02 = (__this->fields).MIOLFPIJMDH;
        if (__this_02 != (System_Collections_Generic_List_MenuMaterialUI__o *)0x0) {
          pNVar3 = (__this_02->fields)._items;
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pNVar3 != (Nekki_SF2_GUI_Menu_MenuMaterialUI_array *)0x0) {
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pNVar3->max_length) {
                    /* try { // try from 033ed380 to 034ed387 has its CatchHandler @ 033ed3a8 */
                    /* try { // try from 033ed388 to 034ed38b has its CatchHandler @ 033ed0c8 */
              (__this_02->fields)._size = uVar1 + 1;
                    /* try { // try from 033ed38c to 034ed38f has its CatchHandler @ 033ed398 */
              pNVar3->m_Items[(int)uVar1] = __this_01;
                    /* try { // try from 033ed390 to 034ed3d3 has its CatchHandler @ 033ed0c8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed38c with catch @ 033ed398
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed2d0 with catch @ 033ed39c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed2a8 with catch @ 033ed3a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed298 with catch @ 033ed3a4
                        */
              thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_01);
              return;
            }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed380 with catch @ 033ed3a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed224 with catch @ 033ed3ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed1c8 with catch @ 033ed3b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ed288 with catch @ 033ed3b4
                        */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

