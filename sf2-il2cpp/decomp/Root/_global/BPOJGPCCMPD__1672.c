// TypeDefIndex 1672
// Namespace: 
// public class BPOJGPCCMPD : IEJKLPPLHMO
// Fields:

// ===== private static List<HOOAAGABMBL> ENPENMIBNFK()  [RVA 0x31CB0A0]
// BPOJGPCCMPD$$ENPENMIBNFK @ RVA 0x31CB0A0

System_Collections_Generic_List_HOOAAGABMBL__o * BPOJGPCCMPD__ENPENMIBNFK(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  ulong uVar4;
  ACHLOMELAJE_o *__this_01;
  DOPEEDABNEK_o *pDVar5;
  HOOAAGABMBL_array *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566c6b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566c6b = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO_TypeInfo->static_fields->BIJJALJHKCD = true;
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
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar5 == (DOPEEDABNEK_o *)0x0) ||
     (__this_00 = (pDVar5->fields)._BDIDINACBBH_k__BackingField,
     __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
LAB_032cb25c:
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    item = local_70.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return __this;
    }
    if ((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar4 = (*(((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable)._5_EFLKILFFJKH.
              methodPtr)(local_70.fields._current,
                         (((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable).
                         _5_EFLKILFFJKH.method);
  } while ((uVar4 & 1) != 0);
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                    (((HOOAAGABMBL_Fields *)((long)item + 0x10))->_ILMMODKJGFK_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar3) goto code_r0x032cb298;
  goto LAB_032cb2ec;
code_r0x032cb298:
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
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = ACHLOMELAJE__MHLDNEBLNJG
                    (__this_01,
                     ((HOOAAGABMBL_Fields *)((long)item + 0x10))->_ILMMODKJGFK_k__BackingField,
                     (MethodInfo *)0x0);
  if (bVar3) {
LAB_032cb2ec:
    lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
    if (__this == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar6 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pHVar6 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pHVar6->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
      thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_032cb25c;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x31CB418]
// BPOJGPCCMPD$$DLKKPFHKIPB @ RVA 0x31CB418

System_Collections_Generic_IEnumerable_string__o *
BPOJGPCCMPD__DLKKPFHKIPB(BPOJGPCCMPD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566c6c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4989);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4990);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566c6c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4989,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4990,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x31CB588]
// BPOJGPCCMPD$$KCBILPIAPHN @ RVA 0x31CB588

int32_t BPOJGPCCMPD__KCBILPIAPHN(BPOJGPCCMPD_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x31CB590]
// BPOJGPCCMPD$$AJJLBBCJAAL @ RVA 0x31CB590

System_String_o *
BPOJGPCCMPD__AJJLBBCJAAL(BPOJGPCCMPD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566c6d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4991);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4992);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4993);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4994);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566c6d = 1;
  }
  pSVar1 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (pSVar1 == (System_String_o *)0x0) {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4991,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4992,(MethodInfo *)0x0)
    ;
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  BPOJGPCCMPD__DHAAGKPHJLA(pSVar1,method_00);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4993,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4994,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void DHAAGKPHJLA(string EFENHAFFBAG = "wahrmpf")  [RVA 0x31CB6CC]
// BPOJGPCCMPD$$DHAAGKPHJLA @ RVA 0x31CB6CC

void BPOJGPCCMPD__DHAAGKPHJLA(System_String_o *EFENHAFFBAG,MethodInfo *method)

{
  System_String_o *str1;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *collection;
  MethodInfo *method_00;
  DOPEEDABNEK_o *pDVar5;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar6;
  
  if ((DAT_04566c6e & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4995);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4996);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4997);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4998);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4999);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5000);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5001);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5002);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5003);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5004);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5005);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5006);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5007);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5008);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5009);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5010);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5011);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5012);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5013);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5014);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5015);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5016);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5017);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5018);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5019);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5020);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5021);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5022);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5023);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5024);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5025);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5026);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5027);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5028);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5029);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5030);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_AddRange__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566c6e = 1;
  }
  if (EFENHAFFBAG != (System_String_o *)0x0) {
    str1 = System_String__ToLower(EFENHAFFBAG,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4995,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4996,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4997,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4998,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3,str1,pSVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4999,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5000,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (pDVar5 != (DOPEEDABNEK_o *)0x0) {
      pSVar6 = (pDVar5->fields).GNCBIPJFEGB;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = MGNPHCAAEIO__FHKMIFJBPEN(pSVar6,(MethodInfo *)0x0);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5001,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5002,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      DOPEEDABNEK__IBIMOAOHBDD
                (pSVar3,(System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar6,str1,pSVar4,
                 (MethodInfo *)0x0);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5003,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5004,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (pDVar5 != (DOPEEDABNEK_o *)0x0) {
        pSVar6 = MGNPHCAAEIO__FHKMIFJBPEN((pDVar5->fields).EIFDIMKJDMN,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5005,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5006,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        DOPEEDABNEK__IBIMOAOHBDD
                  (pSVar3,(System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar6,str1,pSVar4,
                   (MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5007,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5008,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (pDVar5 != (DOPEEDABNEK_o *)0x0) {
          pSVar6 = MGNPHCAAEIO__FHKMIFJBPEN((pDVar5->fields).JKLDGCJAGCF,(MethodInfo *)0x0);
          pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar1,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5009,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5010,
                     (MethodInfo *)0x0);
          pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
          DOPEEDABNEK__IBIMOAOHBDD
                    (pSVar3,(System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar6,str1,pSVar4,
                     (MethodInfo *)0x0);
          pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar1,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5011,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5012,
                     (MethodInfo *)0x0);
          pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
          if (DAT_04563eaa == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04563eaa = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          if (pDVar5 != (DOPEEDABNEK_o *)0x0) {
            pSVar6 = MGNPHCAAEIO__FHKMIFJBPEN((pDVar5->fields).DLDBBBCMJOC,(MethodInfo *)0x0);
            pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar1,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5013,
                       (MethodInfo *)0x0);
            pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar2,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5014,
                       (MethodInfo *)0x0);
            pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
            DOPEEDABNEK__IBIMOAOHBDD
                      (pSVar3,(System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar6,str1,pSVar4,
                       (MethodInfo *)0x0);
            pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar1,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5015,
                       (MethodInfo *)0x0);
            pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar2,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5016,
                       (MethodInfo *)0x0);
            pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if (pDVar5 != (DOPEEDABNEK_o *)0x0) {
              pSVar6 = MGNPHCAAEIO__FHKMIFJBPEN((pDVar5->fields).OGOPJDCOPDF,(MethodInfo *)0x0);
              pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar1,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5017,
                         (MethodInfo *)0x0);
              pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar2,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5018,
                         (MethodInfo *)0x0);
              pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
              DOPEEDABNEK__IBIMOAOHBDD
                        (pSVar3,(System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar6,str1,
                         pSVar4,(MethodInfo *)0x0);
              if (DAT_04563eaa == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04563eaa = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
              if (pDVar5 != (DOPEEDABNEK_o *)0x0) {
                pSVar6 = MGNPHCAAEIO__FHKMIFJBPEN((pDVar5->fields).FDLFEJAEDGA,(MethodInfo *)0x0);
                if (DAT_04563eaa == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04563eaa = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                if ((pDVar5 != (DOPEEDABNEK_o *)0x0) &&
                   (collection = MGNPHCAAEIO__FHKMIFJBPEN
                                           ((pDVar5->fields).AGPCBLCIHOM,(MethodInfo *)0x0),
                   pSVar6 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                  System_Collections_Generic_List<object>__AddRange
                            ((System_Collections_Generic_List_object__o *)pSVar6,
                             (System_Collections_Generic_IEnumerable_T__o *)collection,
                             Method_System_Collections_Generic_List<HOOAAGABMBL>_AddRange__);
                  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar1,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5019,
                             (MethodInfo *)0x0);
                  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar2,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5020,
                             (MethodInfo *)0x0);
                  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar1,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5021,
                             (MethodInfo *)0x0);
                  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar2,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5022,
                             (MethodInfo *)0x0);
                  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                  DOPEEDABNEK__IBIMOAOHBDD
                            (pSVar3,(System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar6,str1,
                             pSVar4,(MethodInfo *)0x0);
                  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar1,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5023,
                             (MethodInfo *)0x0);
                  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar2,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5024,
                             (MethodInfo *)0x0);
                  method_00 = (MethodInfo *)
                              OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                  pSVar6 = BPOJGPCCMPD__ENPENMIBNFK(method_00);
                  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar1,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5025,
                             (MethodInfo *)0x0);
                  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar2,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5026,
                             (MethodInfo *)0x0);
                  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                  DOPEEDABNEK__IBIMOAOHBDD
                            ((System_String_o *)method_00,
                             (System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar6,str1,pSVar3,
                             (MethodInfo *)0x0);
                  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar1,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5027,
                             (MethodInfo *)0x0);
                  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar2,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5028,
                             (MethodInfo *)0x0);
                  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                  if (DAT_04563eaa == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04563eaa = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                  if (pDVar5 != (DOPEEDABNEK_o *)0x0) {
                    pSVar6 = MGNPHCAAEIO__FHKMIFJBPEN
                                       ((pDVar5->fields).CLNAOMIIBLH,(MethodInfo *)0x0);
                    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar1,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5029,
                               (MethodInfo *)0x0);
                    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar2,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5030,
                               (MethodInfo *)0x0);
                    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    DOPEEDABNEK__IBIMOAOHBDD
                              (pSVar3,(System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar6,str1
                               ,pSVar4,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x31CC360]
// BPOJGPCCMPD$$IGMDDJFPIJL @ RVA 0x31CC360

System_String_o * BPOJGPCCMPD__IGMDDJFPIJL(BPOJGPCCMPD_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566c6f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_58);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5031);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566c6f = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5031,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_58,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x31CC410]
// BPOJGPCCMPD$$ECKDICODLME @ RVA 0x31CC410

bool BPOJGPCCMPD__ECKDICODLME(BPOJGPCCMPD_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor()  [RVA 0x31CC418]
// BPOJGPCCMPD$$.ctor @ RVA 0x31CC418

void BPOJGPCCMPD___ctor(BPOJGPCCMPD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

