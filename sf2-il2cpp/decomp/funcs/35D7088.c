// GGLDGAAPKCF$$GDPMDJIFOMA @ RVA 0x35D7088

/* WARNING: Type propagation algorithm not settling */

void GGLDGAAPKCF__GDPMDJIFOMA
               (GGLDGAAPKCF_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  int iVar3;
  bool bVar4;
  int32_t CJNHFNHJHPE;
  int *piVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *arg0;
  System_String_o *arg1;
  SimpleJSON_JSONNode_o *pSVar9;
  ACHLOMELAJE_o *pAVar10;
  System_Collections_Generic_List_int__o *pSVar11;
  GGLDGAAPKCF_c *pGVar12;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar13;
  System_Action_o *pSVar14;
  int iStack_64;
  
  if ((DAT_04568fff & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_879);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_880);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_881);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_882);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_883);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_884);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_885);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_886);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_887);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_888);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_889);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_890);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&GIBOBFHPAFE_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568fff = 1;
  }
  if (EHPEBANNEAC == (Il2CppObject *)0x0) goto LAB_036d77fc;
  if ((EHPEBANNEAC->klass->_1).element_class != (GIBOBFHPAFE_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(EHPEBANNEAC);
  }
  piVar5 = (int *)thunk_FUN_01bda96c(EHPEBANNEAC);
  iVar3 = *piVar5;
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_879,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_880,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  iStack_64 = iVar3;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(GIBOBFHPAFE_TypeInfo,&iStack_64);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar1 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_883;
  if (!LKFALEIFDIO) {
    pSVar1 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_881;
  }
  pSVar2 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_884;
  if (!LKFALEIFDIO) {
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_882;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar1->value,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar2->value,(MethodInfo *)0x0);
  arg1 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  pMVar13 = (MethodInfo *)OCMMDIHLKMH;
  pSVar8 = System_String__Format
                     (pSVar8,arg0,(Il2CppObject *)arg1,(Il2CppObject *)OCMMDIHLKMH,(MethodInfo *)0x0
                     );
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_885,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_886,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  }
  if (!LKFALEIFDIO) {
LAB_036d74f8:
    pSVar14 = (__this->fields).ODCAOCGHMPN;
    if (pSVar14 != (System_Action_o *)0x0) {
      (*(code *)(pSVar14->fields).super.super.invoke_impl)
                ((pSVar14->fields).super.super.method_code,(pSVar14->fields).super.super.method);
    }
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0)
  goto LAB_036d74f8;
  pSVar9 = SimpleJSON_JSON__Parse(OCMMDIHLKMH,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_036d77fc;
  pSVar11 = ACHLOMELAJE__JGHPOCNCLBL(pAVar10,(MethodInfo *)0x0);
  (__this->fields).KNKAAIDGBJL = pSVar11;
  thunk_FUN_01c20e04();
  if (iVar3 == 2) {
    pGVar12 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      pGVar12 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar8 = GGLDGAAPKCF__NCKNDNLKHHJ((MethodInfo *)pGVar12);
    pSVar9 = GGLDGAAPKCF__APEHKFPAPCF(__this,pSVar9,pSVar8,pMVar13);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar4 = SimpleJSON_JSONNode__op_Inequality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_887,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_888,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_889,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_890,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      if (pSVar9 == (SimpleJSON_JSONNode_o *)0x0) goto LAB_036d77fc;
      pSVar9 = (SimpleJSON_JSONNode_o *)
               (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,pSVar8,(pSVar9->klass->vtable)._7_get_Item.method);
      CJNHFNHJHPE = OGMFFOMHGIA__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
      if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_036d77fc;
      ACHLOMELAJE__GMMADOHJHEB(pAVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
  }
  else if (iVar3 == 1) {
    pGVar12 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      pGVar12 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar8 = GGLDGAAPKCF__CCADEBAHIBF((MethodInfo *)pGVar12);
    pSVar9 = GGLDGAAPKCF__APEHKFPAPCF(__this,pSVar9,pSVar8,pMVar13);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar4 = SimpleJSON_JSONNode__op_Inequality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EOOEOHKLOFJ__CEMNLGBNNDO((MethodInfo *)0x0);
    }
  }
  else if (iVar3 == 0) {
    GGLDGAAPKCF__DHJGDFEMCKN(__this,pSVar9,false,pMVar13);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 036d778c to 037d7857 has its CatchHandler @ 036d778c
                       catch() { ... } // from try @ 036d778c with catch @ 036d778c
                       catch() { ... } // from try @ 036d78cc with catch @ 036d778c
                       catch() { ... } // from try @ 036d78f4 with catch @ 036d778c
                       catch() { ... } // from try @ 036d7968 with catch @ 036d778c
                       catch() { ... } // from try @ 036d79ac with catch @ 036d778c
                       catch() { ... } // from try @ 036d79dc with catch @ 036d778c */
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar10 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__EEIICBEOCOE(pAVar10,(__this->fields).KNKAAIDGBJL,(MethodInfo *)0x0);
    pSVar14 = (__this->fields).ODCAOCGHMPN;
    pMVar13 = extraout_x1;
    if (pSVar14 != (System_Action_o *)0x0) {
      (*(code *)(pSVar14->fields).super.super.invoke_impl)
                ((pSVar14->fields).super.super.method_code,(pSVar14->fields).super.super.method);
      pMVar13 = extraout_x1_00;
    }
    GGLDGAAPKCF__JHBPKMKKKJI(__this,pMVar13);
    return;
  }
LAB_036d77fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

