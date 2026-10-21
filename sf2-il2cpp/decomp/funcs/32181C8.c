// Nekki.SF2.GUI.Map.BattlePrize$$BIGGGNJDJMO @ RVA 0x32181C8

void Nekki_SF2_GUI_Map_BattlePrize__BIGGGNJDJMO
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BattlePrizeElement__o *__this_00;
  UnityEngine_Component_o *__this_01;
  Il2CppObject *pIVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar2;
  UnityEngine_Transform_o *transform;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  int index;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04566ee4 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_get_Item__);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566ee4 = 1;
  }
  __this_00 = (__this->fields).JMAMFIMIIFA;
  (__this->fields).DKDLLBENAFE = 0.0;
  if (__this_00 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      fVar4 = 0.0;
    }
    else {
      index = 0;
      do {
        __this_01 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<BattlePrizeElement>_get_Item__
                              );
        if (__this_01 == (UnityEngine_Component_o *)0x0) goto LAB_03318354;
        fVar4 = (__this->fields).DKDLLBENAFE;
        pIVar1 = UnityEngine_Component__GetComponent<object>
                           (__this_01,Method_UnityEngine_Component_GetComponent<LayoutElement>__);
        if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03318354;
        fVar3 = (float)(*pIVar1->klass->vtable[0x23].methodPtr)
                                 (pIVar1,pIVar1->klass->vtable[0x23].method);
        __this_00 = (__this->fields).JMAMFIMIIFA;
        fVar4 = fVar4 + fVar3 + (__this->fields)._spacing;
        (__this->fields).DKDLLBENAFE = fVar4;
        if (__this_00 == (System_Collections_Generic_List_BattlePrizeElement__o *)0x0)
        goto LAB_03318354;
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    pUVar2 = (__this->fields)._layoutGroup;
    fVar4 = fVar4 - (__this->fields)._spacing;
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    (__this->fields).DKDLLBENAFE = fVar4;
    if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX(transform,0.0,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields)._layoutGroup;
      if (__this_02 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (__this_02,(__this->fields)._spacing,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._layoutGroup;
        if (((pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
            (__this_03 = (UnityEngine_RectTransform_o *)
                         UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
            __this_03 != (UnityEngine_RectTransform_o *)0x0)) &&
           (__this_03->klass == UnityEngine_RectTransform_TypeInfo)) {
          fVar4 = (__this->fields).DKDLLBENAFE;
          UVar5 = UnityEngine_RectTransform__get_rect(__this_03,(MethodInfo *)0x0);
          value.fields.y = UVar5.fields.m_Height;
          value.fields.x = fVar4;
          UnityEngine_RectTransform__set_sizeDelta(__this_03,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03318354:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

