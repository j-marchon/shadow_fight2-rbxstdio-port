// PFDCJGIIPLB$$BIOIDDEPGPC @ RVA 0x33556B0

System_Collections_Generic_Dictionary_string__object__o *
PFDCJGIIPLB__BIOIDDEPGPC
          (System_Collections_Generic_ICollection_string__o *NDIDKEDHJBE,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_string__object__o *value;
  VirtualInvokeData *pVVar6;
  System_Object_array *value_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_ICollection_string__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_04567a43 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_35);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_36);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_37);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_38);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_UnionWith__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<string>_TypeInfo);
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a43 = 1;
    method = extraout_x1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo,method)
  ;
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<string>__ctor__);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_35,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_36,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo);
    method_00 = extraout_x1_01;
  }
  value = PFDCJGIIPLB__BIJMPDJOPHN
                    ((System_Collections_Generic_HashSet_string__o *)__this_00,method_00);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this,(Il2CppObject *)pSVar5,(Il2CppObject *)value,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    if (NDIDKEDHJBE != (System_Collections_Generic_ICollection_string__o *)0x0) {
      pSVar7 = NDIDKEDHJBE->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<string>_TypeInfo) {
            pVVar6 = pSVar7->vtable + *piVar9;
            goto LAB_034558dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(NDIDKEDHJBE,System_Collections_Generic_ICollection<string>_TypeInfo,0);
LAB_034558dc:
      iVar2 = (*pVVar6->methodPtr)(NDIDKEDHJBE,pVVar6->method);
      if (0 < iVar2) {
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_034559c4;
        System_Collections_Generic_HashSet<object>__UnionWith
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)NDIDKEDHJBE,
                   Method_System_Collections_Generic_HashSet<string>_UnionWith__);
        goto LAB_03455914;
      }
    }
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_03455914:
      if (0 < (__this_00->fields)._count) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_37,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_38,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        value_00 = System_Linq_Enumerable__ToArray<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                              Method_System_Linq_Enumerable_ToArray<string>__);
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this,(Il2CppObject *)pSVar5,&value_00->obj,
                   Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
      }
      return (System_Collections_Generic_Dictionary_string__object__o *)__this;
    }
  }
LAB_034559c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

