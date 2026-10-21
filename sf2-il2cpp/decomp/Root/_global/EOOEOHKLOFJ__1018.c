// TypeDefIndex 1018
// Namespace: 
// public class EOOEOHKLOFJ
// Fields:
//   private static bool <FEFAAHBCPED>k__BackingField; // 0x0
//   private static HashSet<string> ANAIGEKGOJA; // 0x8
//   private static List<string> LDBFKOHBOLC; // 0x10

// ===== public static bool AKOGBBLPIEC()  [RVA 0x30C4D50]
// EOOEOHKLOFJ$$AKOGBBLPIEC @ RVA 0x30C4D50

bool EOOEOHKLOFJ__AKOGBBLPIEC(MethodInfo *method)

{
  if ((DAT_045662a8 & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    DAT_045662a8 = 1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return EOOEOHKLOFJ_TypeInfo->static_fields->_FEFAAHBCPED_k__BackingField;
}


// ===== public static bool EGFIEDINDAC(string JAFADHFFBPK)  [RVA 0x30C4DA8]
// EOOEOHKLOFJ$$EGFIEDINDAC @ RVA 0x30C4DA8

bool EOOEOHKLOFJ__EGFIEDINDAC(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662a9 & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_045662a9 = 1;
    method = extraout_x1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo,method);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this,(Il2CppObject *)JAFADHFFBPK,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static IReadOnlyList<string> MENDBBALPEC()  [RVA 0x30C4E28]
// EOOEOHKLOFJ$$MENDBBALPEC @ RVA 0x30C4E28

System_Collections_Generic_IReadOnlyList_string__o * EOOEOHKLOFJ__MENDBBALPEC(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o **ppSVar4;
  System_String_array *pSVar5;
  
  if ((DAT_045662aa & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662aa = 1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (EOOEOHKLOFJ_TypeInfo->static_fields->LDBFKOHBOLC ==
      (System_Collections_Generic_List_string__o *)0x0) {
    __this = (System_Collections_Generic_List_string__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<string>__ctor__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar5 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar5 != (System_String_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = pSVar3;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = NLPJLHOEAOE__DGBOOECJDDG((MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar5 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar5 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar5->m_Items[(int)uVar1] = pSVar3;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar3 = NLPJLHOEAOE__BPEDDHLKDID((MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar5 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar5 != (System_String_array *)0x0) {
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar5->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar5->m_Items[(int)uVar1] = pSVar3;
              thunk_FUN_01c20e04();
                    /* try { // try from 031c4ff8 to 032c5123 has its CatchHandler @ 031c4ff8
                       catch() { ... } // from try @ 031c4ff8 with catch @ 031c4ff8
                       catch() { ... } // from try @ 031c5220 with catch @ 031c4ff8
                       catch() { ... } // from try @ 031c52b8 with catch @ 031c4ff8
                       catch() { ... } // from try @ 031c53a4 with catch @ 031c4ff8
                       catch() { ... } // from try @ 031c5450 with catch @ 031c4ff8 */
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar3 = NLPJLHOEAOE__KAGDGCJOCOC((MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar5 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar5 != (System_String_array *)0x0) {
              uVar1 = (__this->fields)._size;
              if (uVar1 < (uint)pSVar5->max_length) {
                (__this->fields)._size = uVar1 + 1;
                pSVar5->m_Items[(int)uVar1] = pSVar3;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,
                           (Il2CppObject *)pSVar3,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              ppSVar4 = &EOOEOHKLOFJ_TypeInfo->static_fields->LDBFKOHBOLC;
              *ppSVar4 = __this;
              thunk_FUN_01c20e04(ppSVar4,__this);
              goto LAB_031c5098;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031c5098:
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return (System_Collections_Generic_IReadOnlyList_string__o *)
         EOOEOHKLOFJ_TypeInfo->static_fields->LDBFKOHBOLC;
}


// ===== private static void .cctor()  [RVA 0x30C50C0]
// EOOEOHKLOFJ$$.cctor @ RVA 0x30C50C0

void EOOEOHKLOFJ___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_HashSet_string__o **ppSVar1;
  
  if ((DAT_045662ab & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    DAT_045662ab = 1;
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
                    /* try { // try from 031c5124 to 032c514b has its CatchHandler @ 031c53c0 */
  System_Collections_Generic_HashSet<object>___ctor
            (__this,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar1 = &EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  *ppSVar1 = (System_Collections_Generic_HashSet_string__o *)__this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}


// ===== public static void CKGAPAOFFPH(string JAFADHFFBPK)  [RVA 0x30C5150]
// EOOEOHKLOFJ$$CKGAPAOFFPH @ RVA 0x30C5150

void EOOEOHKLOFJ__CKGAPAOFFPH(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662ac & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
                    /* try { // try from 031c5180 to 032c51a7 has its CatchHandler @ 031c53bc */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    DAT_045662ac = 1;
    method = extraout_x1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo,method);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add
              (__this,(Il2CppObject *)JAFADHFFBPK,
               Method_System_Collections_Generic_HashSet<string>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30C51D0]
// EOOEOHKLOFJ$$.ctor @ RVA 0x30C51D0

void EOOEOHKLOFJ___ctor(EOOEOHKLOFJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static bool HBGCPAEJCJJ()  [RVA 0x30C51D8]
// EOOEOHKLOFJ$$HBGCPAEJCJJ @ RVA 0x30C51D8

bool EOOEOHKLOFJ__HBGCPAEJCJJ(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *pSVar1;
  
                    /* try { // try from 031c51f0 to 032c521f has its CatchHandler @ 031c53c4 */
  if ((DAT_045662ad & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    DAT_045662ad = 1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031c5220 to 032c52a7 has its CatchHandler @ 031c4ff8 */
    thunk_FUN_01ba7564();
  }
  pSVar1 = EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  if (pSVar1 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    return 0 < (pSVar1->fields)._count;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void MACGEGDGBOI()  [RVA 0x30C5250]
// EOOEOHKLOFJ$$MACGEGDGBOI @ RVA 0x30C5250

void EOOEOHKLOFJ__MACGEGDGBOI(MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *PCPECHHMLEC;
  System_String_o *EHNFGMGKCHO;
  System_String_o *KCFLBKINDFM;
  System_String_o *KHPLLCKLJKO;
  System_Action_object__o **ppSVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar4;
  System_Action_object__o *IELDNEAAPBE;
  
                    /* try { // try from 031c52a8 to 032c52ab has its CatchHandler @ 031c53c8 */
                    /* try { // try from 031c52ac to 032c52af has its CatchHandler @ 031c53b8 */
                    /* try { // try from 031c52b0 to 032c52b3 has its CatchHandler @ 031c53b4 */
                    /* try { // try from 031c52b4 to 032c52b7 has its CatchHandler @ 031c53b0 */
                    /* try { // try from 031c52b8 to 032c539f has its CatchHandler @ 031c4ff8 */
  if ((DAT_045662ae & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4095);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4096);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4097);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4098);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4099);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4100);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4101);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4102);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EOOEOHKLOFJ_<>c_DKMLIHEIFNB__);
    FUN_01bab630(&EOOEOHKLOFJ_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045662ae = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4095,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031c53a0 to 032c53a3 has its CatchHandler @ 031c53ac */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4096,(MethodInfo *)0x0);
                    /* try { // try from 031c53a4 to 032c53df has its CatchHandler @ 031c4ff8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c53a0 with catch @ 031c53ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c52b4 with catch @ 031c53b0
                        */
  PCPECHHMLEC = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c52b0 with catch @ 031c53b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c52ac with catch @ 031c53b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c5180 with catch @ 031c53bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c5124 with catch @ 031c53c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c51f0 with catch @ 031c53c4
                        */
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c52a8 with catch @ 031c53c8
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4097,(MethodInfo *)0x0);
                    /* try { // try from 031c53e0 to 032c53e3 has its CatchHandler @ 031c53f0 */
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 031c53e0 with catch @ 031c53f0 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4098,(MethodInfo *)0x0);
  EHNFGMGKCHO = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4099,(MethodInfo *)0x0);
                    /* try { // try from 031c5428 to 032c544f has its CatchHandler @ 031c5464 */
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4100,(MethodInfo *)0x0);
                    /* try { // try from 031c5450 to 032c545b has its CatchHandler @ 031c4ff8 */
  KCFLBKINDFM = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 031c545c to 032c5463 has its CatchHandler @ 031c5464 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c5428 with catch @ 031c5464
                       catch(type#2 @ 00000000) { ... } // from try @ 031c545c with catch @ 031c5464
                        */
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4101,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4102,(MethodInfo *)0x0);
  KHPLLCKLJKO = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((EOOEOHKLOFJ_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_<>c_TypeInfo);
  }
  IELDNEAAPBE = EOOEOHKLOFJ_<>c_TypeInfo->static_fields->__9__9_0;
  if (IELDNEAAPBE == (System_Action_object__o *)0x0) {
    if ((EOOEOHKLOFJ_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOOEOHKLOFJ_<>c_TypeInfo);
    }
    IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar3 = &EOOEOHKLOFJ_<>c_TypeInfo->static_fields->__9__9_0;
    *ppSVar3 = IELDNEAAPBE;
    thunk_FUN_01c20e04(ppSVar3,IELDNEAAPBE);
  }
  pNVar4 = JJPNLEPEAFM__JNDPLPKDPCP
                     (PCPECHHMLEC,EHNFGMGKCHO,KCFLBKINDFM,KHPLLCKLJKO,IELDNEAAPBE,1,0,false,false,
                      StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    (pNVar4->fields).IsIgnoreBack = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void GBCPKPECOKH(string NLKCKFEFELJ)  [RVA 0x30C55A4]
// EOOEOHKLOFJ$$GBCPKPECOKH @ RVA 0x30C55A4

void EOOEOHKLOFJ__GBCPKPECOKH(System_String_o *NLKCKFEFELJ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *pSVar9;
  EOOEOHKLOFJ_c *method_00;
  Il2CppObject *pIVar10;
  VirtualInvokeData *pVVar11;
  long lVar12;
  System_String_o *pSVar13;
  PDGHODJHCGP_o *__this;
  PDGHODJHCGP_HIBNPLAHCBH_o *pPVar14;
  PDGHODJHCGP_HIBNPLAHCBH_o **ppPVar15;
  Il2CppClass *pIVar16;
  long lVar17;
  ulong uVar18;
  int32_t *piVar19;
  undefined8 uVar20;
  
  if ((DAT_045662af & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_Core_ApplicationController_Quit__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_2);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4103);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4104);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4105);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4106);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4107);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4108);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4109);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4110);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4111);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4112);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4113);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4114);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4115);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<EOOEOHKLOFJ>__);
    FUN_01bab630(&PDGHODJHCGP_TypeInfo);
    DAT_045662af = 1;
  }
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4103,(MethodInfo *)0x0);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4104,(MethodInfo *)0x0);
  pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat(pSVar9,NLKCKFEFELJ,(MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM<object>(pSVar9,Method_KFJJHMDIFIG_ONCJPMNKDIM<EOOEOHKLOFJ>__);
  method_00 = EOOEOHKLOFJ_TypeInfo;
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EOOEOHKLOFJ_c *)thunk_FUN_01ba7564();
  }
  EOOEOHKLOFJ__HKIPENGAJPF((MethodInfo *)method_00);
  bVar5 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (bVar5) {
    pIVar10 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar10 == (Il2CppObject *)0x0) goto LAB_031c5d8c;
    pIVar16 = pIVar10->klass;
    uVar1._0_1_ = (pIVar16->_2).rank;
    uVar1._1_1_ = (pIVar16->_2).minimumAlignment;
    uVar18 = (ulong)uVar1;
    if (uVar18 != 0) {
      piVar19 = &((pIVar16->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 031c5800 to 032c5907 has its CatchHandler @ 031c5800
                       catch() { ... } // from try @ 031c5800 with catch @ 031c5800
                       catch() { ... } // from try @ 031c59e4 with catch @ 031c5800
                       catch() { ... } // from try @ 031c5aa4 with catch @ 031c5800
                       catch() { ... } // from try @ 031c5b40 with catch @ 031c5800 */
          pVVar11 = pIVar16->vtable + (*piVar19 + 4);
          goto LAB_031c580c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar10,BLEFOFGCKEF_TypeInfo,4);
LAB_031c580c:
    uVar6 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
    uVar6 = uVar6 ^ 1;
    if ((uVar6 & 1) != 0) goto LAB_031c5928;
    pIVar10 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4107,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4108,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    lVar12 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar12 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01b81620();
    }
    if (pIVar10 == (Il2CppObject *)0x0) goto LAB_031c5d8c;
    pIVar16 = pIVar10->klass;
    uVar20 = **(undefined8 **)(lVar12 + 0xb8);
    uVar2._0_1_ = (pIVar16->_2).rank;
    uVar2._1_1_ = (pIVar16->_2).minimumAlignment;
    uVar18 = (ulong)uVar2;
    if (uVar18 != 0) {
      piVar19 = &((pIVar16->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 031c5908 to 032c592f has its CatchHandler @ 031c5ab4 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar11 = pIVar16->vtable + (*piVar19 + 0xc);
          goto LAB_031c59fc;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar10,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c59fc:
    pSVar9 = (System_String_o *)(*pVVar11->methodPtr)(pIVar10,pSVar9,uVar20,pVVar11->method);
    pIVar10 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4110,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4111,(MethodInfo *)0x0)
    ;
    pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    lVar12 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                    /* try { // try from 031c5a8c to 032c5a9f has its CatchHandler @ 031c5ab8 */
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar12 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
                    /* try { // try from 031c5aa0 to 032c5aa3 has its CatchHandler @ 031c5aac */
                    /* try { // try from 031c5aa4 to 032c5acb has its CatchHandler @ 031c5800 */
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c5aa0 with catch @ 031c5aac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c5964 with catch @ 031c5ab0
                        */
    if (*(int *)(lVar17 + 0xe0) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c5908 with catch @ 031c5ab4
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c5a8c with catch @ 031c5ab8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c5994 with catch @ 031c5abc
                        */
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01b81620();
    }
                    /* try { // try from 031c5acc to 032c5acf has its CatchHandler @ 031c5ae0 */
    if (pIVar10 == (Il2CppObject *)0x0) goto LAB_031c5d8c;
    pIVar16 = pIVar10->klass;
    uVar20 = **(undefined8 **)(lVar12 + 0xb8);
    uVar3._0_1_ = (pIVar16->_2).rank;
    uVar3._1_1_ = (pIVar16->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 031c5acc with catch @ 031c5ae0 */
    uVar18 = (ulong)uVar3;
    if (uVar18 != 0) {
      piVar19 = &((pIVar16->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 031c5b18 to 032c5b3f has its CatchHandler @ 031c5b54 */
          pVVar11 = pIVar16->vtable + (*piVar19 + 0xc);
          goto LAB_031c5b28;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar10,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c5b28:
    pSVar13 = (System_String_o *)(*pVVar11->methodPtr)(pIVar10,pSVar13,uVar20,pVVar11->method);
  }
  else {
LAB_031c5928:
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4105,(MethodInfo *)0x0)
    ;
                    /* try { // try from 031c5964 to 032c598b has its CatchHandler @ 031c5ab0 */
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4106,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 031c5994 to 032c59e3 has its CatchHandler @ 031c5abc */
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4109,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xc0);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_2,(MethodInfo *)0x0);
    pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 031c59e4 to 032c5a8b has its CatchHandler @ 031c5800 */
    uVar6 = 1;
  }
                    /* try { // try from 031c5b40 to 032c5b4b has its CatchHandler @ 031c5800 */
                    /* try { // try from 031c5b4c to 032c5b53 has its CatchHandler @ 031c5b54 */
  __this = (PDGHODJHCGP_o *)thunk_FUN_01bda818(PDGHODJHCGP_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c5b18 with catch @ 031c5b54
                       catch(type#2 @ 00000000) { ... } // from try @ 031c5b4c with catch @ 031c5b54
                        */
  PDGHODJHCGP___ctor(__this,pSVar9,pSVar13,(MethodInfo *)0x0);
  if ((uVar6 & 1) == 0) {
    pIVar10 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4114,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4115,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    lVar12 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar12 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01b81620();
    }
    if (pIVar10 == (Il2CppObject *)0x0) goto LAB_031c5d8c;
    pIVar16 = pIVar10->klass;
    uVar20 = **(undefined8 **)(lVar12 + 0xb8);
    uVar4._0_1_ = (pIVar16->_2).rank;
    uVar4._1_1_ = (pIVar16->_2).minimumAlignment;
    uVar18 = (ulong)uVar4;
    if (uVar18 != 0) {
      piVar19 = &((pIVar16->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar11 = pIVar16->vtable + (*piVar19 + 0xc);
          goto LAB_031c5ce4;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar10,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c5ce4:
    pSVar9 = (System_String_o *)(*pVVar11->methodPtr)(pIVar10,pSVar9,uVar20,pVVar11->method);
  }
  else {
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4112,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4113,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
  }
  pPVar14 = (PDGHODJHCGP_HIBNPLAHCBH_o *)thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
  PDGHODJHCGP_HIBNPLAHCBH___ctor
            (pPVar14,(Il2CppObject *)0x0,Method_Nekki_SF2_Core_ApplicationController_Quit__,
             (MethodInfo *)0x0);
  if (__this != (PDGHODJHCGP_o *)0x0) {
    PDGHODJHCGP__IEFEBMICIHN(__this,pSVar9,pPVar14,(MethodInfo *)0x0);
    pPVar14 = (PDGHODJHCGP_HIBNPLAHCBH_o *)thunk_FUN_01bda818(PDGHODJHCGP_HIBNPLAHCBH_TypeInfo);
    PDGHODJHCGP_HIBNPLAHCBH___ctor
              (pPVar14,(Il2CppObject *)0x0,Method_Nekki_SF2_Core_ApplicationController_Quit__,
               (MethodInfo *)0x0);
    ppPVar15 = &(__this->fields).NIMBKJIIDLF;
    *ppPVar15 = pPVar14;
    thunk_FUN_01c20e04(ppPVar15,pPVar14);
    PDGHODJHCGP__BFCCEGGDJEF(__this,(MethodInfo *)0x0);
    return;
  }
LAB_031c5d8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AEFMGGOAHKL(bool CJNHFNHJHPE)  [RVA 0x30C5EEC]
// EOOEOHKLOFJ$$AEFMGGOAHKL @ RVA 0x30C5EEC

void EOOEOHKLOFJ__AEFMGGOAHKL(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045662b0 & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    DAT_045662b0 = 1;
    method = extraout_x1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo,method);
  }
  EOOEOHKLOFJ_TypeInfo->static_fields->_FEFAAHBCPED_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static bool HJEPIFKKJEP()  [RVA 0x30C5F4C]
// EOOEOHKLOFJ$$HJEPIFKKJEP @ RVA 0x30C5F4C

/* WARNING: Removing unreachable block (ram,0x031c67b0) */

bool EOOEOHKLOFJ__HJEPIFKKJEP(MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  EOOEOHKLOFJ_c *method_00;
  System_Collections_Generic_IReadOnlyList_string__o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  Il2CppObject *arg1;
  uint uVar13;
  System_Collections_Generic_IReadOnlyList_string__c *pSVar14;
  long lVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  int local_64;
  
  if ((DAT_045662b1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4116);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4117);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4118);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4119);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4120);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4121);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4122);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4123);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4124);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4125);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4126);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4127);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4128);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4129);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4130);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4131);
                    /* try { // try from 031c605c to 032c60f7 has its CatchHandler @ 031c605c
                       catch() { ... } // from try @ 031c605c with catch @ 031c605c
                       catch() { ... } // from try @ 031c62c0 with catch @ 031c605c
                       catch() { ... } // from try @ 031c6300 with catch @ 031c605c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4132);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4133);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 031c60f8 to 032c610b has its CatchHandler @ 031c62dc */
    DAT_045662b1 = 1;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4116,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4117,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
                    /* try { // try from 031c6158 to 032c617f has its CatchHandler @ 031c62e4 */
  method_00 = EOOEOHKLOFJ_TypeInfo;
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EOOEOHKLOFJ_c *)thunk_FUN_01ba7564();
  }
  pSVar6 = EOOEOHKLOFJ__MENDBBALPEC((MethodInfo *)method_00);
  if (pSVar6 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
    pSVar14 = pSVar6->klass;
    uVar1._0_1_ = (pSVar14->_2).rank;
    uVar1._1_1_ = (pSVar14->_2).minimumAlignment;
    uVar16 = (ulong)uVar1;
    if (uVar16 != 0) {
      piVar17 = &((pSVar14->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
          pVVar7 = pSVar14->vtable + *piVar17;
          goto LAB_031c61c0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pVVar7 = (VirtualInvokeData *)
             FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_031c61c0:
                    /* try { // try from 031c61cc to 032c61d7 has its CatchHandler @ 031c62e8 */
                    /* try { // try from 031c61dc to 032c61ef has its CatchHandler @ 031c62d8 */
    plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    iVar20 = 0;
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar15 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
                    /* try { // try from 031c6208 to 032c620f has its CatchHandler @ 031c62e8 */
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_031c6244;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_031c6244:
      uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_031c6428;
        lVar15 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 == 0) goto LAB_031c6400;
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_031c63e8;
      }
      lVar15 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
                    /* try { // try from 031c6268 to 032c6287 has its CatchHandler @ 031c62d4 */
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar18 + -2) ==
              System_Collections_Generic_IEnumerator<string>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_031c62a0;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01b81914(plVar8,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_031c62a0:
                    /* try { // try from 031c62a4 to 032c62a7 has its CatchHandler @ 031c62e0 */
                    /* try { // try from 031c62a8 to 032c62ab has its CatchHandler @ 031c62e8 */
      pSVar5 = (System_String_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
                    /* try { // try from 031c62ac to 032c62af has its CatchHandler @ 031c62d0 */
                    /* try { // try from 031c62b0 to 032c62b3 has its CatchHandler @ 031c62cc */
                    /* try { // try from 031c62b4 to 032c62b7 has its CatchHandler @ 031c62c8 */
                    /* try { // try from 031c62b8 to 032c62bb has its CatchHandler @ 031c62c4 */
      if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031c62bc to 032c62bf has its CatchHandler @ 031c62c0 */
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 031c62bc with catch @ 031c62c0
                       try { // try from 031c62c0 to 032c62fb has its CatchHandler @ 031c605c */
                    /* catch() { ... } // from try @ 031c62b8 with catch @ 031c62c4 */
                    /* catch() { ... } // from try @ 031c62b4 with catch @ 031c62c8 */
                    /* catch() { ... } // from try @ 031c62b0 with catch @ 031c62cc */
                    /* catch() { ... } // from try @ 031c62ac with catch @ 031c62d0 */
      bVar2 = CFJANHACGMG__PKACMGFBIKK(pSVar5,true,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031c6268 with catch @ 031c62d4 */
      if (bVar2) {
                    /* catch() { ... } // from try @ 031c61dc with catch @ 031c62d8 */
                    /* catch() { ... } // from try @ 031c60f8 with catch @ 031c62dc */
        iVar20 = iVar20 + 1;
                    /* catch() { ... } // from try @ 031c62a4 with catch @ 031c62e0 */
                    /* catch() { ... } // from try @ 031c6158 with catch @ 031c62e4 */
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 031c61cc with catch @ 031c62e8
                       catch() { ... } // from try @ 031c6208 with catch @ 031c62e8
                       catch() { ... } // from try @ 031c62a8 with catch @ 031c62e8 */
                    /* try { // try from 031c62fc to 032c62ff has its CatchHandler @ 031c6318 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4118,
                   (MethodInfo *)0x0);
                    /* try { // try from 031c6300 to 032c6337 has its CatchHandler @ 031c605c */
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 031c62fc with catch @ 031c6318 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4119,
                   (MethodInfo *)0x0);
        pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 031c6338 to 032c6343 has its CatchHandler @ 031c6344 */
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 031c6338 with catch @ 031c6344 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4120,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4121,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar10,pSVar5,pSVar11,(MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
      }
    } while( true );
  }
  goto LAB_031c67a8;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_031c63e8:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_031c641c;
    }
  }
LAB_031c6400:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_031c641c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_031c6428:
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4122,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4123,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  pSVar12 = System_IO_Directory__GetFiles(pSVar5,pSVar10,1,(MethodInfo *)0x0);
  if (pSVar12 != (System_String_array *)0x0) {
    uVar13 = (uint)pSVar12->max_length;
    if (0 < (int)uVar13) {
      uVar19 = 0;
      do {
        if (uVar13 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar10 = pSVar12->m_Items[(int)uVar19];
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4124,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4125,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (pSVar10 == (System_String_o *)0x0) goto LAB_031c67a8;
        pSVar5 = System_String__Replace
                           (pSVar10,pSVar5,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
        }
        bVar2 = CFJANHACGMG__PBACHEOJBGG(pSVar5,true,(MethodInfo *)0x0);
        if (!bVar2) {
          iVar20 = iVar20 + 1;
          NEHNBJKKABI__HCCKFHGJGEG(pSVar5,(MethodInfo *)0x0);
          NEHNBJKKABI__HCCKFHGJGEG(pSVar10,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4126,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4127,
                     (MethodInfo *)0x0);
          pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4128,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4129,
                     (MethodInfo *)0x0);
          pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar10,pSVar5,pSVar11,(MethodInfo *)0x0);
          KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
        }
        uVar13 = (uint)pSVar12->max_length;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)uVar13);
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4130,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4131,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4132,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4133,(MethodInfo *)0x0)
    ;
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    local_64 = iVar20;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
    pSVar5 = System_String__Format(pSVar5,(Il2CppObject *)pSVar10,arg1,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
    return 0 < iVar20;
  }
LAB_031c67a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CEMNLGBNNDO()  [RVA 0x30C68A4]
// EOOEOHKLOFJ$$CEMNLGBNNDO @ RVA 0x30C68A4

/* WARNING: Type propagation algorithm not settling */

void EOOEOHKLOFJ__CEMNLGBNNDO(MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_HashSet_string__o *pSVar8;
  System_RuntimeFieldHandle_Fields *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045662b2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4134);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4135);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4136);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4137);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4138);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4139);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4140);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4141);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4142);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4143);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4144);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4145);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4146);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4147);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4148);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4149);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4150);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4151);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4152);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4153);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4154);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4155);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4156);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4157);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    FUN_01bab630(&Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_045662b2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  if (pSVar8 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    iVar1 = (pSVar8->fields)._count;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (iVar1 == 0) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4134,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar9 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4135;
    }
    else {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4136,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4137,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
      if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,
                 Method_System_Collections_Generic_List<string>__ctor__);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031c71b4;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,Method_System_Collections_Generic_List<string>_GetEnumerator__)
      ;
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                               ), __this = local_80.fields._current, bVar2) {
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)0x0);
        if ((System_String_o *)__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__StartsWith((System_String_o *)__this,pSVar5,(MethodInfo *)0x0);
        if (bVar2) {
          NEHNBJKKABI__MGLIGNDGBCN((System_String_o *)__this,(MethodInfo *)0x0);
          if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar6 = (System_Collections_Generic_HashSet_object__o *)
                   EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
          if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_HashSet<object>__Remove
                    (pSVar6,__this,Method_System_Collections_Generic_HashSet<string>_Remove__);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4138,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4139,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4140,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4141,
                     (MethodInfo *)0x0);
          pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar5,(System_String_o *)__this,pSVar7,(MethodInfo *)0x0);
          KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
        }
        else {
          if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
          bVar2 = System_String__StartsWith((System_String_o *)__this,pSVar5,(MethodInfo *)0x0);
          if (bVar2) {
            if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar5 = System_IO_Path__GetExtension((System_String_o *)__this,(MethodInfo *)0x0);
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4142,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4143,
                       (MethodInfo *)0x0);
            pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(pSVar5,pSVar7,(MethodInfo *)0x0);
            if (bVar2) {
              if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar6 = (System_Collections_Generic_HashSet_object__o *)
                       EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
              if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_HashSet<object>__Remove
                        (pSVar6,__this,Method_System_Collections_Generic_HashSet<string>_Remove__);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4144,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4145,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4146,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4147,
                         (MethodInfo *)0x0);
              pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              pSVar5 = System_String__Concat
                                 (pSVar5,(System_String_o *)__this,pSVar7,(MethodInfo *)0x0);
              KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__)
              ;
            }
            else {
              if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar2 = CFJANHACGMG__PKACMGFBIKK
                                ((System_String_o *)__this,false,true,(MethodInfo *)0x0);
              if (bVar2) {
                if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar6 = (System_Collections_Generic_HashSet_object__o *)
                         EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
                if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_Collections_Generic_HashSet<object>__Remove
                          (pSVar6,__this,Method_System_Collections_Generic_HashSet<string>_Remove__)
                ;
                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar3,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4148,
                           (MethodInfo *)0x0);
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4149,
                           (MethodInfo *)0x0);
                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar3,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4150,
                           (MethodInfo *)0x0);
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4151,
                           (MethodInfo *)0x0);
                pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                pSVar5 = System_String__Concat
                                   (pSVar5,(System_String_o *)__this,pSVar7,(MethodInfo *)0x0);
                KFJJHMDIFIG__DHAAGKPHJLA<object>
                          (pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
              }
            }
          }
          else {
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4152,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4153,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4154,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4155,
                       (MethodInfo *)0x0);
            pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            pSVar5 = System_String__Concat
                               (pSVar5,(System_String_o *)__this,pSVar7,(MethodInfo *)0x0);
            KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4156,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar9 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4157;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar9->value,(MethodInfo *)0x0
              );
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
    return;
  }
LAB_031c71b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool EOJDBAHODGK()  [RVA 0x30C7344]
// EOOEOHKLOFJ$$EOJDBAHODGK @ RVA 0x30C7344

bool EOOEOHKLOFJ__EOJDBAHODGK(MethodInfo *method)

{
  Il2CppObject *__this;
  bool bVar1;
  EOOEOHKLOFJ_c *pEVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  System_Collections_Generic_HashSet_object__o *__this_01;
  MethodInfo *method_00;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  System_Collections_Generic_HashSet_string__o *collection;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045662b3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4158);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4159);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4160);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4161);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4162);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4163);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4164);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4165);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4166);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4167);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4168);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4169);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4170);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4171);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_EOHMFJFFFIN__);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Remove__);
    FUN_01bab630(&Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<EOOEOHKLOFJ>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    DAT_045662b3 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  NDPMLPGANCI_TypeInfo->static_fields->EHFCPINCBGC = false;
  pEVar2 = EOOEOHKLOFJ_TypeInfo;
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    pEVar2 = (EOOEOHKLOFJ_c *)thunk_FUN_01ba7564();
  }
  bVar1 = EOOEOHKLOFJ__HBGCPAEJCJJ((MethodInfo *)pEVar2);
  if (bVar1) {
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045662dc == '\0') {
      FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
      DAT_045662dc = '\x01';
    }
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (EOOEOHKLOFJ_TypeInfo->static_fields->_FEFAAHBCPED_k__BackingField == false) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4158,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4159,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
      if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      collection = EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>__ctor__);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,Method_System_Collections_Generic_List<string>_GetEnumerator__)
      ;
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                               ), __this = local_80.fields._current, bVar1) {
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)0x0);
        if ((System_String_o *)__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = System_String__StartsWith((System_String_o *)__this,pSVar5,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4160,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4161,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4162,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4163,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar5,(System_String_o *)__this,pSVar6,(MethodInfo *)0x0);
          KFJJHMDIFIG__ONCJPMNKDIM<object>(pSVar5,Method_KFJJHMDIFIG_ONCJPMNKDIM<EOOEOHKLOFJ>__);
          NEHNBJKKABI__MGLIGNDGBCN((System_String_o *)__this,(MethodInfo *)0x0);
          if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = (System_Collections_Generic_HashSet_object__o *)
                      EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
          if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_HashSet<object>__Remove
                    (__this_01,__this,Method_System_Collections_Generic_HashSet<string>_Remove__);
        }
        else {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4164,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4165,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4166,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4167,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar5,(System_String_o *)__this,pSVar6,(MethodInfo *)0x0);
          KFJJHMDIFIG__DHAAGKPHJLA<object>(pSVar5,Method_KFJJHMDIFIG_DHAAGKPHJLA<EOOEOHKLOFJ>__);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      pEVar2 = EOOEOHKLOFJ_TypeInfo;
      if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
        pEVar2 = (EOOEOHKLOFJ_c *)thunk_FUN_01ba7564();
      }
      bVar1 = EOOEOHKLOFJ__HBGCPAEJCJJ((MethodInfo *)pEVar2);
      if (bVar1) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4170,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4171,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        KFJJHMDIFIG__ONCJPMNKDIM<object>(pSVar5,Method_KFJJHMDIFIG_ONCJPMNKDIM<EOOEOHKLOFJ>__);
        pEVar2 = EOOEOHKLOFJ_TypeInfo;
        if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
          pEVar2 = (EOOEOHKLOFJ_c *)thunk_FUN_01ba7564();
        }
        EOOEOHKLOFJ__HKIPENGAJPF((MethodInfo *)pEVar2);
        EOOEOHKLOFJ__MACGEGDGBOI(method_00);
        EHOFKBDKGBK<object,_object>__EOHMFJFFFIN
                  (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_EOHMFJFFFIN__);
      }
      else {
        lVar7 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        plVar11 = (long *)**(undefined8 **)(lVar7 + 0xb8);
        if (plVar11 != (long *)0x0) {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4168,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4169,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          lVar7 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(HCOEEOMMEFL_c **)(piVar10 + -2) == HCOEEOMMEFL_TypeInfo) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_031c7ab0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_01b81914(plVar11,HCOEEOMMEFL_TypeInfo,1);
LAB_031c7ab0:
          (*(code *)*puVar8)(plVar11,pSVar5,0,puVar8[1]);
        }
      }
      return false;
    }
    pEVar2 = EOOEOHKLOFJ_TypeInfo;
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      pEVar2 = (EOOEOHKLOFJ_c *)thunk_FUN_01ba7564();
    }
    EOOEOHKLOFJ__CEMNLGBNNDO((MethodInfo *)pEVar2);
  }
  return true;
}


// ===== private static void HKIPENGAJPF()  [RVA 0x30C5D90]
// EOOEOHKLOFJ$$HKIPENGAJPF @ RVA 0x30C5D90

void EOOEOHKLOFJ__HKIPENGAJPF(MethodInfo *method)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_045662b4 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_get_Current__);
    DAT_045662b4 = 1;
  }
  NDPMLPGANCI_TypeInfo->static_fields->EHFCPINCBGC = true;
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if ((Nekki_SF2_GUI_Scenes_GameLoaderScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *)0x0) {
    Nekki_SF2_GUI_Scenes_GameLoaderScene__ResetLoadingModules
              ((Nekki_SF2_GUI_Scenes_GameLoaderScene_o *)**(undefined8 **)(lVar1 + 0xb8),
               (MethodInfo *)0x0);
  }
  lVar1 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  plVar5 = (long *)**(undefined8 **)(lVar1 + 0xb8);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(HCOEEOMMEFL_c **)(piVar4 + -2) == HCOEEOMMEFL_TypeInfo) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_031c5ed8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01b81914(plVar5,HCOEEOMMEFL_TypeInfo,2);
LAB_031c5ed8:
                    /* WARNING: Could not recover jumptable at 0x031c5ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  return;
}

