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
    FUN_01bab630(&StringLiteral_15426);
    FUN_01bab630(&StringLiteral_10416);
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
                         (StringLiteral_10416,Method_UnityEngine_Resources_Load<GameObject>__);
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
            UnityEngine_Object__set_name(pUVar2,StringLiteral_15426,(MethodInfo *)0x0);
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

