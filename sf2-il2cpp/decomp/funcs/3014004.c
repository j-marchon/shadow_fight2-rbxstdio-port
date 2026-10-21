// AJOGJBFNELI$$PMLFNFMEKDO @ RVA 0x3014004

bool AJOGJBFNELI__PMLFNFMEKDO
               (AJOGJBFNELI_o *__this,int64_t MMIOPIPLDJL,int64_t MPMJDINCJNH,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_object__o *__this_00;
  System_Char_array *separator;
  System_String_array *collection;
  Il2CppClass *pIVar10;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  int64_t local_50;
  int64_t iStack_48;
  
  local_50 = MPMJDINCJNH;
  iStack_48 = MMIOPIPLDJL;
  if ((DAT_04565bc3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2974);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2975);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2976);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2977);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2978);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2979);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2980);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2981);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_AJOGJBFNELI_CLBCJDNKJJC_LAALEIEAMOL__);
    FUN_01bab630(&AJOGJBFNELI_CLBCJDNKJJC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Predicate<string>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04565bc3 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJOGJBFNELI_CLBCJDNKJJC_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  pSVar3 = (__this->fields).LDGGIOJMLLD;
  if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2974,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2975,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar4,pSVar7,(MethodInfo *)0x0);
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
      pSVar9 = System_Int64__ToString((int64_t)&iStack_48,(MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality(pSVar7,pSVar9,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
      pSVar3 = (__this->fields).LDGGIOJMLLD;
      if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2976,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2977,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar4,pSVar7,(MethodInfo *)0x0);
          if (pSVar8 != (System_Xml_XmlAttribute_o *)0x0) {
            pSVar3 = (__this->fields).LDGGIOJMLLD;
            if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_03114474;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2978,
                       (MethodInfo *)0x0);
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2979,
                       (MethodInfo *)0x0);
            pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
            if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03114474;
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar4,pSVar7,(MethodInfo *)0x0);
            pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2980,
                       (MethodInfo *)0x0);
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2981,
                       (MethodInfo *)0x0);
            pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
            if (((pSVar9 == (System_String_o *)0x0) ||
                (separator = System_String__ToCharArray(pSVar9,(MethodInfo *)0x0),
                pSVar7 == (System_String_o *)0x0)) ||
               (collection = System_String__Split(pSVar7,separator,1,(MethodInfo *)0x0),
               __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03114474;
            System_Collections_Generic_List<object>__AddRange
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                       Method_System_Collections_Generic_List<string>_AddRange__);
          }
          pIVar10 = (Il2CppClass *)System_Int64__ToString((int64_t)&local_50,(MethodInfo *)0x0);
          if (pIVar2 != (Il2CppObject *)0x0) {
            pIVar2[1].klass = pIVar10;
            thunk_FUN_01c20e04();
            match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<string>_TypeInfo);
            System_Predicate<object>___ctor();
            if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
              pIVar2 = System_Collections_Generic_List<object>__Find
                                 (__this_00,match,
                                  Method_System_Collections_Generic_List<string>_Find__);
              return pIVar2 != (Il2CppObject *)0x0;
            }
          }
        }
      }
    }
  }
LAB_03114474:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

