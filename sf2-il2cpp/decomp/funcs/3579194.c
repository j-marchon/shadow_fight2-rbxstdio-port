// Core.Network.ServerProvider$$DANFBEPOOAA @ RVA 0x3579194

/* WARNING: Type propagation algorithm not settling */

void Core_Network_ServerProvider__DANFBEPOOAA
               (Core_Network_ServerProvider_o *__this,DMKKAPNMDKJ_o *IDCGLBOIAFJ,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  bool_conflict bVar3;
  byte bVar4;
  bool bVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *str2;
  Core_Network_ServerProvider_BlameUserRequestResponse_o *__this_00;
  AJOGJBFNELI_o *__this_01;
  void *pvVar10;
  Il2CppObject *pIVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_04568c99 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1008);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1009);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1010);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1011);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1012);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1013);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1014);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1015);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1016);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1017);
    FUN_01bab630(&Core_Network_ServerProvider_BlameUserRequestResponse_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Core_Network_ServerProvider_MEKPNGLHLOE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568c99 = 1;
  }
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1008,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1009,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ == (DMKKAPNMDKJ_o *)0x0) goto LAB_03679588;
  bVar3 = (IDCGLBOIAFJ->fields).PEKGJKIHHKJ;
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  bVar5 = bVar3 != false;
  pSVar1 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1010;
  if (bVar5) {
    pSVar1 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1012;
  }
  pSVar2 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1011;
  if (bVar5) {
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1013;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar1->value,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar2->value,(MethodInfo *)0x0);
  pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1014,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1015,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat
                     (pSVar8,pSVar9,str2,(IDCGLBOIAFJ->fields).BEIPGOKBAEI,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  if (((IDCGLBOIAFJ->fields).PEKGJKIHHKJ == false) ||
     (bVar5 = PCOEHCPGBBG__EDHHJAMCOJH((IDCGLBOIAFJ->fields).BEIPGOKBAEI,(MethodInfo *)0x0), bVar5))
  {
    bVar5 = false;
  }
  else {
    auVar12 = thunk_FUN_01bda818(Core_Network_ServerProvider_BlameUserRequestResponse_TypeInfo);
    __this_00 = auVar12._0_8_;
    Core_Network_ServerProvider_BlameUserRequestResponse___ctor(__this_00,auVar12._8_8_);
    UnityEngine_JsonUtility__FromJsonOverwrite
              ((IDCGLBOIAFJ->fields).BEIPGOKBAEI,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Core_Network_ServerProvider_BlameUserRequestResponse_o *)0x0)
    goto LAB_03679588;
    pSVar9 = (__this_00->fields).data;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1016,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1017,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar5 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
  }
  pIVar11 = (IDCGLBOIAFJ->fields).OGFMJIABHHI;
  if (pIVar11 != (Il2CppObject *)0x0) {
    bVar4 = (Core_Network_ServerProvider_MEKPNGLHLOE_TypeInfo->_2).naturalAligment;
    if ((bVar4 <= (pIVar11->klass->_2).naturalAligment) &&
       ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar4 - 1] ==
        (Il2CppClass *)Core_Network_ServerProvider_MEKPNGLHLOE_TypeInfo)) {
      if (bVar5 == false) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
        if ((pIVar11 == (Il2CppObject *)0x0) || (__this_01 == (AJOGJBFNELI_o *)0x0))
        goto LAB_03679588;
        AJOGJBFNELI__IJIBBEFBCPJ
                  (__this_01,(int64_t)pIVar11[1].klass,(int64_t)pIVar11[1].monitor,(MethodInfo *)0x0
                  );
      }
      else if (pIVar11 == (Il2CppObject *)0x0) {
LAB_03679588:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pvVar10 = pIVar11[2].monitor;
      if (pvVar10 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03679584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((long)pvVar10 + 0x18))
                  (*(undefined8 *)((long)pvVar10 + 0x40),bVar5,*(undefined8 *)((long)pvVar10 + 0x28)
                  );
        return;
      }
    }
  }
  return;
}

