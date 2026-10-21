// AJOGJBFNELI$$CNDLAIIHEHJ @ RVA 0x30119E8

void AJOGJBFNELI__CNDLAIIHEHJ
               (AJOGJBFNELI_o *__this,int64_t MMIOPIPLDJL,int64_t MPMJDINCJNH,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_Char_array *separator;
  System_String_array *collection;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t local_58;
  
  method_00 = (MethodInfo *)MMIOPIPLDJL;
  local_58 = MPMJDINCJNH;
  if ((DAT_04565bb1 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<long>__);
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2907);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2908);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2909);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2910);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2911);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2912);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2913);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2914);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2915);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2916);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2917);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2918);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04565bb1 = 1;
    method_00 = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2907,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2908,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<long>(__this,pSVar3,MMIOPIPLDJL,Method_AJOGJBFNELI_MLDEHFFGJDP<long>__);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  pSVar4 = (__this->fields).LDGGIOJMLLD;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2909,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2910,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar5,pSVar3,(MethodInfo *)0x0);
      if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
LAB_03111d90:
        pSVar3 = System_Int64__ToString((int64_t)&local_58,(MethodInfo *)0x0);
        DJNBJHPDKDP__OFNFOGHFDML<object>
                  ((System_Collections_Generic_List_T__o *)__this_00,(Il2CppObject *)pSVar3,
                   Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2915,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2916,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2917,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2918,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar7 = System_String__Join(pSVar7,(System_Collections_Generic_IEnumerable_string__o *)
                                            __this_00,(MethodInfo *)0x0);
        AJOGJBFNELI__MLDEHFFGJDP<object>
                  (__this,pSVar3,(Il2CppObject *)pSVar7,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
        AJOGJBFNELI__CHLJMDILNBI(__this,method_01);
        return;
      }
      pSVar4 = (__this->fields).LDGGIOJMLLD;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2911,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2912,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar5,pSVar3,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar1,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2913,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2914,
                     (MethodInfo *)0x0);
          pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
          if (((pSVar7 != (System_String_o *)0x0) &&
              (separator = System_String__ToCharArray(pSVar7,(MethodInfo *)0x0),
              pSVar3 != (System_String_o *)0x0)) &&
             (collection = System_String__Split(pSVar3,separator,1,(MethodInfo *)0x0),
             __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
            System_Collections_Generic_List<object>__AddRange
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                       Method_System_Collections_Generic_List<string>_AddRange__);
            goto LAB_03111d90;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

