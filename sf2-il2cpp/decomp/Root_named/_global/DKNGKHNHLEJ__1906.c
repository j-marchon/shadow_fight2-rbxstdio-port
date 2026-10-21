// TypeDefIndex 1906
// Namespace: 
// public class DKNGKHNHLEJ : IEJKLPPLHMO
// Fields:

// ===== private static List<string> IKFCCOLAHGK(int KBAJGAHMEAF, string[] OPAEPDIIOEB, string EECIGCPBNEG, string OAKCFCANHLP, out string ELEHACGLCLP, int BGAAHBMKBDL = 2)  [RVA 0x3258D88]
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
    FUN_01bab630(&StringLiteral_1/*""*/);
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
    *ELEHACGLCLP = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04(ELEHACGLCLP,StringLiteral_1/*""*/);
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
          pSVar6 = StringLiteral_1/*""*/;
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


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x32592C0]
// DKNGKHNHLEJ$$KCBILPIAPHN @ RVA 0x32592C0

int32_t DKNGKHNHLEJ__KCBILPIAPHN(DKNGKHNHLEJ_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x32592C8]
// DKNGKHNHLEJ$$AJJLBBCJAAL @ RVA 0x32592C8

/* WARNING: Type propagation algorithm not settling */

System_String_o *
DKNGKHNHLEJ__AJJLBBCJAAL(DKNGKHNHLEJ_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Nullable_bool__o SVar3;
  uint32_t uVar4;
  System_String_o *pSVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  System_Nullable_int__o SVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  System_String_array *pSVar11;
  Il2CppObject *pIVar12;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_02;
  long lVar13;
  System_String_o *pSVar14;
  undefined8 uVar15;
  Il2CppObject *item;
  MethodInfo *in_x6;
  int32_t iVar16;
  System_RuntimeFieldHandle_Fields *pSVar17;
  Item_o *pDVar18;
  System_Object_array *pSVar19;
  int32_t GOLKDPJDOJM;
  int iVar20;
  undefined1 local_b8 [8];
  void *pvStack_b0;
  int32_t local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  undefined8 uStack_98;
  Il2CppObject *local_90;
  System_String_o *local_88;
  System_String_o *local_80;
  undefined8 local_78;
  System_String_o *local_70;
  int local_68;
  undefined1 local_64 [4];
  
  if ((DAT_04567184 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6288);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6289);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6290);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6291);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6292);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6293);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6294);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6295);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6296);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6297);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6298);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6299);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6300);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6301);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6302);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6303);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6304);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6305);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6306);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6307);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6308);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6309);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6310);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6311);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6312);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6313);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6314);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6315);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6316);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6317);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6318);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6319);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6320);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6321);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6322);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6323);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6324);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6325);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6326);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6327);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6328);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6329);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6330);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6331);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6332);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6333);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6334);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6335);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6336);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6337);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6338);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6339);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6340);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6341);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6342);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6343);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6344);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6345);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6346);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6347);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6348);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6349);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6350);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6351);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6352);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6353);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6354);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6355);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6356);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6357);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6358);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6359);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6360);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6361);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6362);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6363);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&TacticsArchiver_DMIOKBAEKJB_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&TacticsArchiver_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&AiData_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567184 = 1;
  }
  local_64[0] = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = (System_String_o *)0x0;
  local_88 = (System_String_o *)0x0;
  local_80 = (System_String_o *)0x0;
  local_a0 = (undefined1  [8])0x0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  local_90 = (Il2CppObject *)0x0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_0335b160;
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar5;
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_GC__Collect((MethodInfo *)0x0);
  pSVar5 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  AJAMDCEKAFE__BJMKPONFOPK((MethodInfo *)0x0);
  uVar4 = <PrivateImplementationDetails>__ComputeStringHash(pSVar5,(MethodInfo *)0x0);
  if (uVar4 < 0x340ca71d) {
    if (uVar4 < 0x310ca264) {
      if (uVar4 == 0x300ca0d0) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6298,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6299,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 0335a0d0 to 0345a0d7 has its CatchHandler @ 0335a118 */
                    /* try { // try from 0335a0d8 to 0345a0db has its CatchHandler @ 0335a114 */
                    /* try { // try from 0335a0dc to 0345a0df has its CatchHandler @ 0335a104 */
        bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 0335a0e0 to 0345a0e3 has its CatchHandler @ 03359bfc */
        if (bVar2) {
                    /* try { // try from 0335a0e4 to 0345a0e7 has its CatchHandler @ 0335a0f0 */
                    /* try { // try from 0335a0e8 to 0345a137 has its CatchHandler @ 03359bfc */
                    /* catch() { ... } // from try @ 0335a0e4 with catch @ 0335a0f0 */
          SVar9 = AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03359e84 with catch @ 0335a0f4 */
                    /* catch() { ... } // from try @ 03359e78 with catch @ 0335a0f8 */
          iVar16 = SVar9.fields.value;
                    /* catch() { ... } // from try @ 03359e4c with catch @ 0335a0fc */
          if (((ulong)SVar9.fields & 0xff) == 0) {
            iVar16 = 1;
          }
                    /* catch() { ... } // from try @ 03359e64 with catch @ 0335a100 */
                    /* catch() { ... } // from try @ 0335a0dc with catch @ 0335a104 */
                    /* catch() { ... } // from try @ 03359e9c with catch @ 0335a108 */
                    /* catch() { ... } // from try @ 03359e14 with catch @ 0335a10c */
          local_78._4_4_ = iVar16;
                    /* catch() { ... } // from try @ 03359e28 with catch @ 0335a110 */
          SVar9 = AJAMDCEKAFE__NANCFCIGNEE(2,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0335a0d8 with catch @ 0335a114 */
                    /* catch() { ... } // from try @ 0335a0d0 with catch @ 0335a118 */
                    /* catch() { ... } // from try @ 03359db0 with catch @ 0335a11c */
                    /* catch() { ... } // from try @ 03359d54 with catch @ 0335a120 */
          GOLKDPJDOJM = SVar9.fields.value;
          local_80 = StringLiteral_1/*""*/;
          local_78 = CONCAT44(local_78._4_4_,GOLKDPJDOJM);
                    /* try { // try from 0335a138 to 0345a13b has its CatchHandler @ 0335a14c */
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0335a138 with catch @ 0335a14c */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6332,
                     (MethodInfo *)0x0);
                    /* try { // try from 0335a15c to 0345a1cb has its CatchHandler @ 0335a1e0 */
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6333,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          pSVar10 = DKNGKHNHLEJ__IKFCCOLAHGK(3,OPAEPDIIOEB,StringLiteral_1/*""*/,pSVar5,&local_80,2,in_x6)
          ;
          if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
            pSVar5 = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar10,0,
                                Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 0335a1cc to 0345a1d7 has its CatchHandler @ 03359bfc */
            if ((pSVar10->fields)._size < 2) {
              pSVar8 = (System_String_o *)0x0;
            }
            else {
                    /* try { // try from 0335a1d8 to 0345a1df has its CatchHandler @ 0335a1e0 */
              pSVar8 = (System_String_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar10,1,
                                  Method_System_Collections_Generic_List<string>_get_Item__);
                    /* catch() { ... } // from try @ 0335a15c with catch @ 0335a1e0
                       catch() { ... } // from try @ 0335a1d8 with catch @ 0335a1e0 */
              GOLKDPJDOJM = (int32_t)local_78;
            }
            if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            TacticsArchiver__MFLNKDNPLKJ(iVar16,pSVar5,pSVar8,GOLKDPJDOJM,(MethodInfo *)0x0);
            pSVar11 = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6334,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6335,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            if (pSVar11 != (System_String_array *)0x0) {
              if ((int)pSVar11->max_length != 0) {
                pSVar11->m_Items[0] = pSVar5;
                thunk_FUN_01c20e04(pSVar11->m_Items,pSVar5);
                if (1 < (uint)pSVar11->max_length) {
                  pSVar11->m_Items[1] = local_80;
                  thunk_FUN_01c20e04(pSVar11->m_Items + 1);
                  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar6,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6336,
                             (MethodInfo *)0x0);
                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar7,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6337,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                  if (2 < (uint)pSVar11->max_length) {
                    pSVar11->m_Items[2] = pSVar5;
                    thunk_FUN_01c20e04(pSVar11->m_Items + 2,pSVar5);
                    pSVar5 = System_Int32__ToString((int)&local_78 + 4,(MethodInfo *)0x0);
                    if (3 < (uint)pSVar11->max_length) {
                      pSVar11->m_Items[3] = pSVar5;
                      thunk_FUN_01c20e04(pSVar11->m_Items + 3,pSVar5);
                      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar6,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6338,
                                 (MethodInfo *)0x0);
                      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar7,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6339,
                                 (MethodInfo *)0x0);
                      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                      if (4 < (uint)pSVar11->max_length) {
                        pSVar11->m_Items[4] = pSVar5;
                        thunk_FUN_01c20e04(pSVar11->m_Items + 4,pSVar5);
                        pSVar5 = System_Int32__ToString((int32_t)&local_78,(MethodInfo *)0x0);
                        if (5 < (uint)pSVar11->max_length) {
                          pSVar11->m_Items[5] = pSVar5;
                          thunk_FUN_01c20e04(pSVar11->m_Items + 5,pSVar5);
                          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar6,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6340
                                     ,(MethodInfo *)0x0);
                          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar7,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6341
                                     ,(MethodInfo *)0x0);
                          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                          pSVar5 = AJAMDCEKAFE__OFAELFKHOND(pSVar5,(MethodInfo *)0x0);
                          if (6 < (uint)pSVar11->max_length) {
                            pSVar11->m_Items[6] = pSVar5;
                            goto LAB_0335ae3c;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_0335b16c;
            }
          }
          goto LAB_0335b160;
        }
      }
      else if (uVar4 == 0x310ca263) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6296,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6297,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
        if (bVar2) {
          SVar9 = AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
          local_68 = SVar9.fields.value;
          if (((ulong)SVar9.fields & 0xff) == 0) {
            local_68 = 1;
          }
          local_70 = StringLiteral_1/*""*/;
          if (0 < local_68) {
            iVar20 = 0;
            do {
              if ((AiData_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              AiData__HPGKPPILFKI((MethodInfo *)0x0);
              pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar6,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6324,
                         (MethodInfo *)0x0);
              pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar7,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6325,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
              pSVar10 = DKNGKHNHLEJ__IKFCCOLAHGK
                                  (2,OPAEPDIIOEB,StringLiteral_1/*""*/,pSVar5,&local_70,2,in_x6);
              AiData__BKCFPHNEONL(pSVar10,pSVar10,(MethodInfo *)0x0);
              if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              System_GC__Collect((MethodInfo *)0x0);
              iVar20 = iVar20 + 1;
            } while (iVar20 < local_68);
          }
          pSVar11 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
          pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar6,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6326,
                     (MethodInfo *)0x0);
          pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar7,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6327,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
          if (pSVar11 != (System_String_array *)0x0) {
            if ((int)pSVar11->max_length != 0) {
              pSVar11->m_Items[0] = pSVar5;
              thunk_FUN_01c20e04(pSVar11->m_Items,pSVar5);
              if (1 < (uint)pSVar11->max_length) {
                pSVar11->m_Items[1] = local_70;
                thunk_FUN_01c20e04(pSVar11->m_Items + 1);
                pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar6,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6328,
                           (MethodInfo *)0x0);
                pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar7,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6329,
                           (MethodInfo *)0x0);
                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                if (2 < (uint)pSVar11->max_length) {
                  pSVar11->m_Items[2] = pSVar5;
                  thunk_FUN_01c20e04(pSVar11->m_Items + 2,pSVar5);
                  pSVar5 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
                  if (3 < (uint)pSVar11->max_length) {
                    pSVar11->m_Items[3] = pSVar5;
                    thunk_FUN_01c20e04(pSVar11->m_Items + 3,pSVar5);
                    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar6,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6330,
                               (MethodInfo *)0x0);
                    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar7,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6331,
                               (MethodInfo *)0x0);
                    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    pSVar5 = AJAMDCEKAFE__OFAELFKHOND(pSVar5,(MethodInfo *)0x0);
                    if (4 < (uint)pSVar11->max_length) {
                      pSVar11->m_Items[4] = pSVar5;
LAB_0335ae3c:
                      thunk_FUN_01c20e04();
                      pSVar5 = System_String__Concat(pSVar11,(MethodInfo *)0x0);
                      return pSVar5;
                    }
                  }
                }
              }
            }
LAB_0335b16c:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          goto LAB_0335b160;
        }
      }
      goto LAB_0335aa60;
    }
    if (uVar4 == 0x320ca3f6) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6302,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6303,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (!bVar2) goto LAB_0335aa60;
      SVar9 = AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (((ulong)SVar9.fields & 0xff) == 0) {
        if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar16 = TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN;
      }
      else {
        iVar16 = SVar9.fields.value;
      }
      local_88 = StringLiteral_1/*""*/;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6350,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6351,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      pSVar10 = DKNGKHNHLEJ__IKFCCOLAHGK(2,OPAEPDIIOEB,StringLiteral_1/*""*/,pSVar5,&local_88,2,in_x6);
      if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0335b160;
      pSVar5 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar10,0,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      if ((pSVar10->fields)._size < 2) {
        pSVar8 = (System_String_o *)0x0;
      }
      else {
        pSVar8 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar10,1,
                            Method_System_Collections_Generic_List<string>_get_Item__);
      }
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      TacticsArchiver__EHJMIBMHCMD(pSVar5,pSVar8,iVar16,(MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6352,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6353,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      pSVar8 = local_88;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6354,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6355,
                 (MethodInfo *)0x0);
      pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      pSVar14 = AJAMDCEKAFE__OFAELFKHOND(pSVar14,(MethodInfo *)0x0);
      goto LAB_0335b154;
    }
    if (uVar4 != 0x330ca589) {
      if (uVar4 != 0x340ca71c) goto LAB_0335aa60;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03359db0 to 03459ddb has its CatchHandler @ 0335a11c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6290,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6291,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (!bVar2) goto LAB_0335aa60;
      SVar9 = AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* try { // try from 03359e14 to 03459e1f has its CatchHandler @ 0335a10c */
                    /* try { // try from 03359e28 to 03459e37 has its CatchHandler @ 0335a110 */
      if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(TacticsArchiver_TypeInfo);
      }
      TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN = SVar9.fields.value;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03359e4c to 03459e5b has its CatchHandler @ 0335a0fc */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6312,
                 (MethodInfo *)0x0);
                    /* try { // try from 03359e64 to 03459e6f has its CatchHandler @ 0335a100 */
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03359e78 to 03459e83 has its CatchHandler @ 0335a0f8 */
                    /* try { // try from 03359e84 to 03459e8b has its CatchHandler @ 0335a0f4 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6313,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 03359e9c to 03459ea7 has its CatchHandler @ 0335a108 */
                    /* try { // try from 03359ea8 to 0345a0cf has its CatchHandler @ 03359bfc */
      local_b8 = (undefined1  [8])TacticsArchiver_DMIOKBAEKJB_TypeInfo;
      pvStack_b0 = (void *)0xffffffffffffffff;
      local_a8 = TacticsArchiver_TypeInfo->static_fields->IPIMOJKDGPN;
      pSVar8 = System_Enum__ToString((System_Enum_o *)local_b8,(MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6314,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar17 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6315;
      goto LAB_0335af30;
    }
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6300,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6301,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_0335aa60;
    pSVar5 = AJAMDCEKAFE__LFCNNAGLPHO(1,OPAEPDIIOEB,(MethodInfo *)0x0);
    if (pSVar5 == (System_String_o *)0x0) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6342,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6343,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    }
    pSVar8 = AJAMDCEKAFE__LFCNNAGLPHO(2,OPAEPDIIOEB,(MethodInfo *)0x0);
    if (pSVar8 == (System_String_o *)0x0) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6344,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6345,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    }
    if ((TacticsArchiver_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    TacticsArchiver__KIDFPECFLPB(pSVar5,pSVar8,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6346,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6347,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6348,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar17 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6349;
  }
  else if (uVar4 < 0x360caa43) {
                    /* try { // try from 03359bfc to 03459d53 has its CatchHandler @ 03359bfc
                       catch() { ... } // from try @ 03359bfc with catch @ 03359bfc
                       catch() { ... } // from try @ 03359ea8 with catch @ 03359bfc
                       catch() { ... } // from try @ 0335a0e0 with catch @ 03359bfc
                       catch() { ... } // from try @ 0335a0e8 with catch @ 03359bfc
                       catch() { ... } // from try @ 0335a1cc with catch @ 03359bfc */
    if (uVar4 == 0x350ca8af) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6288,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6289,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (!bVar2) goto LAB_0335aa60;
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar12 = IFAMAAGNCBJ__GPBMELHDADN<object>
                          (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      SVar3 = AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (((ushort)SVar3.fields & 0xff) == 0) {
        if (pIVar12 == (Il2CppObject *)0x0) goto LAB_0335b160;
        bVar2 = *(char *)((long)&pIVar12[1].klass + 2) == '\0';
      }
      else {
        bVar2 = ((ushort)SVar3.fields & 0xff00) != 0;
        if (pIVar12 == (Il2CppObject *)0x0) {
LAB_0335b160:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      *(bool *)((long)&pIVar12[1].klass + 2) = bVar2;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6308,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6309,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      local_64[0] = *(undefined1 *)((long)&pIVar12[1].klass + 2);
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(bool_TypeInfo);
      }
      pSVar8 = System_Boolean__ToString(SUB81(local_64,0),(MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6310,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar17 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6311;
LAB_0335af30:
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar17->value,
                 (MethodInfo *)0x0);
      pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      pSVar14 = AJAMDCEKAFE__OFAELFKHOND(pSVar14,(MethodInfo *)0x0);
LAB_0335b154:
      pSVar5 = System_String__Concat(pSVar5,pSVar8,pSVar14,(MethodInfo *)0x0);
      return pSVar5;
    }
    if (uVar4 != 0x360caa42) {
LAB_0335aa60:
      pSVar5 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
      return pSVar5;
    }
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6294,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6295,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_0335aa60;
    if ((AiData_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AiData__HPGKPPILFKI((MethodInfo *)0x0);
    if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    System_GC__Collect((MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6320,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6321,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6322,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03359d54 to 03459d7b has its CatchHandler @ 0335a120 */
    pSVar17 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6323;
  }
  else {
    if (uVar4 == 0xb3711c47) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6306,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6307,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (bVar2) {
        __this_00 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
        __this_01 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_01,Method_System_Collections_Generic_List<string>__ctor__);
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
        pDVar18 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if ((pDVar18 != (Item_o *)0x0) &&
           (__this_02 = (pDVar18->fields).GNCBIPJFEGB,
           __this_02 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                     (System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
          local_90 = (Il2CppObject *)CONCAT44(uStack_a4,local_a8);
          iVar20 = 0;
          uStack_98 = pvStack_b0;
          local_a0 = local_b8;
          while( true ) {
            do {
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                                 Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                                );
              pIVar12 = local_90;
              if (!bVar2) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
                ;
                pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar6,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6360,
                           (MethodInfo *)0x0);
                pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar7,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6361,
                           (MethodInfo *)0x0);
                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                local_b8._0_4_ = iVar20;
                pIVar12 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,local_b8);
                pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar6,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6362,
                           (MethodInfo *)0x0);
                pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar7,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6363,
                           (MethodInfo *)0x0);
                pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                pSVar8 = AJAMDCEKAFE__OFAELFKHOND(pSVar8,(MethodInfo *)0x0);
                pSVar5 = System_String__Format
                                   (pSVar5,pIVar12,(Il2CppObject *)pSVar8,(MethodInfo *)0x0);
                return pSVar5;
              }
              if (local_90 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar2 = System_Collections_Generic_List<object>__Contains
                                (__this_00,local_90[3].monitor,
                                 Method_System_Collections_Generic_List<string>_Contains__);
            } while (bVar2);
            if ((AiData_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            AiData__HPGKPPILFKI((MethodInfo *)0x0);
            lVar13 = Method_System_Collections_Generic_List<string>_Add__;
            item = pIVar12[3].monitor;
            pSVar19 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pSVar19->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pSVar19->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                        );
            }
            pSVar10 = (System_Collections_Generic_List_string__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)pSVar10,
                       Method_System_Collections_Generic_List<string>__ctor__);
            lVar13 = Method_System_Collections_Generic_List<string>_Add__;
            if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar5 = pIVar12[3].monitor;
            pSVar11 = (pSVar10->fields)._items;
            (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
            if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar10->fields)._size;
            if (uVar1 < (uint)pSVar11->max_length) {
              (pSVar10->fields)._size = uVar1 + 1;
              pSVar11->m_Items[(int)uVar1] = pSVar5;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar5
                         ,*(MethodInfo_26E4DAC **)
                           (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            iVar20 = iVar20 + 1;
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6358,
                       (MethodInfo *)0x0);
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6359,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
            pSVar19 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            if (pSVar19 == (System_Object_array *)0x0) break;
            pIVar12 = pIVar12[3].monitor;
            if ((pIVar12 != (Il2CppObject *)0x0) &&
               (lVar13 = thunk_FUN_01bda71c(pIVar12,(((pSVar19->obj).klass)->_1).element_class),
               lVar13 == 0)) {
              uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar15,0);
            }
            if ((int)pSVar19->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar19->m_Items[0] = pIVar12;
            thunk_FUN_01c20e04(pSVar19->m_Items,pIVar12);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogFormat(pSVar5,pSVar19,(MethodInfo *)0x0);
            AiData__BKCFPHNEONL(pSVar10,pSVar10,(MethodInfo *)0x0);
            if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            System_GC__Collect((MethodInfo *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_0335b160;
      }
      goto LAB_0335aa60;
    }
    if (uVar4 != 0x370cabd5) {
      if (uVar4 != 0x3d0cb547) goto LAB_0335aa60;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6304,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6305,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      if (!bVar2) goto LAB_0335aa60;
      if ((AiData_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AiData_TypeInfo->static_fields->OOAOJIHCHDB =
           (bool_conflict)(AiData_TypeInfo->static_fields->OOAOJIHCHDB ^ 1);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6356,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6357,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(bool_TypeInfo);
      }
      pSVar8 = System_Boolean__ToString
                         ((bool)((char)AiData_TypeInfo->static_fields + ' '),(MethodInfo *)0x0)
      ;
      goto LAB_0335a644;
    }
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6292,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6293,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_0335aa60;
    if ((AiData_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AiData__CCCOGGIBFNI(true,(MethodInfo *)0x0);
    if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    System_GC__Collect((MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6316,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6317,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6318,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar17 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6319;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar17->value,(MethodInfo *)0x0)
  ;
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  pSVar8 = AJAMDCEKAFE__OFAELFKHOND(pSVar8,(MethodInfo *)0x0);
LAB_0335a644:
  pSVar5 = System_String__Concat(pSVar5,pSVar8,(MethodInfo *)0x0);
  return pSVar5;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x325B254]
// DKNGKHNHLEJ$$DLKKPFHKIPB @ RVA 0x325B254

System_Collections_Generic_IEnumerable_string__o *
DKNGKHNHLEJ__DLKKPFHKIPB(DKNGKHNHLEJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04567185 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6364);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6365);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567185 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6364,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6365,(MethodInfo *)0x0);
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


// ===== public string IGMDDJFPIJL()  [RVA 0x325B3C4]
// DKNGKHNHLEJ$$IGMDDJFPIJL @ RVA 0x325B3C4

System_String_o * DKNGKHNHLEJ__IGMDDJFPIJL(DKNGKHNHLEJ_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04567186 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6366);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy704___field_2);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567186 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6366,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x2c0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy704___field_2,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x325B474]
// DKNGKHNHLEJ$$.ctor @ RVA 0x325B474

void DKNGKHNHLEJ___ctor(DKNGKHNHLEJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x325B47C]
// DKNGKHNHLEJ$$ECKDICODLME @ RVA 0x325B47C

bool DKNGKHNHLEJ__ECKDICODLME(DKNGKHNHLEJ_o *__this,MethodInfo *method)

{
  return true;
}

