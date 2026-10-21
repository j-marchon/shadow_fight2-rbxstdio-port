// TypeDefIndex 1952
// Namespace: 
// public class AJMOIOIBPGP : KCJCIJHMEJF, IDisposable
// Fields:
//   private bool ECCPBJGMNPE; // 0x10
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x18
//   private OPGMEHFEJJJ PJAKDICKNKA; // 0x20
//   private DOPEEDABNEK DPOPJKJLDEE; // 0x28
//   private ACHLOMELAJE OKNKKHGBECG; // 0x30
//   private NCNJEIBHGBH KMGFNKKPGIH; // 0x38
//   private DGGBFKNKEAH FHCHDOILFGE; // 0x40
//   private readonly List<OPNMPAJKDMI> FHPIEPONJFG; // 0x48
//   private readonly List<OPNMPAJKDMI> KMBLPHNJINH; // 0x50
//   private readonly List<OPNMPAJKDMI> KALGMNLLLNO; // 0x58
//   private OPNMPAJKDMI BAAIACCFAPH; // 0x60

// ===== public void GIMAJOGGBHM(DOPEEDABNEK GHAAKPDHIJJ, ACHLOMELAJE BHENDAGDGME, NCNJEIBHGBH DPAPHDMGNHJ)  [RVA 0x32726A4]
// AJMOIOIBPGP$$GIMAJOGGBHM @ RVA 0x32726A4

void AJMOIOIBPGP__GIMAJOGGBHM
               (AJMOIOIBPGP_o *__this,DOPEEDABNEK_o *GHAAKPDHIJJ,ACHLOMELAJE_o *BHENDAGDGME,
               NCNJEIBHGBH_o *DPAPHDMGNHJ,MethodInfo *method)

{
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *method_00;
  undefined8 *puVar1;
  NCNJEIBHGBH_o **ppNVar2;
  ACHLOMELAJE_o **ppAVar3;
  DOPEEDABNEK_o **ppDVar4;
  
  if ((DAT_04567234 & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_DKPJKIDCHKE__);
    FUN_01bab630(&Method_AJMOIOIBPGP_KCIAIPOFJDM__);
    FUN_01bab630(&Method_AJMOIOIBPGP_POHILILPKNG__);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&StringLiteral_7532/*"Initialize: _items is null!"*/);
    FUN_01bab630(&StringLiteral_7534/*"Initialize: _roster is null!"*/);
    FUN_01bab630(&StringLiteral_7533/*"Initialize: _mapButtons is null!"*/);
    DAT_04567234 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    return;
  }
  ppDVar4 = &(__this->fields).DPOPJKJLDEE;
  *ppDVar4 = GHAAKPDHIJJ;
  (__this->fields).ECCPBJGMNPE = true;
  thunk_FUN_01c20e04(ppDVar4,GHAAKPDHIJJ);
  if (*ppDVar4 == (DOPEEDABNEK_o *)0x0) {
    puVar1 = &StringLiteral_7532/*"Initialize: _items is null!"*/;
  }
  else {
    ppAVar3 = &(__this->fields).OKNKKHGBECG;
    *ppAVar3 = BHENDAGDGME;
    thunk_FUN_01c20e04(ppAVar3,BHENDAGDGME);
    if (*ppAVar3 == (ACHLOMELAJE_o *)0x0) {
      puVar1 = &StringLiteral_7534/*"Initialize: _roster is null!"*/;
    }
    else {
      ppNVar2 = &(__this->fields).KMGFNKKPGIH;
      *ppNVar2 = DPAPHDMGNHJ;
      thunk_FUN_01c20e04(ppNVar2,DPAPHDMGNHJ);
      if (*ppNVar2 != (NCNJEIBHGBH_o *)0x0) {
        AJMOIOIBPGP__CPPMCNNDKHA(__this,method_00);
        addHandler = (System_Action_Action_T___o *)
                     thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
        System_Action<object>___ctor();
        removeHandler =
             (System_Action_Action_T___o *)
             thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
        System_Action<object>___ctor();
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromEvent<object>
                           (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<string>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
        System_Action<object>___ctor();
        disposable = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<object>
                               (source,onNext,Method_UniRx_ObservableExtensions_Subscribe<string>__)
        ;
        UniRx_DisposableExtensions__AddTo<object>
                  (disposable,
                   (System_Collections_Generic_ICollection_IDisposable__o *)
                   (__this->fields).BNAIPPCOGPE,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        return;
      }
      puVar1 = &StringLiteral_7533/*"Initialize: _mapButtons is null!"*/;
    }
  }
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  return;
}


// ===== private void KCIAIPOFJDM(Action<string> JLPMKKKMANE)  [RVA 0x3272FB0]
// AJMOIOIBPGP$$KCIAIPOFJDM @ RVA 0x3272FB0

void AJMOIOIBPGP__KCIAIPOFJDM
               (AJMOIOIBPGP_o *__this,System_Action_string__o *JLPMKKKMANE,MethodInfo *method)

{
  LAMJOHEKJNJ_o *__this_00;
  ACHLOMELAJE_o *pAVar1;
  
  pAVar1 = (__this->fields).OKNKKHGBECG;
  if ((pAVar1 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar1->fields)._DDGPMHMNKNA_k__BackingField, __this_00 != (LAMJOHEKJNJ_o *)0x0))
  {
    LAMJOHEKJNJ__LCBDJAMCGNB(__this_00,JLPMKKKMANE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JMDIHKNADLB(OPNMPAJKDMI NLFMDIGKNGP)  [RVA 0x3272FD4]
// AJMOIOIBPGP$$JMDIHKNADLB @ RVA 0x3272FD4

void AJMOIOIBPGP__JMDIHKNADLB(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  int64_t iVar1;
  ACHLOMELAJE_o *__this_00;
  System_String_o *pSVar2;
  Il2CppObject *arg2;
  AJDHCLBLGMI_o *pAVar3;
  long local_48;
  
  if ((DAT_04567235 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22404/*"{0}: {1}\n	Duration={2}"*/);
    FUN_01bab630(&StringLiteral_12365/*"StartOffer"*/);
    DAT_04567235 = 1;
  }
  if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
    iVar1 = OPNMPAJKDMI__EFKCEGNGGOI(NLFMDIGKNGP,(MethodInfo *)0x0);
    OPNMPAJKDMI__GLIPIKHCNCO(NLFMDIGKNGP,(MethodInfo *)0x0);
    pAVar3 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
    if (pAVar3 != (AJDHCLBLGMI_o *)0x0) {
      (pAVar3->fields).ICBBFDJOHHF = 1;
      (pAVar3->fields).MMLIJBKEBHC = (pAVar3->fields).MMLIJBKEBHC + 1;
      __this_00 = (__this->fields).OKNKKHGBECG;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        pSVar2 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_48 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM - iVar1;
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_48);
        pSVar2 = System_String__Format
                           (StringLiteral_22404/*"{0}: {1}\n	Duration={2}"*/,StringLiteral_12365/*"StartOffer"*/,(Il2CppObject *)pSVar2,arg2,
                            (MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KOOHANBJIIG(OPNMPAJKDMI NLFMDIGKNGP)  [RVA 0x3273160]
// AJMOIOIBPGP$$KOOHANBJIIG @ RVA 0x3273160

void AJMOIOIBPGP__KOOHANBJIIG(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  AJDHCLBLGMI_o *pAVar3;
  
  if ((DAT_04567236 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_6857/*"GiveOffer: "*/);
    DAT_04567236 = 1;
  }
  if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
    pSVar2 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(StringLiteral_6857/*"GiveOffer: "*/,pSVar2,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
    iVar1 = (*(NLFMDIGKNGP->klass->vtable)._14_NHGGBEACKBD.methodPtr)
                      (NLFMDIGKNGP,(NLFMDIGKNGP->klass->vtable)._14_NHGGBEACKBD.method);
    if (iVar1 != 1) {
      OPNMPAJKDMI__EIGMEGLAAKE(NLFMDIGKNGP,false,(MethodInfo *)0x0);
    }
    OPNMPAJKDMI__IGDDDCBHNOF(NLFMDIGKNGP,(MethodInfo *)0x0);
    pAVar3 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
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
    if (pAVar3 != (AJDHCLBLGMI_o *)0x0) {
      (pAVar3->fields).PJHEOJENEGI = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      pAVar3 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
      if (pAVar3 != (AJDHCLBLGMI_o *)0x0) {
        (pAVar3->fields).ICBBFDJOHHF = 3;
        __this_00 = (__this->fields).OKNKKHGBECG;
        if (__this_00 != (ACHLOMELAJE_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
          AJMOIOIBPGP__GGMPJNLIHHM(__this,NLFMDIGKNGP,method_00);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public IReadOnlyList<NCCFNKMICGK> PIOCHPBJAEM()  [RVA 0x3273AC0]
// AJMOIOIBPGP$$PIOCHPBJAEM @ RVA 0x3273AC0

System_Collections_Generic_IReadOnlyList_NCCFNKMICGK__o *
AJMOIOIBPGP__PIOCHPBJAEM(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_NCCFNKMICGK__o *)(__this->fields).FHPIEPONJFG;
}


// ===== public IReadOnlyList<NCCFNKMICGK> GBPABEECABA()  [RVA 0x3273AC8]
// AJMOIOIBPGP$$GBPABEECABA @ RVA 0x3273AC8

System_Collections_Generic_IReadOnlyList_NCCFNKMICGK__o *
AJMOIOIBPGP__GBPABEECABA(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_NCCFNKMICGK__o *)(__this->fields).KMBLPHNJINH;
}


// ===== public bool KOOHANBJIIG(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3273AD0]
// AJMOIOIBPGP$$KOOHANBJIIG @ RVA 0x3273AD0

bool AJMOIOIBPGP__KOOHANBJIIG(AJMOIOIBPGP_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  System_Collections_Generic_List_OPNMPAJKDMI__o *__this_00;
  
  if ((DAT_04567237 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
    FUN_01bab630(&Method_AJMOIOIBPGP_OFOKOHFKFJM_IACBKBLLJLG__);
    FUN_01bab630(&AJMOIOIBPGP_OFOKOHFKFJM_TypeInfo);
    FUN_01bab630(&System_Predicate<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&StringLiteral_6858/*"GiveOffer: can't find non purchased offer by item '"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    DAT_04567237 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJMOIOIBPGP_OFOKOHFKFJM_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)IKKAMAMLIKA;
    thunk_FUN_01c20e04(pIVar2,IKKAMAMLIKA);
    if ((pIVar2->klass == (Il2CppClass *)0x0) ||
       (bVar1 = JOOGMNNBBHI__DFOPHIKFMHM((HOOAAGABMBL_o *)pIVar2->klass,(MethodInfo *)0x0), !bVar1))
    {
      return false;
    }
    __this_00 = (__this->fields).KALGMNLLLNO;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<OPNMPAJKDMI>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__;
      NLFMDIGKNGP = (OPNMPAJKDMI_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_00,match,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
      if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
        AJMOIOIBPGP__KOOHANBJIIG(__this,NLFMDIGKNGP,method_00);
        return true;
      }
      if (pIVar2->klass != (Il2CppClass *)0x0) {
        JLNPKGGFFDD = System_String__Concat
                                (StringLiteral_6858/*"GiveOffer: can't find non purchased offer by item '"*/,(System_String_o *)(pIVar2->klass->_1).namespaze
                                 ,StringLiteral_853/*"'!"*/,(MethodInfo *)0x0);
        KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        return false;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HKILPHEEBJA(OPNMPAJKDMI NLFMDIGKNGP, string CNIELFLIKJB, ref int IPJBDMAEMBF, bool MONPPIMBEPG)  [RVA 0x3273C48]
// AJMOIOIBPGP$$HKILPHEEBJA @ RVA 0x3273C48

void AJMOIOIBPGP__HKILPHEEBJA
               (AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,System_String_o *CNIELFLIKJB,
               int32_t *IPJBDMAEMBF,bool MONPPIMBEPG,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *pSVar6;
  VirtualInvokeData *pVVar7;
  ACHLOMELAJE_o *__this_00;
  System_Object_array *args;
  long lVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__c *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  Il2CppObject *pIVar14;
  AJDHCLBLGMI_o *pAVar15;
  undefined4 local_68;
  int32_t local_64;
  
  if ((DAT_04567238 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_20463/*"recieved"*/);
    FUN_01bab630(&StringLiteral_4303/*"CheckItemsFromPurchasedOffer"*/);
    FUN_01bab630(&StringLiteral_16398/*"already found in profile"*/);
    FUN_01bab630(&StringLiteral_22394/*"{0}: offer '{1}' - {2} item '{3}' ({4}/{5})"*/);
    DAT_04567238 = 1;
  }
  iVar2 = *IPJBDMAEMBF;
  *IPJBDMAEMBF = iVar2 + 1;
  if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) {
LAB_03374018:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pAVar15 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
  pSVar6 = OPNMPAJKDMI__HOBICLIEIIJ(NLFMDIGKNGP,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)0x0) goto LAB_03374018;
  pSVar11 = pSVar6->klass;
  uVar3._0_1_ = (pSVar11->_2).rank;
  uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar3;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo) {
        pVVar7 = pSVar11->vtable + *piVar13;
        goto LAB_03373d5c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_01b81914(pSVar6,System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo,
                        0);
LAB_03373d5c:
  iVar5 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
  if (pAVar15 == (AJDHCLBLGMI_o *)0x0) goto LAB_03374018;
  (pAVar15->fields).HNLMCGFEAJB = iVar2 + 1 == iVar5;
  pAVar15 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
  if (pAVar15 == (AJDHCLBLGMI_o *)0x0) goto LAB_03374018;
  if ((pAVar15->fields).HNLMCGFEAJB != false) {
    __this_00 = (__this->fields).OKNKKHGBECG;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03374018;
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,6);
  if (args == (System_Object_array *)0x0) goto LAB_03374018;
  if (StringLiteral_4303/*"CheckItemsFromPurchasedOffer"*/ == (Il2CppObject *)0x0) {
    pIVar14 = (Il2CppObject *)0x0;
  }
  else {
    lVar8 = thunk_FUN_01bda71c(StringLiteral_4303/*"CheckItemsFromPurchasedOffer"*/,(((args->obj).klass)->_1).element_class);
    pIVar14 = StringLiteral_4303/*"CheckItemsFromPurchasedOffer"*/;
    if (lVar8 == 0) goto LAB_03374020;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar14;
    thunk_FUN_01c20e04();
    pSVar9 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
    if ((pSVar9 != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar8 == 0)) {
LAB_03374020:
      uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar10,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar9;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar9);
      pSVar9 = StringLiteral_22394/*"{0}: offer '{1}' - {2} item '{3}' ({4}/{5})"*/;
      puVar1 = &StringLiteral_20463/*"recieved"*/;
      if (!MONPPIMBEPG) {
        puVar1 = &StringLiteral_16398/*"already found in profile"*/;
      }
      pIVar14 = (Il2CppObject *)*puVar1;
      if ((pIVar14 != (Il2CppObject *)0x0) &&
         (lVar8 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_03374020;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar14;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar14);
        if ((CNIELFLIKJB != (System_String_o *)0x0) &&
           (lVar8 = thunk_FUN_01bda71c(CNIELFLIKJB,(((args->obj).klass)->_1).element_class),
           lVar8 == 0)) goto LAB_03374020;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)CNIELFLIKJB;
          thunk_FUN_01c20e04(args->m_Items + 3,CNIELFLIKJB);
          local_64 = *IPJBDMAEMBF;
          pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
          if ((pIVar14 != (Il2CppObject *)0x0) &&
             (lVar8 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
             lVar8 == 0)) goto LAB_03374020;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar14;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar14);
            pSVar6 = OPNMPAJKDMI__HOBICLIEIIJ(NLFMDIGKNGP,(MethodInfo *)0x0);
            if (pSVar6 == (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)0x0)
            goto LAB_03374018;
            pSVar11 = pSVar6->klass;
            uVar4._0_1_ = (pSVar11->_2).rank;
            uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
            uVar12 = (ulong)uVar4;
            if (uVar12 != 0) {
              piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                    (Il2CppClass *)
                    System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo) {
                  pVVar7 = pSVar11->vtable + *piVar13;
                  goto LAB_03373f80;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            pVVar7 = (VirtualInvokeData *)
                     FUN_01b81914(pSVar6,
                                  System_Collections_Generic_IReadOnlyCollection<POGBKGFBOLC>_TypeInfo
                                  ,0);
LAB_03373f80:
            local_68 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
            pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
            if ((pIVar14 != (Il2CppObject *)0x0) &&
               (lVar8 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
               lVar8 == 0)) goto LAB_03374020;
            if (5 < (uint)args->max_length) {
              args->m_Items[5] = pIVar14;
              thunk_FUN_01c20e04(args->m_Items + 5,pIVar14);
              pSVar9 = System_String__Format(pSVar9,args,(MethodInfo *)0x0);
              KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void DKMEDEFELOD(OPNMPAJKDMI NLFMDIGKNGP)  [RVA 0x327402C]
// AJMOIOIBPGP$$DKMEDEFELOD @ RVA 0x327402C

/* WARNING: Removing unreachable block (ram,0x0337430c) */

void AJMOIOIBPGP__DKMEDEFELOD(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  POGBKGFBOLC_o *PLJKGEJHILJ;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *in_x4;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__c *pSVar7;
  long lVar8;
  ACHLOMELAJE_o *pAVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  
  if ((DAT_04567239 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_848/*"' was not received! Skip..."*/);
    FUN_01bab630(&StringLiteral_4308/*"CheckItemsPerksFromPurchasedOffer: item with name '"*/);
    DAT_04567239 = 1;
  }
  if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) {
    return;
  }
  pSVar3 = OPNMPAJKDMI__HOBICLIEIIJ(NLFMDIGKNGP,(MethodInfo *)0x0);
  if (pSVar3 == (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = pSVar3->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo) {
        pVVar4 = pSVar7->vtable + *piVar11;
        goto LAB_03374110;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(pSVar3,System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo,0);
LAB_03374110:
  plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03374190;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03374190:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_033742b4;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_POGBKGFBOLC__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033741ec;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo,0);
LAB_033741ec:
    PLJKGEJHILJ = (POGBKGFBOLC_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    pAVar9 = (__this->fields).OKNKKHGBECG;
    if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (PLJKGEJHILJ == (POGBKGFBOLC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pAVar9->fields).OIDPLCLELEN;
    if (__this_00 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA
                          (__this_00,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                           (MethodInfo *)0x0);
    if ((__this_01 == (IGFGDDANEPE_o *)0x0) ||
       (iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_01,(MethodInfo *)0x0), iVar2 == 0)) {
      JLNPKGGFFDD = System_String__Concat
                              (StringLiteral_4308/*"CheckItemsPerksFromPurchasedOffer: item with name '"*/,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField
                               ,StringLiteral_848/*"' was not received! Skip..."*/,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    }
    else {
      AJMOIOIBPGP__HPNAOBPMDMP(__this,NLFMDIGKNGP,PLJKGEJHILJ,__this_01,in_x4);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033742d0;
    }
  }
LAB_033742b4:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033742d0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== private void GGMPJNLIHHM(OPNMPAJKDMI NLFMDIGKNGP)  [RVA 0x32732C4]
// AJMOIOIBPGP$$GGMPJNLIHHM @ RVA 0x32732C4

/* WARNING: Removing unreachable block (ram,0x03373954) */

void AJMOIOIBPGP__GGMPJNLIHHM(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  LPAPAMPGDFN_o *__this_00;
  System_String_o *pSVar4;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  POGBKGFBOLC_o *PLJKGEJHILJ;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  DOPEEDABNEK_o *__this_03;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  System_String_array *pSVar9;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  ACHLOMELAJE_o *pAVar10;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__c *pSVar11;
  long lVar12;
  System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  int32_t local_64;
  
  if ((DAT_0456723a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_807/*"' - item '"*/);
    FUN_01bab630(&StringLiteral_821/*"' in disabled by Lock '"*/);
    FUN_01bab630(&StringLiteral_822/*"' in offer '"*/);
    FUN_01bab630(&StringLiteral_4305/*"CheckItemsFromPurchasedOffer: offer '"*/);
    FUN_01bab630(&StringLiteral_4304/*"CheckItemsFromPurchasedOffer: detected null item with name '"*/);
    FUN_01bab630(&StringLiteral_808/*"' - user in tutorial! Skip..."*/);
    FUN_01bab630(&StringLiteral_855/*"'! Skip..."*/);
    DAT_0456723a = 1;
  }
  if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) {
    return;
  }
  pAVar10 = (__this->fields).OKNKKHGBECG;
  if ((pAVar10 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar10->fields).LMCDOMHENMC, __this_00 != (LPAPAMPGDFN_o *)0x0)) {
    bVar2 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar4 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_4305/*"CheckItemsFromPurchasedOffer: offer '"*/,pSVar4,StringLiteral_808/*"' - user in tutorial! Skip..."*/,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
      return;
    }
    local_64 = 0;
    pSVar5 = OPNMPAJKDMI__HOBICLIEIIJ(NLFMDIGKNGP,(MethodInfo *)0x0);
    if (pSVar5 != (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)0x0) {
      pSVar11 = pSVar5->klass;
      uVar1._0_1_ = (pSVar11->_2).rank;
      uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar1;
      if (uVar13 != 0) {
        piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo) {
            pVVar6 = pSVar11->vtable + *piVar14;
            goto LAB_0337346c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo,0);
LAB_0337346c:
      plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033734f4;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033734f4:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_033738ac;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03373894;
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_POGBKGFBOLC__c **)(piVar15 + -2) ==
                System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03373550;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo,0)
        ;
LAB_03373550:
        PLJKGEJHILJ = (POGBKGFBOLC_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        pAVar10 = (__this->fields).OKNKKHGBECG;
        if (pAVar10 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (PLJKGEJHILJ == (POGBKGFBOLC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (pAVar10->fields).OIDPLCLELEN;
        if (__this_01 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = GGHCLMEFIGO__JNFIBDBHNOA
                              (__this_01,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                               (MethodInfo *)0x0);
        if ((__this_02 == (IGFGDDANEPE_o *)0x0) ||
           (iVar3 = IGFGDDANEPE__LDJLMEFOMLG(__this_02,(MethodInfo *)0x0), iVar3 < 1)) {
          __this_03 = (__this->fields).DPOPJKJLDEE;
          if (__this_03 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN
                                  (__this_03,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                                   (MethodInfo *)0x0);
          if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
            pSVar9 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
            if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((int)pSVar9->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[0] = StringLiteral_4304/*"CheckItemsFromPurchasedOffer: detected null item with name '"*/;
            thunk_FUN_01c20e04();
            if ((uint)pSVar9->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[1] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
            thunk_FUN_01c20e04();
            if ((uint)pSVar9->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[2] = StringLiteral_822/*"' in offer '"*/;
            thunk_FUN_01c20e04();
            pSVar4 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
            if ((uint)pSVar9->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[3] = pSVar4;
            thunk_FUN_01c20e04();
            if ((uint)pSVar9->max_length < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[4] = StringLiteral_855/*"'! Skip..."*/;
            thunk_FUN_01c20e04();
            pSVar4 = System_String__Concat(pSVar9,(MethodInfo *)0x0);
            KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
          }
          else {
            pAVar10 = (__this->fields).OKNKKHGBECG;
            if (pAVar10 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar2 = ACHLOMELAJE__NIEKNLDMABC
                              (pAVar10,(IKKAMAMLIKA->fields)._ILMMODKJGFK_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar2) {
              pSVar9 = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
              if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((int)pSVar9->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[0] = StringLiteral_4305/*"CheckItemsFromPurchasedOffer: offer '"*/;
              thunk_FUN_01c20e04();
              pSVar4 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
              if ((uint)pSVar9->max_length < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[1] = pSVar4;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[2] = StringLiteral_807/*"' - item '"*/;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[3] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[4] = StringLiteral_821/*"' in disabled by Lock '"*/;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[5] = (IKKAMAMLIKA->fields)._ILMMODKJGFK_k__BackingField;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[6] = StringLiteral_855/*"'! Skip..."*/;
              thunk_FUN_01c20e04();
              pSVar4 = System_String__Concat(pSVar9,(MethodInfo *)0x0);
              KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
            }
            else {
              pAVar10 = (__this->fields).OKNKKHGBECG;
              if (pAVar10 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar3 = ACHLOMELAJE__EOEAKGGDBFH(pAVar10,(MethodInfo *)0x0);
              in_x5 = (MethodInfo *)0x0;
              AMIINPEKKFB__CHENJHPJCKE(IKKAMAMLIKA,iVar3 * 100 + 0xe6,1,true,true,(MethodInfo *)0x0)
              ;
              LDAIPGBJEOG = (PLJKGEJHILJ->fields)._OADOOFBKPEE_k__BackingField;
              if (LDAIPGBJEOG == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (0 < (LDAIPGBJEOG->fields)._size) {
                AMIINPEKKFB__NKGDNFCCFCD(IKKAMAMLIKA,LDAIPGBJEOG,(MethodInfo *)0x0);
              }
              AJMOIOIBPGP__HKILPHEEBJA
                        (__this,NLFMDIGKNGP,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                         &local_64,true,in_x5);
              AMIINPEKKFB__PFPPJAJFKDL((NCCFNKMICGK_o *)NLFMDIGKNGP,IKKAMAMLIKA,(MethodInfo *)0x0);
            }
          }
        }
        else {
          method_00 = (MethodInfo *)0x0;
          AJMOIOIBPGP__HKILPHEEBJA
                    (__this,NLFMDIGKNGP,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,&local_64
                     ,false,in_x5);
          AJMOIOIBPGP__HPNAOBPMDMP(__this,NLFMDIGKNGP,PLJKGEJHILJ,__this_02,method_00);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_03373894:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033738c8;
    }
  }
LAB_033738ac:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033738c8:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


// ===== public void MEMCFFLLBMA()  [RVA 0x3274988]
// AJMOIOIBPGP$$MEMCFFLLBMA @ RVA 0x3274988

void AJMOIOIBPGP__MEMCFFLLBMA(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_0456723b & 1) == 0) {
    FUN_01bab630(&StringLiteral_4312/*"CheckOffersStart"*/);
    DAT_0456723b = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4312/*"CheckOffersStart"*/,(MethodInfo *)0x0);
  AJMOIOIBPGP__LHJHOGGNAKC(__this,method_00);
  AJMOIOIBPGP__OAAFHCFBAHD(__this,method_01);
  return;
}


// ===== public IReadOnlyList<NCCFNKMICGK> HIEDGAOEGBO()  [RVA 0x327538C]
// AJMOIOIBPGP$$HIEDGAOEGBO @ RVA 0x327538C

System_Collections_Generic_IReadOnlyList_NCCFNKMICGK__o *
AJMOIOIBPGP__HIEDGAOEGBO(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_NCCFNKMICGK__o *)(__this->fields).KALGMNLLLNO;
}


// ===== private void BCLJHFNMAID(OPNMPAJKDMI NLFMDIGKNGP)  [RVA 0x3275394]
// AJMOIOIBPGP$$BCLJHFNMAID @ RVA 0x3275394

void AJMOIOIBPGP__BCLJHFNMAID(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Il2CppObject *arg2;
  ACHLOMELAJE_o *__this_00;
  int32_t iVar3;
  AJDHCLBLGMI_o *pAVar4;
  undefined1 local_24 [4];
  
  if ((DAT_0456723c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_5741/*"EndOffer"*/);
    FUN_01bab630(&StringLiteral_22405/*"{0}: {1}\n	ShowLastChance={2}"*/);
    DAT_0456723c = 1;
  }
  if ((NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) &&
     (pAVar4 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField, pAVar4 != (AJDHCLBLGMI_o *)0x0))
  {
    if ((pAVar4->fields).ICBBFDJOHHF == 3) {
                    /* try { // try from 033754b4 to 03475623 has its CatchHandler @ 033754b4
                       catch() { ... } // from try @ 033754b4 with catch @ 033754b4
                       catch() { ... } // from try @ 03375758 with catch @ 033754b4
                       catch() { ... } // from try @ 03375798 with catch @ 033754b4
                       catch() { ... } // from try @ 03375804 with catch @ 033754b4
                       catch() { ... } // from try @ 0337583c with catch @ 033754b4
                       catch() { ... } // from try @ 03375870 with catch @ 033754b4 */
      return;
    }
    pSVar2 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
    local_24[0] = OPNMPAJKDMI__OFGAMIMEOEH(NLFMDIGKNGP,(MethodInfo *)0x0);
    arg2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
    pSVar2 = System_String__Format
                       (StringLiteral_22405/*"{0}: {1}\n	ShowLastChance={2}"*/,StringLiteral_5741/*"EndOffer"*/,(Il2CppObject *)pSVar2,arg2,
                        (MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
    OPNMPAJKDMI__IGDDDCBHNOF(NLFMDIGKNGP,(MethodInfo *)0x0);
    pAVar4 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
    bVar1 = OPNMPAJKDMI__OFGAMIMEOEH(NLFMDIGKNGP,(MethodInfo *)0x0);
    if (pAVar4 != (AJDHCLBLGMI_o *)0x0) {
      iVar3 = 4;
      if (!bVar1) {
        iVar3 = 5;
      }
      (pAVar4->fields).ICBBFDJOHHF = iVar3;
      __this_00 = (__this->fields).OKNKKHGBECG;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KOOHANBJIIG(CFEFALDOEMD JNIBOOMFCEG)  [RVA 0x32754C8]
// AJMOIOIBPGP$$KOOHANBJIIG @ RVA 0x32754C8

void AJMOIOIBPGP__KOOHANBJIIG(AJMOIOIBPGP_o *__this,CFEFALDOEMD_o *JNIBOOMFCEG,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_Predicate_T__o *match;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *method_00;
  System_String_o *CJNPBEJHHLF;
  System_Collections_Generic_List_OPNMPAJKDMI__o *__this_00;
  
  if ((DAT_0456723d & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_GDKPEBEFKJJ_IACBKBLLJLG__);
    FUN_01bab630(&AJMOIOIBPGP_GDKPEBEFKJJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<OPNMPAJKDMI>_TypeInfo);
    DAT_0456723d = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJMOIOIBPGP_GDKPEBEFKJJ_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (JNIBOOMFCEG != (CFEFALDOEMD_o *)0x0) {
    CJNPBEJHHLF = (JNIBOOMFCEG->fields)._CIEBCKIBJHL_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar3 = (Il2CppClass *)NLPJLHOEAOE__FEHJLBEGAPO(CJNPBEJHHLF,(MethodInfo *)0x0);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar2 + 1;
      pIVar2->klass = pIVar3;
      thunk_FUN_01c20e04(pIVar2,pIVar3);
      if ((pIVar2->klass == (Il2CppClass *)0x0) ||
         (bVar1 = JOOGMNNBBHI__DFOPHIKFMHM((HOOAAGABMBL_o *)pIVar2->klass,(MethodInfo *)0x0), !bVar1
         )) {
        return;
      }
      __this_00 = (__this->fields).KALGMNLLLNO;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<OPNMPAJKDMI>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__;
        NLFMDIGKNGP = (OPNMPAJKDMI_o *)
                      System_Collections_Generic_List<object>__Find
                                ((System_Collections_Generic_List_object__o *)__this_00,match,
                                 (MethodInfo_26E5414 *)
                                 Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
        AJMOIOIBPGP__KOOHANBJIIG(__this,NLFMDIGKNGP,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool CDFDLPCIFCC()  [RVA 0x3275620]
// AJMOIOIBPGP$$CDFDLPCIFCC @ RVA 0x3275620

bool AJMOIOIBPGP__CDFDLPCIFCC(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  bool bVar1;
  LPAPAMPGDFN_o *__this_00;
  ACHLOMELAJE_o *pAVar2;
  
                    /* try { // try from 03375624 to 0347562b has its CatchHandler @ 03375828 */
  pAVar2 = (__this->fields).OKNKKHGBECG;
  if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar2->fields).LMCDOMHENMC, __this_00 != (LPAPAMPGDFN_o *)0x0)) {
    bVar1 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JIJEKDLMMKP()  [RVA 0x3275644]
// AJMOIOIBPGP$$JIJEKDLMMKP @ RVA 0x3275644

/* WARNING: Removing unreachable block (ram,0x03375998) */

void AJMOIOIBPGP__JIJEKDLMMKP(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Func_OPNMPAJKDMI__bool__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Collections_Generic_List_OPNMPAJKDMI__o *source;
  System_Func_OPNMPAJKDMI__bool__o *predicate;
  
                    /* try { // try from 03375644 to 0347564b has its CatchHandler @ 03375824 */
                    /* try { // try from 03375660 to 03475667 has its CatchHandler @ 03375784 */
  if ((DAT_0456723e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033756b0 to 034756bb has its CatchHandler @ 03375780 */
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_CBNFLDELCOP__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
                    /* try { // try from 033756cc to 034756d3 has its CatchHandler @ 0337577c */
    FUN_01bab630(&StringLiteral_4307/*"CheckItemsFromPurchasedOffers: user in tutorial! Skip..."*/);
    FUN_01bab630(&StringLiteral_4306/*"CheckItemsFromPurchasedOffers"*/);
    DAT_0456723e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033756e8 to 034756eb has its CatchHandler @ 03375760 */
  bVar2 = AJMOIOIBPGP__CDFDLPCIFCC(__this,method);
                    /* try { // try from 033756ec to 034756f3 has its CatchHandler @ 03375778 */
  if (bVar2) {
                    /* try { // try from 03375704 to 03475707 has its CatchHandler @ 03375768 */
                    /* try { // try from 03375708 to 03475713 has its CatchHandler @ 03375774 */
                    /* try { // try from 03375714 to 0347571b has its CatchHandler @ 03375770 */
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4307/*"CheckItemsFromPurchasedOffers: user in tutorial! Skip..."*/,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 0337572c to 0347572f has its CatchHandler @ 03375764 */
                    /* try { // try from 03375730 to 03475743 has its CatchHandler @ 0337576c */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4306/*"CheckItemsFromPurchasedOffers"*/,(MethodInfo *)0x0);
  source = (__this->fields).KALGMNLLLNO;
  if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03375750 to 03475757 has its CatchHandler @ 03375820 */
                    /* try { // try from 03375758 to 03475793 has its CatchHandler @ 033754b4 */
  predicate = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__26_0;
                    /* catch() { ... } // from try @ 033756e8 with catch @ 03375760 */
  if (predicate == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
                    /* catch() { ... } // from try @ 0337572c with catch @ 03375764 */
                    /* catch() { ... } // from try @ 03375704 with catch @ 03375768 */
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03375730 with catch @ 0337576c */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03375714 with catch @ 03375770 */
    }
                    /* catch() { ... } // from try @ 03375708 with catch @ 03375774 */
                    /* catch() { ... } // from try @ 033756ec with catch @ 03375778 */
                    /* catch() { ... } // from try @ 033756cc with catch @ 0337577c */
                    /* catch() { ... } // from try @ 033756b0 with catch @ 03375780 */
                    /* catch() { ... } // from try @ 03375660 with catch @ 03375784 */
    predicate = (System_Func_OPNMPAJKDMI__bool__o *)
                thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
                    /* try { // try from 03375794 to 03475797 has its CatchHandler @ 03375808 */
                    /* try { // try from 03375798 to 034757d7 has its CatchHandler @ 033754b4 */
    System_Func<object,_bool>___ctor();
    ppSVar3 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__26_0;
    *ppSVar3 = predicate;
    thunk_FUN_01c20e04(ppSVar3,predicate);
  }
  method_00 = Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__;
  pSVar4 = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      (MethodInfo_1EB190C *)Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
  if (pSVar4 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = pSVar4->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
                    /* try { // try from 033757d8 to 034757f3 has its CatchHandler @ 03375884 */
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 033757f4 to 034757fb has its CatchHandler @ 0337581c */
                    /* try { // try from 033757fc to 034757ff has its CatchHandler @ 03375818 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo) {
                    /* catch() { ... } // from try @ 033757f4 with catch @ 0337581c */
                    /* catch() { ... } // from try @ 03375750 with catch @ 03375820 */
                    /* catch() { ... } // from try @ 03375644 with catch @ 03375824 */
        pVVar5 = pSVar8->vtable + *piVar11;
        goto LAB_03375828;
      }
                    /* try { // try from 03375800 to 03475803 has its CatchHandler @ 03375814 */
      uVar10 = uVar10 - 1;
                    /* try { // try from 03375804 to 03475837 has its CatchHandler @ 033754b4 */
      piVar11 = piVar11 + 4;
                    /* catch() { ... } // from try @ 03375794 with catch @ 03375808 */
    } while (uVar10 != 0);
  }
  method_00 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 03375800 with catch @ 03375814 */
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
                    /* catch() { ... } // from try @ 033757fc with catch @ 03375818 */
LAB_03375828:
                    /* catch() { ... } // from try @ 03375624 with catch @ 03375828 */
  plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
                    /* try { // try from 03375838 to 0347583b has its CatchHandler @ 03375860 */
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 03375838 with catch @ 03375860 */
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 03375868 to 0347586f has its CatchHandler @ 03375884 */
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03375898;
        }
                    /* try { // try from 03375870 to 0347587b has its CatchHandler @ 033754b4 */
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 0337587c to 03475883 has its CatchHandler @ 03375884 */
    method_00 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 033757d8 with catch @ 03375884
                       catch() { ... } // from try @ 03375868 with catch @ 03375884
                       catch() { ... } // from try @ 0337587c with catch @ 03375884 */
    puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03375898:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OPNMPAJKDMI__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033758f4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method_00 = (MethodInfo *)0x0;
    puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_033758f4:
    NLFMDIGKNGP = (OPNMPAJKDMI_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    AJMOIOIBPGP__GGMPJNLIHHM(__this,NLFMDIGKNGP,method_00);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0337596c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0337596c:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}


// ===== private void OAAFHCFBAHD()  [RVA 0x3274D84]
// AJMOIOIBPGP$$OAAFHCFBAHD @ RVA 0x3274D84

/* WARNING: Removing unreachable block (ram,0x033752d0) */

void AJMOIOIBPGP__OAAFHCFBAHD(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Func_OPNMPAJKDMI__bool__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar4;
  System_Func_OPNMPAJKDMI__int__o **ppSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar9;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  System_Collections_Generic_List_OPNMPAJKDMI__o *pSVar15;
  OPNMPAJKDMI_o **ppOVar16;
  System_Func_OPNMPAJKDMI__bool__o *pSVar17;
  System_Func_TSource__TKey__o *keySelector;
  System_Func_OPNMPAJKDMI__int__o *keySelector_00;
  
  if ((DAT_0456723f & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<OPNMPAJKDMI>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<OPNMPAJKDMI,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ThenBy<OPNMPAJKDMI,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_int>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_DGHANLOIPMJ__);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_HFJGNMLABHB__);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_KHOKGFMMEBI__);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_PBNALJBCMMB__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
    DAT_0456723f = 1;
    method = extraout_x1;
  }
  pSVar15 = (__this->fields).KMBLPHNJINH;
  if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar17 = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_3;
  if (pSVar17 == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo,method);
    }
    pSVar17 = (System_Func_OPNMPAJKDMI__bool__o *)
              thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar3 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_3;
    *ppSVar3 = pSVar17;
    thunk_FUN_01c20e04(ppSVar3,pSVar17);
  }
  pMVar9 = Method_System_Linq_Enumerable_Any<OPNMPAJKDMI>__;
  bVar2 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar15,
                     (System_Func_TSource__bool__o *)pSVar17,
                     (MethodInfo_1E97778 *)Method_System_Linq_Enumerable_Any<OPNMPAJKDMI>__);
  if (!bVar2) {
    ppOVar16 = &(__this->fields).BAAIACCFAPH;
    if ((*ppOVar16 != (OPNMPAJKDMI_o *)0x0) &&
       (bVar2 = AJMOIOIBPGP__MGIGFDAFEMD(__this,*ppOVar16,pMVar9), bVar2)) {
      *ppOVar16 = (OPNMPAJKDMI_o *)0x0;
      thunk_FUN_01c20e04(ppOVar16,0);
      return;
    }
    pSVar15 = (__this->fields).KMBLPHNJINH;
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar17 = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_4;
    if (pSVar17 == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar17 = (System_Func_OPNMPAJKDMI__bool__o *)
                thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar3 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_4;
      *ppSVar3 = pSVar17;
      thunk_FUN_01c20e04(ppSVar3,pSVar17);
    }
    source = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar15,
                        (System_Func_TSource__bool__o *)pSVar17,
                        Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo);
    }
    keySelector = (System_Func_TSource__TKey__o *)AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_5
    ;
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo);
      }
      FUN_03f93648(AJMOIOIBPGP_<>c_TypeInfo->static_fields);
      return;
    }
    pSVar4 = System_Linq_Enumerable__OrderBy<object,_int>
                       (source,keySelector,Method_System_Linq_Enumerable_OrderBy<OPNMPAJKDMI,_int>__
                       );
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo);
    }
    keySelector_00 = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_6;
    if (keySelector_00 == (System_Func_OPNMPAJKDMI__int__o *)0x0) {
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo);
      }
      keySelector_00 =
           (System_Func_OPNMPAJKDMI__int__o *)
           thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_int>_TypeInfo);
      System_Func<object,_int>___ctor();
      ppSVar5 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_6;
      *ppSVar5 = keySelector_00;
      thunk_FUN_01c20e04(ppSVar5,keySelector_00);
    }
    pMVar9 = Method_System_Linq_Enumerable_ThenBy<OPNMPAJKDMI,_int>__;
    pSVar4 = System_Linq_Enumerable__ThenBy<object,_int>
                       (pSVar4,(System_Func_TSource__TKey__o *)keySelector_00,
                        (MethodInfo_1EAD878 *)
                        Method_System_Linq_Enumerable_ThenBy<OPNMPAJKDMI,_int>__);
    if (pSVar4 == (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = pSVar4->klass;
    uVar1._0_1_ = (pSVar10->_2).rank;
    uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo) {
          pVVar6 = pSVar10->vtable + *piVar13;
          goto LAB_03375160;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pMVar9 = (MethodInfo *)0x0;
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_03375160:
    plVar7 = (long *)(*pVVar6->methodPtr)(pSVar4,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033751d0;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      pMVar9 = (MethodInfo *)0x0;
      puVar8 = (undefined8 *)FUN_01b81914(plVar7);
LAB_033751d0:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) break;
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OPNMPAJKDMI__c **)(piVar14 + -2) ==
              System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0337522c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      pMVar9 = (MethodInfo *)0x0;
      puVar8 = (undefined8 *)FUN_01b81914(plVar7);
LAB_0337522c:
      NLFMDIGKNGP = (OPNMPAJKDMI_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      bVar2 = AJMOIOIBPGP__MGIGFDAFEMD(__this,NLFMDIGKNGP,pMVar9);
    } while (!bVar2);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033752a4;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033752a4:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
  }
  return;
}


// ===== public void HGMNGIOAAMC(NCCFNKMICGK CJNHFNHJHPE)  [RVA 0x3275C00]
// AJMOIOIBPGP$$HGMNGIOAAMC @ RVA 0x3275C00

void AJMOIOIBPGP__HGMNGIOAAMC(AJMOIOIBPGP_o *__this,NCCFNKMICGK_o *CJNHFNHJHPE,MethodInfo *method)

{
  byte bVar1;
  OPNMPAJKDMI_c *pOVar2;
  OPNMPAJKDMI_o *pOVar3;
  
  if ((DAT_04567240 & 1) == 0) {
    FUN_01bab630(&OPNMPAJKDMI_TypeInfo);
    DAT_04567240 = 1;
  }
  pOVar2 = OPNMPAJKDMI_TypeInfo;
  if (CJNHFNHJHPE == (NCCFNKMICGK_o *)0x0) {
    CJNHFNHJHPE = (NCCFNKMICGK_o *)0x0;
    (__this->fields).BAAIACCFAPH = (OPNMPAJKDMI_o *)0x0;
  }
  else {
    bVar1 = (OPNMPAJKDMI_TypeInfo->_2).naturalAligment;
    if ((CJNHFNHJHPE->klass->_2).naturalAligment < bVar1) {
      pOVar3 = (OPNMPAJKDMI_o *)0x0;
    }
    else {
      pOVar3 = (OPNMPAJKDMI_o *)CJNHFNHJHPE;
      if ((CJNHFNHJHPE->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)OPNMPAJKDMI_TypeInfo) {
        pOVar3 = (OPNMPAJKDMI_o *)0x0;
      }
    }
    (__this->fields).BAAIACCFAPH = pOVar3;
    if ((CJNHFNHJHPE->klass->_2).naturalAligment < bVar1) {
      CJNHFNHJHPE = (NCCFNKMICGK_o *)0x0;
    }
    else if ((CJNHFNHJHPE->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pOVar2) {
      CJNHFNHJHPE = (NCCFNKMICGK_o *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).BAAIACCFAPH,CJNHFNHJHPE);
  return;
}


// ===== private bool MGIGFDAFEMD(OPNMPAJKDMI NLFMDIGKNGP)  [RVA 0x3275A54]
// AJMOIOIBPGP$$MGIGFDAFEMD @ RVA 0x3275A54

bool AJMOIOIBPGP__MGIGFDAFEMD(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  ulong uVar3;
  int64_t iVar4;
  MethodInfo *method_00;
  PKHMIGFEJCL_o *OKBIKHHKOEN;
  
  if ((DAT_04567241 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567241 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  OKBIKHHKOEN = (pNVar2->fields).QuestParameters;
  uVar3 = (*(NLFMDIGKNGP->klass->vtable)._13_NLMHNIFKDOA.methodPtr)
                    (NLFMDIGKNGP,(NLFMDIGKNGP->klass->vtable)._13_NLMHNIFKDOA.method);
  if ((uVar3 & 1) == 0) {
    iVar4 = OPNMPAJKDMI__JLBCBOACCGB(NLFMDIGKNGP,(MethodInfo *)0x0);
    if (0 < iVar4) {
      iVar4 = OPNMPAJKDMI__JLBCBOACCGB(NLFMDIGKNGP,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b87 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM <= iVar4) {
        return false;
      }
    }
    iVar4 = OPNMPAJKDMI__JDAOELAKDPF(NLFMDIGKNGP,(MethodInfo *)0x0);
    if (0 < iVar4) {
      iVar4 = OPNMPAJKDMI__JDAOELAKDPF(NLFMDIGKNGP,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b87 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (iVar4 <= NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM) {
        return false;
      }
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = OPNMPAJKDMI__BNNIDPDMOIL(NLFMDIGKNGP,OKBIKHHKOEN,(MethodInfo *)0x0);
    if (bVar1) {
      AJMOIOIBPGP__JMDIHKNADLB(__this,NLFMDIGKNGP,method_00);
      return true;
    }
  }
  return false;
}


// ===== public NCCFNKMICGK IIADOIBAGNL()  [RVA 0x3275CBC]
// AJMOIOIBPGP$$IIADOIBAGNL @ RVA 0x3275CBC

NCCFNKMICGK_o * AJMOIOIBPGP__IIADOIBAGNL(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  return (NCCFNKMICGK_o *)(__this->fields).BAAIACCFAPH;
}


// ===== private void LHJHOGGNAKC()  [RVA 0x32749E4]
// AJMOIOIBPGP$$LHJHOGGNAKC @ RVA 0x32749E4

/* WARNING: Removing unreachable block (ram,0x03374cd4) */

void AJMOIOIBPGP__LHJHOGGNAKC(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Func_OPNMPAJKDMI__bool__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Collections_Generic_List_OPNMPAJKDMI__o *source;
  System_Func_OPNMPAJKDMI__bool__o *predicate;
  
                    /* try { // try from 03374a00 to 03474a07 has its CatchHandler @ 03374aec */
                    /* try { // try from 03374a08 to 03474a0b has its CatchHandler @ 03374ae4 */
  if ((DAT_04567242 & 1) == 0) {
                    /* try { // try from 03374a0c to 03474a0f has its CatchHandler @ 03374ae0 */
                    /* try { // try from 03374a10 to 03474a13 has its CatchHandler @ 03374adc */
                    /* try { // try from 03374a14 to 03474a17 has its CatchHandler @ 03374ad8 */
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
                    /* try { // try from 03374a18 to 03474a1b has its CatchHandler @ 03374ab4 */
                    /* try { // try from 03374a1c to 03474a1f has its CatchHandler @ 03374aac */
                    /* try { // try from 03374a20 to 03474a23 has its CatchHandler @ 03374aa4 */
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
                    /* try { // try from 03374a24 to 03474a27 has its CatchHandler @ 03374aa0 */
                    /* try { // try from 03374a28 to 03474a2b has its CatchHandler @ 03374a9c */
                    /* try { // try from 03374a2c to 03474a2f has its CatchHandler @ 03374a98 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03374a30 to 03474a33 has its CatchHandler @ 03374a84 */
                    /* try { // try from 03374a34 to 03474a37 has its CatchHandler @ 03374af8 */
                    /* try { // try from 03374a38 to 03474a3b has its CatchHandler @ 03374a60 */
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo);
                    /* try { // try from 03374a3c to 03474a3f has its CatchHandler @ 03374af8 */
                    /* try { // try from 03374a40 to 03474a43 has its CatchHandler @ 03374390 */
                    /* try { // try from 03374a44 to 03474a47 has its CatchHandler @ 03374a50 */
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo);
                    /* try { // try from 03374a48 to 03474b2f has its CatchHandler @ 03374390 */
                    /* catch() { ... } // from try @ 03374a44 with catch @ 03374a50 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* catch() { ... } // from try @ 033748e0 with catch @ 03374a54 */
                    /* catch() { ... } // from try @ 0337495c with catch @ 03374a58 */
                    /* catch() { ... } // from try @ 03374928 with catch @ 03374a5c */
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_KMBFMHNDIGE__);
                    /* catch() { ... } // from try @ 03374a38 with catch @ 03374a60 */
                    /* catch() { ... } // from try @ 033748c4 with catch @ 03374a64 */
                    /* catch() { ... } // from try @ 0337479c with catch @ 03374a68 */
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
                    /* catch() { ... } // from try @ 033747d0 with catch @ 03374a6c */
                    /* catch() { ... } // from try @ 03374868 with catch @ 03374a70 */
    DAT_04567242 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03374760 with catch @ 03374a74 */
                    /* catch() { ... } // from try @ 03374898 with catch @ 03374a78 */
  source = (__this->fields).FHPIEPONJFG;
                    /* catch() { ... } // from try @ 03374850 with catch @ 03374a7c */
                    /* catch() { ... } // from try @ 03374700 with catch @ 03374a80 */
  if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03374a30 with catch @ 03374a84 */
    thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo,method);
                    /* catch() { ... } // from try @ 03374830 with catch @ 03374a88 */
    method = extraout_x1_00;
  }
                    /* catch() { ... } // from try @ 03374768 with catch @ 03374a8c */
                    /* catch() { ... } // from try @ 03374748 with catch @ 03374a90 */
                    /* catch() { ... } // from try @ 03374828 with catch @ 03374a94 */
  predicate = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_2;
                    /* catch() { ... } // from try @ 03374a2c with catch @ 03374a98 */
                    /* catch() { ... } // from try @ 03374a28 with catch @ 03374a9c */
  if (predicate == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
                    /* catch() { ... } // from try @ 03374a24 with catch @ 03374aa0 */
                    /* catch() { ... } // from try @ 03374a20 with catch @ 03374aa4 */
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033747f0 with catch @ 03374aa8 */
      thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo,method);
                    /* catch() { ... } // from try @ 03374a1c with catch @ 03374aac */
    }
                    /* catch() { ... } // from try @ 033747e8 with catch @ 03374ab0 */
                    /* catch() { ... } // from try @ 03374a18 with catch @ 03374ab4 */
                    /* catch() { ... } // from try @ 03374784 with catch @ 03374ab8 */
                    /* catch() { ... } // from try @ 03374860 with catch @ 03374abc */
                    /* catch() { ... } // from try @ 03374888 with catch @ 03374ac0 */
                    /* catch() { ... } // from try @ 03374718 with catch @ 03374ac4 */
    predicate = (System_Func_OPNMPAJKDMI__bool__o *)
                thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 03374810 with catch @ 03374ac8 */
                    /* catch() { ... } // from try @ 03374684 with catch @ 03374acc */
                    /* catch() { ... } // from try @ 033746b8 with catch @ 03374ad0 */
                    /* catch() { ... } // from try @ 0337466c with catch @ 03374ad4 */
                    /* catch() { ... } // from try @ 03374a14 with catch @ 03374ad8 */
                    /* catch() { ... } // from try @ 03374a10 with catch @ 03374adc */
                    /* catch() { ... } // from try @ 03374a0c with catch @ 03374ae0 */
    System_Func<object,_bool>___ctor();
                    /* catch() { ... } // from try @ 03374a08 with catch @ 03374ae4 */
                    /* catch() { ... } // from try @ 033746d0 with catch @ 03374ae8 */
                    /* catch() { ... } // from try @ 03374a00 with catch @ 03374aec */
    ppSVar2 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_2;
                    /* catch() { ... } // from try @ 033745d8 with catch @ 03374af0 */
    *ppSVar2 = predicate;
                    /* catch() { ... } // from try @ 0337457c with catch @ 03374af4 */
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
                    /* catch() { ... } // from try @ 03374a34 with catch @ 03374af8
                       catch() { ... } // from try @ 03374a3c with catch @ 03374af8 */
  method_00 = Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__;
                    /* catch() { ... } // from try @ 033748a0 with catch @ 03374afc */
                    /* catch() { ... } // from try @ 033747a4 with catch @ 03374b00 */
                    /* catch() { ... } // from try @ 0337468c with catch @ 03374b04 */
  pSVar3 = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      (MethodInfo_1EB190C *)Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
                    /* catch() { ... } // from try @ 033746d8 with catch @ 03374b08 */
  if (pSVar3 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03374720 with catch @ 03374b0c */
                    /* catch() { ... } // from try @ 0337464c with catch @ 03374b10 */
  pSVar7 = pSVar3->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03374b30 to 03474b33 has its CatchHandler @ 03374b40 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo) {
        pVVar4 = pSVar7->vtable + *piVar10;
        goto LAB_03374b64;
      }
      uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 03374b30 with catch @ 03374b40 */
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  method_00 = (MethodInfo *)0x0;
                    /* try { // try from 03374b50 to 03474bbf has its CatchHandler @ 03374bd4 */
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3);
LAB_03374b64:
  plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 03374b50 with catch @ 03374bd4
                       catch() { ... } // from try @ 03374bcc with catch @ 03374bd4 */
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03374bdc;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 03374bc0 to 03474bcb has its CatchHandler @ 03374390 */
    method_00 = (MethodInfo *)0x0;
    puVar6 = (undefined8 *)FUN_01b81914(plVar5);
                    /* try { // try from 03374bcc to 03474bd3 has its CatchHandler @ 03374bd4 */
LAB_03374bdc:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OPNMPAJKDMI__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03374c38;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    method_00 = (MethodInfo *)0x0;
    puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_03374c38:
    NLFMDIGKNGP = (OPNMPAJKDMI_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    AJMOIOIBPGP__MGIGFDAFEMD(__this,NLFMDIGKNGP,method_00);
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03374ca8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03374ca8:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


// ===== public void CJJPGMCEFIN(DGGBFKNKEAH PDKOFIOIOFD)  [RVA 0x3275CC4]
// AJMOIOIBPGP$$CJJPGMCEFIN @ RVA 0x3275CC4

void AJMOIOIBPGP__CJJPGMCEFIN(AJMOIOIBPGP_o *__this,DGGBFKNKEAH_o *PDKOFIOIOFD,MethodInfo *method)

{
  System_IObservable_CFEFALDOEMD__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  DGGBFKNKEAH_o **ppDVar1;
  
  if ((DAT_04567243 & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_KOOHANBJIIG__);
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
    FUN_01bab630(&StringLiteral_7539/*"InitializeStore: _store is null!"*/);
    DAT_04567243 = 1;
  }
  ppDVar1 = &(__this->fields).FHCHDOILFGE;
  if (*ppDVar1 != (DGGBFKNKEAH_o *)0x0) {
    return;
  }
  *ppDVar1 = PDKOFIOIOFD;
  thunk_FUN_01c20e04(ppDVar1,PDKOFIOIOFD);
  if (*ppDVar1 != (DGGBFKNKEAH_o *)0x0) {
    source = LKHEKMAGHDH__MBNHFJCHHAH(PDKOFIOIOFD,(MethodInfo *)0x0);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
    System_Action<object>___ctor();
    disposable = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<object>
                           ((System_IObservable_T__o *)source,onNext,
                            Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
    UniRx_DisposableExtensions__AddTo<object>
              (disposable,
               (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE
               ,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_7539/*"InitializeStore: _store is null!"*/,(MethodInfo *)0x0);
  return;
}


// ===== public bool HFHBIDELOIC(string CBIADCOKAIP)  [RVA 0x3275DE8]
// AJMOIOIBPGP$$HFHBIDELOIC @ RVA 0x3275DE8

bool AJMOIOIBPGP__HFHBIDELOIC(AJMOIOIBPGP_o *__this,System_String_o *CBIADCOKAIP,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  System_Collections_Generic_List_OPNMPAJKDMI__o *__this_00;
  
  if ((DAT_04567244 & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_EBBIKOIIJGN_DCPNIIHGIAK__);
    FUN_01bab630(&AJMOIOIBPGP_EBBIKOIIJGN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
    FUN_01bab630(&System_Predicate<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    FUN_01bab630(&StringLiteral_3625/*"BuyOffer: can't find offer by name '"*/);
    DAT_04567244 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJMOIOIBPGP_EBBIKOIIJGN_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)CBIADCOKAIP;
    thunk_FUN_01c20e04(pIVar2,CBIADCOKAIP);
    __this_00 = (__this->fields).KALGMNLLLNO;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<OPNMPAJKDMI>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__;
      NLFMDIGKNGP = (OPNMPAJKDMI_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_00,match,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
      if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
        bVar1 = AJMOIOIBPGP__HFHBIDELOIC(__this,NLFMDIGKNGP,method_00);
        return bVar1;
      }
      JLNPKGGFFDD = System_String__Concat
                              (StringLiteral_3625/*"BuyOffer: can't find offer by name '"*/,(System_String_o *)pIVar2->klass,StringLiteral_853/*"'!"*/
                               ,(MethodInfo *)0x0);
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GALNCDEFJMG()  [RVA 0x32760D0]
// AJMOIOIBPGP$$GALNCDEFJMG @ RVA 0x32760D0

/* WARNING: Removing unreachable block (ram,0x03376424) */

void AJMOIOIBPGP__GALNCDEFJMG(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Func_OPNMPAJKDMI__bool__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Collections_Generic_List_OPNMPAJKDMI__o *source;
  System_Func_OPNMPAJKDMI__bool__o *predicate;
  
  if ((DAT_04567245 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_ECOAJGJAGNO__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_4309/*"CheckItemsPerksFromPurchasedOffers"*/);
    FUN_01bab630(&StringLiteral_4310/*"CheckItemsPerksFromPurchasedOffers: user in tutorial! Skip..."*/);
    DAT_04567245 = 1;
    method = extraout_x1;
  }
  bVar2 = AJMOIOIBPGP__CDFDLPCIFCC(__this,method);
  if (bVar2) {
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4310/*"CheckItemsPerksFromPurchasedOffers: user in tutorial! Skip..."*/,(MethodInfo *)0x0);
    return;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4309/*"CheckItemsPerksFromPurchasedOffers"*/,(MethodInfo *)0x0);
  source = (__this->fields).KALGMNLLLNO;
  if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  predicate = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__27_0;
  if (predicate == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    predicate = (System_Func_OPNMPAJKDMI__bool__o *)
                thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar3 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__27_0;
    *ppSVar3 = predicate;
    thunk_FUN_01c20e04(ppSVar3,predicate);
  }
  method_00 = Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__;
  pSVar4 = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      (MethodInfo_1EB190C *)Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
  if (pSVar4 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = pSVar4->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo) {
        pVVar5 = pSVar8->vtable + *piVar11;
        goto LAB_033762b4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  method_00 = (MethodInfo *)0x0;
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_033762b4:
  plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03376324;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method_00 = (MethodInfo *)0x0;
    puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03376324:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OPNMPAJKDMI__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03376380;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method_00 = (MethodInfo *)0x0;
    puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03376380:
    NLFMDIGKNGP = (OPNMPAJKDMI_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    AJMOIOIBPGP__DKMEDEFELOD(__this,NLFMDIGKNGP,method_00);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033763f8;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_033763f8:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}


// ===== public void .ctor()  [RVA 0x32764E0]
// AJMOIOIBPGP$$.ctor @ RVA 0x32764E0

void AJMOIOIBPGP___ctor(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  System_Collections_Generic_List_OPNMPAJKDMI__o *pSVar2;
  System_Collections_Generic_List_OPNMPAJKDMI__o **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567246 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OPNMPAJKDMI>_TypeInfo);
    DAT_04567246 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  pSVar2 = (System_Collections_Generic_List_OPNMPAJKDMI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OPNMPAJKDMI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<OPNMPAJKDMI>__ctor__);
  ppSVar3 = &(__this->fields).FHPIEPONJFG;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar2 = (System_Collections_Generic_List_OPNMPAJKDMI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OPNMPAJKDMI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<OPNMPAJKDMI>__ctor__);
  ppSVar3 = &(__this->fields).KMBLPHNJINH;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar2 = (System_Collections_Generic_List_OPNMPAJKDMI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OPNMPAJKDMI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<OPNMPAJKDMI>__ctor__);
  ppSVar3 = &(__this->fields).KALGMNLLLNO;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void POHILILPKNG(Action<string> JLPMKKKMANE)  [RVA 0x32765E8]
// AJMOIOIBPGP$$POHILILPKNG @ RVA 0x32765E8

void AJMOIOIBPGP__POHILILPKNG
               (AJMOIOIBPGP_o *__this,System_Action_string__o *JLPMKKKMANE,MethodInfo *method)

{
  LAMJOHEKJNJ_o *__this_00;
  ACHLOMELAJE_o *pAVar1;
  
  pAVar1 = (__this->fields).OKNKKHGBECG;
  if ((pAVar1 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar1->fields)._DDGPMHMNKNA_k__BackingField, __this_00 != (LAMJOHEKJNJ_o *)0x0))
  {
    LAMJOHEKJNJ__DHNDFPNHOLD(__this_00,JLPMKKKMANE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Dispose()  [RVA 0x327660C]
// AJMOIOIBPGP$$Dispose @ RVA 0x327660C

void AJMOIOIBPGP__Dispose(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UniRx_CompositeDisposable_o *__this_00;
  OPGMEHFEJJJ_o **ppOVar2;
  DOPEEDABNEK_o **ppDVar3;
  ACHLOMELAJE_o **ppAVar4;
  NCNJEIBHGBH_o **ppNVar5;
  System_Collections_Generic_List_OPNMPAJKDMI__o *pSVar6;
  DGGBFKNKEAH_o **ppDVar7;
  
  if ((DAT_04567247 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Clear__);
    DAT_04567247 = 1;
  }
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).FHPIEPONJFG;
    if (pSVar6 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
      iVar1 = (pSVar6->fields)._size;
      (pSVar6->fields)._size = 0;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar6 = (__this->fields).KMBLPHNJINH;
      if (pSVar6 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
        iVar1 = (pSVar6->fields)._size;
        (pSVar6->fields)._size = 0;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar6 = (__this->fields).KALGMNLLLNO;
        if (pSVar6 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
          iVar1 = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          ppOVar2 = &(__this->fields).PJAKDICKNKA;
          *ppOVar2 = (OPGMEHFEJJJ_o *)0x0;
          thunk_FUN_01c20e04(ppOVar2,0);
          ppDVar3 = &(__this->fields).DPOPJKJLDEE;
          *ppDVar3 = (DOPEEDABNEK_o *)0x0;
          thunk_FUN_01c20e04(ppDVar3,0);
          ppAVar4 = &(__this->fields).OKNKKHGBECG;
          *ppAVar4 = (ACHLOMELAJE_o *)0x0;
          thunk_FUN_01c20e04(ppAVar4,0);
          ppNVar5 = &(__this->fields).KMGFNKKPGIH;
          *ppNVar5 = (NCNJEIBHGBH_o *)0x0;
          thunk_FUN_01c20e04(ppNVar5,0);
          ppDVar7 = &(__this->fields).FHCHDOILFGE;
          *ppDVar7 = (DGGBFKNKEAH_o *)0x0;
          thunk_FUN_01c20e04(ppDVar7,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool HPNAOBPMDMP(OPNMPAJKDMI NLFMDIGKNGP, POGBKGFBOLC PLJKGEJHILJ, IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x32743E0]
// AJMOIOIBPGP$$HPNAOBPMDMP @ RVA 0x32743E0

bool AJMOIOIBPGP__HPNAOBPMDMP
               (AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,POGBKGFBOLC_o *PLJKGEJHILJ,
               IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  System_String_array *values;
  System_Func_HEFOANCOHDC__string__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar2;
  System_String_o *pSVar3;
  System_Func_PKKLIJLIKGF__string__o **ppSVar4;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar5;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar6;
  undefined8 *puVar7;
  bool bVar8;
  System_Func_HEFOANCOHDC__string__o *selector;
  System_Func_PKKLIJLIKGF__string__o *selector_00;
  
  if ((DAT_04567248 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<HEFOANCOHDC,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<PKKLIJLIKGF,_string>__);
    FUN_01bab630(&System_Func<HEFOANCOHDC,_string>_TypeInfo);
    FUN_01bab630(&System_Func<PKKLIJLIKGF,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_MFKFCHNOEMM__);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_PGFJPEICPMP__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_816/*"' from user profile already have some enchantments '"*/);
    FUN_01bab630(&StringLiteral_13949/*"TryRestoreItemsPerksFromOfferItem: item with name '"*/);
    FUN_01bab630(&StringLiteral_822/*"' in offer '"*/);
    FUN_01bab630(&StringLiteral_819/*"' have no enchantments! Skip..."*/);
    FUN_01bab630(&StringLiteral_1155/*", "*/);
    FUN_01bab630(&StringLiteral_844/*"' successfully restored enchantments '"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    FUN_01bab630(&StringLiteral_855/*"'! Skip..."*/);
    DAT_04567248 = 1;
  }
  if ((PLJKGEJHILJ == (POGBKGFBOLC_o *)0x0) ||
     (pSVar5 = (PLJKGEJHILJ->fields)._OADOOFBKPEE_k__BackingField,
     pSVar5 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
LAB_03374984:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar5->fields)._size == 0) {
                    /* try { // try from 0337468c to 034746ab has its CatchHandler @ 03374b04 */
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    if (values == (System_String_array *)0x0) goto LAB_03374984;
    if ((int)values->max_length == 0) {
LAB_03374980:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 033746b8 to 034746bf has its CatchHandler @ 03374ad0 */
    values->m_Items[0] = StringLiteral_13949/*"TryRestoreItemsPerksFromOfferItem: item with name '"*/;
    thunk_FUN_01c20e04(values->m_Items);
                    /* try { // try from 033746d0 to 034746d7 has its CatchHandler @ 03374ae8 */
    if ((uint)values->max_length < 2) goto LAB_03374980;
                    /* try { // try from 033746d8 to 034746f3 has its CatchHandler @ 03374b08 */
    values->m_Items[1] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto LAB_03374980;
                    /* try { // try from 03374700 to 03474707 has its CatchHandler @ 03374a80 */
    values->m_Items[2] = StringLiteral_822/*"' in offer '"*/;
    thunk_FUN_01c20e04();
    if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) goto LAB_03374984;
                    /* try { // try from 03374718 to 0347471f has its CatchHandler @ 03374ac4 */
    pSVar3 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
                    /* try { // try from 03374720 to 0347473b has its CatchHandler @ 03374b0c */
    if ((uint)values->max_length < 4) goto LAB_03374980;
    values->m_Items[3] = pSVar3;
    thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
                    /* try { // try from 03374748 to 0347474f has its CatchHandler @ 03374a90 */
    if ((uint)values->max_length < 5) goto LAB_03374980;
    puVar7 = &StringLiteral_819/*"' have no enchantments! Skip..."*/;
  }
  else {
    if ((ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) ||
       (pSVar6 = (ENHJPOHLMCL->fields).PAPANCDPPIF,
       pSVar6 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_03374984;
    if ((pSVar6->fields)._size < 1) {
                    /* try { // try from 03374768 to 03474773 has its CatchHandler @ 03374a8c */
      AMIINPEKKFB__NKGDNFCCFCD
                ((PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03374784 to 0347478b has its CatchHandler @ 03374ab8 */
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
      if (values == (System_String_array *)0x0) goto LAB_03374984;
      if ((int)values->max_length == 0) goto LAB_03374980;
                    /* try { // try from 0337479c to 034747a3 has its CatchHandler @ 03374a68 */
                    /* try { // try from 033747a4 to 034747c3 has its CatchHandler @ 03374b00 */
      values->m_Items[0] = StringLiteral_13949/*"TryRestoreItemsPerksFromOfferItem: item with name '"*/;
      thunk_FUN_01c20e04(values->m_Items);
      if ((uint)values->max_length < 2) goto LAB_03374980;
      values->m_Items[1] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
                    /* try { // try from 033747d0 to 034747d7 has its CatchHandler @ 03374a6c */
      thunk_FUN_01c20e04(values->m_Items + 1);
      if ((uint)values->max_length < 3) goto LAB_03374980;
                    /* try { // try from 033747e8 to 034747ef has its CatchHandler @ 03374ab0 */
                    /* try { // try from 033747f0 to 034747fb has its CatchHandler @ 03374aa8 */
      values->m_Items[2] = StringLiteral_822/*"' in offer '"*/;
      thunk_FUN_01c20e04();
      if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) goto LAB_03374984;
      pSVar3 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
                    /* try { // try from 03374810 to 03474817 has its CatchHandler @ 03374ac8 */
      if ((uint)values->max_length < 4) goto LAB_03374980;
      values->m_Items[3] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
                    /* try { // try from 03374828 to 0347482f has its CatchHandler @ 03374a94 */
                    /* try { // try from 03374830 to 0347483b has its CatchHandler @ 03374a88 */
      if ((uint)values->max_length < 5) goto LAB_03374980;
      values->m_Items[4] = StringLiteral_844/*"' successfully restored enchantments '"*/;
      thunk_FUN_01c20e04();
                    /* try { // try from 03374850 to 03474857 has its CatchHandler @ 03374a7c */
      pSVar5 = (PLJKGEJHILJ->fields)._OADOOFBKPEE_k__BackingField;
                    /* try { // try from 03374860 to 03474867 has its CatchHandler @ 03374abc */
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 03374868 to 03474873 has its CatchHandler @ 03374a70 */
      }
      pSVar3 = StringLiteral_1155/*", "*/;
      selector_00 = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__39_1;
      if (selector_00 == (System_Func_PKKLIJLIKGF__string__o *)0x0) {
                    /* try { // try from 03374888 to 0347488f has its CatchHandler @ 03374ac0 */
        if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03374898 to 0347489f has its CatchHandler @ 03374a78 */
                    /* try { // try from 033748a0 to 034748bb has its CatchHandler @ 03374afc */
        selector_00 = (System_Func_PKKLIJLIKGF__string__o *)
                      thunk_FUN_01bda818(System_Func<PKKLIJLIKGF,_string>_TypeInfo);
                    /* try { // try from 033748c4 to 034748cb has its CatchHandler @ 03374a64 */
        System_Func<object,_object>___ctor();
        ppSVar4 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__39_1;
        *ppSVar4 = selector_00;
        thunk_FUN_01c20e04(ppSVar4,selector_00);
      }
                    /* try { // try from 033748e0 to 034748e7 has its CatchHandler @ 03374a54 */
      pSVar2 = System_Linq_Enumerable__Select<object,_object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                          (System_Func_TSource__TResult__o *)selector_00,
                          Method_System_Linq_Enumerable_Select<PKKLIJLIKGF,_string>__);
      pSVar3 = System_String__Join(pSVar3,(System_Collections_Generic_IEnumerable_string__o *)pSVar2
                                   ,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto LAB_03374980;
      values->m_Items[5] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 5,pSVar3);
                    /* try { // try from 03374928 to 0347494b has its CatchHandler @ 03374a5c */
      if ((uint)values->max_length < 7) goto LAB_03374980;
      bVar8 = true;
      values->m_Items[6] = StringLiteral_853/*"'!"*/;
      goto LAB_03374948;
    }
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    if (values == (System_String_array *)0x0) goto LAB_03374984;
    if ((int)values->max_length == 0) goto LAB_03374980;
    values->m_Items[0] = StringLiteral_13949/*"TryRestoreItemsPerksFromOfferItem: item with name '"*/;
    thunk_FUN_01c20e04(values->m_Items);
    if ((uint)values->max_length < 2) goto LAB_03374980;
    values->m_Items[1] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(values->m_Items + 1);
                    /* try { // try from 0337457c to 034745a3 has its CatchHandler @ 03374af4 */
    if ((uint)values->max_length < 3) goto LAB_03374980;
    values->m_Items[2] = StringLiteral_816/*"' from user profile already have some enchantments '"*/;
    thunk_FUN_01c20e04();
    pSVar6 = (ENHJPOHLMCL->fields).PAPANCDPPIF;
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = StringLiteral_1155/*", "*/;
    selector = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__39_0;
    if (selector == (System_Func_HEFOANCOHDC__string__o *)0x0) {
                    /* try { // try from 033745d8 to 03474603 has its CatchHandler @ 03374af0 */
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      selector = (System_Func_HEFOANCOHDC__string__o *)
                 thunk_FUN_01bda818(System_Func<HEFOANCOHDC,_string>_TypeInfo);
      System_Func<object,_object>___ctor();
      ppSVar1 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__39_0;
      *ppSVar1 = selector;
      thunk_FUN_01c20e04(ppSVar1,selector);
    }
    pSVar2 = System_Linq_Enumerable__Select<object,_object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                        (System_Func_TSource__TResult__o *)selector,
                        Method_System_Linq_Enumerable_Select<HEFOANCOHDC,_string>__);
                    /* try { // try from 0337464c to 0347465b has its CatchHandler @ 03374b10 */
    pSVar3 = System_String__Join(pSVar3,(System_Collections_Generic_IEnumerable_string__o *)pSVar2,
                                 (MethodInfo *)0x0);
    if ((uint)values->max_length < 4) goto LAB_03374980;
    values->m_Items[3] = pSVar3;
                    /* try { // try from 0337466c to 03474673 has its CatchHandler @ 03374ad4 */
    thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
    if ((uint)values->max_length < 5) goto LAB_03374980;
                    /* try { // try from 03374684 to 0347468b has its CatchHandler @ 03374acc */
    puVar7 = &StringLiteral_855/*"'! Skip..."*/;
  }
  bVar8 = false;
                    /* try { // try from 03374760 to 03474767 has its CatchHandler @ 03374a74 */
  values->m_Items[4] = (System_String_o *)*puVar7;
LAB_03374948:
  thunk_FUN_01c20e04();
  pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 0337495c to 03474963 has its CatchHandler @ 03374a58 */
                    /* try { // try from 03374964 to 034749ff has its CatchHandler @ 03374390 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
  return bVar8;
}


// ===== private bool HFHBIDELOIC(OPNMPAJKDMI NLFMDIGKNGP)  [RVA 0x3275F54]
// AJMOIOIBPGP$$HFHBIDELOIC @ RVA 0x3275F54

bool AJMOIOIBPGP__HFHBIDELOIC(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  System_Nullable_ObscuredLong__Fields local_a0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_04567249 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_3623/*"BuyOffer: "*/);
    FUN_01bab630(&StringLiteral_3624/*"BuyOffer: PaymentUI is not exists on current scene!"*/);
    DAT_04567249 = 1;
  }
  if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
    pSVar2 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(StringLiteral_3623/*"BuyOffer: "*/,pSVar2,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (Nekki_SF2_GUI_Common_PaymentUI_o *)
                Nekki_SF2_GUI_UIModule__GetModule<object>
                          (Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_3624/*"BuyOffer: PaymentUI is not exists on current scene!"*/,(MethodInfo *)0x0);
    }
    else {
      local_50 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (__this_00 == (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) goto LAB_033760cc;
      local_a0.value.fields.currentCryptoKey = 0;
      local_a0.hasValue = false;
      local_a0._1_7_ = 0;
      local_a0.value.fields.fakeValue = 0;
      local_a0.value.fields.hiddenValue = 0;
      local_a0.value.fields.fakeValueActive = false;
      local_a0.value.fields.inited = false;
      local_a0.value.fields._26_6_ = 0;
      Nekki_SF2_GUI_Common_PaymentUI__MakePurchase
                (__this_00,(NLFMDIGKNGP->fields)._BODPEKDENEG_k__BackingField,
                 (System_Nullable_ObscuredLong__o *)&local_a0,(MethodInfo *)0x0);
    }
    return (bool)(~bVar1 & 1);
  }
LAB_033760cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DKPJKIDCHKE(string DGMHNKGDAIL)  [RVA 0x3276728]
// AJMOIOIBPGP$$DKPJKIDCHKE @ RVA 0x3276728

void AJMOIOIBPGP__DKPJKIDCHKE(AJMOIOIBPGP_o *__this,System_String_o *DGMHNKGDAIL,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  System_Collections_Generic_List_OPNMPAJKDMI__o *__this_00;
  
  if ((DAT_0456724a & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_CMFHDJEKJOD_BAOHMIBMIDG__);
    FUN_01bab630(&AJMOIOIBPGP_CMFHDJEKJOD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
    FUN_01bab630(&System_Predicate<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&StringLiteral_9804/*"OfferTimer_"*/);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_4311/*"CheckOfferEnd: can't find offer by timerName '"*/);
    DAT_0456724a = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJMOIOIBPGP_CMFHDJEKJOD_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)DGMHNKGDAIL;
    thunk_FUN_01c20e04(pIVar2,DGMHNKGDAIL);
    if (pIVar2->klass != (Il2CppClass *)0x0) {
      bVar1 = System_String__StartsWith
                        ((System_String_o *)pIVar2->klass,StringLiteral_9804/*"OfferTimer_"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      __this_00 = (__this->fields).KALGMNLLLNO;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<OPNMPAJKDMI>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__;
        NLFMDIGKNGP = (OPNMPAJKDMI_o *)
                      System_Collections_Generic_List<object>__Find
                                ((System_Collections_Generic_List_object__o *)__this_00,match,
                                 (MethodInfo_26E5414 *)
                                 Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
        if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
          AJMOIOIBPGP__BCLJHFNMAID(__this,NLFMDIGKNGP,method_00);
          return;
        }
        JLNPKGGFFDD = System_String__Concat
                                (StringLiteral_4311/*"CheckOfferEnd: can't find offer by timerName '"*/,(System_String_o *)pIVar2->klass,
                                 StringLiteral_802/*"'"*/,(MethodInfo *)0x0);
        KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CPPMCNNDKHA()  [RVA 0x3272908]
// AJMOIOIBPGP$$CPPMCNNDKHA @ RVA 0x3272908

/* WARNING: Removing unreachable block (ram,0x03372e40) */
/* WARNING: Removing unreachable block (ram,0x03372ec8) */

void AJMOIOIBPGP__CPPMCNNDKHA(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ACHLOMELAJE_o *BHENDAGDGME;
  NCNJEIBHGBH_o *LDPDIEKENKC;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  OPGMEHFEJJJ_o *__this_00;
  System_Func_HOOAAGABMBL__bool__o **ppSVar4;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  OPNMPAJKDMI_o *item;
  System_Collections_Generic_List_OPNMPAJKDMI__o *pSVar9;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  DOPEEDABNEK_o *pDVar10;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar11;
  long lVar12;
  OPNMPAJKDMI_array *pOVar13;
  ulong uVar14;
  int32_t *piVar15;
  int *piVar16;
  System_Collections_Generic_List_HOOAAGABMBL__o *source;
  OPGMEHFEJJJ_o **ppOVar17;
  System_Func_HOOAAGABMBL__bool__o *predicate;
  
  if ((DAT_0456724b & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_get_Count__);
    FUN_01bab630(&OPGMEHFEJJJ_TypeInfo);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_HMAIFPHKPGF__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_854/*"'! Please check that SubType is correct."*/);
    FUN_01bab630(&StringLiteral_4872/*"CreateOffers: _offersDaily is empty!"*/);
    FUN_01bab630(&StringLiteral_4873/*"CreateOffers: can't create offer for item '"*/);
    DAT_0456724b = 1;
    method = extraout_x1;
  }
  ppOVar17 = &(__this->fields).PJAKDICKNKA;
  if (*ppOVar17 == (OPGMEHFEJJJ_o *)0x0) {
    BHENDAGDGME = (__this->fields).OKNKKHGBECG;
    LDPDIEKENKC = (__this->fields).KMGFNKKPGIH;
    __this_00 = (OPGMEHFEJJJ_o *)thunk_FUN_01bda818(OPGMEHFEJJJ_TypeInfo,method);
    OPGMEHFEJJJ___ctor(__this_00,BHENDAGDGME,LDPDIEKENKC,(MethodInfo *)0x0);
    (__this->fields).PJAKDICKNKA = __this_00;
    thunk_FUN_01c20e04(ppOVar17,__this_00);
    method = extraout_x1_00;
  }
  pDVar10 = (__this->fields).DPOPJKJLDEE;
  if (pDVar10 != (DOPEEDABNEK_o *)0x0) {
    source = (pDVar10->fields).JHGBLBKPIBK;
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    predicate = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__28_0;
    if (predicate == (System_Func_HOOAAGABMBL__bool__o *)0x0) {
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_02;
      }
      predicate = (System_Func_HOOAAGABMBL__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo,method);
      System_Func<object,_bool>___ctor();
      ppSVar4 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__28_0;
      *ppSVar4 = predicate;
      thunk_FUN_01c20e04(ppSVar4,predicate);
    }
    pSVar5 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    if (pSVar5 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      pSVar11 = pSVar5->klass;
      uVar1._0_1_ = (pSVar11->_2).rank;
      uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar14 = (ulong)uVar1;
      if (uVar14 != 0) {
        piVar15 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo) {
            pVVar6 = pSVar11->vtable + *piVar15;
            goto LAB_03372b24;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo,0);
LAB_03372b24:
      plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03372bb4;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03372bb4:
        uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03372e34;
          lVar12 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_03372e0c;
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03372df4;
        }
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_HOOAAGABMBL__c **)(piVar16 + -2) ==
                System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03372c10;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo,0)
        ;
LAB_03372c10:
        IKKAMAMLIKA = (HOOAAGABMBL_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (*ppOVar17 == (OPGMEHFEJJJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = OPGMEHFEJJJ__IDCNCEELNDB(*ppOVar17,IKKAMAMLIKA,(MethodInfo *)0x0);
        if (item == (OPNMPAJKDMI_o *)0x0) {
          if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          JLNPKGGFFDD = System_String__Concat
                                  (StringLiteral_4873/*"CreateOffers: can't create offer for item '"*/,
                                   (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                                   StringLiteral_854/*"'! Please check that SubType is correct."*/,(MethodInfo *)0x0);
          KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        }
        else {
          iVar3 = (*(item->klass->vtable)._14_NHGGBEACKBD.methodPtr)
                            (item,(item->klass->vtable)._14_NHGGBEACKBD.method);
          lVar12 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Add__;
          if (iVar3 == 0) {
            pSVar9 = (__this->fields).FHPIEPONJFG;
            if (pSVar9 == (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pOVar13 = (pSVar9->fields)._items;
            (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
            if (pOVar13 == (OPNMPAJKDMI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar9->fields)._size;
            if (uVar2 < (uint)pOVar13->max_length) {
              (pSVar9->fields)._size = uVar2 + 1;
              pOVar13->m_Items[(int)uVar2] = item;
              thunk_FUN_01c20e04(pOVar13->m_Items + (int)uVar2,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
          else {
            iVar3 = (*(item->klass->vtable)._14_NHGGBEACKBD.methodPtr)
                              (item,(item->klass->vtable)._14_NHGGBEACKBD.method);
            lVar12 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Add__;
            if (iVar3 == 1) {
              pSVar9 = (__this->fields).KMBLPHNJINH;
              if (pSVar9 == (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pOVar13 = (pSVar9->fields)._items;
              (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
              if (pOVar13 == (OPNMPAJKDMI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar9->fields)._size;
              if (uVar2 < (uint)pOVar13->max_length) {
                (pSVar9->fields)._size = uVar2 + 1;
                pOVar13->m_Items[(int)uVar2] = item;
                thunk_FUN_01c20e04(pOVar13->m_Items + (int)uVar2,item);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          lVar12 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Add__;
          pSVar9 = (__this->fields).KALGMNLLLNO;
          if (pSVar9 == (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar13 = (pSVar9->fields)._items;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (pOVar13 == (OPNMPAJKDMI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pOVar13->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pOVar13->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pOVar13->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
  goto LAB_03372ec0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_03372df4:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03372e28;
    }
  }
LAB_03372e0c:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03372e28:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03372e34:
  pSVar9 = (__this->fields).KALGMNLLLNO;
  if (pSVar9 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
    if ((pSVar9->fields)._size == 0) {
      KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,StringLiteral_4872/*"CreateOffers: _offersDaily is empty!"*/,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03372ec0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

