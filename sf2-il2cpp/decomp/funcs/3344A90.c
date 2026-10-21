// HEEEDKBOAKM$$JPGGGDDIBKL @ RVA 0x3344A90

void HEEEDKBOAKM__JPGGGDDIBKL
               (HEEEDKBOAKM_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int iVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Xml_XmlElement_o *pSVar5;
  CFEFALDOEMD_o *PODMLLJBEKK;
  HEEEDKBOAKM_o *PODMLLJBEKK_00;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_CFEFALDOEMD__o *pSVar6;
  int iVar7;
  
  if ((DAT_045679b7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3715);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3716);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3717);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3718);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3719);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3720);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3721);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3722);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEFALDOEMD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEFALDOEMD>_get_Item__);
    DAT_045679b7 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    (*(JHMENEKPIBO->klass->vtable)._49_RemoveAll.methodPtr)
              (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._49_RemoveAll.method);
    pSVar6 = (__this->fields).super.GPEBKHNMFIB;
    if (pSVar6 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) {
      if (0 < (pSVar6->fields)._size) {
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3715,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3716,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlElement_o *)
                 (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                           (JHMENEKPIBO,pSVar4,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
        if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3717,
                     (MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3718,
                     (MethodInfo *)0x0);
          pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,pSVar4,(MethodInfo *)0x0);
          if (pSVar5 == (System_Xml_XmlElement_o *)0x0) goto LAB_03444e18;
        }
        (*(pSVar5->klass->vtable)._49_RemoveAll.methodPtr)
                  (pSVar5,(pSVar5->klass->vtable)._49_RemoveAll.method);
        pSVar6 = (__this->fields).super.GPEBKHNMFIB;
        if (pSVar6 == (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) goto LAB_03444e18;
        iVar1 = (pSVar6->fields)._size;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            method_00 = Method_System_Collections_Generic_List<CFEFALDOEMD>_get_Item__;
            PODMLLJBEKK = (CFEFALDOEMD_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar6,iVar7,
                                     (MethodInfo_26E4ADC *)
                                     Method_System_Collections_Generic_List<CFEFALDOEMD>_get_Item__)
            ;
            HEEEDKBOAKM__AEDLJEIIFLP(PODMLLJBEKK,(System_Xml_XmlNode_o *)pSVar5,method_00);
            if (iVar1 + -1 == iVar7) goto LAB_03444cbc;
            pSVar6 = (__this->fields).super.GPEBKHNMFIB;
            iVar7 = iVar7 + 1;
          } while (pSVar6 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0);
          goto LAB_03444e18;
        }
      }
LAB_03444cbc:
      pSVar6 = (__this->fields).super.GMDPKFHCOGL;
      if (pSVar6 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) {
        if ((pSVar6->fields)._size < 1) {
          return;
        }
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3719,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3720,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlElement_o *)
                 (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                           (JHMENEKPIBO,pSVar4,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
        if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3721,
                     (MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3722,
                     (MethodInfo *)0x0);
          pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,pSVar4,(MethodInfo *)0x0);
          if (pSVar5 == (System_Xml_XmlElement_o *)0x0) goto LAB_03444e18;
        }
        (*(pSVar5->klass->vtable)._49_RemoveAll.methodPtr)
                  (pSVar5,(pSVar5->klass->vtable)._49_RemoveAll.method);
        pSVar6 = (__this->fields).super.GMDPKFHCOGL;
        if (pSVar6 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) {
          iVar1 = (pSVar6->fields)._size;
          if (iVar1 < 1) {
            return;
          }
          iVar7 = 0;
          do {
            PODMLLJBEKK_00 =
                 (HEEEDKBOAKM_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,iVar7,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<CFEFALDOEMD>_get_Item__);
            HEEEDKBOAKM__LKLCOGLGLFA
                      (PODMLLJBEKK_00,(CFEFALDOEMD_o *)PODMLLJBEKK_00,(System_Xml_XmlNode_o *)pSVar5
                       ,in_x3);
            if (iVar1 + -1 == iVar7) {
              return;
            }
            pSVar6 = (__this->fields).super.GMDPKFHCOGL;
            iVar7 = iVar7 + 1;
          } while (pSVar6 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0);
        }
      }
    }
  }
LAB_03444e18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

