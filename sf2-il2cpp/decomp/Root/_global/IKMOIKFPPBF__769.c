// TypeDefIndex 769
// Namespace: 
// public class IKMOIKFPPBF
// Fields:
//   public static readonly byte[] EDCHCICLDBD; // 0x0
//   public static readonly byte[] PDMLGKMLOKP; // 0x8
//   private static List<ObscuredString> ODDBHAIDAOM; // 0x10

// ===== public static bool JCDHIOHIFEL(string ILENGCADNIH)  [RVA 0x3051990]
// IKMOIKFPPBF$$JCDHIOHIFEL @ RVA 0x3051990

bool IKMOIKFPPBF__JCDHIOHIFEL(System_String_o *ILENGCADNIH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  IKMOIKFPPBF_c *pIVar2;
  System_String_o *value;
  IKMOIKFPPBF_StaticFields *pIVar3;
  
  if ((DAT_04565e4e & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    DAT_04565e4e = 1;
  }
  __this = CMEBCBKGFFL__NFBODKMCAMM(ILENGCADNIH,(MethodInfo *)0x0);
  pIVar2 = IKMOIKFPPBF_TypeInfo;
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    pIVar2 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
  }
  value = IKMOIKFPPBF__CDDEBPCPMNB((MethodInfo *)pIVar2);
  if (__this != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(__this,value,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = IKMOIKFPPBF_TypeInfo;
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        pIVar2 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
      }
      IKMOIKFPPBF__HPDELGJFBDK((MethodInfo *)pIVar2);
      pIVar3 = IKMOIKFPPBF_TypeInfo->static_fields;
      if (pIVar3->ODDBHAIDAOM == (System_Collections_Generic_List_ObscuredString__o *)0x0) {
        bVar1 = true;
      }
      else {
        if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pIVar3 = IKMOIKFPPBF_TypeInfo->static_fields;
        }
        bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                          (__this,(System_Collections_Generic_IEnumerable_ObscuredString__o *)
                                  pIVar3->ODDBHAIDAOM,(MethodInfo *)0x0);
        bVar1 = !bVar1;
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void GKLMBGBOODF()  [RVA 0x3051D70]
// IKMOIKFPPBF$$GKLMBGBOODF @ RVA 0x3051D70

void IKMOIKFPPBF__GKLMBGBOODF(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *NLKCKFEFELJ;
  
  if ((DAT_04565e4f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2848);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2849);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    DAT_04565e4f = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2848,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2849,(MethodInfo *)0x0);
  NLKCKFEFELJ = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
  }
  EOOEOHKLOFJ__GBCPKPECOKH(NLKCKFEFELJ,(MethodInfo *)0x0);
  return;
}


// ===== private static string BIJFFJILEBE()  [RVA 0x3051E58]
// IKMOIKFPPBF$$BIJFFJILEBE @ RVA 0x3051E58

System_String_o * IKMOIKFPPBF__BIJFFJILEBE(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04565e50 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2850);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2851);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565e50 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2850,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2851,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x3051F08]
// IKMOIKFPPBF$$.cctor @ RVA 0x3051F08

void IKMOIKFPPBF___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *pSVar2;
  MethodInfo *method_00;
  System_Byte_array **ppSVar3;
  
  if ((DAT_04565e51 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    DAT_04565e51 = 1;
  }
  pSVar1 = IKMOIKFPPBF__NJLEHCMENAJ(method);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03151f64 to 03251fb3 has its CatchHandler @ 03151f64
                       catch() { ... } // from try @ 03151f64 with catch @ 03151f64
                       catch() { ... } // from try @ 03151ffc with catch @ 03151f64
                       catch() { ... } // from try @ 03152040 with catch @ 03151f64
                       catch() { ... } // from try @ 03152090 with catch @ 03151f64 */
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  pSVar2 = System_Convert__FromBase64String(pSVar1,(MethodInfo *)0x0);
  IKMOIKFPPBF_TypeInfo->static_fields->EDCHCICLDBD = pSVar2;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(IKMOIKFPPBF_TypeInfo->static_fields,pSVar2);
  pSVar1 = IKMOIKFPPBF__BIJFFJILEBE(method_00);
  pSVar2 = System_Convert__FromBase64String(pSVar1,(MethodInfo *)0x0);
  ppSVar3 = &IKMOIKFPPBF_TypeInfo->static_fields->PDMLGKMLOKP;
  *ppSVar3 = pSVar2;
                    /* try { // try from 03151fb4 to 03251fbf has its CatchHandler @ 03152050 */
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  return;
}


// ===== public static void RandomizeObscuredVars()  [RVA 0x305206C]
// IKMOIKFPPBF$$RandomizeObscuredVars @ RVA 0x305206C

void IKMOIKFPPBF__RandomizeObscuredVars(MethodInfo *method)

{
  System_Action_ObscuredString__o **ppSVar1;
  System_Collections_Generic_List_ObscuredString__o *__this;
  System_Action_ObscuredString__o *action;
  
                    /* catch() { ... } // from try @ 03152068 with catch @ 03152078 */
                    /* try { // try from 03152084 to 0325208f has its CatchHandler @ 031520a4 */
  if ((DAT_04565e52 & 1) == 0) {
                    /* try { // try from 03152090 to 0325209b has its CatchHandler @ 03151f64 */
    FUN_01bab630(&System_Action<ObscuredString>_TypeInfo);
                    /* try { // try from 0315209c to 032520a3 has its CatchHandler @ 031520a4 */
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03152084 with catch @ 031520a4
                       catch(type#2 @ 00000000) { ... } // from try @ 0315209c with catch @ 031520a4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_ForEach__);
    FUN_01bab630(&Method_IKMOIKFPPBF_<>c_PBCDGCEANDP__);
    FUN_01bab630(&IKMOIKFPPBF_<>c_TypeInfo);
    DAT_04565e52 = 1;
  }
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = IKMOIKFPPBF_TypeInfo->static_fields->ODDBHAIDAOM;
  if (__this != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
    if ((IKMOIKFPPBF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = IKMOIKFPPBF_<>c_TypeInfo->static_fields->__9__10_0;
    if (action == (System_Action_ObscuredString__o *)0x0) {
      if ((IKMOIKFPPBF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_ObscuredString__o *)
               thunk_FUN_01bda818(System_Action<ObscuredString>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &IKMOIKFPPBF_<>c_TypeInfo->static_fields->__9__10_0;
      *ppSVar1 = action;
      thunk_FUN_01c20e04(ppSVar1,action);
    }
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ObscuredString>_ForEach__);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x30521A4]
// IKMOIKFPPBF$$.ctor @ RVA 0x30521A4

void IKMOIKFPPBF___ctor(IKMOIKFPPBF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static string CDDEBPCPMNB()  [RVA 0x3051B1C]
// IKMOIKFPPBF$$CDDEBPCPMNB @ RVA 0x3051B1C

System_String_o * IKMOIKFPPBF__CDDEBPCPMNB(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565e53 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04565e53 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = CMEBCBKGFFL__NFBODKMCAMM(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static string IHBBADJCDNA()  [RVA 0x30521AC]
// IKMOIKFPPBF$$IHBBADJCDNA @ RVA 0x30521AC

System_String_o * IKMOIKFPPBF__IHBBADJCDNA(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04565e54 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_1);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2852);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565e54 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2852,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xc0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_1,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string PCPAFLBHBMF(string EHNFGMGKCHO)  [RVA 0x305225C]
// IKMOIKFPPBF$$PCPAFLBHBMF @ RVA 0x305225C

System_String_o * IKMOIKFPPBF__PCPAFLBHBMF(System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  IKMOIKFPPBF_c *method_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e55 & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    DAT_04565e55 = 1;
    method = extraout_x1;
  }
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IKMOIKFPPBF_TypeInfo,method);
  }
  value = IBMPAMLCCHF__EOJPLECOGAD
                    (EHNFGMGKCHO,IKMOIKFPPBF_TypeInfo->static_fields->EDCHCICLDBD,
                     IKMOIKFPPBF_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    method_00 = IKMOIKFPPBF_TypeInfo;
    if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
    }
    IKMOIKFPPBF__GKLMBGBOODF((MethodInfo *)method_00);
  }
  return value;
}


// ===== private static string NJLEHCMENAJ()  [RVA 0x3051FBC]
// IKMOIKFPPBF$$NJLEHCMENAJ @ RVA 0x3051FBC

System_String_o * IKMOIKFPPBF__NJLEHCMENAJ(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 03151fe8 to 03251ffb has its CatchHandler @ 03152048 */
  if ((DAT_04565e56 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2861);
                    /* try { // try from 03151ffc to 03252033 has its CatchHandler @ 03151f64 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2862);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565e56 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2861,(MethodInfo *)0x0);
                    /* try { // try from 03152034 to 03252037 has its CatchHandler @ 0315204c */
                    /* try { // try from 03152038 to 0325203b has its CatchHandler @ 03152044 */
                    /* try { // try from 0315203c to 0325203f has its CatchHandler @ 03152040 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0315203c with catch @ 03152040
                       try { // try from 03152040 to 03252067 has its CatchHandler @ 03151f64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03152038 with catch @ 03152044
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03151fe8 with catch @ 03152048
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03152034 with catch @ 0315204c
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2862,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03151fb4 with catch @ 03152050
                        */
                    /* try { // try from 03152068 to 0325206b has its CatchHandler @ 03152078 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static byte[] FHFADKNMJLB(byte[] OCMMDIHLKMH)  [RVA 0x30526C4]
// IKMOIKFPPBF$$FHFADKNMJLB @ RVA 0x30526C4

System_Byte_array * IKMOIKFPPBF__FHFADKNMJLB(System_Byte_array *OCMMDIHLKMH,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  IKMOIKFPPBF_c *method_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e57 & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    DAT_04565e57 = 1;
    method = extraout_x1;
  }
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IKMOIKFPPBF_TypeInfo,method);
  }
  pSVar1 = IBMPAMLCCHF__FHFADKNMJLB
                     (OCMMDIHLKMH,IKMOIKFPPBF_TypeInfo->static_fields->EDCHCICLDBD,
                      IKMOIKFPPBF_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
  if (pSVar1 == (System_Byte_array *)0x0) {
    method_00 = IKMOIKFPPBF_TypeInfo;
    if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
    }
    IKMOIKFPPBF__GKLMBGBOODF((MethodInfo *)method_00);
    pSVar1 = (System_Byte_array *)0x0;
  }
  return pSVar1;
}


// ===== private static void HPDELGJFBDK()  [RVA 0x3051B74]
// IKMOIKFPPBF$$HPDELGJFBDK @ RVA 0x3051B74

void IKMOIKFPPBF__HPDELGJFBDK(MethodInfo *method)

{
  IKMOIKFPPBF_c *method_00;
  System_String_o *pSVar1;
  System_Char_array *separator;
  System_String_array *source;
  System_Func_string__ObscuredString__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_ObscuredString__o *pSVar3;
  System_Collections_Generic_List_ObscuredString__o **ppSVar4;
  MethodInfo *method_01;
  System_Func_string__ObscuredString__o *selector;
  
  if ((DAT_04565e58 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<string,_ObscuredString>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<ObscuredString>__);
    FUN_01bab630(&System_Func<string,_ObscuredString>_TypeInfo);
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    FUN_01bab630(&Method_IKMOIKFPPBF_<>c_HNOPMLMCEKL__);
    FUN_01bab630(&IKMOIKFPPBF_<>c_TypeInfo);
    DAT_04565e58 = 1;
  }
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (IKMOIKFPPBF_TypeInfo->static_fields->ODDBHAIDAOM !=
      (System_Collections_Generic_List_ObscuredString__o *)0x0) {
    return;
  }
  method_00 = IKMOIKFPPBF_TypeInfo;
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = IKMOIKFPPBF__IHBBADJCDNA((MethodInfo *)method_00);
  pSVar1 = IKMOIKFPPBF__PCPAFLBHBMF(pSVar1,method_01);
  separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    separator->m_Items[0] = 0x7c;
    if (pSVar1 != (System_String_o *)0x0) {
      source = System_String__Split(pSVar1,separator,1,(MethodInfo *)0x0);
      if ((IKMOIKFPPBF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IKMOIKFPPBF_<>c_TypeInfo);
      }
      selector = IKMOIKFPPBF_<>c_TypeInfo->static_fields->__9__9_0;
      if (selector == (System_Func_string__ObscuredString__o *)0x0) {
        if ((IKMOIKFPPBF_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IKMOIKFPPBF_<>c_TypeInfo);
        }
        selector = (System_Func_string__ObscuredString__o *)
                   thunk_FUN_01bda818(System_Func<string,_ObscuredString>_TypeInfo);
        System_Func<object,_object>___ctor();
        ppSVar2 = &IKMOIKFPPBF_<>c_TypeInfo->static_fields->__9__9_0;
        *ppSVar2 = selector;
        thunk_FUN_01c20e04(ppSVar2,selector);
      }
      source_00 = System_Linq_Enumerable__Select<object,_object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TResult__o *)selector,
                             Method_System_Linq_Enumerable_Select<string,_ObscuredString>__);
      pSVar3 = (System_Collections_Generic_List_ObscuredString__o *)
               System_Linq_Enumerable__ToList<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                          Method_System_Linq_Enumerable_ToList<ObscuredString>__);
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IKMOIKFPPBF_TypeInfo);
      }
      ppSVar4 = &IKMOIKFPPBF_TypeInfo->static_fields->ODDBHAIDAOM;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

