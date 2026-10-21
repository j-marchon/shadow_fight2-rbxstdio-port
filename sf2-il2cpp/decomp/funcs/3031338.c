// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_TouchHandler @ RVA 0x3031338

Nekki_SF2_GUI_Common_TouchHandler_o *
Nekki_SF2_GUI_Shop_ParameterScrollItem__get_TouchHandler
          (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_TouchHandler_o **ppNVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Il2CppObject *pIVar3;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_TouchHandler_o *pNVar4;
  undefined8 uVar5;
  UnityEngine_Vector2_o UVar6;
  
  if ((DAT_04565d00 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<Image>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TouchHandler>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13895);
    DAT_04565d00 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).NDPGGBECMDD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppNVar1 = &(__this->fields).NDPGGBECMDD;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,StringLiteral_13895,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
      pIVar3 = UnityEngine_GameObject__AddComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_AddComponent<Image>__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        uVar5 = 0x3f800000;
        (*pIVar3->klass->vtable[0x17].methodPtr)
                  (0x3f800000,0x3f800000,0x3f800000,0,pIVar3,pIVar3->klass->vtable[0x17].method);
        (*(__this->klass->vtable)._51_get_Size.methodPtr)
                  (__this,(__this->klass->vtable)._51_get_Size.method);
        __this_02 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                              ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            UVar6.fields.y = (float)uVar5;
            UnityEngine_RectTransform__set_sizeDelta(__this_01,UVar6,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            UnityEngine_Transform__SetParent
                      ((UnityEngine_Transform_o *)__this_01,parent,false,(MethodInfo *)0x0);
            UnityEngine_Transform__SetAsLastSibling
                      ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
            pNVar4 = (Nekki_SF2_GUI_Common_TouchHandler_o *)
                     UnityEngine_GameObject__AddComponent<object>
                               (__this_00,Method_UnityEngine_GameObject_AddComponent<TouchHandler>__
                               );
            (__this->fields).NDPGGBECMDD = pNVar4;
            thunk_FUN_01c20e04(ppNVar1,pNVar4);
            goto LAB_031314ec;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031314ec:
  return *ppNVar1;
}

