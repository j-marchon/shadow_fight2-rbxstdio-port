// Nekki.SF2.GUI.CompositeImage$$HFBOFKPLLBG @ RVA 0x301EF60

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_GUI_CompositeImage__HFBOFKPLLBG(Nekki_SF2_GUI_CompositeImage_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *p;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04565c37 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_7548);
    DAT_04565c37 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._baseImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._baseImage;
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pNVar3 = (Nekki_SF2_GUI_ResolutionImage_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pNVar3,pUVar2,
                        Method_UnityEngine_Object_Instantiate<ResolutionImage>__);
    return pNVar3;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_7548,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pNVar3 = (Nekki_SF2_GUI_ResolutionImage_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__),
     pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar2,p,(MethodInfo *)0x0);
      return pNVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

