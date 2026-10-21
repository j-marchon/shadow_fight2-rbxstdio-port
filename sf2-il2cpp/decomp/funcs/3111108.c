// Nekki.SF2.GUI.TableViewScroll$$Init @ RVA 0x3111108

void Nekki_SF2_GUI_TableViewScroll__Init(Nekki_SF2_GUI_TableViewScroll_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  undefined8 uVar5;
  UnityEngine_RectTransform_o **ppUVar6;
  
  if ((DAT_04566581 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_var);
    FUN_01bab630(&System_Type___TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_12793);
    DAT_04566581 = 1;
  }
  components = (System_Type_array *)FUN_01bab718(System_Type___TypeInfo,1);
  handle = UnityEngine_RectTransform_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((pSVar1 != (System_Type_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar1,(((components->obj).klass)->_1).element_class), lVar2 == 0
       )) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    components->m_Items[0] = pSVar1;
    thunk_FUN_01c20e04(components->m_Items,pSVar1);
    pUVar3 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(pUVar3,StringLiteral_12793,components,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
      ppUVar6 = &(__this->fields).super.m_Content;
      *ppUVar6 = pUVar4;
      thunk_FUN_01c20e04(ppUVar6,pUVar4);
      pUVar4 = *ppUVar6;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = (UnityEngine_Transform_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
         pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  ((UnityEngine_Transform_o *)pUVar4,parent,false,(MethodInfo *)0x0);
        pUVar4 = *ppUVar6;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
        }
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_offsetMin
                    (pUVar4,(UnityEngine_Vector2_o)
                            (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar4 = *ppUVar6;
          if (DAT_0455fa75 == '\0') {
            FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
            DAT_0455fa75 = '\x01';
          }
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_offsetMax
                      (pUVar4,(UnityEngine_Vector2_o)
                              (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            if ((*ppUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__AddComponent<object>
                        (pUVar3,Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
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

