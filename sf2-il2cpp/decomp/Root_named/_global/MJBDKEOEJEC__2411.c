// TypeDefIndex 2411
// Namespace: 
// public class MJBDKEOEJEC : IEJKLPPLHMO
// Fields:

// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3337C50]
// MJBDKEOEJEC$$AJJLBBCJAAL @ RVA 0x3337C50

System_String_o *
MJBDKEOEJEC__AJJLBBCJAAL(MJBDKEOEJEC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  SecurityManager_PGHHNOPEKLB_o *__this_00;
  System_Action_int__o *FFJLJJAGJAG;
  SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *pPVar6;
  SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_Fields *pPVar7;
  
  if ((DAT_04567957 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5916);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5917);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5918);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5919);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5920);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5921);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5922);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5923);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5924);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5925);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5926);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5927);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5928);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5929);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5930);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5931);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<string>__);
    FUN_01bab630(&Method_MJBDKEOEJEC_OOOEBBJKABH__);
    FUN_01bab630(&SecurityManager_PGHHNOPEKLB_TypeInfo);
    DAT_04567957 = 1;
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_03438244;
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar5;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5916,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5917,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  bVar1 = System_Linq_Enumerable__Contains<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                     (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
  __this_00 = (SecurityManager_PGHHNOPEKLB_o *)thunk_FUN_01bda818(SecurityManager_PGHHNOPEKLB_TypeInfo);
  SecurityManager_PGHHNOPEKLB___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (SecurityManager_PGHHNOPEKLB_o *)0x0) goto LAB_03438244;
  pPVar6 = (__this_00->fields).PKPHIABHKFE;
  if (bVar1) {
LAB_03437eac:
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = BHEDGAKGKPO__BPHEBPIMCIL((MethodInfo *)0x0);
  }
  else {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5918,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5919,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar2 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    pSVar5 = (System_String_o *)0x0;
    if (bVar2) goto LAB_03437eac;
  }
  if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
  pPVar7 = &pPVar6->fields;
  pPVar7->JBDFLNMINKD = pSVar5;
  thunk_FUN_01c20e04(pPVar7);
  pPVar6 = (__this_00->fields).PKPHIABHKFE;
  if (bVar1) {
    if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).IBOODFDOFGP = true;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).CBADOHAADMD = true;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    bVar2 = true;
    (pPVar6->fields).OHELOABONEN = true;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).GDIJGCGHKIB = true;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    if (!bVar1) goto LAB_03438128;
  }
  else {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5920,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5921,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).IBOODFDOFGP = bVar1;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5922,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5923,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).CBADOHAADMD = bVar1;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5924,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5925,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).OHELOABONEN = bVar1;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5926,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5927,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
    if (pPVar6 == (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) goto LAB_03438244;
    (pPVar6->fields).GDIJGCGHKIB = bVar1;
    pPVar6 = (__this_00->fields).PKPHIABHKFE;
LAB_03438128:
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5928,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5929,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar2 = System_Linq_Enumerable__Contains<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)OPAEPDIIOEB,
                       (Il2CppObject *)pSVar5,Method_System_Linq_Enumerable_Contains<string>__);
  }
  if (pPVar6 != (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)0x0) {
    (pPVar6->fields).NLFPMGBICIK = bVar2;
    FFJLJJAGJAG = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    SecurityManager__BJDILAPJIGA(FFJLJJAGJAG,__this_00,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5930,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5931,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    return pSVar5;
  }
LAB_03438244:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3338248]
// MJBDKEOEJEC$$DLKKPFHKIPB @ RVA 0x3338248

System_Collections_Generic_IEnumerable_string__o *
MJBDKEOEJEC__DLKKPFHKIPB(MJBDKEOEJEC_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04567958 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5932);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5933);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567958 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5932,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5933,(MethodInfo *)0x0);
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


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x33383B8]
// MJBDKEOEJEC$$KCBILPIAPHN @ RVA 0x33383B8

int32_t MJBDKEOEJEC__KCBILPIAPHN(MJBDKEOEJEC_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public void .ctor()  [RVA 0x33383C0]
// MJBDKEOEJEC$$.ctor @ RVA 0x33383C0

void MJBDKEOEJEC___ctor(MJBDKEOEJEC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x33383C8]
// MJBDKEOEJEC$$ECKDICODLME @ RVA 0x33383C8

bool MJBDKEOEJEC__ECKDICODLME(MJBDKEOEJEC_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x33383D0]
// MJBDKEOEJEC$$IGMDDJFPIJL @ RVA 0x33383D0

System_String_o * MJBDKEOEJEC__IGMDDJFPIJL(MJBDKEOEJEC_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04567959 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_11);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5934);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567959 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5934,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xc0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_11,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private void OOOEBBJKABH(int LKFALEIFDIO)  [RVA 0x3338480]
// MJBDKEOEJEC$$OOOEBBJKABH @ RVA 0x3338480

void MJBDKEOEJEC__OOOEBBJKABH(MJBDKEOEJEC_o *__this,int32_t LKFALEIFDIO,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  System_String_o *str2;
  int32_t local_34;
  
  if ((DAT_0456795a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5935);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5936);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5937);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5938);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5939);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5940);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_0456795a = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  if (LKFALEIFDIO == 0) {
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5935,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5936,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  }
  else {
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5937,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5938,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    if (DAT_045679bf == '\0') {
      FUN_01bab630(&SecurityManager_TypeInfo);
      DAT_045679bf = '\x01';
    }
    local_34 = SecurityManager_TypeInfo->static_fields->FJPDEJPEHMI;
    str1 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5939,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5940,(MethodInfo *)0x0)
    ;
    str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3,str1,str2,(MethodInfo *)0x0);
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI__Log(pSVar3,(MethodInfo *)0x0);
  return;
}

