// GHOPMMBKGMB$$PPJCCOBAIMC @ RVA 0x33CD670

void GHOPMMBKGMB__PPJCCOBAIMC
               (GHOPMMBKGMB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlElement_o *JHMENEKPIBO_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  
  if ((DAT_04567e37 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3848);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3849);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3850);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3851);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_GLDKIFOLMAO>_GetEnumerator__
                );
    DAT_04567e37 = 1;
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentValue = (Il2CppObject *)0x0;
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3848,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3849,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    JHMENEKPIBO_00 =
         (System_Xml_XmlElement_o *)
         (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                   (JHMENEKPIBO,pSVar5,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
    if (JHMENEKPIBO_00 == (System_Xml_XmlElement_o *)0x0) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3850,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3851,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      JHMENEKPIBO_00 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,pSVar5,(MethodInfo *)0x0);
      if (JHMENEKPIBO_00 == (System_Xml_XmlElement_o *)0x0) goto LAB_034cd8e4;
    }
    (*(JHMENEKPIBO_00->klass->vtable)._49_RemoveAll.methodPtr)
              (JHMENEKPIBO_00,(JHMENEKPIBO_00->klass->vtable)._49_RemoveAll.method);
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HGCIIJGGNKN
    ;
    if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      iVar2 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                        (pSVar6,
                         Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_get_Count__
                        );
      if (0 < iVar2) {
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).HGCIIJGGNKN;
        if ((pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (__this_00 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                                  (pSVar6,
                                   Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_get_Values__
                                  ),
           __this_00 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0
           )) goto LAB_034cd8e4;
        System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                  (&local_58,__this_00,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<string,_GLDKIFOLMAO>_GetEnumerator__
                  );
        while (bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                                 (&local_58,
                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_MoveNext__
                                 ), bVar1) {
          if ((GLDKIFOLMAO_o *)local_58.fields._currentValue == (GLDKIFOLMAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          GLDKIFOLMAO__BHFGGAKKJKP
                    ((GLDKIFOLMAO_o *)local_58.fields._currentValue,
                     (System_Xml_XmlNode_o *)JHMENEKPIBO_00,(MethodInfo *)0x0);
        }
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_Dispose__
                  );
      }
      return;
    }
  }
LAB_034cd8e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

