// Nekki.SF2.GUI.Fight.RoundsPanel$$Init @ RVA 0x352EC58

void Nekki_SF2_GUI_Fight_RoundsPanel__Init
               (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,int32_t DKLNFMKFLFJ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  System_Collections_Generic_List_ResolutionImage__o *__this_02;
  UnityEngine_RectTransform_o *pUVar6;
  Nekki_SF2_GUI_ResolutionImage_array *pNVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_o UVar10;
  
                    /* try { // try from 0362ec5c to 0372ec5f has its CatchHandler @ 0362ec88 */
                    /* try { // try from 0362ec60 to 0372ec8f has its CatchHandler @ 0362eb44 */
  if ((DAT_04568a47 & 1) == 0) {
                    /* catch() { ... } // from try @ 0362ec5c with catch @ 0362ec88 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImageLE>__);
                    /* try { // try from 0362ec90 to 0372ec97 has its CatchHandler @ 0362ecac */
                    /* try { // try from 0362ec98 to 0372eca3 has its CatchHandler @ 0362eb44 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 0362eca4 to 0372ecab has its CatchHandler @ 0362ecac */
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Add__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0362ec90 with catch @ 0362ecac
                       catch(type#2 @ 00000000) { ... } // from try @ 0362eca4 with catch @ 0362ecac
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_11431);
    DAT_04568a47 = 1;
  }
  if (DKLNFMKFLFJ < 1) {
    fVar9 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    do {
      __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_0362eef0;
      UnityEngine_Object__set_name(__this_00,StringLiteral_11431,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0362eef0;
      UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            ((UnityEngine_GameObject_o *)__this_00,
                             Method_UnityEngine_GameObject_AddComponent<ResolutionImageLE>__);
      if (__this_01 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0362eef0;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_01,(__this->fields)._roundUndone,(MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._45_SetNativeSize.methodPtr)
                (__this_01,(__this_01->klass->vtable)._45_SetNativeSize.method);
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0362eef0;
      UnityEngine_Transform__SetAsFirstSibling(pUVar5,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<ResolutionImage>_Add__;
      __this_02 = (__this->fields).BPPCPHCDICD;
      if (__this_02 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) goto LAB_0362eef0;
      pNVar7 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pNVar7 == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) goto LAB_0362eef0;
      uVar1 = (__this_02->fields)._size;
      if (uVar1 < (uint)pNVar7->max_length) {
        (__this_02->fields)._size = uVar1 + 1;
        pNVar7->m_Items[(int)uVar1] = __this_01;
        thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0362eef0;
      UVar10 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
      fVar3 = UVar10.fields.y;
      if (UVar10.fields.y <= fVar8) {
        fVar3 = fVar8;
      }
      fVar8 = fVar3;
      DKLNFMKFLFJ = DKLNFMKFLFJ + -1;
      fVar9 = fVar9 + UVar10.fields.x;
    } while (DKLNFMKFLFJ != 0);
  }
  pUVar6 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (pUVar6->klass != UnityEngine_RectTransform_TypeInfo) {
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    UVar10.fields.y = fVar8;
    UVar10.fields.x = fVar9;
    UnityEngine_RectTransform__set_sizeDelta(pUVar6,UVar10,(MethodInfo *)0x0);
    return;
  }
LAB_0362eef0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

