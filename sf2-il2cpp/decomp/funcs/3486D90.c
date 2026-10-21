// Nekki.SF2.GUI.Shop.ParametersPanel$$PFFPCAEKIDC @ RVA 0x3486D90

void Nekki_SF2_GUI_Shop_ParametersPanel__PFFPCAEKIDC
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,IHDFIJGDCBL_o *BHOLKPLJMNI,
               int32_t KNAENPACAKN,int32_t LHBMDHAGMIO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_01;
  System_Collections_Generic_List_ParameterScrollItem__o *__this_02;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_03;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_array *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
                    /* try { // try from 03586d94 to 03686da3 has its CatchHandler @ 03587060 */
  if ((DAT_045683b9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
                    /* try { // try from 03586dd8 to 03686de3 has its CatchHandler @ 03587104 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045683b9 = 1;
  }
  pUVar4 = (__this->fields)._ItemPrefab;
                    /* try { // try from 03586e08 to 03686e0b has its CatchHandler @ 035870d0 */
                    /* try { // try from 03586e0c to 03686f9f has its CatchHandler @ 0358659c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    __this_03 = (__this->fields)._LayoutGroup;
    if ((__this_03 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
       (parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,
                             Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
      if ((BHOLKPLJMNI != (IHDFIJGDCBL_o *)0x0) &&
         (__this_01 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0)) {
        Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
                  (__this_01,(BHOLKPLJMNI->fields).NPFMOEOIEKM,(BHOLKPLJMNI->fields).OPBJKMDPKLG,
                   KNAENPACAKN,LHBMDHAGMIO,true,(System_String_o *)0x0,1.0,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<ParameterScrollItem>_Add__;
        __this_02 = (__this->fields).HEHMAPDMHIG;
        if (__this_02 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
          pNVar3 = (__this_02->fields)._items;
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pNVar3 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_array *)0x0) {
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

