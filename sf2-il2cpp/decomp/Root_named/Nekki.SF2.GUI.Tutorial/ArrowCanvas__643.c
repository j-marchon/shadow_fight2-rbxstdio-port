// TypeDefIndex 643
// Namespace: Nekki.SF2.GUI.Tutorial
// public sealed class ArrowCanvas : MonoBehaviour
// Fields:
//   private static ArrowCanvas CBDMFFMCJBK; // 0x0
//   private Arrow _arrow; // 0x20

// ===== public static ArrowCanvas get_Instance()  [RVA 0x35CC13C]
// Nekki.SF2.GUI.Tutorial.ArrowCanvas$$get_Instance @ RVA 0x35CC13C

Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *
Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Tutorial_Arrow_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *pNVar3;
  
  if ((DAT_04568fab & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ArrowCanvas>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_15426/*"[ArrowCanvas]"*/);
    FUN_01bab630(&StringLiteral_10416/*"Prefabs/Tutorial/ArrowCanvas"*/);
    DAT_04568fab = 1;
  }
  pNVar3 = Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10416/*"Prefabs/Tutorial/ArrowCanvas"*/,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (__this,Method_UnityEngine_GameObject_GetComponent<ArrowCanvas>__);
      Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo->static_fields->CBDMFFMCJBK = pNVar3;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo->static_fields,pNVar3);
      pNVar3 = Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
      if ((pNVar3 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) &&
         (__this_00 = (pNVar3->fields)._arrow, __this_00 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0))
      {
        Nekki_SF2_GUI_Tutorial_Arrow__Init(__this_00,24.0,(MethodInfo *)0x0);
        pNVar3 = Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
        if (pNVar3 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
          Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(pNVar3,method_00);
          pNVar3 = Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
          if ((pNVar3 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) &&
             (pUVar2 = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_Object_o *)0x0)) {
            UnityEngine_Object__set_name(pUVar2,StringLiteral_15426/*"[ArrowCanvas]"*/,(MethodInfo *)0x0);
            pNVar3 = Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
            if (pNVar3 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
              pUVar2 = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
              UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
              goto LAB_036cc2f0;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_036cc2f0:
  return Nekki_SF2_GUI_Tutorial_ArrowCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public void ShowArrow(Transform INPDGILCEBL, Vector2 CPFDIFKIPBN, float HDLADBMEOCC = 0)  [RVA 0x35CC380]
// Nekki.SF2.GUI.Tutorial.ArrowCanvas$$ShowArrow @ RVA 0x35CC380

void Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
               (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this,UnityEngine_Transform_o *INPDGILCEBL,
               UnityEngine_Vector2_o CPFDIFKIPBN,float HDLADBMEOCC,MethodInfo *method)

{
  undefined1 auVar1 [12];
  bool bVar2;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  System_String_o *pSVar3;
  long lVar4;
  Nekki_SF2_GUI_Tutorial_Arrow_o *pNVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568fac & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInParent<Canvas>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9463/*"No canvas found in [{0}] parent"*/);
    DAT_04568fac = 1;
  }
  if (INPDGILCEBL != (UnityEngine_Transform_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponentInParent<object>
                  ((UnityEngine_Component_o *)INPDGILCEBL,
                   Method_UnityEngine_Component_GetComponentInParent<Canvas>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)INPDGILCEBL,(MethodInfo *)0x0);
      if (args != (System_Object_array *)0x0) {
        if ((pSVar3 != (System_String_o *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        {
          uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar7,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar3;
          thunk_FUN_01c20e04(args->m_Items,pSVar3);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_9463/*"No canvas found in [{0}] parent"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      pNVar5 = (__this->fields)._arrow;
      if (((pNVar5 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) &&
          (pUVar6 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
          x != (UnityEngine_Object_o *)0x0)) &&
         (parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar6,parent,false,(MethodInfo *)0x0);
        pNVar5 = (__this->fields)._arrow;
        if (pNVar5 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) {
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
          UVar8 = UnityEngine_Transform__get_position(INPDGILCEBL,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position(pUVar6,UVar8,(MethodInfo *)0x0);
            pNVar5 = (__this->fields)._arrow;
            if ((pNVar5 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              UVar8 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              value.fields.x = CPFDIFKIPBN.fields.x + UVar8.fields.x;
              value.fields.y = CPFDIFKIPBN.fields.y + UVar8.fields.y;
              value.fields.z = UVar8.fields.z + 0.0;
              UnityEngine_Transform__set_localPosition(pUVar6,value,(MethodInfo *)0x0);
              pNVar5 = (__this->fields)._arrow;
              if ((pNVar5 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                auVar1._4_8_ = 0;
                auVar1._0_4_ = HDLADBMEOCC;
                UnityEngine_Transform__set_localEulerAngles
                          (pUVar6,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
                pNVar5 = (__this->fields)._arrow;
                if (pNVar5 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) {
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
                  if (DAT_0455fa7f == '\0') {
                    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    DAT_0455fa7f = '\x01';
                  }
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale
                              (pUVar6,(UnityEngine_Vector3_o)
                                      (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).
                                      fields,(MethodInfo *)0x0);
                    pNVar5 = (__this->fields)._arrow;
                    if ((pNVar5 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) &&
                       (__this_00 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HideArrow()  [RVA 0x35CC310]
// Nekki.SF2.GUI.Tutorial.ArrowCanvas$$HideArrow @ RVA 0x35CC310

void Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow
               (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_Arrow_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  
  pNVar1 = (__this->fields)._arrow;
  if ((pNVar1 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._arrow;
    if (pNVar1 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35CC658]
// Nekki.SF2.GUI.Tutorial.ArrowCanvas$$.ctor @ RVA 0x35CC658

void Nekki_SF2_GUI_Tutorial_ArrowCanvas___ctor
               (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

