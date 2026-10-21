// DKNGKHNHLEJ$$IKFCCOLAHGK @ RVA 0x3258D88

System_Collections_Generic_List_string__o *
DKNGKHNHLEJ__IKFCCOLAHGK
          (int32_t KBAJGAHMEAF,System_String_array *OPAEPDIIOEB,System_String_o *EECIGCPBNEG,
          System_String_o *OAKCFCANHLP,System_String_o **ELEHACGLCLP,int32_t BGAAHBMKBDL,
          MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_string__o *__this;
  System_Func_string__string__o **ppSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  int index;
  System_Func_string__string__o *GFAGKLLGEII;
  
                    /* try { // try from 03358d8c to 03458d9b has its CatchHandler @ 03358d9c */
                    /* catch() { ... } // from try @ 03358c8c with catch @ 03358d9c
                       catch() { ... } // from try @ 03358d8c with catch @ 03358d9c */
                    /* try { // try from 03358da0 to 03458da3 has its CatchHandler @ 03358dac */
                    /* try { // try from 03358da4 to 03458daf has its CatchHandler @ 03358c0c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03358da0 with catch @ 03358dac
                        */
  if ((DAT_04567183 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6282);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6283);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6284);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6285);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6286);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6287);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Func<string,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_DKNGKHNHLEJ_<>c_NKICEDMAPPK__);
    FUN_01bab630(&DKNGKHNHLEJ_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567183 = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (EECIGCPBNEG != (System_String_o *)0x0) {
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_033592bc;
    pSVar7 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar7 == (System_String_array *)0x0) goto LAB_033592bc;
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pSVar7->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pSVar7->m_Items[(int)uVar1] = EECIGCPBNEG;
      thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,EECIGCPBNEG);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)EECIGCPBNEG,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    }
  }
  Method_System_Collections_Generic_List<string>_Add__ = lVar2;
  if (OAKCFCANHLP != (System_String_o *)0x0) {
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_033592bc;
    pSVar7 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar7 == (System_String_array *)0x0) goto LAB_033592bc;
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pSVar7->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pSVar7->m_Items[(int)uVar1] = OAKCFCANHLP;
      thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,OAKCFCANHLP);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)OAKCFCANHLP,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (KBAJGAHMEAF + 1 <= (int)OPAEPDIIOEB->max_length) {
      if ((DKNGKHNHLEJ_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      GFAGKLLGEII = DKNGKHNHLEJ_<>c_TypeInfo->static_fields->__9__5_0;
      if (GFAGKLLGEII == (System_Func_string__string__o *)0x0) {
        if ((DKNGKHNHLEJ_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        GFAGKLLGEII = (System_Func_string__string__o *)
                      thunk_FUN_01bda818(System_Func<string,_string>_TypeInfo);
        System_Func<object,_object>___ctor();
        ppSVar3 = &DKNGKHNHLEJ_<>c_TypeInfo->static_fields->__9__5_0;
        *ppSVar3 = GFAGKLLGEII;
        thunk_FUN_01c20e04(ppSVar3,GFAGKLLGEII);
      }
      __this = AJAMDCEKAFE__IMDBPBLPCCO
                         (KBAJGAHMEAF,OPAEPDIIOEB,BGAAHBMKBDL + KBAJGAHMEAF,GFAGKLLGEII,
                          (MethodInfo *)0x0);
    }
    *ELEHACGLCLP = StringLiteral_1;
    thunk_FUN_01c20e04(ELEHACGLCLP,StringLiteral_1);
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < (__this->fields)._size) {
        index = 0;
        do {
          pSVar7 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
          if (pSVar7 == (System_String_array *)0x0) goto LAB_033592bc;
          if ((int)pSVar7->max_length == 0) {
LAB_033592b8:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pSVar7->m_Items[0] = *ELEHACGLCLP;
          thunk_FUN_01c20e04(pSVar7->m_Items);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6282,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6283,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          if ((uint)pSVar7->max_length < 2) goto LAB_033592b8;
          pSVar7->m_Items[1] = pSVar6;
          thunk_FUN_01c20e04(pSVar7->m_Items + 1,pSVar6);
          pSVar6 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this,index,
                              Method_System_Collections_Generic_List<string>_get_Item__);
          if ((uint)pSVar7->max_length < 3) goto LAB_033592b8;
          pSVar7->m_Items[2] = pSVar6;
          thunk_FUN_01c20e04(pSVar7->m_Items + 2,pSVar6);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6284,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6285,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          if ((uint)pSVar7->max_length < 4) goto LAB_033592b8;
          pSVar7->m_Items[3] = pSVar6;
          thunk_FUN_01c20e04();
          pSVar6 = StringLiteral_1;
          if (index < (__this->fields)._size + -1) {
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6286,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6287,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          }
          if ((uint)pSVar7->max_length < 5) goto LAB_033592b8;
          pSVar7->m_Items[4] = pSVar6;
          thunk_FUN_01c20e04();
          pSVar6 = System_String__Concat(pSVar7,(MethodInfo *)0x0);
          *ELEHACGLCLP = pSVar6;
          thunk_FUN_01c20e04(ELEHACGLCLP,pSVar6);
          index = index + 1;
        } while (index < (__this->fields)._size);
      }
      return __this;
    }
  }
LAB_033592bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

