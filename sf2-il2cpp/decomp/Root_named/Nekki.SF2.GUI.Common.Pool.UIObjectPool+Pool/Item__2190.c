// Original name: Nekki.SF2.GUI.Common.Pool.UIObjectPool+Pool.Item  (obfuscated DOPEEDABNEK)
// TypeDefIndex 2190
// Namespace: 
// public class Item : IDisposable
// Fields:
//   public readonly List<HOOAAGABMBL> GNCBIPJFEGB; // 0x10
//   public readonly List<HOOAAGABMBL> EIFDIMKJDMN; // 0x18
//   public readonly List<HOOAAGABMBL> JKLDGCJAGCF; // 0x20
//   public readonly List<HOOAAGABMBL> DLDBBBCMJOC; // 0x28
//   public readonly List<HOOAAGABMBL> OGOPJDCOPDF; // 0x30
//   public readonly List<HOOAAGABMBL> BHABLBFPPAI; // 0x38
//   public readonly List<HOOAAGABMBL> FDLFEJAEDGA; // 0x40
//   public readonly List<HOOAAGABMBL> AGPCBLCIHOM; // 0x48
//   public readonly List<HOOAAGABMBL> CLNAOMIIBLH; // 0x50
//   public readonly List<HOOAAGABMBL> JHGBLBKPIBK; // 0x58
//   public readonly List<HOOAAGABMBL> DIGBEFKAPHM; // 0x60
//   public readonly HashSet<string> HEOLJOBCFPB; // 0x68
//   private HOOAAGABMBL <PCFMNDLDEMC>k__BackingField; // 0x70
//   private HOOAAGABMBL <CPLLGJKGGMD>k__BackingField; // 0x78
//   private readonly List<BPDOKJBGHAG> AJDOBNIKJCK; // 0x80
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x88
//   private readonly MLNACIEDMNN PLAKLHDCHLL; // 0x90
//   private KBCOFHAJOCK <GMODBKFPHPN>k__BackingField; // 0x98
//   private readonly List<HOOAAGABMBL> <BDIDINACBBH>k__BackingField; // 0xA0
//   private readonly List<HOOAAGABMBL> <MOCBNLFMNAL>k__BackingField; // 0xA8

// ===== public void .ctor()  [RVA 0x32DEAF8]
// Item$$.ctor @ RVA 0x32DEAF8

void Item___ctor(Item_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_string__o **ppSVar3;
  System_Collections_Generic_List_BPDOKJBGHAG__o *__this_01;
  System_Collections_Generic_List_BPDOKJBGHAG__o **ppSVar4;
  UniRx_CompositeDisposable_o *__this_02;
  UniRx_CompositeDisposable_o **ppUVar5;
  MLNACIEDMNN_o *__this_03;
  MLNACIEDMNN_o **ppMVar6;
  KBCOFHAJOCK_o *__this_04;
  KBCOFHAJOCK_o **ppKVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675e1 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&KBCOFHAJOCK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BPDOKJBGHAG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BPDOKJBGHAG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&MLNACIEDMNN_TypeInfo);
    DAT_045675e1 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).GNCBIPJFEGB = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).EIFDIMKJDMN;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).JKLDGCJAGCF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).DLDBBBCMJOC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).OGOPJDCOPDF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).BHABLBFPPAI;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).FDLFEJAEDGA;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).AGPCBLCIHOM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).CLNAOMIIBLH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).JHGBLBKPIBK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).DIGBEFKAPHM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar3 = &(__this->fields).HEOLJOBCFPB;
  *ppSVar3 = (System_Collections_Generic_HashSet_string__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  __this_01 = (System_Collections_Generic_List_BPDOKJBGHAG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BPDOKJBGHAG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<BPDOKJBGHAG>__ctor__);
  ppSVar4 = &(__this->fields).AJDOBNIKJCK;
  *ppSVar4 = __this_01;
  thunk_FUN_01c20e04(ppSVar4,__this_01);
  __this_02 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_02,(MethodInfo *)0x0);
  ppUVar5 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar5 = __this_02;
  thunk_FUN_01c20e04(ppUVar5,__this_02);
  __this_03 = (MLNACIEDMNN_o *)thunk_FUN_01bda818(MLNACIEDMNN_TypeInfo);
  MLNACIEDMNN___ctor(__this_03,(MethodInfo *)0x0);
  ppMVar6 = &(__this->fields).PLAKLHDCHLL;
  *ppMVar6 = __this_03;
  thunk_FUN_01c20e04(ppMVar6,__this_03);
  __this_04 = (KBCOFHAJOCK_o *)thunk_FUN_01bda818(KBCOFHAJOCK_TypeInfo);
  KBCOFHAJOCK___ctor(__this_04,(MethodInfo *)0x0);
  ppKVar7 = &(__this->fields)._GMODBKFPHPN_k__BackingField;
  *ppKVar7 = __this_04;
  thunk_FUN_01c20e04(ppKVar7,__this_04);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields)._BDIDINACBBH_k__BackingField;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields)._MOCBNLFMNAL_k__BackingField;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void DPDBMKPOOKH(string NNNKLEMIPHP)  [RVA 0x32DEE88]
// Item$$DPDBMKPOOKH @ RVA 0x32DEE88

void Item__DPDBMKPOOKH(Item_o *__this,System_String_o *NNNKLEMIPHP,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *NMMKGIMBHFF;
  System_Action_HOOAAGABMBL__o **ppSVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *source;
  System_Action_HOOAAGABMBL__o *CPECAEHDDDB;
  
  if ((DAT_045675e2 & 1) == 0) {
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_JHLPOAIBEOK_EHDGLHILILF__);
    FUN_01bab630(&Item_JHLPOAIBEOK_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_BOPMJIJMNAB__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    DAT_045675e2 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Item_JHLPOAIBEOK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)NNNKLEMIPHP;
    thunk_FUN_01c20e04(__this_00 + 1,NNNKLEMIPHP);
    source = (__this->fields).DIGBEFKAPHM;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    NMMKGIMBHFF = System_Linq_Enumerable__Where<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo);
    }
    CPECAEHDDDB = Item_<>c_TypeInfo->static_fields->__9__55_1;
    if (CPECAEHDDDB == (System_Action_HOOAAGABMBL__o *)0x0) {
      if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Item_<>c_TypeInfo);
      }
      CPECAEHDDDB = (System_Action_HOOAAGABMBL__o *)
                    thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Item_<>c_TypeInfo->static_fields->__9__55_1;
      *ppSVar1 = CPECAEHDDDB;
      thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
    }
    DFPABHGJPJJ__NHDPECDJBGO<object>
              ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,
               (System_Action_T__o *)CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<HOOAAGABMBL>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EOJOOBMABPP()  [RVA 0x32DF04C]
// Item$$EOJOOBMABPP @ RVA 0x32DF04C

void Item__EOJOOBMABPP(Item_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045675e3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_045675e3 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIGBEFKAPHM;
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        return;
      }
      if ((HOOAAGABMBL_o *)local_38.fields._current == (HOOAAGABMBL_o *)0x0) break;
      if (((HOOAAGABMBL_Fields *)((long)local_38.fields._current + 0x10))->BDGHEBINKCB != false) {
        HOOAAGABMBL__GEBIJFANLGH((HOOAAGABMBL_o *)local_38.fields._current,false,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void MDBOKHFIOIJ(HOOAAGABMBL IKKAMAMLIKA, bool PFCACBBAOAJ, int PIDMGHLCFAJ)  [RVA 0x32DF1A8]
// Item$$MDBOKHFIOIJ @ RVA 0x32DF1A8

void Item__MDBOKHFIOIJ
               (Item_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool PFCACBBAOAJ,
               int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  Roster_o *__this_00;
  
  if ((DAT_045675e4 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675e4 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    uVar2 = (*(IKKAMAMLIKA->klass->vtable)._5_EFLKILFFJKH.methodPtr)
                      (IKKAMAMLIKA,(IKKAMAMLIKA->klass->vtable)._5_EFLKILFFJKH.method);
    if ((uVar2 & 1) == 0) {
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
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Roster__MHLDNEBLNJG
                        (__this_00,(IKKAMAMLIKA->fields)._ILMMODKJGFK_k__BackingField,
                         (MethodInfo *)0x0);
      if ((bVar1) && ((IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField == PIDMGHLCFAJ)) {
        HOOAAGABMBL__GEBIJFANLGH(IKKAMAMLIKA,PFCACBBAOAJ,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// ===== public void GOPAGALDKPE()  [RVA 0x32DF29C]
// Item$$GOPAGALDKPE @ RVA 0x32DF29C

void Item__GOPAGALDKPE(Item_o *__this,MethodInfo *method)

{
  int32_t index;
  uint uVar1;
  void **ppvVar2;
  bool bVar3;
  byte bVar4;
  System_Collections_Generic_List_object__o *__this_00;
  RaidConfig_o *pJVar5;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_01;
  FAIJGJCCKJC_o *__this_02;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar6;
  Roster_o *pAVar7;
  DPIEIFJBFHE_o *pDVar8;
  System_Byte_array *pSVar9;
  System_Byte_array *pSVar10;
  System_String_o *pSVar11;
  LAMJOHEKJNJ_o *__this_03;
  LPEBBHNDFCG_o *pLVar12;
  int64_t iVar13;
  NMAHEBEALAB_o *__this_04;
  SFRequestSender_o *__this_05;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  System_Collections_Generic_List_object__o *__this_06;
  Il2CppClass *pIVar16;
  ulong uVar17;
  System_Func_TSource__bool__o *pSVar18;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  RaidConfig_NOPCEDPNNKO_o *pJVar19;
  HOOAAGABMBL_array *pHVar20;
  System_Object_array *pSVar21;
  void *pvVar22;
  System_Text_StringBuilder_o *__this_07;
  int index_00;
  RaidConfig_ENBCJNLAHAC_o *pJVar23;
  System_String_o *pSVar24;
  long lVar25;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  int64_t local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045675e5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6505);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6506);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6507);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6508);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6509);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6510);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6511);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6512);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6513);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6514);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6515);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6516);
    FUN_01bab630(&Method_DOPEEDABNEK_BFNJHFHAMHL_KIIJFDNBDAL__);
    FUN_01bab630(&Item_BFNJHFHAMHL_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<FAIJGJCCKJC>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FAIJGJCCKJC>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FAIJGJCCKJC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FAIJGJCCKJC>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&System_Func<FAIJGJCCKJC,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_KAFMAEIBFNC_CKCCDPBDBJC__);
    FUN_01bab630(&Item_KAFMAEIBFNC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FAIJGJCCKJC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FAIJGJCCKJC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FAIJGJCCKJC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FAIJGJCCKJC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FAIJGJCCKJC>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<FAIJGJCCKJC>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&NMAHEBEALAB_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045675e5 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_a8 = 0;
  Item__MLENOBKGHHF(__this,method);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FAIJGJCCKJC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<FAIJGJCCKJC>__ctor__);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar5 != (RaidConfig_o *)0x0) {
    if ((pJVar5->fields).OFMMMBIIDAE != (RaidConfig_NOPCEDPNNKO_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (((pJVar5 == (RaidConfig_o *)0x0) ||
          (pJVar19 = (pJVar5->fields).OFMMMBIIDAE, pJVar19 == (RaidConfig_NOPCEDPNNKO_o *)0x0)) ||
         (__this_01 = (pJVar19->fields).NPGALOBDIHL,
         __this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0))
      goto LAB_033dff68;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_c0,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_GetEnumerator__);
      local_80.fields._index = local_c0.fields._index;
      local_80.fields._version = local_c0.fields._version;
      local_80.fields._list = local_c0.fields._list;
      local_80.fields._current = local_c0.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_MoveNext__
                               ), pIVar14 = local_80.fields._current, bVar3) {
        __this_02 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
        FAIJGJCCKJC___ctor(__this_02,(RaidConfig_ENBCJNLAHAC_o *)pIVar14,(MethodInfo *)0x0);
        lVar25 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
        pSVar6 = (__this->fields)._BDIDINACBBH_k__BackingField;
        if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar20 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pHVar20 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar6->fields)._size;
        if (uVar1 < (uint)pHVar20->max_length) {
          (pSVar6->fields)._size = uVar1 + 1;
          pHVar20->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)__this_02;
          thunk_FUN_01c20e04(pHVar20->m_Items + (int)uVar1,__this_02);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
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
        if ((Il2CppClass *)pIVar14 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar7 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pDVar8 = Roster__BAHIKBMCNPD
                           (pAVar7,(System_String_o *)((Il2CppClass_1 *)&pIVar14->klass)->name,
                            (MethodInfo *)0x0);
        if (__this_02 == (FAIJGJCCKJC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = FAIJGJCCKJC__KDBOPDDCNID(__this_02,(MethodInfo *)0x0);
        lVar25 = Method_System_Collections_Generic_List<FAIJGJCCKJC>_Add__;
        if (pDVar8 == (DPIEIFJBFHE_o *)0x0 && bVar3) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar21 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar21->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar21->m_Items[(int)uVar1] = (Il2CppObject *)__this_02;
            thunk_FUN_01c20e04(pSVar21->m_Items + (int)uVar1,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)__this_02,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
        }
        pSVar24 = (__this_02->fields).super._GMPAEDFIIHF_k__BackingField;
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6505,
                   (MethodInfo *)0x0);
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6506,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar24,pSVar11,(MethodInfo *)0x0);
        lVar25 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
        if (bVar3) {
          pSVar6 = (__this->fields)._MOCBNLFMNAL_k__BackingField;
          if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar20 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pHVar20 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar6->fields)._size;
          if (uVar1 < (uint)pHVar20->max_length) {
            (pSVar6->fields)._size = uVar1 + 1;
            pHVar20->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)__this_02;
            thunk_FUN_01c20e04(pHVar20->m_Items + (int)uVar1,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70))
            ;
          }
        }
        if (pDVar8 != (DPIEIFJBFHE_o *)0x0) {
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
          pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar7 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_03 = (pAVar7->fields)._DDGPMHMNKNA_k__BackingField;
          if (__this_03 == (LAMJOHEKJNJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pLVar12 = LAMJOHEKJNJ__FENHANFAIND
                              (__this_03,(pDVar8->fields).INLGJADOPFA,(MethodInfo *)0x0);
          if (pLVar12 != (LPEBBHNDFCG_o *)0x0) {
            if ((pDVar8->fields).IPDNNDFCGBK == false) {
              lVar25 = (pLVar12->fields)._PGKPHJLHJCO_k__BackingField;
              __this_05 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
              if (__this_05 == (SFRequestSender_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar13 = SFRequestSender__HEDLNKCNMCI(__this_05,(MethodInfo *)0x0);
              if (iVar13 <= lVar25) {
                (__this_02->fields).super._HPKBDBMFCBC_k__BackingField = false;
              }
            }
            else {
              pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar9,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6507,
                         (MethodInfo *)0x0);
              pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar10,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6508,
                         (MethodInfo *)0x0);
              pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
              ppvVar2 = &((Il2CppClass_1 *)&pIVar14->klass)->properties;
              *ppvVar2 = pSVar11;
              thunk_FUN_01c20e04(ppvVar2);
              pJVar23 = (__this_02->fields).FBBBEHLGDJK;
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04565b87 == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b87 = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (pJVar23 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (pJVar23->fields).NFKHJPMMNLM = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
              pJVar23 = (__this_02->fields).FBBBEHLGDJK;
              lVar25 = (pLVar12->fields)._PGKPHJLHJCO_k__BackingField;
              if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar13 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
              if (pJVar23 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (pJVar23->fields).CEGNAMELGID = iVar13 + lVar25;
              pSVar11 = (pDVar8->fields).JIJLBFGKNJK;
              lVar25 = (pLVar12->fields)._PGKPHJLHJCO_k__BackingField;
              iVar13 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
              __this_04 = (NMAHEBEALAB_o *)thunk_FUN_01bda818(NMAHEBEALAB_TypeInfo);
              NMAHEBEALAB___ctor(__this_04,pSVar11,StringLiteral_1/*""*/,iVar13 + lVar25,0,StringLiteral_1/*""*/
                                 ,StringLiteral_1/*""*/,0,false,false,false,(MethodInfo *)0x0);
              (__this_02->fields).super.DLBFLPBOJNI = __this_04;
              thunk_FUN_01c20e04(&(__this_02->fields).super.DLBFLPBOJNI,__this_04);
              lVar25 = Method_System_Collections_Generic_List<FAIJGJCCKJC>_Add__;
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar21 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (__this_00->fields)._size;
              if (uVar1 < (uint)pSVar21->max_length) {
                (__this_00->fields)._size = uVar1 + 1;
                pSVar21->m_Items[(int)uVar1] = (Il2CppObject *)__this_02;
                thunk_FUN_01c20e04(pSVar21->m_Items + (int)uVar1,__this_02);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_00,(Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_Dispose__
                );
    }
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if ((__this_00->fields)._size + -1 < 1) {
        __this_07 = (System_Text_StringBuilder_o *)0x0;
      }
      else {
        index_00 = 0;
        __this_07 = (System_Text_StringBuilder_o *)0x0;
        do {
          pIVar14 = System_Collections_Generic_List<object>__get_Item
                              (__this_00,index_00,
                               Method_System_Collections_Generic_List<FAIJGJCCKJC>_get_Item__);
          index_00 = index_00 + 1;
          if (index_00 < (__this_00->fields)._size) {
            index = index_00;
            if (pIVar14 == (Il2CppObject *)0x0) goto LAB_033dff68;
            do {
              pSVar11 = pIVar14[1].monitor;
              pIVar15 = System_Collections_Generic_List<object>__get_Item
                                  (__this_00,index,
                                   Method_System_Collections_Generic_List<FAIJGJCCKJC>_get_Item__);
              if (pIVar15 == (Il2CppObject *)0x0) goto LAB_033dff68;
              bVar3 = System_String__op_Inequality(pSVar11,pIVar15[1].monitor,(MethodInfo *)0x0);
              if (!bVar3) {
                if (__this_07 == (System_Text_StringBuilder_o *)0x0) {
                  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar9,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6509,
                             (MethodInfo *)0x0);
                  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar10,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6510,
                             (MethodInfo *)0x0);
                  pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
                  __this_07 = (System_Text_StringBuilder_o *)
                              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                  System_Text_StringBuilder___ctor(__this_07,pSVar11,(MethodInfo *)0x0);
                  if (__this_07 == (System_Text_StringBuilder_o *)0x0) goto LAB_033dff68;
                }
                System_Text_StringBuilder__AppendLine
                          (__this_07,pIVar14[1].monitor,(MethodInfo *)0x0);
                break;
              }
              index = index + 1;
            } while (index < (__this_00->fields)._size);
          }
        } while (index_00 < (__this_00->fields)._size + -1);
      }
      if (__this_07 != (System_Text_StringBuilder_o *)0x0) {
        __this_06 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<FAIJGJCCKJC>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_06,Method_System_Collections_Generic_List<FAIJGJCCKJC>__ctor__);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6511,
                   (MethodInfo *)0x0);
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6512,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
        System_Text_StringBuilder__AppendLine(__this_07,pSVar11,(MethodInfo *)0x0);
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_c0,__this_00,
                   Method_System_Collections_Generic_List<FAIJGJCCKJC>_GetEnumerator__);
        local_a0.fields._index = local_c0.fields._index;
        local_a0.fields._version = local_c0.fields._version;
        local_a0.fields._list = local_c0.fields._list;
        local_a0.fields._current = local_c0.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<FAIJGJCCKJC>_MoveNext__
                                 ), bVar3) {
          pIVar14 = (Il2CppObject *)thunk_FUN_01bda818(Item_KAFMAEIBFNC_TypeInfo);
          System_Object___ctor(pIVar14,(MethodInfo *)0x0);
          if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar14 = pIVar14 + 1;
          pIVar14->klass = (Il2CppClass *)local_a0.fields._current;
          thunk_FUN_01c20e04(pIVar14);
          pIVar16 = pIVar14->klass;
          if (pIVar16 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pvVar22 = (pIVar16->_1).image;
          uVar17 = (**(code **)((long)pvVar22 + 0x178))
                             (pIVar16,*(undefined8 *)((long)pvVar22 + 0x180));
          if ((uVar17 & 1) == 0) {
            if (pIVar14->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            *(undefined1 *)&(pIVar14->klass->_2).unity_user_data = 1;
          }
          else {
            pSVar18 = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(System_Func<FAIJGJCCKJC,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            pIVar15 = System_Linq_Enumerable__FirstOrDefault<object>
                                ((System_Collections_Generic_IEnumerable_TSource__o *)__this_06,
                                 pSVar18,Method_System_Linq_Enumerable_FirstOrDefault<FAIJGJCCKJC>__
                                );
            lVar25 = Method_System_Collections_Generic_List<FAIJGJCCKJC>_Add__;
            pIVar16 = pIVar14->klass;
            if (pIVar15 == (Il2CppObject *)0x0) {
              if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar21 = (__this_06->fields)._items;
              (__this_06->fields)._version = (__this_06->fields)._version + 1;
              if (pSVar21 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (__this_06->fields)._size;
              if (uVar1 < (uint)pSVar21->max_length) {
                (__this_06->fields)._size = uVar1 + 1;
                pSVar21->m_Items[(int)uVar1] = (Il2CppObject *)pIVar16;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_06,(Il2CppObject *)pIVar16,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              }
              if (pIVar14->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar24 = (System_String_o *)(pIVar14->klass->_1).namespaze;
              pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar9,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6513,
                         (MethodInfo *)0x0);
              pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar10,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6514,
                         (MethodInfo *)0x0);
              pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
              if (pIVar14->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              local_a8 = HOOAAGABMBL__DPEKAKHBPPO((HOOAAGABMBL_o *)pIVar14->klass,(MethodInfo *)0x0)
              ;
              str2 = System_Int64__ToString((int64_t)&local_a8,(MethodInfo *)0x0);
              pSVar11 = System_String__Concat(pSVar24,pSVar11,str2,(MethodInfo *)0x0);
              System_Text_StringBuilder__AppendLine(__this_07,pSVar11,(MethodInfo *)0x0);
            }
            else {
              if (pIVar16 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              *(undefined1 *)&(pIVar16->_2).unity_user_data = 1;
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<FAIJGJCCKJC>_Dispose__);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6515,
                   (MethodInfo *)0x0);
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6516,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
        System_Text_StringBuilder__AppendLine(__this_07,pSVar11,(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)
                  (*(__this_07->klass->vtable)._3_ToString.methodPtr)
                            (__this_07,(__this_07->klass->vtable)._3_ToString.method);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError(pIVar14,(MethodInfo *)0x0);
        __this_00 = __this_06;
        if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_033dff68;
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_c0,__this_00,
                 Method_System_Collections_Generic_List<FAIJGJCCKJC>_GetEnumerator__);
      local_a0.fields._index = local_c0.fields._index;
      local_a0.fields._version = local_c0.fields._version;
      local_a0.fields._list = local_c0.fields._list;
      local_a0.fields._current = local_c0.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<FAIJGJCCKJC>_MoveNext__
                          );
        pIVar14 = local_a0.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<FAIJGJCCKJC>_Dispose__);
          return;
        }
        pIVar15 = (Il2CppObject *)thunk_FUN_01bda818(Item_BFNJHFHAMHL_TypeInfo);
        System_Object___ctor(pIVar15,(MethodInfo *)0x0);
        if ((Il2CppClass *)pIVar14 == (Il2CppClass *)0x0) break;
        pvVar22 = ((Il2CppClass_1 *)&pIVar14->klass)->image;
        bVar4 = (**(code **)((long)pvVar22 + 0x178))(pIVar14,*(undefined8 *)((long)pvVar22 + 0x180))
        ;
        *(byte *)&((Il2CppClass_2 *)((long)pIVar14 + 200))->unity_user_data = ~bVar4 & 1;
        pIVar16 = (Il2CppClass *)
                  FAIJGJCCKJC__IOEMDFKAGIM((FAIJGJCCKJC_o *)pIVar14,(MethodInfo *)0x0);
        if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar15[1].klass = pIVar16;
        thunk_FUN_01c20e04();
        pSVar6 = (__this->fields)._BDIDINACBBH_k__BackingField;
        pSVar18 = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        pIVar15 = System_Linq_Enumerable__FirstOrDefault<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,pSVar18,
                             Method_System_Linq_Enumerable_FirstOrDefault<HOOAAGABMBL>__);
        if (pIVar15 != (Il2CppObject *)0x0) {
          pvVar22 = ((Il2CppClass_1 *)&pIVar14->klass)->image;
          bVar4 = (**(code **)((long)pvVar22 + 0x188))(pIVar14,*(undefined8 *)((long)pvVar22 + 400))
          ;
          *(byte *)&pIVar15[0xd].klass = ~bVar4 & 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_033dff68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<HOOAAGABMBL> CAKOIJOHHNG()  [RVA 0x32E03F8]
// Item$$CAKOIJOHHNG @ RVA 0x32E03F8

System_Collections_Generic_List_HOOAAGABMBL__o *
Item__CAKOIJOHHNG(Item_o *__this,MethodInfo *method)

{
  return (__this->fields)._MOCBNLFMNAL_k__BackingField;
}


// ===== public IList<HOOAAGABMBL> FEHJLBEGAPO(string CJNPBEJHHLF)  [RVA 0x32E0400]
// Item$$FEHJLBEGAPO @ RVA 0x32E0400

System_Collections_Generic_IList_HOOAAGABMBL__o *
Item__FEHJLBEGAPO(Item_o *__this,System_String_o *CJNPBEJHHLF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *pSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  
  if ((DAT_045675e6 & 1) == 0) {
    FUN_01bab630(&Method_DOPEEDABNEK_FBMBOCHONJP_KLAMHGBCOGE__);
    FUN_01bab630(&Method_DOPEEDABNEK_FBMBOCHONJP_OJDGPDBOFKK__);
    FUN_01bab630(&Item_FBMBOCHONJP_TypeInfo);
    FUN_01bab630(&FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Exists__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    DAT_045675e6 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Item_FBMBOCHONJP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)CJNPBEJHHLF;
    thunk_FUN_01c20e04(__this_00 + 1,CJNPBEJHHLF);
    pSVar4 = (__this->fields).FDLFEJAEDGA;
    pSVar2 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      bVar1 = System_Collections_Generic_List<object>__Exists
                        ((System_Collections_Generic_List_object__o *)pSVar4,pSVar2,
                         Method_System_Collections_Generic_List<HOOAAGABMBL>_Exists__);
      if (!bVar1) {
        if ((FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        return (System_Collections_Generic_IList_HOOAAGABMBL__o *)
               FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo->static_fields->AOAIEJMANCC;
      }
      pSVar4 = (__this->fields).FDLFEJAEDGA;
      pSVar2 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
      System_Predicate<object>___ctor();
      if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        pSVar3 = System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)pSVar4,pSVar2,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
        return (System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void IBIMOAOHBDD(string ALHDMEKMLPH, IList<HOOAAGABMBL> GHAAKPDHIJJ, string EFENHAFFBAG, string PMACBPAMPJA)  [RVA 0x32E058C]
// Item$$IBIMOAOHBDD @ RVA 0x32E058C

void Item__IBIMOAOHBDD
               (System_String_o *ALHDMEKMLPH,
               System_Collections_Generic_IList_HOOAAGABMBL__o *GHAAKPDHIJJ,
               System_String_o *EFENHAFFBAG,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if (EFENHAFFBAG == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__Contains(EFENHAFFBAG,PMACBPAMPJA,(MethodInfo *)0x0);
  if (bVar1) {
    Item__LADIJNFDOJJ(ALHDMEKMLPH,GHAAKPDHIJJ,method_00);
    return;
  }
  return;
}


// ===== internal static void DCGGJJJKFHO(HOOAAGABMBL IHGFKLOLPOK, string NPMGAJPBDKL, string GMEMMNHABBH)  [RVA 0x32E0884]
// Item$$DCGGJJJKFHO @ RVA 0x32E0884

void Item__DCGGJJJKFHO
               (HOOAAGABMBL_o *IHGFKLOLPOK,System_String_o *NPMGAJPBDKL,System_String_o *GMEMMNHABBH
               ,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  int iVar2;
  IGFGDDANEPE_o *__this;
  Roster_o *pAVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_045675e7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675e7 = 1;
  }
  if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
    KGLJICLJHEL = (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = NLPJLHOEAOE__JNFIBDBHNOA(KGLJICLJHEL,(MethodInfo *)0x0);
    if (__this == (IGFGDDANEPE_o *)0x0) {
      CJNHFNHJHPE = 0;
    }
    else {
      CJNHFNHJHPE = IGFGDDANEPE__LGIMDOAMCNG(__this,(MethodInfo *)0x0);
    }
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (Roster_o *)0x0) {
      pMVar4 = Roster__HKIEGNBOFCD(pAVar3,NPMGAJPBDKL,0,(MethodInfo *)0x0);
      iVar2 = 0;
      if (pMVar4 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
        iVar2 = PCOEHCPGBBG__JBGCINPPLAC((pMVar4->fields).JAICMIMBIOA,0,(MethodInfo *)0x0);
      }
      if (CJNHFNHJHPE <= iVar2) {
        return;
      }
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
      pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar3 != (Roster_o *)0x0) {
        Roster__HEMDIAFAMAO(pAVar3,NPMGAJPBDKL,CJNHFNHJHPE,0,(MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(GMEMMNHABBH,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
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
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar3 != (Roster_o *)0x0) {
          Roster__LMJFPPDAPBF
                    (pAVar3,GMEMMNHABBH,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OHOCEPGAOGM(KBCOFHAJOCK CJNHFNHJHPE)  [RVA 0x32E0A78]
// Item$$OHOCEPGAOGM @ RVA 0x32E0A78

void Item__OHOCEPGAOGM(Item_o *__this,KBCOFHAJOCK_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GMODBKFPHPN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void NEKCODFNMLD(string NNNKLEMIPHP, int JLAFGLDIFOC)  [RVA 0x32E0A80]
// Item$$NEKCODFNMLD @ RVA 0x32E0A80

void Item__NEKCODFNMLD
               (Item_o *__this,System_String_o *NNNKLEMIPHP,int32_t JLAFGLDIFOC,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *NMMKGIMBHFF;
  System_Action_T__o *CPECAEHDDDB;
  System_Collections_Generic_List_HOOAAGABMBL__o *source;
  
  if ((DAT_045675e8 & 1) == 0) {
    FUN_01bab630(&Method_DOPEEDABNEK_AOJFFKODFFM_MIKLGKPCBFO__);
    FUN_01bab630(&Method_DOPEEDABNEK_AOJFFKODFFM_POINKPMNPCE__);
    FUN_01bab630(&Item_AOJFFKODFFM_TypeInfo);
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    DAT_045675e8 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Item_AOJFFKODFFM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)NNNKLEMIPHP;
    thunk_FUN_01c20e04(__this_00 + 1,NNNKLEMIPHP);
    *(int32_t *)&__this_00[1].monitor = JLAFGLDIFOC;
    __this_00[2].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 2,__this);
    source = (__this->fields).DIGBEFKAPHM;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    NMMKGIMBHFF = System_Linq_Enumerable__Where<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
    System_Action<object>___ctor();
    DFPABHGJPJJ__NHDPECDJBGO<object>
              ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,CPECAEHDDDB,
               Method_DFPABHGJPJJ_NHDPECDJBGO<HOOAAGABMBL>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CBCCEHFONKC(string ACCIHBHMFPN)  [RVA 0x32E0C08]
// Item$$CBCCEHFONKC @ RVA 0x32E0C08

int32_t Item__CBCCEHFONKC
                  (Item_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_T__o *pSVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_045675e9 & 1) == 0) {
    FUN_01bab630(&Method_DOPEEDABNEK_EBBECCBDFOJ_EKJKLIKMNKL__);
    FUN_01bab630(&Item_EBBECCBDFOJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    DAT_045675e9 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Item_EBBECCBDFOJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)ACCIHBHMFPN;
    thunk_FUN_01c20e04(__this_00 + 1,ACCIHBHMFPN);
    __this_01 = (__this->fields).DIGBEFKAPHM;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    if ((__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) &&
       (pSVar1 = System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)__this_01,match,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__),
       pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
      return (pSVar1->fields)._size;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MLENOBKGHHF()  [RVA 0x32E034C]
// Item$$MLENOBKGHHF @ RVA 0x32E034C

void Item__MLENOBKGHHF(Item_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  
  if ((DAT_045675ea & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    DAT_045675ea = 1;
  }
  pSVar2 = (__this->fields)._BDIDINACBBH_k__BackingField;
  if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields)._MOCBNLFMNAL_k__BackingField;
    if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x32E0D0C]
// Item$$RandomizeObscuredVars @ RVA 0x32E0D0C

void Item__RandomizeObscuredVars(Item_o *__this,MethodInfo *method)

{
  System_Action_HOOAAGABMBL__o **ppSVar1;
  System_Action_BPDOKJBGHAG__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_BPDOKJBGHAG__o *NMMKGIMBHFF;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Action_BPDOKJBGHAG__o *CPECAEHDDDB;
  System_Action_HOOAAGABMBL__o *action;
  
  if ((DAT_045675eb & 1) == 0) {
    FUN_01bab630(&System_Action<BPDOKJBGHAG>_TypeInfo);
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<BPDOKJBGHAG>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_GCDNPHKHGLA__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_HAGCHNLKDKK__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    DAT_045675eb = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DIGBEFKAPHM;
  if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Item_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = Item_<>c_TypeInfo->static_fields->__9__56_0;
  if (action == (System_Action_HOOAAGABMBL__o *)0x0) {
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo,method);
    }
    action = (System_Action_HOOAAGABMBL__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Item_<>c_TypeInfo->static_fields->__9__56_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    NMMKGIMBHFF = (__this->fields).AJDOBNIKJCK;
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CPECAEHDDDB = Item_<>c_TypeInfo->static_fields->__9__56_1;
    if (CPECAEHDDDB == (System_Action_BPDOKJBGHAG__o *)0x0) {
      if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CPECAEHDDDB = (System_Action_BPDOKJBGHAG__o *)
                    thunk_FUN_01bda818(System_Action<BPDOKJBGHAG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &Item_<>c_TypeInfo->static_fields->__9__56_1;
      *ppSVar2 = CPECAEHDDDB;
      thunk_FUN_01c20e04(ppSVar2,CPECAEHDDDB);
    }
    DFPABHGJPJJ__NHDPECDJBGO<object>
              ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,
               (System_Action_T__o *)CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<BPDOKJBGHAG>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long GHLLHJDMMNF()  [RVA 0x32E0EC8]
// Item$$GHLLHJDMMNF @ RVA 0x32E0EC8

int64_t Item__GHLLHJDMMNF(Item_o *__this,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  long lVar3;
  MethodInfo *extraout_x1;
  long lVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045675ec & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_045675ec = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).FDLFEJAEDGA;
  if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  lVar1 = -1;
  while( true ) {
    lVar4 = lVar1;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return lVar4;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) break;
    lVar3 = (*(local_38.fields._current)->klass->vtable[6].methodPtr)
                      (local_38.fields._current,0,
                       (local_38.fields._current)->klass->vtable[6].method);
    lVar1 = lVar4;
    if ((lVar3 != 0) && (lVar1 = *(long *)(lVar3 + 0x70), *(long *)(lVar3 + 0x70) <= lVar4)) {
      lVar1 = lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PNAHDBCEGPD(string EFENHAFFBAG = "wahrmsp1p2cf")  [RVA 0x32E1034]
// Item$$PNAHDBCEGPD @ RVA 0x32E1034

void Item__PNAHDBCEGPD(Item_o *__this,System_String_o *EFENHAFFBAG,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *message;
  System_Collections_Generic_IList_HOOAAGABMBL__o *GHAAKPDHIJJ;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  if ((DAT_045675ed & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_16249/*"a"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_18716/*"h"*/);
    FUN_01bab630(&StringLiteral_18158/*"f"*/);
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_11752/*"Seals"*/);
    FUN_01bab630(&StringLiteral_16861/*"c"*/);
    FUN_01bab630(&StringLiteral_7068/*"Helmet"*/);
    FUN_01bab630(&StringLiteral_84/*"\nItems::LogAllItems: all items, using key = "*/);
    FUN_01bab630(&StringLiteral_20383/*"r"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_20104/*"p1"*/);
    FUN_01bab630(&StringLiteral_10192/*"PaymentItems(special)"*/);
    FUN_01bab630(&StringLiteral_21997/*"w"*/);
    FUN_01bab630(&StringLiteral_20105/*"p2"*/);
    FUN_01bab630(&StringLiteral_10185/*"Payment"*/);
    FUN_01bab630(&StringLiteral_19537/*"m"*/);
    FUN_01bab630(&StringLiteral_2087/*":\n"*/);
    FUN_01bab630(&StringLiteral_20641/*"s"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    DAT_045675ed = 1;
  }
  if (EFENHAFFBAG != (System_String_o *)0x0) {
    str1 = System_String__ToLower(EFENHAFFBAG,(MethodInfo *)0x0);
    message = System_String__Concat(StringLiteral_84/*"\nItems::LogAllItems: all items, using key = "*/,str1,StringLiteral_2087/*":\n"*/,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    Item__IBIMOAOHBDD
              (StringLiteral_14870/*"Weapon"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).GNCBIPJFEGB,str1,
               StringLiteral_21997/*"w"*/,in_x4);
    Item__IBIMOAOHBDD
              (StringLiteral_3076/*"Armor"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).EIFDIMKJDMN,str1,
               StringLiteral_16249/*"a"*/,in_x4);
    Item__IBIMOAOHBDD
              (StringLiteral_7068/*"Helmet"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).JKLDGCJAGCF,str1,
               StringLiteral_18716/*"h"*/,in_x4);
    Item__IBIMOAOHBDD
              (StringLiteral_11017/*"Ranged"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).DLDBBBCMJOC,str1,
               StringLiteral_20383/*"r"*/,in_x4);
    Item__IBIMOAOHBDD
              (StringLiteral_8772/*"Magic"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).OGOPJDCOPDF,str1,
               StringLiteral_19537/*"m"*/,in_x4);
    Item__IBIMOAOHBDD
              (StringLiteral_11752/*"Seals"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).BHABLBFPPAI,str1,
               StringLiteral_20641/*"s"*/,in_x4);
    Item__IBIMOAOHBDD
              (StringLiteral_10185/*"Payment"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).FDLFEJAEDGA,str1,
               StringLiteral_20104/*"p1"*/,in_x4);
    Item__IBIMOAOHBDD
              (StringLiteral_4617/*"Consumable"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).AGPCBLCIHOM,str1,
               StringLiteral_16861/*"c"*/,in_x4);
    GHAAKPDHIJJ = Item__PALAACDCFON(__this,method_00);
    Item__IBIMOAOHBDD(StringLiteral_10192/*"PaymentItems(special)"*/,GHAAKPDHIJJ,str1,StringLiteral_20105/*"p2"*/,in_x4);
    Item__IBIMOAOHBDD
              (StringLiteral_6589/*"Free"*/,
               (System_Collections_Generic_IList_HOOAAGABMBL__o *)(__this->fields).CLNAOMIIBLH,str1,
               StringLiteral_18158/*"f"*/,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MFBFMIONFMA()  [RVA 0x32E156C]
// Item$$MFBFMIONFMA @ RVA 0x32E156C

void Item__MFBFMIONFMA(Item_o *__this,MethodInfo *method)

{
  Core_Configs_Models_PacksConfig_o *__this_00;
  System_Collections_Generic_IEnumerable_PackSettings__o *source;
  System_Func_PackSettings__bool__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_Func_PackSettings__string__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Func_PackSettings__bool__o *predicate;
  System_Func_PackSettings__string__o *selector;
  
  if ((DAT_045675ee & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<PackSettings>__);
    FUN_01bab630(&System_Func<PackSettings,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<PackSettings,_string>_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<PacksConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_CENNOCLJDBD__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_DNNODJGFLLH__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    DAT_045675ee = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  __this_00 = (Core_Configs_Models_PacksConfig_o *)
              IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<PacksConfig>__);
  if (__this_00 != (Core_Configs_Models_PacksConfig_o *)0x0) {
    source = Core_Configs_Models_PacksConfig__get_Packs(__this_00,(MethodInfo *)0x0);
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo);
    }
    predicate = Item_<>c_TypeInfo->static_fields->__9__62_0;
    if (predicate == (System_Func_PackSettings__bool__o *)0x0) {
      if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Item_<>c_TypeInfo);
      }
      predicate = (System_Func_PackSettings__bool__o *)
                  thunk_FUN_01bda818(System_Func<PackSettings,_bool>_TypeInfo);
                    /* try { // try from 033e16b8 to 034e1a03 has its CatchHandler @ 033e16b8
                       catch() { ... } // from try @ 033e16b8 with catch @ 033e16b8
                       catch() { ... } // from try @ 033e1c60 with catch @ 033e16b8
                       catch() { ... } // from try @ 033e1d10 with catch @ 033e16b8
                       catch() { ... } // from try @ 033e1d1c with catch @ 033e16b8
                       catch() { ... } // from try @ 033e1e00 with catch @ 033e16b8 */
      System_Func<object,_bool>___ctor();
      ppSVar1 = &Item_<>c_TypeInfo->static_fields->__9__62_0;
      *ppSVar1 = predicate;
      thunk_FUN_01c20e04(ppSVar1,predicate);
    }
    pSVar2 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_Where<PackSettings>__);
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo);
    }
    selector = Item_<>c_TypeInfo->static_fields->__9__62_1;
    if (selector == (System_Func_PackSettings__string__o *)0x0) {
      if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Item_<>c_TypeInfo);
      }
      selector = (System_Func_PackSettings__string__o *)
                 thunk_FUN_01bda818(System_Func<PackSettings,_string>_TypeInfo);
      System_Func<object,_object>___ctor();
      ppSVar3 = &Item_<>c_TypeInfo->static_fields->__9__62_1;
      *ppSVar3 = selector;
      thunk_FUN_01c20e04(ppSVar3,selector);
    }
    method_00 = Method_System_Linq_Enumerable_Select<PackSettings,_string>__;
    source_00 = System_Linq_Enumerable__Select<object,_object>
                          (pSVar2,(System_Func_TSource__TResult__o *)selector,
                           (MethodInfo_1EA6FC0 *)
                           Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    pSVar2 = System_Linq_Enumerable__Distinct<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        Method_System_Linq_Enumerable_Distinct<string>__);
    if (__this != (Item_o *)0x0) {
      Item__FBNGJNMKBNM
                (__this,(System_Collections_Generic_IEnumerable_string__o *)pSVar2,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<HOOAAGABMBL> ADFPFDGPMOP()  [RVA 0x32E192C]
// Item$$ADFPFDGPMOP @ RVA 0x32E192C

System_Collections_Generic_List_HOOAAGABMBL__o *
Item__ADFPFDGPMOP(Item_o *__this,MethodInfo *method)

{
  return (__this->fields)._BDIDINACBBH_k__BackingField;
}


// ===== private void CAJMJMJHCAD(XmlNode CJLCPHBNHFK)  [RVA 0x32E1934]
// Item$$CAJMJMJHCAD @ RVA 0x32E1934

/* WARNING: Removing unreachable block (ram,0x033e22cc) */
/* WARNING: Removing unreachable block (ram,0x033e23d8) */

void Item__CAJMJMJHCAD
               (Item_o *__this,System_Xml_XmlNode_o *CJLCPHBNHFK,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint32_t uVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  MLNACIEDMNN_o *__this_00;
  HOOAAGABMBL_o *pHVar7;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Predicate_HOOAAGABMBL__o **ppSVar9;
  long lVar10;
  HOOAAGABMBL_array *pHVar11;
  ulong uVar12;
  int *piVar13;
  HOOAAGABMBL_o **ppHVar14;
  System_Predicate_HOOAAGABMBL__o *match;
  System_String_o *pSVar15;
  
  if ((DAT_045675ef & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_DMBBJNJHNPN__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
                    /* try { // try from 033e1a04 to 034e1a2b has its CatchHandler @ 033e1d70 */
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    FUN_01bab630(&StringLiteral_852/*"' with empty ProductId!"*/);
    FUN_01bab630(&StringLiteral_10147/*"ParseItems: detected item '"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_045675ef = 1;
  }
  if (CJLCPHBNHFK == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
                    /* try { // try from 033e1a60 to 034e1a87 has its CatchHandler @ 033e1d68 */
  plVar5 = (long *)(*(CJLCPHBNHFK->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._13_get_ChildNodes.method);
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar10 = *plVar5;
                    /* try { // try from 033e1ac8 to 034e1afb has its CatchHandler @ 033e1d6c */
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e1b08 to 034e1b23 has its CatchHandler @ 033e1d5c */
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033e1b0c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e1b0c:
      uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar12 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
        if (plVar5 == (long *)0x0) goto LAB_033e22c0;
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_033e2298;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_033e2280;
      }
      lVar10 = *plVar5;
                    /* try { // try from 033e1b24 to 034e1b37 has its CatchHandler @ 033e1d54 */
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e1b68 to 034e1b83 has its CatchHandler @ 033e1d48 */
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_033e1b6c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
                    /* try { // try from 033e1b4c to 034e1b5f has its CatchHandler @ 033e1d58 */
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e1b6c:
      AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033e1b8c to 034e1b93 has its CatchHandler @ 033e1d38 */
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033e1ba8 to 034e1bb3 has its CatchHandler @ 033e1d2c */
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
      }
      __this_00 = (__this->fields).PLAKLHDCHLL;
      if (__this_00 == (MLNACIEDMNN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033e1bb4 to 034e1bbf has its CatchHandler @ 033e1d44 */
      pHVar7 = MLNACIEDMNN__EOHMFJFFFIN(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
      lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
      if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
        pSVar8 = (__this->fields).DIGBEFKAPHM;
                    /* try { // try from 033e1bcc to 034e1bd3 has its CatchHandler @ 033e1d3c */
        if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar11 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033e1be8 to 034e1c5f has its CatchHandler @ 033e1d4c */
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pHVar11->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pHVar11->m_Items[(int)uVar2] = pHVar7;
          thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pHVar7,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        pSVar15 = (pHVar7->fields)._GMPAEDFIIHF_k__BackingField;
        uVar4 = <PrivateImplementationDetails>__ComputeStringHash(pSVar15,(MethodInfo *)0x0);
        if (uVar4 < 0x9d9dc59a) {
          if (uVar4 < 0x84b84175) {
            if (uVar4 == 0x84b84174) {
              bVar3 = System_String__op_Equality(pSVar15,StringLiteral_3076/*"Armor"*/,(MethodInfo *)0x0);
              lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
              if (bVar3) {
                pSVar8 = (__this->fields).EIFDIMKJDMN;
                if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pHVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pHVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pHVar11->m_Items[(int)uVar2] = pHVar7;
                  thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pHVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
                    /* try { // try from 033e1c60 to 034e1cf3 has its CatchHandler @ 033e16b8 */
              if ((uVar4 == 0x1c5c36fb) &&
                 (bVar3 = System_String__op_Equality(pSVar15,StringLiteral_6589/*"Free"*/,(MethodInfo *)0x0),
                 lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__, bVar3)) {
                pSVar8 = (__this->fields).CLNAOMIIBLH;
                if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pHVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pHVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pHVar11->m_Items[(int)uVar2] = pHVar7;
                  thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pHVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
          else {
                    /* catch() { ... } // from try @ 033e1b4c with catch @ 033e1d58 */
                    /* catch() { ... } // from try @ 033e1b08 with catch @ 033e1d5c */
                    /* catch() { ... } // from try @ 033e1cf8 with catch @ 033e1d60 */
                    /* catch() { ... } // from try @ 033e1cf4 with catch @ 033e1d64 */
            if (uVar4 == 0x93d79fb2) {
              bVar3 = System_String__op_Equality(pSVar15,StringLiteral_4617/*"Consumable"*/,(MethodInfo *)0x0);
              lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
              if (bVar3) {
                pSVar8 = (__this->fields).AGPCBLCIHOM;
                if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pHVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pHVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pHVar11->m_Items[(int)uVar2] = pHVar7;
                  thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pHVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
                    /* catch() { ... } // from try @ 033e1a60 with catch @ 033e1d68 */
                    /* catch() { ... } // from try @ 033e1ac8 with catch @ 033e1d6c */
                    /* catch() { ... } // from try @ 033e1a04 with catch @ 033e1d70 */
                    /* try { // try from 033e1d88 to 034e1d8b has its CatchHandler @ 033e1d98 */
              if ((uVar4 == 0x9d9dc599) &&
                 (bVar3 = System_String__op_Equality(pSVar15,StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0),
                 lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__, bVar3)) {
                pSVar8 = (__this->fields).JKLDGCJAGCF;
                    /* catch() { ... } // from try @ 033e1d88 with catch @ 033e1d98 */
                if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pHVar11 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar8->fields)._size;
                if (uVar2 < (uint)pHVar11->max_length) {
                  (pSVar8->fields)._size = uVar2 + 1;
                  pHVar11->m_Items[(int)uVar2] = pHVar7;
                    /* try { // try from 033e1dd8 to 034e1dff has its CatchHandler @ 033e1e14 */
                  thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pHVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
        else if (uVar4 < 0xb960112d) {
          if (uVar4 == 0xb7c10361) {
            bVar3 = System_String__op_Equality(pSVar15,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
            lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
            if (bVar3) {
              pSVar8 = (__this->fields).GNCBIPJFEGB;
              if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar11 = (pSVar8->fields)._items;
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
              if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar8->fields)._size;
              if (uVar2 < (uint)pHVar11->max_length) {
                (pSVar8->fields)._size = uVar2 + 1;
                pHVar11->m_Items[(int)uVar2] = pHVar7;
                thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)pHVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
                    /* try { // try from 033e1cf4 to 034e1cf7 has its CatchHandler @ 033e1d64 */
                    /* try { // try from 033e1cf8 to 034e1cfb has its CatchHandler @ 033e1d60 */
                    /* try { // try from 033e1cfc to 034e1d03 has its CatchHandler @ 033e1d50 */
                    /* try { // try from 033e1d04 to 034e1d07 has its CatchHandler @ 033e1d40 */
            if ((uVar4 == 0xb960112c) &&
               (bVar3 = System_String__op_Equality(pSVar15,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0),
               lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__, bVar3)) {
                    /* try { // try from 033e1d08 to 034e1d0b has its CatchHandler @ 033e1d34 */
              pSVar8 = (__this->fields).OGOPJDCOPDF;
                    /* try { // try from 033e1d0c to 034e1d0f has its CatchHandler @ 033e1d30 */
              if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* try { // try from 033e1d10 to 034e1d13 has its CatchHandler @ 033e16b8 */
                    /* try { // try from 033e1d14 to 034e1d17 has its CatchHandler @ 033e1d28 */
              pHVar11 = (pSVar8->fields)._items;
                    /* try { // try from 033e1d18 to 034e1d1b has its CatchHandler @ 033e1d24 */
                    /* try { // try from 033e1d1c to 034e1d87 has its CatchHandler @ 033e16b8 */
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                    /* catch() { ... } // from try @ 033e1d18 with catch @ 033e1d24 */
              if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* catch() { ... } // from try @ 033e1d14 with catch @ 033e1d28 */
              uVar2 = (pSVar8->fields)._size;
                    /* catch() { ... } // from try @ 033e1ba8 with catch @ 033e1d2c */
                    /* catch() { ... } // from try @ 033e1d0c with catch @ 033e1d30 */
                    /* catch() { ... } // from try @ 033e1d08 with catch @ 033e1d34 */
              if (uVar2 < (uint)pHVar11->max_length) {
                    /* catch() { ... } // from try @ 033e1b8c with catch @ 033e1d38 */
                    /* catch() { ... } // from try @ 033e1bcc with catch @ 033e1d3c */
                    /* catch() { ... } // from try @ 033e1d04 with catch @ 033e1d40 */
                (pSVar8->fields)._size = uVar2 + 1;
                    /* catch() { ... } // from try @ 033e1bb4 with catch @ 033e1d44 */
                pHVar11->m_Items[(int)uVar2] = pHVar7;
                    /* catch() { ... } // from try @ 033e1b68 with catch @ 033e1d48 */
                    /* catch() { ... } // from try @ 033e1be8 with catch @ 033e1d4c */
                    /* catch() { ... } // from try @ 033e1cfc with catch @ 033e1d50 */
                thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
                    /* catch() { ... } // from try @ 033e1b24 with catch @ 033e1d54 */
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)pHVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        else if (uVar4 == 0xcb2ec7a2) {
          bVar3 = System_String__op_Equality(pSVar15,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
          lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
          if (bVar3) {
            pSVar8 = (__this->fields).DLDBBBCMJOC;
            if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar11 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pHVar11->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pHVar11->m_Items[(int)uVar2] = pHVar7;
              thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pHVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        }
        else if (uVar4 == 0xd87ca2c0) {
          bVar3 = System_String__op_Equality(pSVar15,StringLiteral_11751/*"Seal"*/,(MethodInfo *)0x0);
          lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
          if (bVar3) {
            pSVar8 = (__this->fields).BHABLBFPPAI;
            if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar11 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pHVar11->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pHVar11->m_Items[(int)uVar2] = pHVar7;
              thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pHVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        }
        else {
                    /* try { // try from 033e1e00 to 034e1e0b has its CatchHandler @ 033e16b8 */
                    /* try { // try from 033e1e0c to 034e1e13 has its CatchHandler @ 033e1e14 */
                    /* catch() { ... } // from try @ 033e1dd8 with catch @ 033e1e14
                       catch() { ... } // from try @ 033e1e0c with catch @ 033e1e14 */
          if ((uVar4 == 0xea117bb0) &&
             (bVar3 = System_String__op_Equality(pSVar15,StringLiteral_11073/*"RealMoneyItem"*/,(MethodInfo *)0x0),
             lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__, bVar3)) {
            pSVar8 = (__this->fields).FDLFEJAEDGA;
            if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar11 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pHVar11->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pHVar11->m_Items[(int)uVar2] = pHVar7;
              thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pHVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
            }
            bVar3 = JOOGMNNBBHI__DFOPHIKFMHM(pHVar7,(MethodInfo *)0x0);
            lVar10 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
            if (bVar3) {
              pSVar8 = (__this->fields).JHGBLBKPIBK;
              if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar11 = (pSVar8->fields)._items;
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
              if (pHVar11 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar8->fields)._size;
              if (uVar2 < (uint)pHVar11->max_length) {
                (pSVar8->fields)._size = uVar2 + 1;
                pHVar11->m_Items[(int)uVar2] = pHVar7;
                thunk_FUN_01c20e04(pHVar11->m_Items + (int)uVar2,pHVar7);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)pHVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            bVar3 = PCOEHCPGBBG__EDHHJAMCOJH
                              ((pHVar7->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
            if (bVar3) {
              pSVar15 = System_String__Concat
                                  (StringLiteral_10147/*"ParseItems: detected item '"*/,(pHVar7->fields)._COIPKAKHDFP_k__BackingField
                                   ,StringLiteral_852/*"' with empty ProductId!"*/,(MethodInfo *)0x0);
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar15,(MethodInfo *)0x0);
            }
            else {
              __this_01 = (System_Collections_Generic_HashSet_object__o *)
                          (__this->fields).HEOLJOBCFPB;
              if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_HashSet<object>__Add
                        (__this_01,(Il2CppObject *)(pHVar7->fields)._CIEBCKIBJHL_k__BackingField,
                         Method_System_Collections_Generic_HashSet<string>_Add__);
            }
          }
        }
      }
    } while( true );
  }
  goto LAB_033e23d0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_033e2280:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_033e22b4;
    }
  }
LAB_033e2298:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033e22b4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_033e22c0:
  pSVar8 = (__this->fields).AGPCBLCIHOM;
  if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Item_<>c_TypeInfo);
  }
  match = Item_<>c_TypeInfo->static_fields->__9__50_0;
  if (match == (System_Predicate_HOOAAGABMBL__o *)0x0) {
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo);
    }
    match = (System_Predicate_HOOAAGABMBL__o *)
            thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar9 = &Item_<>c_TypeInfo->static_fields->__9__50_0;
    *ppSVar9 = match;
    thunk_FUN_01c20e04(ppSVar9,match);
  }
  if (pSVar8 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar7 = (HOOAAGABMBL_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)pSVar8,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    ppHVar14 = &(__this->fields)._PCFMNDLDEMC_k__BackingField;
    *ppHVar14 = pHVar7;
    thunk_FUN_01c20e04(ppHVar14,pHVar7);
    return;
  }
LAB_033e23d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL OAMJGHNKCBI()  [RVA 0x32E25A8]
// Item$$OAMJGHNKCBI @ RVA 0x32E25A8

HOOAAGABMBL_o * Item__OAMJGHNKCBI(Item_o *__this,MethodInfo *method)

{
  return (__this->fields)._CPLLGJKGGMD_k__BackingField;
}


// ===== private void HLEDNPNNNFJ(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x32E25B0]
// Item$$HLEDNPNNNFJ @ RVA 0x32E25B0

void Item__HLEDNPNNNFJ(Item_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PCFMNDLDEMC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static void LADIJNFDOJJ(string ALHDMEKMLPH, IList<HOOAAGABMBL> GHAAKPDHIJJ)  [RVA 0x32E05D8]
// Item$$LADIJNFDOJJ @ RVA 0x32E05D8

void Item__LADIJNFDOJJ
               (System_String_o *ALHDMEKMLPH,
               System_Collections_Generic_IList_HOOAAGABMBL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  HOOAAGABMBL_o *__this;
  System_Collections_Generic_IList_HOOAAGABMBL__c *pSVar8;
  ulong uVar9;
  ulong uVar10;
  int32_t *piVar11;
  int iVar12;
  undefined8 local_48;
  
  if ((DAT_045675f0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_383/*" contains count = "*/);
    FUN_01bab630(&StringLiteral_645/*"# "*/);
    DAT_045675f0 = 1;
  }
  local_48 = 0;
  if (GHAAKPDHIJJ != (System_Collections_Generic_IList_HOOAAGABMBL__o *)0x0) {
    pSVar8 = GHAAKPDHIJJ->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo) {
          pVVar6 = pSVar8->vtable + *piVar11;
          goto LAB_033e06c4;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(GHAAKPDHIJJ,System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo,0
                         );
LAB_033e06c4:
    uVar4 = (*pVVar6->methodPtr)(GHAAKPDHIJJ,pVVar6->method);
    local_48 = CONCAT44(uVar4,(int)local_48);
    pSVar7 = System_Int32__ToString((int)&local_48 + 4,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat
                       (ALHDMEKMLPH,StringLiteral_383/*" contains count = "*/,pSVar7,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
    iVar12 = 0;
    do {
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      pSVar8 = GHAAKPDHIJJ->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo) {
            pVVar6 = pSVar8->vtable + *piVar11;
            goto LAB_033e0780;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(GHAAKPDHIJJ,System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo
                            ,0);
LAB_033e0780:
      iVar5 = (*pVVar6->methodPtr)(GHAAKPDHIJJ,pVVar6->method);
      uVar9 = local_48;
      if (iVar5 <= iVar12) {
        return;
      }
      pSVar8 = GHAAKPDHIJJ->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar3;
      if (uVar10 != 0) {
        piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo) {
            pVVar6 = pSVar8->vtable + *piVar11;
            goto LAB_033e07e4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(GHAAKPDHIJJ,System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo,0);
LAB_033e07e4:
      __this = (HOOAAGABMBL_o *)(*pVVar6->methodPtr)(GHAAKPDHIJJ,uVar9 & 0xffffffff,pVVar6->method);
      pSVar7 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(StringLiteral_645/*"# "*/,pSVar7,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
      if (__this == (HOOAAGABMBL_o *)0x0) break;
      pSVar7 = HOOAAGABMBL__OEHBFNHBFEO
                         (__this,pSVar7,StringLiteral_47/*"\n"*/,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      iVar12 = (int)local_48 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BPCBMLIGOFF()  [RVA 0x32E25B8]
// Item$$BPCBMLIGOFF @ RVA 0x32E25B8

void Item__BPCBMLIGOFF(Item_o *__this,MethodInfo *method)

{
  System_Func_HOOAAGABMBL__bool__o **ppSVar1;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  System_String_o *pSVar3;
  Item_o *pDVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *source;
  HOOAAGABMBL_o **ppHVar5;
  System_Func_HOOAAGABMBL__bool__o *predicate;
  
  if ((DAT_045675f1 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_LastOrDefault<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_OOMIICNFBKM__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_14581/*"UpdateActualCoinPackItem: '"*/);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    DAT_045675f1 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar4 != (Item_o *)0x0) {
    source = (pDVar4->fields).FDLFEJAEDGA;
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo,method);
    }
    predicate = Item_<>c_TypeInfo->static_fields->__9__64_0;
    if (predicate == (System_Func_HOOAAGABMBL__bool__o *)0x0) {
      if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      predicate = (System_Func_HOOAAGABMBL__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar1 = &Item_<>c_TypeInfo->static_fields->__9__64_0;
      *ppSVar1 = predicate;
      thunk_FUN_01c20e04(ppSVar1,predicate);
    }
    pHVar2 = (HOOAAGABMBL_o *)
             System_Linq_Enumerable__LastOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_LastOrDefault<HOOAAGABMBL>__);
    if (__this != (Item_o *)0x0) {
      ppHVar5 = &(__this->fields)._CPLLGJKGGMD_k__BackingField;
      *ppHVar5 = pHVar2;
      thunk_FUN_01c20e04(ppHVar5,pHVar2);
      if ((*ppHVar5 == (HOOAAGABMBL_o *)0x0) ||
         (pSVar3 = ((*ppHVar5)->fields)._COIPKAKHDFP_k__BackingField,
         pSVar3 == (System_String_o *)0x0)) {
        pSVar3 = string_TypeInfo->static_fields->Empty;
      }
      pSVar3 = System_String__Concat(StringLiteral_14581/*"UpdateActualCoinPackItem: '"*/,pSVar3,StringLiteral_802/*"'"*/,(MethodInfo *)0x0)
      ;
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ABPLAAFFKIE(GLINEGMOOBM HOKBHLPPCAH)  [RVA 0x32E27B4]
// Item$$ABPLAAFFKIE @ RVA 0x32E27B4

void Item__ABPLAAFFKIE(Item_o *__this,GLINEGMOOBM_o *HOKBHLPPCAH,MethodInfo *method)

{
  Core_Configs_Models_PacksConfig_o *__this_00;
  System_Collections_Generic_IEnumerable_PackSettings__o *source;
  System_Func_PackSettings__bool__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_Func_PackSettings__string__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  GLINEGMOOBM_o *extraout_x1;
  MethodInfo *method_00;
  System_Func_PackSettings__bool__o *predicate;
  System_Func_PackSettings__string__o *selector;
  
  if ((DAT_045675ee & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<PackSettings>__);
    FUN_01bab630(&System_Func<PackSettings,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<PackSettings,_string>_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<PacksConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_CENNOCLJDBD__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_DNNODJGFLLH__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    DAT_045675ee = 1;
    HOKBHLPPCAH = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,HOKBHLPPCAH);
  }
  __this_00 = (Core_Configs_Models_PacksConfig_o *)
              IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<PacksConfig>__);
  if (__this_00 != (Core_Configs_Models_PacksConfig_o *)0x0) {
    source = Core_Configs_Models_PacksConfig__get_Packs(__this_00,(MethodInfo *)0x0);
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo);
    }
    predicate = Item_<>c_TypeInfo->static_fields->__9__62_0;
    if (predicate == (System_Func_PackSettings__bool__o *)0x0) {
      if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Item_<>c_TypeInfo);
      }
      predicate = (System_Func_PackSettings__bool__o *)
                  thunk_FUN_01bda818(System_Func<PackSettings,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar1 = &Item_<>c_TypeInfo->static_fields->__9__62_0;
      *ppSVar1 = predicate;
      thunk_FUN_01c20e04(ppSVar1,predicate);
    }
    pSVar2 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_Where<PackSettings>__);
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo);
    }
    selector = Item_<>c_TypeInfo->static_fields->__9__62_1;
    if (selector == (System_Func_PackSettings__string__o *)0x0) {
      if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Item_<>c_TypeInfo);
      }
      selector = (System_Func_PackSettings__string__o *)
                 thunk_FUN_01bda818(System_Func<PackSettings,_string>_TypeInfo);
      System_Func<object,_object>___ctor();
      ppSVar3 = &Item_<>c_TypeInfo->static_fields->__9__62_1;
      *ppSVar3 = selector;
      thunk_FUN_01c20e04(ppSVar3,selector);
    }
    method_00 = Method_System_Linq_Enumerable_Select<PackSettings,_string>__;
    source_00 = System_Linq_Enumerable__Select<object,_object>
                          (pSVar2,(System_Func_TSource__TResult__o *)selector,
                           (MethodInfo_1EA6FC0 *)
                           Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    pSVar2 = System_Linq_Enumerable__Distinct<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        Method_System_Linq_Enumerable_Distinct<string>__);
    if (__this != (Item_o *)0x0) {
      Item__FBNGJNMKBNM
                (__this,(System_Collections_Generic_IEnumerable_string__o *)pSVar2,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL GOLEKCCFDAH()  [RVA 0x32E27B8]
// Item$$GOLEKCCFDAH @ RVA 0x32E27B8

HOOAAGABMBL_o * Item__GOLEKCCFDAH(Item_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  long lVar2;
  System_String_o *DIHAKADKIKM;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar3;
  float fVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045675f2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_045675f2 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).FDLFEJAEDGA;
  if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    pHVar3 = (HOOAAGABMBL_o *)0x0;
    fVar5 = 0.0;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      __this_00 = local_48.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        return pHVar3;
      }
      if ((HOOAAGABMBL_o *)local_48.fields._current == (HOOAAGABMBL_o *)0x0) break;
      lVar2 = (*(((HOOAAGABMBL_c *)(local_48.fields._current)->klass)->vtable)._6_PDECHBMCBDB.
                methodPtr)(local_48.fields._current,0,
                           (((HOOAAGABMBL_c *)(local_48.fields._current)->klass)->vtable).
                           _6_PDECHBMCBDB.method);
      if (lVar2 != 0) {
        DIHAKADKIKM = HOOAAGABMBL__GFMPCIOBMBJ((HOOAAGABMBL_o *)__this_00,(MethodInfo *)0x0);
        fVar4 = PCOEHCPGBBG__OFFODGKLGOP(DIHAKADKIKM,0.0,(MethodInfo *)0x0);
        if (fVar5 <= fVar4) {
          pHVar3 = (HOOAAGABMBL_o *)__this_00;
          fVar5 = fVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void MOBLJOJLMDN(IEnumerable<HOOAAGABMBL> AHLHPGEOKLM, int GMALOFEKAHI = 0)  [RVA 0x32E294C]
// Item$$MOBLJOJLMDN @ RVA 0x32E294C

/* WARNING: Removing unreachable block (ram,0x033e2b78) */

void Item__MOBLJOJLMDN
               (Item_o *__this,
               System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *AHLHPGEOKLM,
               int32_t GMALOFEKAHI,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  HOOAAGABMBL_o *__this_00;
  System_Collections_Generic_IEnumerable_HOOAAGABMBL__c *pSVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  
  if ((DAT_045675f3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo);
    __this = (Item_o *)FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045675f3 = 1;
  }
  if (AHLHPGEOKLM == (System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pSVar5 = AHLHPGEOKLM->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar8;
        goto LAB_033e2a00;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(AHLHPGEOKLM,System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo,0);
LAB_033e2a00:
  plVar3 = (long *)(*pVVar2->methodPtr)(AHLHPGEOKLM,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_033e2a78;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e2a78:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_033e2b2c;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_HOOAAGABMBL__c **)(piVar9 + -2) ==
            System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_033e2ad4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo,0);
LAB_033e2ad4:
    __this_00 = (HOOAAGABMBL_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (__this_00 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    HOOAAGABMBL__NEDDLGPMIEB(__this_00,GMALOFEKAHI,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_033e2b48;
    }
  }
LAB_033e2b2c:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033e2b48:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== private void FBNGJNMKBNM(IEnumerable<string> JMIMCKCKFND)  [RVA 0x32E17B4]
// Item$$FBNGJNMKBNM @ RVA 0x32E17B4

void Item__FBNGJNMKBNM
               (Item_o *__this,System_Collections_Generic_IEnumerable_string__o *JMIMCKCKFND,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_string__o **ppSVar2;
  System_Action_string__o *CPECAEHDDDB;
  
  if ((DAT_045675f4 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<string>__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_ODABFMBHOEA__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_14583/*"UpdateItemsLocks: '"*/);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    DAT_045675f4 = 1;
  }
  pSVar1 = System_String__Join(StringLiteral_22485/*"|"*/,JMIMCKCKFND,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_14583/*"UpdateItemsLocks: '"*/,pSVar1,StringLiteral_802/*"'"*/,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
  if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CPECAEHDDDB = Item_<>c_TypeInfo->static_fields->__9__63_0;
  if (CPECAEHDDDB == (System_Action_string__o *)0x0) {
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CPECAEHDDDB = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Item_<>c_TypeInfo->static_fields->__9__63_0;
    *ppSVar2 = CPECAEHDDDB;
    thunk_FUN_01c20e04(ppSVar2,CPECAEHDDDB);
  }
  DFPABHGJPJJ__NHDPECDJBGO<object>
            ((System_Collections_Generic_IEnumerable_T__o *)JMIMCKCKFND,
             (System_Action_T__o *)CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<string>__);
  return;
}


// ===== public KBCOFHAJOCK DJJNNLEDAKC()  [RVA 0x32E2C2C]
// Item$$DJJNNLEDAKC @ RVA 0x32E2C2C

KBCOFHAJOCK_o * Item__DJJNNLEDAKC(Item_o *__this,MethodInfo *method)

{
  return (__this->fields)._GMODBKFPHPN_k__BackingField;
}


// ===== public List<HOOAAGABMBL> EFNBNCFNEFP(string ACCIHBHMFPN)  [RVA 0x32E2C34]
// Item$$EFNBNCFNEFP @ RVA 0x32E2C34

System_Collections_Generic_List_HOOAAGABMBL__o *
Item__EFNBNCFNEFP(Item_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
  if ((DAT_045675f5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_045675f5 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (uVar2 < 0x9d9dc59a) {
    if (uVar2 < 0x84b84175) {
      if (uVar2 == 0x84b84174) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3076/*"Armor"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
        }
                    /* try { // try from 033e2e68 to 034e2e73 has its CatchHandler @ 033e30b0 */
        return (__this->fields).EIFDIMKJDMN;
      }
      if (uVar2 == 0x1c5c36fb) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6589/*"Free"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
        }
        return (__this->fields).CLNAOMIIBLH;
      }
    }
    else {
      if (uVar2 == 0x93d79fb2) {
                    /* try { // try from 033e2ea4 to 034e2eab has its CatchHandler @ 033e2ff4 */
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4617/*"Consumable"*/,(MethodInfo *)0x0);
                    /* try { // try from 033e2ebc to 034e2ec7 has its CatchHandler @ 033e2fec */
        if (!bVar1) {
          return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
        }
        return (__this->fields).AGPCBLCIHOM;
      }
                    /* try { // try from 033e2da8 to 034e2e67 has its CatchHandler @ 033e2da8
                       catch() { ... } // from try @ 033e2da8 with catch @ 033e2da8
                       catch() { ... } // from try @ 033e2f40 with catch @ 033e2da8
                       catch() { ... } // from try @ 033e2fd0 with catch @ 033e2da8
                       catch() { ... } // from try @ 033e2fe8 with catch @ 033e2da8
                       catch() { ... } // from try @ 033e309c with catch @ 033e2da8
                       catch() { ... } // from try @ 033e3148 with catch @ 033e2da8 */
      if (uVar2 == 0x9d9dc599) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
        }
        return (__this->fields).JKLDGCJAGCF;
      }
    }
  }
  else if (uVar2 < 0xb960112d) {
    if (uVar2 == 0xb7c10361) {
                    /* try { // try from 033e2e80 to 034e2e93 has its CatchHandler @ 033e30ac */
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
      }
      return (__this->fields).GNCBIPJFEGB;
    }
    if (uVar2 == 0xb960112c) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
      }
      return (__this->fields).OGOPJDCOPDF;
    }
  }
  else {
    if (uVar2 == 0xcb2ec7a2) {
                    /* try { // try from 033e2ed0 to 034e2ed7 has its CatchHandler @ 033e2fe8 */
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
      }
      return (__this->fields).DLDBBBCMJOC;
    }
    if (uVar2 == 0xd87ca2c0) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11751/*"Seal"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
      }
                    /* try { // try from 033e2f18 to 034e2f3f has its CatchHandler @ 033e30b4 */
      return (__this->fields).BHABLBFPPAI;
    }
    if (uVar2 == 0xea117bb0) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11073/*"RealMoneyItem"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
      }
      return (__this->fields).FDLFEJAEDGA;
    }
  }
  return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
}


// ===== public int JMPINBGBLNI()  [RVA 0x32E2F20]
// Item$$JMPINBGBLNI @ RVA 0x32E2F20

int32_t Item__JMPINBGBLNI(Item_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_045675f6 & 1) == 0) {
                    /* try { // try from 033e2f40 to 034e2fcb has its CatchHandler @ 033e2da8 */
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&Method_DOPEEDABNEK_ODAALEKFPNA_MDKIINLPCOG__);
    FUN_01bab630(&Item_ODAALEKFPNA_TypeInfo);
    DAT_045675f6 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Item_ODAALEKFPNA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(undefined4 *)&__this_00[1].klass = 0;
    __this_01 = (__this->fields).DIGBEFKAPHM;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 033e2fcc to 034e2fcf has its CatchHandler @ 033e30b0 */
                    /* try { // try from 033e2fd0 to 034e2fd7 has its CatchHandler @ 033e2da8 */
                    /* try { // try from 033e2fd8 to 034e2fdb has its CatchHandler @ 033e2ff0 */
                    /* try { // try from 033e2fdc to 034e2fdf has its CatchHandler @ 033e2ff4 */
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
                    /* try { // try from 033e2fe0 to 034e2fe7 has its CatchHandler @ 033e30b4 */
                    /* catch() { ... } // from try @ 033e2ed0 with catch @ 033e2fe8
                       try { // try from 033e2fe8 to 034e3013 has its CatchHandler @ 033e2da8 */
                    /* catch() { ... } // from try @ 033e2ebc with catch @ 033e2fec */
      return *(int32_t *)&__this_00[1].klass;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033e2fd8 with catch @ 033e2ff0 */
  FUN_01bab8c8();
}


// ===== private void LDMKKAPAJCN(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x32E2FFC]
// Item$$LDMKKAPAJCN @ RVA 0x32E2FFC

void Item__LDMKKAPAJCN(Item_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *NPMGAJPBDKL;
  System_String_o *GMEMMNHABBH;
  MethodInfo *in_x3;
  undefined8 *puVar2;
  System_String_o *a;
  
  if ((DAT_045675f7 & 1) == 0) {
                    /* try { // try from 033e3014 to 034e3017 has its CatchHandler @ 033e309c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_3462/*"BestAcquiredMagicLevel"*/);
    FUN_01bab630(&StringLiteral_3463/*"BestAcquiredRangedLevel"*/);
                    /* try { // try from 033e3064 to 034e309b has its CatchHandler @ 033e315c */
    FUN_01bab630(&StringLiteral_3464/*"BestAcquiredWeaponLevel"*/);
    FUN_01bab630(&StringLiteral_3465/*"BestArmor"*/);
    FUN_01bab630(&StringLiteral_3460/*"BestAcquiredArmorLevel"*/);
    FUN_01bab630(&StringLiteral_3461/*"BestAcquiredHelmLevel"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
                    /* catch() { ... } // from try @ 033e3014 with catch @ 033e309c
                       try { // try from 033e309c to 034e30cf has its CatchHandler @ 033e2da8 */
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_045675f7 = 1;
  }
                    /* catch() { ... } // from try @ 033e2e80 with catch @ 033e30ac */
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 033e2e68 with catch @ 033e30b0
                       catch() { ... } // from try @ 033e2fcc with catch @ 033e30b0 */
                    /* catch() { ... } // from try @ 033e2f18 with catch @ 033e30b4
                       catch() { ... } // from try @ 033e2fe0 with catch @ 033e30b4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033e30d0 to 034e30d3 has its CatchHandler @ 033e30e0 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 033e30d0 with catch @ 033e30e0 */
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    return;
  }
  a = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
                    /* try { // try from 033e3120 to 034e3147 has its CatchHandler @ 033e315c */
  bVar1 = System_String__op_Equality(a,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
  if (bVar1) {
    puVar2 = &StringLiteral_3464/*"BestAcquiredWeaponLevel"*/;
  }
  else {
                    /* try { // try from 033e3148 to 034e3153 has its CatchHandler @ 033e2da8 */
    bVar1 = System_String__op_Equality(a,StringLiteral_3076/*"Armor"*/,(MethodInfo *)0x0);
    NPMGAJPBDKL = StringLiteral_3460/*"BestAcquiredArmorLevel"*/;
    GMEMMNHABBH = StringLiteral_3465/*"BestArmor"*/;
    if (bVar1) goto LAB_033e31f0;
    bVar1 = System_String__op_Equality(a,StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0);
    if (bVar1) {
      puVar2 = &StringLiteral_3461/*"BestAcquiredHelmLevel"*/;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
      if (bVar1) {
        puVar2 = &StringLiteral_3463/*"BestAcquiredRangedLevel"*/;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        puVar2 = &StringLiteral_3462/*"BestAcquiredMagicLevel"*/;
      }
    }
  }
  NPMGAJPBDKL = (System_String_o *)*puVar2;
  GMEMMNHABBH = (System_String_o *)0x0;
LAB_033e31f0:
  Item__DCGGJJJKFHO(IKKAMAMLIKA,NPMGAJPBDKL,GMEMMNHABBH,in_x3);
  return;
}


// ===== public HOOAAGABMBL HPCFMCFLCFE()  [RVA 0x32E3208]
// Item$$HPCFMCFLCFE @ RVA 0x32E3208

HOOAAGABMBL_o * Item__HPCFMCFLCFE(Item_o *__this,MethodInfo *method)

{
  return (__this->fields)._PCFMNDLDEMC_k__BackingField;
}


// ===== public BPDOKJBGHAG KCGCLNKJLPM(HOOAAGABMBL DKMMBMBMJBO)  [RVA 0x32E3210]
// Item$$KCGCLNKJLPM @ RVA 0x32E3210

BPDOKJBGHAG_o *
Item__KCGCLNKJLPM(Item_o *__this,HOOAAGABMBL_o *DKMMBMBMJBO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BPDOKJBGHAG__o *__this_00;
  System_String_o *pSVar2;
  System_String_array *values;
  BPDOKJBGHAG_o *pBVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045675f8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BPDOKJBGHAG>_GetEnumerator__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_567/*" with type "*/);
    FUN_01bab630(&StringLiteral_8103/*"Item: "*/);
    FUN_01bab630(&StringLiteral_384/*" contains update for wrong type: "*/);
    DAT_045675f8 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJDOBNIKJCK;
  if (__this_00 == (System_Collections_Generic_List_BPDOKJBGHAG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BPDOKJBGHAG>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_MoveNext__);
    pBVar3 = (BPDOKJBGHAG_o *)local_50.fields._current;
    if (!bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e3360 with catch @ 033e3448
                        */
      pBVar3 = (BPDOKJBGHAG_o *)0x0;
      goto LAB_033e344c;
    }
    if ((BPDOKJBGHAG_o *)local_50.fields._current == (BPDOKJBGHAG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033e3304 to 034e332b has its CatchHandler @ 033e344c */
    if (DKMMBMBMJBO == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = ((BPDOKJBGHAG_Fields *)((long)local_50.fields._current + 0x10))->BGHFADDGPAD;
    if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033e345c with catch @ 033e3470 */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals
                      (pSVar2,(DKMMBMBMJBO->fields)._GALJEOPBPCE_k__BackingField,(MethodInfo *)0x0);
  } while (!bVar1);
  pSVar2 = ((BPDOKJBGHAG_Fields *)((long)pBVar3 + 0x10))->HNNFBCMNGIA;
  if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__Equals
                    (pSVar2,(DKMMBMBMJBO->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 033e3360 to 034e3387 has its CatchHandler @ 033e3448 */
    values->m_Items[0] = StringLiteral_8103/*"Item: "*/;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[1] = (DKMMBMBMJBO->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 033e33a0 to 034e33a3 has its CatchHandler @ 033e3444 */
                    /* try { // try from 033e33a4 to 034e341f has its CatchHandler @ 033e3160 */
    values->m_Items[2] = StringLiteral_567/*" with type "*/;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[3] = (DKMMBMBMJBO->fields)._GMPAEDFIIHF_k__BackingField;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[4] = StringLiteral_384/*" contains update for wrong type: "*/;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[5] = ((BPDOKJBGHAG_Fields *)((long)pBVar3 + 0x10))->HNNFBCMNGIA;
    thunk_FUN_01c20e04();
    pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 033e3420 to 034e3423 has its CatchHandler @ 033e3440 */
                    /* try { // try from 033e3424 to 034e3427 has its CatchHandler @ 033e343c */
                    /* try { // try from 033e3428 to 034e342b has its CatchHandler @ 033e3160 */
                    /* try { // try from 033e342c to 034e342f has its CatchHandler @ 033e3438 */
                    /* try { // try from 033e3430 to 034e345b has its CatchHandler @ 033e3160 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e342c with catch @ 033e3438
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e3424 with catch @ 033e343c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e3420 with catch @ 033e3440
                        */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e33a0 with catch @ 033e3444
                        */
  }
LAB_033e344c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e3304 with catch @ 033e344c
                        */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_Dispose__);
                    /* try { // try from 033e345c to 034e345f has its CatchHandler @ 033e3470 */
  return pBVar3;
}


// ===== private void COFFDBGHAEC(XmlNode AHDGNOJPPIB)  [RVA 0x32E3544]
// Item$$COFFDBGHAEC @ RVA 0x32E3544

/* WARNING: Removing unreachable block (ram,0x033e3a50) */
/* WARNING: Removing unreachable block (ram,0x033e3c70) */
/* WARNING: Removing unreachable block (ram,0x033e3c88) */

void Item__COFFDBGHAEC
               (Item_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  BPDOKJBGHAG_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PONNKDFAMFM_o *__this_01;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_02;
  System_Collections_Generic_List_BPDOKJBGHAG__o *__this_03;
  long lVar9;
  PONNKDFAMFM_array *pPVar10;
  BPDOKJBGHAG_array *pBVar11;
  ulong uVar12;
  int *piVar13;
  BPDOKJBGHAG_Fields *pBVar14;
  System_String_o **ppSVar15;
  System_String_o *EBOHIPKPFDJ;
  
  if ((DAT_045675f9 & 1) == 0) {
    FUN_01bab630(&BPDOKJBGHAG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033e3598 to 034e368b has its CatchHandler @ 033e3598
                       catch() { ... } // from try @ 033e3598 with catch @ 033e3598
                       catch() { ... } // from try @ 033e37e0 with catch @ 033e3598
                       catch() { ... } // from try @ 033e3884 with catch @ 033e3598
                       catch() { ... } // from try @ 033e388c with catch @ 033e3598
                       catch() { ... } // from try @ 033e3950 with catch @ 033e3598 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BPDOKJBGHAG>_Add__);
    FUN_01bab630(&PONNKDFAMFM_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8115/*"ItemType"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_045675f9 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e368c to 034e36b3 has its CatchHandler @ 033e38b8 */
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_033e3694;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e3694:
    uVar12 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar12 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar3;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 == 0) goto LAB_033e3b7c;
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e36e8 to 034e3713 has its CatchHandler @ 033e38b4 */
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_033e36f8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e36f8:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar5);
      }
    }
    __this_00 = (BPDOKJBGHAG_o *)thunk_FUN_01bda818(BPDOKJBGHAG_TypeInfo);
                    /* try { // try from 033e3750 to 034e3757 has its CatchHandler @ 033e38b0 */
    BPDOKJBGHAG___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033e375c to 034e3763 has its CatchHandler @ 033e38ac */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033e3c64 to 034e3c67 has its CatchHandler @ 033e3c74 */
      FUN_01bab8c8();
    }
                    /* try { // try from 033e3768 to 034e3773 has its CatchHandler @ 033e389c */
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033e3778 to 034e3783 has its CatchHandler @ 033e38a0 */
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                       (pSVar7,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    if (__this_00 == (BPDOKJBGHAG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pBVar14 = &__this_00->fields;
    pBVar14->BGHFADDGPAD = pSVar8;
    thunk_FUN_01c20e04(pBVar14);
                    /* try { // try from 033e37c4 to 034e37df has its CatchHandler @ 033e3898 */
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033e37e0 to 034e386f has its CatchHandler @ 033e3598 */
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_8115/*"ItemType"*/,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                       (pSVar7,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    ppSVar15 = &(__this_00->fields).HNNFBCMNGIA;
    *ppSVar15 = pSVar8;
    thunk_FUN_01c20e04(ppSVar15);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
LAB_033e3838:
    lVar9 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e3878 to 034e387b has its CatchHandler @ 033e38a8 */
                    /* try { // try from 033e387c to 034e3883 has its CatchHandler @ 033e38a4 */
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_033e3884;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* try { // try from 033e3870 to 034e3877 has its CatchHandler @ 033e38bc */
    puVar4 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e3884:
                    /* try { // try from 033e3884 to 034e3887 has its CatchHandler @ 033e3598 */
                    /* try { // try from 033e3888 to 034e388b has its CatchHandler @ 033e3894 */
                    /* try { // try from 033e388c to 034e38cb has its CatchHandler @ 033e3598 */
    uVar12 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar12 & 1) != 0) {
                    /* catch() { ... } // from try @ 033e3888 with catch @ 033e3894 */
      lVar9 = *plVar5;
                    /* catch() { ... } // from try @ 033e37c4 with catch @ 033e3898 */
                    /* catch() { ... } // from try @ 033e3768 with catch @ 033e389c */
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch() { ... } // from try @ 033e3778 with catch @ 033e38a0 */
      if (uVar12 != 0) {
                    /* catch() { ... } // from try @ 033e387c with catch @ 033e38a4 */
                    /* catch() { ... } // from try @ 033e3878 with catch @ 033e38a8 */
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 033e375c with catch @ 033e38ac */
                    /* catch() { ... } // from try @ 033e3750 with catch @ 033e38b0 */
                    /* catch() { ... } // from try @ 033e36e8 with catch @ 033e38b4 */
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 033e38cc with catch @ 033e38e0 */
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_033e38e4;
          }
                    /* catch() { ... } // from try @ 033e368c with catch @ 033e38b8 */
          uVar12 = uVar12 - 1;
                    /* catch() { ... } // from try @ 033e3870 with catch @ 033e38bc */
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
                    /* try { // try from 033e38cc to 034e38cf has its CatchHandler @ 033e38e0 */
      puVar4 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e38e4:
                    /* try { // try from 033e38e8 to 034e394f has its CatchHandler @ 033e3964 */
      AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      pSVar8 = pBVar14->BGHFADDGPAD;
      EBOHIPKPFDJ = *ppSVar15;
      __this_01 = (PONNKDFAMFM_o *)thunk_FUN_01bda818(PONNKDFAMFM_TypeInfo);
      if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
      }
                    /* try { // try from 033e3950 to 034e395b has its CatchHandler @ 033e3598 */
      PONNKDFAMFM___ctor(__this_01,AHDGNOJPPIB_00,pSVar8,EBOHIPKPFDJ,(MethodInfo *)0x0);
      lVar9 = Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__;
      __this_02 = (__this_00->fields).NBDCLLADIFL;
                    /* try { // try from 033e395c to 034e3963 has its CatchHandler @ 033e3964 */
      if (__this_02 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 033e38e8 with catch @ 033e3964
                       catch() { ... } // from try @ 033e395c with catch @ 033e3964 */
      pPVar10 = (__this_02->fields)._items;
                    /* try { // try from 033e3968 to 034e3a5b has its CatchHandler @ 033e3968
                       catch() { ... } // from try @ 033e3968 with catch @ 033e3968
                       catch() { ... } // from try @ 033e3b84 with catch @ 033e3968
                       catch() { ... } // from try @ 033e3c20 with catch @ 033e3968
                       catch() { ... } // from try @ 033e3c28 with catch @ 033e3968
                       catch() { ... } // from try @ 033e3ce4 with catch @ 033e3968 */
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pPVar10 == (PONNKDFAMFM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_02->fields)._size;
      if (uVar2 < (uint)pPVar10->max_length) {
        (__this_02->fields)._size = uVar2 + 1;
        pPVar10->m_Items[(int)uVar2] = __this_01;
        thunk_FUN_01c20e04(pPVar10->m_Items + (int)uVar2,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_033e3838;
    }
    plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033e3a38;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033e3a38:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
    lVar9 = Method_System_Collections_Generic_List<BPDOKJBGHAG>_Add__;
    __this_03 = (__this->fields).AJDOBNIKJCK;
                    /* try { // try from 033e3a5c to 034e3a83 has its CatchHandler @ 033e3c4c */
    if (__this_03 == (System_Collections_Generic_List_BPDOKJBGHAG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033e3c7c to 034e3ce3 has its CatchHandler @ 033e3cf8 */
      FUN_01bab8c8();
    }
    pBVar11 = (__this_03->fields)._items;
    (__this_03->fields)._version = (__this_03->fields)._version + 1;
    if (pBVar11 == (BPDOKJBGHAG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_03->fields)._size;
    if (uVar2 < (uint)pBVar11->max_length) {
      (__this_03->fields)._size = uVar2 + 1;
      pBVar11->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pBVar11->m_Items + (int)uVar2,__this_00);
    }
    else {
                    /* try { // try from 033e3ab8 to 034e3ae3 has its CatchHandler @ 033e3c48 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
                    /* try { // try from 033e3b68 to 034e3b83 has its CatchHandler @ 033e3c38 */
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_033e3b98;
    }
  }
LAB_033e3b7c:
                    /* try { // try from 033e3b84 to 034e3c0f has its CatchHandler @ 033e3968 */
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033e3b98:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public IList<HOOAAGABMBL> PALAACDCFON()  [RVA 0x32E1374]
// Item$$PALAACDCFON @ RVA 0x32E1374

System_Collections_Generic_IList_HOOAAGABMBL__o *
Item__PALAACDCFON(Item_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Predicate_HOOAAGABMBL__o **ppSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  System_Predicate_HOOAAGABMBL__o *pSVar5;
  
  if ((DAT_045675fa & 1) == 0) {
    FUN_01bab630(&FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Exists__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_APPAKDBFEDN__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_PHOLBGAFPLO__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    DAT_045675fa = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).FDLFEJAEDGA;
  if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Item_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = Item_<>c_TypeInfo->static_fields->__9__36_0;
  if (pSVar5 == (System_Predicate_HOOAAGABMBL__o *)0x0) {
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Item_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Predicate_HOOAAGABMBL__o *)
             thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar2 = &Item_<>c_TypeInfo->static_fields->__9__36_0;
    *ppSVar2 = pSVar5;
    thunk_FUN_01c20e04(ppSVar2,pSVar5);
  }
  if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Exists
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (System_Predicate_T__o *)pSVar5,
                       Method_System_Collections_Generic_List<HOOAAGABMBL>_Exists__);
    if (!bVar1) {
      if ((FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      return (System_Collections_Generic_IList_HOOAAGABMBL__o *)
             FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo->static_fields->AOAIEJMANCC;
    }
    pSVar4 = (__this->fields).FDLFEJAEDGA;
    if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = Item_<>c_TypeInfo->static_fields->__9__36_1;
    if (pSVar5 == (System_Predicate_HOOAAGABMBL__o *)0x0) {
      if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Predicate_HOOAAGABMBL__o *)
               thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar2 = &Item_<>c_TypeInfo->static_fields->__9__36_1;
      *ppSVar2 = pSVar5;
      thunk_FUN_01c20e04(ppSVar2,pSVar5);
    }
    if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      pSVar3 = System_Collections_Generic_List<object>__FindAll
                         ((System_Collections_Generic_List_object__o *)pSVar4,
                          (System_Predicate_T__o *)pSVar5,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
      return (System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL CKKIPBAIEMN(string KGLJICLJHEL)  [RVA 0x32E3DB0]
// Item$$CKKIPBAIEMN @ RVA 0x32E3DB0

HOOAAGABMBL_o *
Item__CKKIPBAIEMN(Item_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  HOOAAGABMBL_o *pHVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_045675fb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    FUN_01bab630(&Method_DOPEEDABNEK_NDBIIBHNADN_KNOFOPHHICO__);
    FUN_01bab630(&Item_NDBIIBHNADN_TypeInfo);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    DAT_045675fb = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Item_NDBIIBHNADN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    __this_01 = (__this->fields).DIGBEFKAPHM;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      pHVar1 = (HOOAAGABMBL_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
      return pHVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AADEKPLBEEO(int GMALOFEKAHI = 0)  [RVA 0x32E3E9C]
// Item$$AADEKPLBEEO @ RVA 0x32E3E9C

/* WARNING: Removing unreachable block (ram,0x033e4178) */
/* WARNING: Removing unreachable block (ram,0x033e4204) */

void Item__AADEKPLBEEO(Item_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  BPDOKJBGHAG_o *__this_01;
  GGHCLMEFIGO_o *__this_02;
  System_Collections_Generic_List_BPDOKJBGHAG__c *pSVar6;
  long lVar7;
  Roster_o *pAVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Collections_Generic_List_BPDOKJBGHAG__o *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045675fc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<BPDOKJBGHAG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<BPDOKJBGHAG>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675fc = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIGBEFKAPHM;
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                             ), bVar2) {
      if ((HOOAAGABMBL_o *)local_60.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      HOOAAGABMBL__AADEKPLBEEO
                ((HOOAAGABMBL_o *)local_60.fields._current,GMALOFEKAHI,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    pSVar12 = (__this->fields).AJDOBNIKJCK;
    if (pSVar12 != (System_Collections_Generic_List_BPDOKJBGHAG__o *)0x0) {
      pSVar6 = pSVar12->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<BPDOKJBGHAG>_TypeInfo) {
            pVVar3 = &(pSVar6->vtable)._0_Equals + *piVar10;
            goto LAB_033e401c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar3 = (VirtualInvokeData *)
               FUN_01b81914(pSVar12,System_Collections_Generic_IEnumerable<BPDOKJBGHAG>_TypeInfo,0);
LAB_033e401c:
      plVar4 = (long *)(*pVVar3->methodPtr)(pSVar12,pVVar3->method);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_033e408c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e408c:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_033e416c;
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_033e4144;
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_033e412c;
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_BPDOKJBGHAG__c **)(piVar11 + -2) ==
                System_Collections_Generic_IEnumerator<BPDOKJBGHAG>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_033e40e8;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<BPDOKJBGHAG>_TypeInfo,0)
        ;
LAB_033e40e8:
        __this_01 = (BPDOKJBGHAG_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (__this_01 == (BPDOKJBGHAG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        BPDOKJBGHAG__AADEKPLBEEO(__this_01,GMALOFEKAHI,(MethodInfo *)0x0);
      } while( true );
    }
  }
  goto LAB_033e41fc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_033e412c:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_033e4160;
    }
  }
LAB_033e4144:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033e4160:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_033e416c:
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
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar8 != (Roster_o *)0x0) &&
     (__this_02 = (pAVar8->fields).OIDPLCLELEN, __this_02 != (GGHCLMEFIGO_o *)0x0)) {
    GGHCLMEFIGO__MJGMEEKMAOE(__this_02,(MethodInfo *)0x0);
    return;
  }
LAB_033e41fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IReadOnlyList<BPDOKJBGHAG> FCJLPEEMBHH()  [RVA 0x32E4330]
// Item$$FCJLPEEMBHH @ RVA 0x32E4330

System_Collections_Generic_IReadOnlyList_BPDOKJBGHAG__o *
Item__FCJLPEEMBHH(Item_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_BPDOKJBGHAG__o *)(__this->fields).AJDOBNIKJCK;
}


// ===== public void Dispose()  [RVA 0x32E4338]
// Item$$Dispose @ RVA 0x32E4338

void Item__Dispose(Item_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNIHOIAMDPC()  [RVA 0x32E4354]
// Item$$HNIHOIAMDPC @ RVA 0x32E4354

void Item__HNIHOIAMDPC(Item_o *__this,MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Action_Action_HOOAAGABMBL___o **ppSVar4;
  System_IObservable_T__o *pSVar5;
  System_Action_T__o *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 *puVar9;
  NDPMLPGANCI_o *DHMOPKGOBHL;
  System_IObservable_GLINEGMOOBM__o *source;
  System_Func_GLINEGMOOBM__bool__o **ppSVar10;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *pMVar11;
  ulong uVar12;
  int *piVar13;
  System_Action_Action_HOOAAGABMBL___o *addHandler;
  KBCOFHAJOCK_o *__this_00;
  System_Action_Action_HOOAAGABMBL___o *removeHandler;
  System_Func_GLINEGMOOBM__bool__o *predicate;
  
  if ((DAT_045675fd & 1) == 0) {
    FUN_01bab630(&System_Action<Action<HOOAAGABMBL>>_TypeInfo);
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_ABPLAAFFKIE__);
    FUN_01bab630(&Method_DOPEEDABNEK_HIALOHNIDEO__);
    FUN_01bab630(&Method_DOPEEDABNEK_LDMKKAPAJCN__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<GLINEGMOOBM,_bool>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<GLINEGMOOBM>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<HOOAAGABMBL>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<HOOAAGABMBL>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<GLINEGMOOBM>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_AOMDLEBNFEL__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_FHKDBPPPMNI__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_IGLKAFAIECC__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_8116/*"Items"*/);
    FUN_01bab630(&StringLiteral_14590/*"UpgradeList"*/);
    FUN_01bab630(&StringLiteral_19452/*"list.xml"*/);
    FUN_01bab630(&StringLiteral_8472/*"List"*/);
    FUN_01bab630(&StringLiteral_8114/*"ItemSets"*/);
    DAT_045675fd = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  EIJDDKJONFO = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_19452/*"list.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_8472/*"List"*/,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      pMVar11 = *(MethodInfo **)(*plVar2 + 0x470);
      pSVar3 = (System_Xml_XmlNode_o *)(**(code **)(*plVar2 + 0x468))(plVar2,StringLiteral_14590/*"UpgradeList"*/);
      Item__COFFDBGHAEC(__this,pSVar3,pMVar11);
      pMVar11 = *(MethodInfo **)(*plVar2 + 0x470);
      pSVar3 = (System_Xml_XmlNode_o *)(**(code **)(*plVar2 + 0x468))(plVar2,StringLiteral_8116/*"Items"*/);
      Item__CAJMJMJHCAD(__this,pSVar3,pMVar11);
      __this_00 = (__this->fields)._GMODBKFPHPN_k__BackingField;
      pSVar3 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar2 + 0x468))
                         (plVar2,StringLiteral_8114/*"ItemSets"*/,*(undefined8 *)(*plVar2 + 0x470));
      if (__this_00 != (KBCOFHAJOCK_o *)0x0) {
        KBCOFHAJOCK__HNIHOIAMDPC(__this_00,pSVar3,(MethodInfo *)0x0);
        if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler = Item_<>c_TypeInfo->static_fields->__9__48_0;
        if (addHandler == (System_Action_Action_HOOAAGABMBL___o *)0x0) {
          if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler = (System_Action_Action_HOOAAGABMBL___o *)
                       thunk_FUN_01bda818(System_Action<Action<HOOAAGABMBL>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &Item_<>c_TypeInfo->static_fields->__9__48_0;
          *ppSVar4 = addHandler;
          thunk_FUN_01c20e04(ppSVar4,addHandler);
        }
        if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler = Item_<>c_TypeInfo->static_fields->__9__48_1;
        if (removeHandler == (System_Action_Action_HOOAAGABMBL___o *)0x0) {
          if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               (System_Action_Action_HOOAAGABMBL___o *)
               thunk_FUN_01bda818(System_Action<Action<HOOAAGABMBL>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &Item_<>c_TypeInfo->static_fields->__9__48_1;
          *ppSVar4 = removeHandler;
          thunk_FUN_01c20e04(ppSVar4,removeHandler);
        }
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = UniRx_Observable__FromEvent<object>
                           ((System_Action_Action_T___o *)addHandler,
                            (System_Action_Action_T___o *)removeHandler,
                            Method_UniRx_Observable_FromEvent<HOOAAGABMBL>__);
        pSVar6 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
        System_Action<object>___ctor();
        pIVar7 = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<object>
                           (pSVar5,pSVar6,Method_UniRx_ObservableExtensions_Subscribe<HOOAAGABMBL>__
                           );
        UniRx_DisposableExtensions__AddTo<object>
                  (pIVar7,(System_Collections_Generic_ICollection_IDisposable__o *)
                          (__this->fields).BNAIPPCOGPE,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        lVar8 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        plVar2 = (long *)**(undefined8 **)(lVar8 + 0xb8);
        if (plVar2 != (long *)0x0) {
          lVar8 = *plVar2;
          uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(JNDFOKIMHPB_c **)(piVar13 + -2) == JNDFOKIMHPB_TypeInfo) {
                puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_033e47e8;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_01b81914(plVar2,JNDFOKIMHPB_TypeInfo,1);
LAB_033e47e8:
          pSVar5 = (System_IObservable_T__o *)(*(code *)*puVar9)(plVar2,puVar9[1]);
          pSVar6 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
          System_Action<object>___ctor();
          pIVar7 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             (pSVar5,pSVar6,
                              Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar7,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          DHMOPKGOBHL = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          source = KMFOEBNKLEO__FGGPIDCDHHG(DHMOPKGOBHL,method_00);
          if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Item_<>c_TypeInfo);
          }
          predicate = Item_<>c_TypeInfo->static_fields->__9__48_3;
          if (predicate == (System_Func_GLINEGMOOBM__bool__o *)0x0) {
            if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(Item_<>c_TypeInfo);
            }
            predicate = (System_Func_GLINEGMOOBM__bool__o *)
                        thunk_FUN_01bda818(System_Func<GLINEGMOOBM,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            ppSVar10 = &Item_<>c_TypeInfo->static_fields->__9__48_3;
            *ppSVar10 = predicate;
            thunk_FUN_01c20e04(ppSVar10,predicate);
          }
          if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = UniRx_Observable__Where<object>
                             ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                              Method_UniRx_Observable_Where<GLINEGMOOBM>__);
          pSVar6 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
          System_Action<object>___ctor();
          pIVar7 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             (pSVar5,pSVar6,
                              Method_UniRx_ObservableExtensions_Subscribe<GLINEGMOOBM>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar7,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void HIALOHNIDEO(KHODJHFHCDE EKHNABFCAMM)  [RVA 0x32E4970]
// Item$$HIALOHNIDEO @ RVA 0x32E4970

void Item__HIALOHNIDEO(Item_o *__this,KHODJHFHCDE_o *EKHNABFCAMM,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  VirtualInvokeData *pVVar3;
  System_Func_PackSettings__string__o **ppSVar4;
  System_Collections_Generic_IEnumerable_TResult__o *JMIMCKCKFND;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  System_Collections_Generic_IReadOnlyList_PackSettings__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IReadOnlyList_PackSettings__o *pSVar9;
  System_Func_PackSettings__string__o *selector;
  
  if ((DAT_045675fe & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    FUN_01bab630(&System_Func<PackSettings,_string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<PackSettings>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_EKNLBFNCJOL__);
    FUN_01bab630(&Item_<>c_TypeInfo);
    DAT_045675fe = 1;
  }
  if (EKHNABFCAMM != (KHODJHFHCDE_o *)0x0) {
    if ((EKHNABFCAMM->fields)._NJFBLJHECFH_k__BackingField == false) {
      return;
    }
    pSVar9 = (EKHNABFCAMM->fields)._JOFOHDAGJIN_k__BackingField;
    if (pSVar9 != (System_Collections_Generic_IReadOnlyList_PackSettings__o *)0x0) {
      pSVar6 = pSVar9->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<PackSettings>_TypeInfo)
          {
            pVVar3 = pSVar6->vtable + *piVar8;
            goto LAB_033e4a48;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar3 = (VirtualInvokeData *)
               FUN_01b81914(pSVar9,
                            System_Collections_Generic_IReadOnlyCollection<PackSettings>_TypeInfo,0)
      ;
LAB_033e4a48:
      iVar2 = (*pVVar3->methodPtr)(pSVar9,pVVar3->method);
      if (iVar2 == 0) {
        pMVar5 = extraout_x1;
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar5 = extraout_x1_01;
        }
        if (DAT_04566e5a == '\0') {
          FUN_01bab630(&GameUtils_TypeInfo);
          DAT_04566e5a = '\x01';
          pMVar5 = extraout_x1_02;
        }
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar5 = extraout_x1_03;
        }
        if (GameUtils_TypeInfo->static_fields->_CANIKCKLKBL_k__BackingField != false) {
          return;
        }
        Item__MFBFMIONFMA(__this,pMVar5);
        pMVar5 = extraout_x1_04;
      }
      else {
        source = (System_Collections_Generic_IEnumerable_TSource__o *)
                 (EKHNABFCAMM->fields)._JOFOHDAGJIN_k__BackingField;
        if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        selector = Item_<>c_TypeInfo->static_fields->__9__48_5;
        if (selector == (System_Func_PackSettings__string__o *)0x0) {
          if ((Item_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          selector = (System_Func_PackSettings__string__o *)
                     thunk_FUN_01bda818(System_Func<PackSettings,_string>_TypeInfo);
          System_Func<object,_object>___ctor();
          ppSVar4 = &Item_<>c_TypeInfo->static_fields->__9__48_5;
          *ppSVar4 = selector;
          thunk_FUN_01c20e04(ppSVar4,selector);
        }
        pMVar5 = Method_System_Linq_Enumerable_Select<PackSettings,_string>__;
        JMIMCKCKFND = System_Linq_Enumerable__Select<object,_object>
                                (source,(System_Func_TSource__TResult__o *)selector,
                                 (MethodInfo_1EA6FC0 *)
                                 Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
        if (__this == (Item_o *)0x0) goto LAB_033e4b8c;
        Item__FBNGJNMKBNM
                  (__this,(System_Collections_Generic_IEnumerable_string__o *)JMIMCKCKFND,pMVar5);
        pMVar5 = extraout_x1_00;
      }
      Item__BPCBMLIGOFF(__this,pMVar5);
      return;
    }
  }
LAB_033e4b8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PMEHBLGJKAG(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x32E4B90]
// Item$$PMEHBLGJKAG @ RVA 0x32E4B90

void Item__PMEHBLGJKAG(Item_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CPLLGJKGGMD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void MDBOKHFIOIJ(string CNIELFLIKJB, bool PFCACBBAOAJ, int PIDMGHLCFAJ)  [RVA 0x32E4B98]
// Item$$MDBOKHFIOIJ @ RVA 0x32E4B98

void Item__MDBOKHFIOIJ
               (Item_o *__this,System_String_o *CNIELFLIKJB,bool PFCACBBAOAJ,
               int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  HOOAAGABMBL_o *IKKAMAMLIKA;
  
  IKKAMAMLIKA = Item__CKKIPBAIEMN(__this,CNIELFLIKJB,(MethodInfo *)(ulong)PFCACBBAOAJ);
  Item__MDBOKHFIOIJ((Item_o *)IKKAMAMLIKA,IKKAMAMLIKA,PFCACBBAOAJ,PIDMGHLCFAJ,method);
  return;
}

