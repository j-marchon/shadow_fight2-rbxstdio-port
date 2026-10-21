// CGFIAJGHIPL$$MDCDPEPHAIC @ RVA 0x315FE04

void CGFIAJGHIPL__MDCDPEPHAIC(EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o **ppUVar5;
  UnityEngine_Object_o *pUVar6;
  PJKHAJKEHEL_o *OKBIKHHKOEN;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this;
  System_Collections_Generic_List_ModelContainer__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_Core_Fights_ModelContainer_array *pNVar7;
  UnityEngine_Transform_o *pUVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector2_o CJNHFNHJHPE;
  
                    /* try { // try from 0325fe04 to 0335fe0b has its CatchHandler @ 0325fe0c */
                    /* catch() { ... } // from try @ 0325fd90 with catch @ 0325fe0c
                       catch() { ... } // from try @ 0325fe04 with catch @ 0325fe0c */
  if ((DAT_04566884 & 1) == 0) {
    FUN_01bab630(&CGFIAJGHIPL_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ModelContainer>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelContainer>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_15453);
    FUN_01bab630(&StringLiteral_10412);
    DAT_04566884 = 1;
    method = extraout_x1;
  }
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CGFIAJGHIPL_TypeInfo,method);
    method = extraout_x1_00;
  }
  pUVar8 = CGFIAJGHIPL_TypeInfo->static_fields->HIBFMHIONFI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(pUVar4,StringLiteral_15453,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_032602bc;
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CGFIAJGHIPL_TypeInfo);
    }
    ppUVar5 = &CGFIAJGHIPL_TypeInfo->static_fields->HIBFMHIONFI;
    *ppUVar5 = pUVar8;
    thunk_FUN_01c20e04(ppUVar5,pUVar8);
    pUVar8 = CGFIAJGHIPL_TypeInfo->static_fields->HIBFMHIONFI;
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_032602bc;
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DontDestroyOnLoad(pUVar6,(MethodInfo *)0x0);
  }
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (CGFIAJGHIPL_TypeInfo->static_fields->HIOABPPMJJB < 0) {
    return;
  }
  OKBIKHHKOEN = PEEIMHCMDND__BHNOCDOCAJD(HEHMPFLAEGE,(MethodInfo *)0x0);
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CGFIAJGHIPL_TypeInfo);
  }
  if (CGFIAJGHIPL_TypeInfo->static_fields->HIOABPPMJJB < 1) {
    return;
  }
  pUVar6 = UnityEngine_Resources__Load(StringLiteral_10412,(MethodInfo *)0x0);
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CGFIAJGHIPL_TypeInfo);
  }
  pUVar8 = CGFIAJGHIPL_TypeInfo->static_fields->HIBFMHIONFI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    if (pUVar6 == (UnityEngine_Object_o *)0x0) goto LAB_03260078;
LAB_0326003c:
    if (pUVar6->klass != (UnityEngine_Object_c *)UnityEngine_GameObject_TypeInfo) {
      pUVar6 = (UnityEngine_Object_o *)0x0;
    }
  }
  else {
    if (pUVar6 != (UnityEngine_Object_o *)0x0) goto LAB_0326003c;
LAB_03260078:
    pUVar6 = (UnityEngine_Object_o *)0x0;
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar6,pUVar8,
                      Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
      (__this = (Nekki_SF2_Core_Fights_ModelContainer_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (pUVar4,Method_UnityEngine_GameObject_GetComponent<ModelContainer>__),
      __this == (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0)) ||
     (pUVar8 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_032602bc;
  UnityEngine_Transform__SetAsFirstSibling(pUVar8,(MethodInfo *)0x0);
  if (1 < CGFIAJGHIPL_TypeInfo->static_fields->HIOABPPMJJB) {
    Nekki_SF2_Core_Fights_ModelContainer__Init(__this,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  }
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (2 < CGFIAJGHIPL_TypeInfo->static_fields->HIOABPPMJJB) {
    Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_Parameters
              (__this,OKBIKHHKOEN,4,StringLiteral_14870,(MethodInfo *)0x0);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CJNHFNHJHPE.fields.x = LIIFLGALGNK__GFHNCCOMPAJ(-1000.0,1000.0,(MethodInfo *)0x0);
    fVar9 = LIIFLGALGNK__GFHNCCOMPAJ(-300.0,300.0,(MethodInfo *)0x0);
    CJNHFNHJHPE.fields.y = fVar9;
    Nekki_SF2_Core_Fights_ModelContainer__set_ModelPosition(__this,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_032602bc;
    UVar10 = UnityEngine_Transform__get_localScale(pUVar8,(MethodInfo *)0x0);
    fVar9 = LIIFLGALGNK__GFHNCCOMPAJ(0.3,0.8,(MethodInfo *)0x0);
    value.fields.y = UVar10.fields.y * fVar9;
    value.fields.z = UVar10.fields.z * fVar9;
    value.fields.x = UVar10.fields.x * fVar9;
    UnityEngine_Transform__set_localScale(pUVar8,value,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_032602bc;
    UnityEngine_Transform__set_position
              (pUVar8,(UnityEngine_Vector3_o)(ZEXT412(0xc1a00000) << 0x40),(MethodInfo *)0x0);
  }
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<ModelContainer>_Add__;
  __this_00 = CGFIAJGHIPL_TypeInfo->static_fields->FMKEOGOICEO;
  if (__this_00 != (System_Collections_Generic_List_ModelContainer__o *)0x0) {
    pNVar7 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar7 != (Nekki_SF2_Core_Fights_ModelContainer_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pNVar7->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pNVar7->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_032602bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

