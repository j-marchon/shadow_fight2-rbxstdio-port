// TypeDefIndex 586
// Namespace: 
// public class FDJKKAFIEFB : EHOFKBDKGBK<FDJKKAFIEFB, BLEFOFGCKEF>, BLEFOFGCKEF, DFLJPJMIMHI
// Fields:
//   private Action GBPDDFOIDPG; // 0x10
//   private bool <LDHHEDNNHJF>k__BackingField; // 0x18
//   private string <PDKPBHDALBH>k__BackingField; // 0x20
//   private DBNEEHGBCJD <ELDCPOBNFJJ>k__BackingField; // 0x28
//   private bool <MNOHILOGKBM>k__BackingField; // 0x30
//   private HashSet<char> <MMDFLMEALLK>k__BackingField; // 0x38
//   private HashSet<char> <HDMPOOPGLIC>k__BackingField; // 0x40
//   private HashSet<char> <IECIBAIEONL>k__BackingField; // 0x48
//   private const string DAIOCIKMNFD = "/localization.xml";
//   private const string PHIPOEHLHLO = "%%ERROR%%";
//   private readonly Dictionary<string, string> ELBMCMNELDD; // 0x50
//   private readonly List<DBNEEHGBCJD> DIKCNPKCGJP; // 0x58
//   private readonly ReactiveCollection<GIDPGJAAOJA> IEPHFPONOOO; // 0x60
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x68
//   private float DEKBMBADCIE; // 0x70
//   private JBEHJGDKPHL DEPJPOIKLFL; // 0x78
//   private static readonly char[] NIFEBLPCLFG; // 0x0
//   private static readonly SerialDisposable LEGEHOHOJGP; // 0x8
//   private int EKKBCIHHKNB; // 0x80
//   private float JHLCHFLFMJG; // 0x84

// ===== public bool JJAGLLGLGNA()  [RVA 0x35B230C]
// FDJKKAFIEFB$$JJAGLLGLGNA @ RVA 0x35B230C

bool FDJKKAFIEFB__JJAGLLGLGNA(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (__this->fields)._MNOHILOGKBM_k__BackingField;
}


// ===== public IReadOnlyList<DBNEEHGBCJD> BCILNFMINLK()  [RVA 0x35B2314]
// FDJKKAFIEFB$$BCILNFMINLK @ RVA 0x35B2314

System_Collections_Generic_IReadOnlyList_DBNEEHGBCJD__o *
FDJKKAFIEFB__BCILNFMINLK(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_DBNEEHGBCJD__o *)(__this->fields).DIKCNPKCGJP;
}


// ===== public void PCCPIHPECMA()  [RVA 0x35B231C]
// FDJKKAFIEFB$$PCCPIHPECMA @ RVA 0x35B231C

void FDJKKAFIEFB__PCCPIHPECMA(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04568ea3 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    DAT_04568ea3 = 1;
    method = extraout_x1;
  }
  if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FDJKKAFIEFB_TypeInfo,method);
    method = extraout_x1_00;
  }
  __this_00 = FDJKKAFIEFB_TypeInfo->static_fields->LEGEHOHOJGP;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Disposable_TypeInfo,method);
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PGAOEMFNKCA(string DDMGAEHAGMN, string LFGKEPCBPKF)  [RVA 0x35B23B8]
// FDJKKAFIEFB$$PGAOEMFNKCA @ RVA 0x35B23B8

/* WARNING: Removing unreachable block (ram,0x036b29c4) */
/* WARNING: Removing unreachable block (ram,0x036b27b0) */
/* WARNING: Removing unreachable block (ram,0x036b2a00) */
/* WARNING: Removing unreachable block (ram,0x036b2a0c) */

void FDJKKAFIEFB__PGAOEMFNKCA
               (FDJKKAFIEFB_o *__this,System_String_o *DDMGAEHAGMN,System_String_o *LFGKEPCBPKF,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  Il2CppObject *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *LNGCJJNKOID;
  System_String_o *AJNKKPBBGKG;
  System_Func_TSource__IEnumerable_TResult___o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *method_00;
  long lVar10;
  System_Collections_Generic_IEnumerable_TResult__c *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  UniRx_ReactiveCollection_GIDPGJAAOJA__o *source;
  undefined1 auVar15 [16];
  
  if ((DAT_04568ea4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
    FUN_01bab630(&Method_FDJKKAFIEFB_EDHDJBHADAK_CACOKDGBCIB__);
    FUN_01bab630(&FDJKKAFIEFB_EDHDJBHADAK_TypeInfo);
    FUN_01bab630(&
                 Method_System_Linq_Enumerable_SelectMany<GIDPGJAAOJA,_KeyValuePair<string,_string>>__
                );
    FUN_01bab630(&System_Func<GIDPGJAAOJA,_IEnumerable<KeyValuePair<string,_string>>>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_13826/*"Title"*/);
    FUN_01bab630(&StringLiteral_14981/*"Words"*/);
    FUN_01bab630(&StringLiteral_8588/*"Localization"*/);
    DAT_04568ea4 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FDJKKAFIEFB_EDHDJBHADAK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_036b29f8;
  __this_00[1].klass = (Il2CppClass *)DDMGAEHAGMN;
  thunk_FUN_01c20e04(__this_00 + 1,DDMGAEHAGMN);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).ELBMCMNELDD;
  (__this->fields)._LDHHEDNNHJF_k__BackingField = false;
  if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto LAB_036b29f8;
  System_Collections_Generic_Dictionary<object,_object>__Clear
            (__this_01,Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
  method_00 = (MethodInfo *)0x1;
  pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC(LFGKEPCBPKF,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar4 == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar4,StringLiteral_8588/*"Localization"*/,(pSVar4->klass->vtable)._51_get_Item.method)
  ;
  if ((plVar5 != (long *)0x0) &&
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x468))
                                 (plVar5,StringLiteral_14981/*"Words"*/,*(undefined8 *)(*plVar5 + 0x470)),
     plVar5 != (long *)0x0)) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_036b25f4;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_036b25f4:
        uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_036b27b4;
          lVar10 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_036b277c;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_036b2764;
        }
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_036b2654;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_036b2654:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
        iVar3 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        if (iVar3 == 1) {
          __this_02 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
            LNGCJJNKOID = (System_String_o *)0x0;
          }
          else {
            if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (__this_02,StringLiteral_13826/*"Title"*/,(MethodInfo *)0x0);
            LNGCJJNKOID = EIABCPKDEBD__JPKEHIBGOEM
                                    (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,
                                     (MethodInfo *)0x0);
          }
          AJNKKPBBGKG = (System_String_o *)
                        (**(code **)(*plVar7 + 0x3c8))(plVar7,*(undefined8 *)(*plVar7 + 0x3d0));
          FDJKKAFIEFB__AJKJDLLNCNM(__this,LNGCJJNKOID,AJNKKPBBGKG,method_00);
        }
      } while( true );
    }
    goto LAB_036b29f8;
  }
  goto LAB_036b27b4;
LAB_036b294c:
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_036b29ac;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_036b29ac:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  (__this->fields)._LDHHEDNNHJF_k__BackingField = true;
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_036b2764:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_036b2798;
    }
  }
LAB_036b277c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_036b2798:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_036b27b4:
  source = (__this->fields).IEPHFPONOOO;
  selector = (System_Func_TSource__IEnumerable_TResult___o *)
             thunk_FUN_01bda818(
                               System_Func<GIDPGJAAOJA,_IEnumerable<KeyValuePair<string,_string>>>_TypeInfo
                               );
  System_Func<object,_object>___ctor();
  pSVar8 = System_Linq_Enumerable__SelectMany<object,_KeyValuePair<object,_object>>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,selector,
                      Method_System_Linq_Enumerable_SelectMany<GIDPGJAAOJA,_KeyValuePair<string,_string>>__
                     );
  if (pSVar8 != (System_Collections_Generic_IEnumerable_TResult__o *)0x0) {
    pSVar11 = pSVar8->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    uVar12 = (ulong)uVar2;
    if (uVar12 != 0) {
      piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)
            System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo) {
          pVVar9 = pSVar11->vtable + *piVar13;
          goto LAB_036b2858;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar9 = (VirtualInvokeData *)
             FUN_01b81914(pSVar8,
                          System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo
                          ,0);
LAB_036b2858:
    plVar5 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar10 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_036b28c8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_036b28c8:
      uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar12 & 1) == 0) goto LAB_036b294c;
      lVar10 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)
               (piVar14 + -2) ==
              System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_036b2924;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01b81914(plVar5,
                            System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo
                            ,0);
LAB_036b2924:
      auVar15 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      FDJKKAFIEFB__AJKJDLLNCNM(__this,auVar15._0_8_,auVar15._8_8_,(MethodInfo *)auVar15._8_8_);
    } while( true );
  }
LAB_036b29f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIMAJOGGBHM()  [RVA 0x35B2C84]
// FDJKKAFIEFB$$GIMAJOGGBHM @ RVA 0x35B2C84

void FDJKKAFIEFB__GIMAJOGGBHM(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  UniRx_ReactiveCollection_GIDPGJAAOJA__o *__this_00;
  System_IObservable_CollectionAddEvent_T___o *source;
  System_Action_T__o *onNext;
  Il2CppObject *pIVar1;
  System_Action_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568ea5 & 1) == 0) {
    FUN_01bab630(&System_Action<CollectionAddEvent<GIDPGJAAOJA>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&Method_FDJKKAFIEFB_LIKBHEDGLNO__);
    FUN_01bab630(&Method_NAEFACJHPAL_NDNPGAKJLHM__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<CollectionAddEvent<GIDPGJAAOJA>>__);
    FUN_01bab630(&Method_UniRx_ReactiveCollection<GIDPGJAAOJA>_ObserveAdd__);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04568ea5 = 1;
  }
  method_02 = (MethodInfo *)0x0;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  FDJKKAFIEFB__INCIEIKPDFI(__this,method_00);
  FDJKKAFIEFB__ILLMMCPADOI(__this,method_01);
  FDJKKAFIEFB__PGAOEMFNKCA(__this,(__this->fields)._ELDCPOBNFJJ_k__BackingField,method_02);
  __this_00 = (__this->fields).IEPHFPONOOO;
  if (__this_00 != (UniRx_ReactiveCollection_GIDPGJAAOJA__o *)0x0) {
    source = UniRx_ReactiveCollection<object>__ObserveAdd
                       ((UniRx_ReactiveCollection_T__o *)__this_00,
                        Method_UniRx_ReactiveCollection<GIDPGJAAOJA>_ObserveAdd__);
    onNext = (System_Action_T__o *)
             thunk_FUN_01bda818(System_Action<CollectionAddEvent<GIDPGJAAOJA>>_TypeInfo);
    System_Action<CollectionAddEvent<object>>___ctor();
    pIVar1 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<CollectionAddEvent<object>>
                       ((System_IObservable_T__o *)source,onNext,
                        Method_UniRx_ObservableExtensions_Subscribe<CollectionAddEvent<GIDPGJAAOJA>>__
                       );
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).BNAIPPCOGPE,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar1 = (Il2CppObject *)UniRx_Disposable__Create(pSVar2,(MethodInfo *)0x0);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).BNAIPPCOGPE,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    pIVar1 = (Il2CppObject *)UniRx_Disposable__Create(pSVar2,(MethodInfo *)0x0);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).BNAIPPCOGPE,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string ABDGFOPLCCJ()  [RVA 0x35B32C4]
// FDJKKAFIEFB$$ABDGFOPLCCJ @ RVA 0x35B32C4

System_String_o * FDJKKAFIEFB__ABDGFOPLCCJ(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (__this->fields)._PDKPBHDALBH_k__BackingField;
}


// ===== public bool GCNGEONPCGF(string DDMGAEHAGMN, out DBNEEHGBCJD NFDKMBAGHPD)  [RVA 0x35B32CC]
// FDJKKAFIEFB$$GCNGEONPCGF @ RVA 0x35B32CC

bool FDJKKAFIEFB__GCNGEONPCGF
               (FDJKKAFIEFB_o *__this,System_String_o *DDMGAEHAGMN,DBNEEHGBCJD_o **NFDKMBAGHPD,
               MethodInfo *method)

{
  bool bVar1;
  FDJKKAFIEFB_KDBBHOMLGBN_o *__this_00;
  FDJKKAFIEFB_o **ppFVar2;
  System_Predicate_T__o *pSVar3;
  DBNEEHGBCJD_o *pDVar4;
  FDJKKAFIEFB_o *__this_01;
  Il2CppObject *__this_02;
  KMBNFNCDDBP_o *__this_03;
  Il2CppClass *pIVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_DBNEEHGBCJD__o *pSVar6;
  FDJKKAFIEFB_KDBBHOMLGBN_Fields *pFVar7;
  
  method_01 = (MethodInfo *)NFDKMBAGHPD;
  if ((DAT_04568ea6 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_FDJKKAFIEFB_KDBBHOMLGBN_GDMDHKHHADB__);
    FUN_01bab630(&FDJKKAFIEFB_KDBBHOMLGBN_TypeInfo);
    FUN_01bab630(&Method_FDJKKAFIEFB_LMFFOOFIHAP_PGPHHMNEABO__);
    FUN_01bab630(&FDJKKAFIEFB_LMFFOOFIHAP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    FUN_01bab630(&System_Predicate<DBNEEHGBCJD>_TypeInfo);
    DAT_04568ea6 = 1;
  }
  __this_00 = (FDJKKAFIEFB_KDBBHOMLGBN_o *)thunk_FUN_01bda818(FDJKKAFIEFB_KDBBHOMLGBN_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (FDJKKAFIEFB_KDBBHOMLGBN_o *)0x0) goto LAB_036b354c;
  pFVar7 = &__this_00->fields;
  pFVar7->languageName = DDMGAEHAGMN;
  thunk_FUN_01c20e04(pFVar7,DDMGAEHAGMN);
  ppFVar2 = &(__this_00->fields).__4__this;
  *ppFVar2 = __this;
  thunk_FUN_01c20e04(ppFVar2,__this);
  *NFDKMBAGHPD = (DBNEEHGBCJD_o *)0x0;
  thunk_FUN_01c20e04(NFDKMBAGHPD,0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pFVar7->languageName,(MethodInfo *)0x0);
  __this_01 = (FDJKKAFIEFB_o *)(ulong)bVar1;
  if (!bVar1) {
    pSVar6 = (__this->fields).DIKCNPKCGJP;
    pSVar3 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar6 == (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) goto LAB_036b354c;
    method_01 = Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__;
    pDVar4 = (DBNEEHGBCJD_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)pSVar6,pSVar3,
                        (MethodInfo_26E5414 *)
                        Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    *NFDKMBAGHPD = pDVar4;
    __this_01 = (FDJKKAFIEFB_o *)thunk_FUN_01c20e04(NFDKMBAGHPD,pDVar4);
  }
  pDVar4 = *NFDKMBAGHPD;
  if (pDVar4 == (DBNEEHGBCJD_o *)0x0) {
    __this_02 = (Il2CppObject *)thunk_FUN_01bda818(FDJKKAFIEFB_LMFFOOFIHAP_TypeInfo);
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_03 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if ((__this_03 == (KMBNFNCDDBP_o *)0x0) ||
       (pIVar5 = (Il2CppClass *)KMBNFNCDDBP__MLHLAKMLJNI(__this_03,(MethodInfo *)0x0),
       __this_02 == (Il2CppObject *)0x0)) {
LAB_036b354c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02[1].klass = pIVar5;
    thunk_FUN_01c20e04();
    pSVar6 = (__this->fields).DIKCNPKCGJP;
    pSVar3 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar6 == (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) goto LAB_036b354c;
    method_01 = Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__;
    pDVar4 = (DBNEEHGBCJD_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)pSVar6,pSVar3,
                        (MethodInfo_26E5414 *)
                        Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    *NFDKMBAGHPD = pDVar4;
    __this_01 = (FDJKKAFIEFB_o *)thunk_FUN_01c20e04(NFDKMBAGHPD,pDVar4);
    pDVar4 = *NFDKMBAGHPD;
    method_00 = (MethodInfo *)0x0;
    if (pDVar4 != (DBNEEHGBCJD_o *)0x0) goto LAB_036b350c;
  }
  else {
LAB_036b350c:
    bVar1 = FDJKKAFIEFB__GCGNFLHOGPA(__this_01,pDVar4,method_01);
    method_00 = extraout_x1;
    if (bVar1) goto LAB_036b352c;
  }
  pDVar4 = FDJKKAFIEFB_KDBBHOMLGBN__AOKIOPIEODA(__this_00,method_00);
  *NFDKMBAGHPD = pDVar4;
  thunk_FUN_01c20e04(NFDKMBAGHPD,pDVar4);
LAB_036b352c:
  return *NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0;
}


// ===== private void ILLMMCPADOI()  [RVA 0x35B3208]
// FDJKKAFIEFB$$ILLMMCPADOI @ RVA 0x35B3208

void FDJKKAFIEFB__ILLMMCPADOI(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  System_Predicate_T__o *match;
  DBNEEHGBCJD_o *pDVar1;
  MethodInfo *extraout_x1;
  DBNEEHGBCJD_o **ppDVar2;
  System_Collections_Generic_List_DBNEEHGBCJD__o *__this_00;
  
  if ((DAT_04568ea7 & 1) == 0) {
    FUN_01bab630(&Method_FDJKKAFIEFB_PHOGJJDCFEJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    FUN_01bab630(&System_Predicate<DBNEEHGBCJD>_TypeInfo);
    DAT_04568ea7 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DIKCNPKCGJP;
  match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo,method)
  ;
  System_Predicate<object>___ctor();
  if (__this_00 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
    pDVar1 = (DBNEEHGBCJD_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this_00,match,
                        Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    ppDVar2 = &(__this->fields)._ELDCPOBNFJJ_k__BackingField;
    *ppDVar2 = pDVar1;
    thunk_FUN_01c20e04(ppDVar2,pDVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AHCLDDLCAHA(bool CJNHFNHJHPE)  [RVA 0x35B3638]
// FDJKKAFIEFB$$AHCLDDLCAHA @ RVA 0x35B3638

void FDJKKAFIEFB__AHCLDDLCAHA(FDJKKAFIEFB_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MNOHILOGKBM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void MJKEMGMDAEO(Action CJNHFNHJHPE)  [RVA 0x35B3644]
// FDJKKAFIEFB$$MJKEMGMDAEO @ RVA 0x35B3644

void FDJKKAFIEFB__MJKEMGMDAEO(FDJKKAFIEFB_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_04568ea8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568ea8 = 1;
  }
  source = (__this->fields).GBPDDFOIDPG;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public float EJIIFEJJDAJ()  [RVA 0x35B36E0]
// FDJKKAFIEFB$$EJIIFEJJDAJ @ RVA 0x35B36E0

float FDJKKAFIEFB__EJIIFEJJDAJ(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).PPNIGDOLECH;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void COLHBIAKJBB()  [RVA 0x35B370C]
// FDJKKAFIEFB$$COLHBIAKJBB @ RVA 0x35B370C

void FDJKKAFIEFB__COLHBIAKJBB(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 local_28;
  
  if ((DAT_04568ea9 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_EOHMFJFFFIN__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    DAT_04568ea9 = 1;
  }
  local_28 = 0;
  bVar4 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (!bVar4) {
    EHOFKBDKGBK<object,_object>__EOHMFJFFFIN
              (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_EOHMFJFFFIN__);
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar5 == (Il2CppObject *)0x0) {
LAB_036b3898:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar7 = pIVar5->klass;
    uVar1._0_1_ = (pIVar7->_2).rank;
    uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar7->vtable + (*piVar9 + 0xf);
          goto LAB_036b37f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xf);
LAB_036b37f4:
    uVar8 = (*pVVar6->methodPtr)(pIVar5,0,&local_28,pVVar6->method);
    if ((uVar8 & 1) != 0) {
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      uVar3 = local_28;
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_036b3898;
      pIVar7 = pIVar5->klass;
      uVar2._0_1_ = (pIVar7->_2).rank;
      uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar7->vtable + (*piVar9 + 7);
            goto LAB_036b3870;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,7);
LAB_036b3870:
      (*pVVar6->methodPtr)(pIVar5,uVar3,0,1,pVVar6->method);
    }
  }
  return;
}


// ===== public void NHCANHBEGOE(float LFJGFLNMBMC, int FDJFFCLBLBH)  [RVA 0x35B389C]
// FDJKKAFIEFB$$NHCANHBEGOE @ RVA 0x35B389C

void FDJKKAFIEFB__NHCANHBEGOE
               (FDJKKAFIEFB_o *__this,float LFJGFLNMBMC,int32_t FDJFFCLBLBH,MethodInfo *method)

{
  FDJKKAFIEFB_o *__this_00;
  System_Func_IEnumerator__o *coroutine;
  System_IObservable_Unit__o *source;
  System_IDisposable_o *value;
  MethodInfo *method_00;
  UniRx_SerialDisposable_o *__this_01;
  undefined1 auVar1 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)FDJFFCLBLBH;
  __this_00 = __this;
  if ((DAT_04568eaa & 1) == 0) {
    FUN_01bab630(&Method_FDJKKAFIEFB_PCEOOHNIJBJ__);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&System_Func<IEnumerator>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    auVar1 = FUN_01bab630(&UniRx_Observable_TypeInfo);
    method_00 = auVar1._8_8_;
    __this_00 = auVar1._0_8_;
    DAT_04568eaa = 1;
  }
  (__this->fields).JHLCHFLFMJG = LFJGFLNMBMC;
  (__this->fields).EKKBCIHHKNB = FDJFFCLBLBH;
  FDJKKAFIEFB__PCCPIHPECMA(__this_00,method_00);
  if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = FDJKKAFIEFB_TypeInfo->static_fields->LEGEHOHOJGP;
  coroutine = (System_Func_IEnumerator__o *)thunk_FUN_01bda818(System_Func<IEnumerator>_TypeInfo);
  System_Func<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromCoroutine(coroutine,false,(MethodInfo *)0x0);
  value = UniRx_ObservableExtensions__Subscribe<Unit>
                    ((System_IObservable_T__o *)source,
                     Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OIFHOGLBCOL()  [RVA 0x35B39CC]
// FDJKKAFIEFB$$OIFHOGLBCOL @ RVA 0x35B39CC

void FDJKKAFIEFB__OIFHOGLBCOL(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_04568eab & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_04568eab = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x35B3A34]
// FDJKKAFIEFB$$.cctor @ RVA 0x35B3A34

void FDJKKAFIEFB___cctor(MethodInfo *method)

{
  System_Char_array *array;
  UniRx_SerialDisposable_o *__this;
  UniRx_SerialDisposable_o **ppUVar1;
  
  if ((DAT_04568eac & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_3EBB838D673A3618780360FE3D2D06FBEFB0A2DDA6FD866A97F1391B04D5CC7A
                );
    DAT_04568eac = 1;
  }
  array = (System_Char_array *)FUN_01bab718(char___TypeInfo,0x1c);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)array,
             Field_<PrivateImplementationDetails>_3EBB838D673A3618780360FE3D2D06FBEFB0A2DDA6FD866A97F1391B04D5CC7A
             ,(MethodInfo *)0x0);
  FDJKKAFIEFB_TypeInfo->static_fields->NIFEBLPCLFG = array;
  thunk_FUN_01c20e04(FDJKKAFIEFB_TypeInfo->static_fields,array);
  __this = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this,(MethodInfo *)0x0);
  ppUVar1 = &FDJKKAFIEFB_TypeInfo->static_fields->LEGEHOHOJGP;
  *ppUVar1 = __this;
  thunk_FUN_01c20e04(ppUVar1,__this);
  return;
}


// ===== private void LIKBHEDGLNO(CollectionAddEvent<GIDPGJAAOJA> JOIGDMABAKN)  [RVA 0x35B3B10]
// FDJKKAFIEFB$$LIKBHEDGLNO @ RVA 0x35B3B10

/* WARNING: Removing unreachable block (ram,0x036b3df4) */

void FDJKKAFIEFB__LIKBHEDGLNO
               (FDJKKAFIEFB_o *__this,UniRx_CollectionAddEvent_GIDPGJAAOJA__o JOIGDMABAKN,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  GIDPGJAAOJA_o *pGVar5;
  DBNEEHGBCJD_o *pDVar6;
  GIDPGJAAOJA_c *pGVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_String_o *pSVar12;
  undefined1 auVar13 [16];
  
  pGVar5 = JOIGDMABAKN.fields._Value_k__BackingField;
  if ((DAT_04568ead & 1) == 0) {
    FUN_01bab630(&Method_UniRx_CollectionAddEvent<GIDPGJAAOJA>_get_Value__,JOIGDMABAKN.fields._0_8_)
    ;
    FUN_01bab630(&GIDPGJAAOJA_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    DAT_04568ead = 1;
  }
  pDVar6 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar6 == (DBNEEHGBCJD_o *)0x0) {
    pSVar12 = (System_String_o *)0x0;
  }
  else {
    pSVar12 = (pDVar6->fields)._COIPKAKHDFP_k__BackingField;
  }
  if (pGVar5 != (GIDPGJAAOJA_o *)0x0) {
    pGVar7 = pGVar5->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)GIDPGJAAOJA_TypeInfo) {
          pVVar2 = pGVar7->vtable + *piVar10;
          goto LAB_036b3c0c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pGVar5,GIDPGJAAOJA_TypeInfo,0);
LAB_036b3c0c:
    plVar3 = (long *)(*pVVar2->methodPtr)(pGVar5,pSVar12,pVVar2->method);
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)
               (piVar11 + -2) ==
              System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_036b3c78;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01b81914(plVar3,
                            System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo
                            ,0);
LAB_036b3c78:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_036b3cf0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_036b3cf0:
        uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar9 & 1) == 0) goto LAB_036b3d74;
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)
                 (piVar11 + -2) ==
                System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_036b3d4c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01b81914(plVar3,
                              System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo
                              ,0);
LAB_036b3d4c:
        auVar13 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        FDJKKAFIEFB__AJKJDLLNCNM(__this,auVar13._0_8_,auVar13._8_8_,(MethodInfo *)auVar13._8_8_);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_036b3d74:
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
                    /* try { // try from 036b3d90 to 037b3e23 has its CatchHandler @ 036b3d90
                       catch() { ... } // from try @ 036b3d90 with catch @ 036b3d90
                       catch() { ... } // from try @ 036b3e48 with catch @ 036b3d90
                       catch() { ... } // from try @ 036b3ea8 with catch @ 036b3d90
                       catch() { ... } // from try @ 036b3ed0 with catch @ 036b3d90
                       catch() { ... } // from try @ 036b3f00 with catch @ 036b3d90 */
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_036b3dc8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_036b3dc8:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


// ===== private void AAIALFFDPMC(DBNEEHGBCJD CJNHFNHJHPE)  [RVA 0x35B3EA4]
// FDJKKAFIEFB$$AAIALFFDPMC @ RVA 0x35B3EA4

void FDJKKAFIEFB__AAIALFFDPMC(FDJKKAFIEFB_o *__this,DBNEEHGBCJD_o *CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 036b3ea4 to 037b3ea7 has its CatchHandler @ 036b3eb0 */
  (__this->fields)._ELDCPOBNFJJ_k__BackingField = CJNHFNHJHPE;
                    /* try { // try from 036b3ea8 to 037b3ecb has its CatchHandler @ 036b3d90 */
  thunk_FUN_01c20e04();
  return;
}


// ===== private void INCIEIKPDFI()  [RVA 0x35B2E74]
// FDJKKAFIEFB$$INCIEIKPDFI @ RVA 0x35B2E74

void FDJKKAFIEFB__INCIEIKPDFI(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar2;
  long *plVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlNode_o *BKLLAGBLCDB;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Xml_XmlNode_o *AHDGNOJPPIB_01;
  System_Xml_XmlNode_o *AHDGNOJPPIB_02;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  JBEHJGDKPHL_o *pJVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_char__o *IIJNDCLFEFC;
  float fVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04568eae & 1) == 0) {
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&JBEHJGDKPHL_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_2808/*"AlignedDescentTextExcludedSymbols"*/);
    FUN_01bab630(&StringLiteral_8588/*"Localization"*/);
    FUN_01bab630(&StringLiteral_2807/*"AlignedAscentTextExcludedSymbols"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1526/*"/localization.xml"*/);
    FUN_01bab630(&StringLiteral_2822/*"AllowAsianForcedAlignByGeom"*/);
    FUN_01bab630(&StringLiteral_8552/*"LoadLocalizationSettings: can't find root node 'Localization'!"*/);
    FUN_01bab630(&StringLiteral_5252/*"DefaultFonts"*/);
    FUN_01bab630(&StringLiteral_12265/*"SpecialBestFitFactor"*/);
    FUN_01bab630(&StringLiteral_8321/*"Languages"*/);
    FUN_01bab630(&StringLiteral_2809/*"AlignedTextExcludedSymbols"*/);
    DAT_04568eae = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  EIJDDKJONFO = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar2 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_1526/*"/localization.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar2 != (System_Xml_XmlDocument_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_8588/*"Localization"*/,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 == (long *)0x0) {
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_8552/*"LoadLocalizationSettings: can't find root node 'Localization'!"*/,(MethodInfo *)0x0);
      return;
    }
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                  (**(code **)(*plVar3 + 0x468))
                            (plVar3,StringLiteral_5252/*"DefaultFonts"*/,*(undefined8 *)(*plVar3 + 0x470));
    BKLLAGBLCDB = (System_Xml_XmlNode_o *)
                  (**(code **)(*plVar3 + 0x468))
                            (plVar3,StringLiteral_8321/*"Languages"*/,*(undefined8 *)(*plVar3 + 0x470));
    AHDGNOJPPIB_00 =
         (System_Xml_XmlNode_o *)
         (**(code **)(*plVar3 + 0x468))(plVar3,StringLiteral_2809/*"AlignedTextExcludedSymbols"*/,*(undefined8 *)(*plVar3 + 0x470));
    AHDGNOJPPIB_01 =
         (System_Xml_XmlNode_o *)
         (**(code **)(*plVar3 + 0x468))(plVar3,StringLiteral_2807/*"AlignedAscentTextExcludedSymbols"*/,*(undefined8 *)(*plVar3 + 0x470));
    AHDGNOJPPIB_02 =
         (System_Xml_XmlNode_o *)
         (**(code **)(*plVar3 + 0x468))(plVar3,StringLiteral_2808/*"AlignedDescentTextExcludedSymbols"*/,*(undefined8 *)(*plVar3 + 0x470));
    plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                               (plVar3,StringLiteral_12265/*"SpecialBestFitFactor"*/,*(undefined8 *)(*plVar3 + 0x470));
    if (plVar4 != (long *)0x0) {
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,1.0,(MethodInfo *)0x0);
        (__this->fields).DEKBMBADCIE = fVar8;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                   (plVar3,StringLiteral_2822/*"AllowAsianForcedAlignByGeom"*/,*(undefined8 *)(*plVar3 + 0x470));
        if (plVar3 != (long *)0x0) {
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
            (__this->fields)._MNOHILOGKBM_k__BackingField = bVar1;
            pJVar7 = (JBEHJGDKPHL_o *)thunk_FUN_01bda818(JBEHJGDKPHL_TypeInfo);
            JBEHJGDKPHL___ctor(pJVar7,(MethodInfo *)0x0);
            if (pJVar7 != (JBEHJGDKPHL_o *)0x0) {
              auVar9 = NEON_fmov(0x3f800000,4);
              method_00 = (MethodInfo *)0x0;
              (pJVar7->fields).PPNIGDOLECH = (float)(int)auVar9._8_8_;
              (pJVar7->fields).PFHPMEPMFIB = (float)(int)((ulong)auVar9._8_8_ >> 0x20);
              (pJVar7->fields).DHMKKNFGGHN = (float)(int)auVar9._0_8_;
              (pJVar7->fields).LPOMGFMFKND = (float)(int)((ulong)auVar9._0_8_ >> 0x20);
              pJVar7 = KCNFAADLADJ__FLFEFLPPBLL(AHDGNOJPPIB,pJVar7,(MethodInfo *)0x0);
              (__this->fields).DEPJPOIKLFL = pJVar7;
              thunk_FUN_01c20e04();
              FDJKKAFIEFB__NLEKIDMGLIF(__this,BKLLAGBLCDB,method_00);
              IIJNDCLFEFC = (__this->fields)._MMDFLMEALLK_k__BackingField;
              if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              FDJKKAFIEFB__GIJOGIIDEGO(IIJNDCLFEFC,AHDGNOJPPIB_00,method_00);
              FDJKKAFIEFB__GIJOGIIDEGO
                        ((__this->fields)._IECIBAIEONL_k__BackingField,AHDGNOJPPIB_01,method_00);
              FDJKKAFIEFB__GIJOGIIDEGO
                        ((__this->fields)._HDMPOOPGLIC_k__BackingField,AHDGNOJPPIB_02,method_00);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public string FFNEBCPLKDN(string JEHFOBHMGJM, string[] OKBIKHHKOEN)  [RVA 0x35B4454]
// FDJKKAFIEFB$$FFNEBCPLKDN @ RVA 0x35B4454

System_String_o *
FDJKKAFIEFB__FFNEBCPLKDN
          (FDJKKAFIEFB_o *__this,System_String_o *JEHFOBHMGJM,System_String_array *OKBIKHHKOEN,
          MethodInfo *method)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int32_t iVar8;
  int32_t iVar9;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  System_Object_array *pSVar14;
  long lVar15;
  Il2CppObject *pIVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  MethodInfo *method_00;
  undefined8 local_70;
  int32_t local_64;
  
  if ((DAT_04568eaf & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&System_Nullable<int>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_6828/*"GetString: localization does not contain title '"*/);
    FUN_01bab630(&StringLiteral_22381/*"{0}: can't extract parameter for title '{1}', param.Id {2}, params.Count {3}!"*/);
    FUN_01bab630(&StringLiteral_22230/*"{"*/);
    FUN_01bab630(&StringLiteral_6831/*"GetString: parameters passed both through arguments and title in '"*/);
    FUN_01bab630(&StringLiteral_2470/*"="*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_562/*" width=1 "*/);
    FUN_01bab630(&StringLiteral_762/*"%%ERROR%%"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_2102/*"::"*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_2147/*"<"*/);
    FUN_01bab630(&StringLiteral_529/*" size=1 "*/);
    FUN_01bab630(&StringLiteral_795/*"&gt;"*/);
    FUN_01bab630(&StringLiteral_15810/*"^"*/);
    FUN_01bab630(&StringLiteral_270/*" >"*/);
    FUN_01bab630(&StringLiteral_2445/*"<quad name=none prefabid="*/);
    FUN_01bab630(&StringLiteral_6827/*"GetString"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    FUN_01bab630(&StringLiteral_2457/*"<strike "*/);
    FUN_01bab630(&StringLiteral_528/*" size="*/);
    FUN_01bab630(&StringLiteral_21266/*"strike::"*/);
    FUN_01bab630(&StringLiteral_22469/*"{br}"*/);
    FUN_01bab630(&StringLiteral_6830/*"GetString: parameters brackets broken in title '"*/);
    FUN_01bab630(&StringLiteral_561/*" width="*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_798/*"&lt;"*/);
    FUN_01bab630(&StringLiteral_18941/*"img::"*/);
    FUN_01bab630(&StringLiteral_20269/*"prefabid::"*/);
    FUN_01bab630(&StringLiteral_2475/*">"*/);
    FUN_01bab630(&StringLiteral_6829/*"GetString: parameters brackets broken in content of title '"*/);
    DAT_04568eaf = 1;
  }
  local_64 = 0;
  bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(JEHFOBHMGJM,(MethodInfo *)0x0);
  if ((bVar4) || ((__this->fields)._ELDCPOBNFJJ_k__BackingField == (DBNEEHGBCJD_o *)0x0)) {
    return StringLiteral_1/*""*/;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  if (OKBIKHHKOEN != (System_String_array *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036b4f48;
    System_Collections_Generic_List<object>__AddRange
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)OKBIKHHKOEN,
               Method_System_Collections_Generic_List<string>_AddRange__);
  }
  if (JEHFOBHMGJM != (System_String_o *)0x0) {
    uVar7 = System_String__IndexOf(JEHFOBHMGJM,StringLiteral_22230/*"{"*/,(MethodInfo *)0x0);
    pSVar10 = JEHFOBHMGJM;
    if (uVar7 != 0xffffffff) {
      pSVar10 = System_String__Substring(JEHFOBHMGJM,0,uVar7,(MethodInfo *)0x0);
    }
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).ELBMCMNELDD;
    if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (pSVar11,(Il2CppObject *)pSVar10,
                         Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__)
      ;
      if (!bVar4) {
        pSVar10 = System_String__Concat
                            (StringLiteral_6828/*"GetString: localization does not contain title '"*/,pSVar10,StringLiteral_853/*"'!"*/,(MethodInfo *)0x0);
        KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar10,(MethodInfo *)0x0);
        return StringLiteral_762/*"%%ERROR%%"*/;
                    /* try { // try from 036b49b0 to 037b4ab7 has its CatchHandler @ 036b49b0
                       catch() { ... } // from try @ 036b49b0 with catch @ 036b49b0
                       catch() { ... } // from try @ 036b4ed8 with catch @ 036b49b0
                       catch() { ... } // from try @ 036b4f60 with catch @ 036b49b0
                       catch() { ... } // from try @ 036b4fc0 with catch @ 036b49b0
                       catch() { ... } // from try @ 036b4fcc with catch @ 036b49b0 */
      }
      pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).ELBMCMNELDD;
      if ((((pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pSVar10 = (System_String_o *)
                      System_Collections_Generic_Dictionary<object,_object>__get_Item
                                (pSVar11,(Il2CppObject *)pSVar10,
                                 Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__
                                ), pSVar10 != (System_String_o *)0x0)) &&
          (pSVar10 = System_String__Replace
                               (pSVar10,StringLiteral_22469/*"{br}"*/,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0),
          pSVar10 != (System_String_o *)0x0)) &&
         (pSVar10 = System_String__Replace
                              (pSVar10,StringLiteral_798/*"&lt;"*/,StringLiteral_2147/*"<"*/,(MethodInfo *)0x0),
         pSVar10 != (System_String_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        pSVar10 = System_String__Replace
                            (pSVar10,StringLiteral_795/*"&gt;"*/,StringLiteral_2475/*">"*/,(MethodInfo *)0x0);
        if (uVar7 == 0xffffffff) {
LAB_036b49ec:
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036b4f48;
        }
        else {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036b4f48;
          if ((__this_00->fields)._size != 0) {
            pSVar12 = System_String__Concat
                                (StringLiteral_6831/*"GetString: parameters passed both through arguments and title in '"*/,JEHFOBHMGJM,StringLiteral_853/*"'!"*/,(MethodInfo *)0x0)
            ;
            KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar12,(MethodInfo *)0x0);
          }
          do {
            iVar1 = uVar7 + 1;
            iVar8 = System_String__IndexOf(JEHFOBHMGJM,0x7d,iVar1,(MethodInfo *)0x0);
            iVar9 = System_String__IndexOf(JEHFOBHMGJM,0x7b,iVar1,(MethodInfo *)0x0);
            if (iVar9 < iVar8) {
              iVar9 = System_String__IndexOf(JEHFOBHMGJM,0x7b,iVar1,(MethodInfo *)0x0);
              if ((iVar8 == -1) || (iVar9 != -1)) goto LAB_036b49b8;
            }
            else if (iVar8 == -1) {
LAB_036b49b8:
              method_00 = (MethodInfo *)0x0;
              pSVar12 = System_String__Concat
                                  (StringLiteral_6830/*"GetString: parameters brackets broken in title '"*/,JEHFOBHMGJM,StringLiteral_853/*"'!"*/,
                                   (MethodInfo *)0x0);
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar12,(MethodInfo *)0x0);
              goto LAB_036b49ec;
            }
            pSVar12 = System_String__Substring(JEHFOBHMGJM,iVar1,iVar8 + ~uVar7,(MethodInfo *)0x0);
            lVar15 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar14 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar14 == (System_Object_array *)0x0) goto LAB_036b4f48;
            uVar7 = (__this_00->fields)._size;
            if (uVar7 < (uint)pSVar14->max_length) {
              (__this_00->fields)._size = uVar7 + 1;
              pSVar14->m_Items[(int)uVar7] = (Il2CppObject *)pSVar12;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)pSVar12,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                        );
            }
            method_00 = (MethodInfo *)0x0;
            uVar7 = System_String__IndexOf(JEHFOBHMGJM,0x7b,iVar1,(MethodInfo *)0x0);
          } while (uVar7 != 0xffffffff);
        }
        if ((__this_00->fields)._size != 0) {
          if (pSVar10 == (System_String_o *)0x0) goto LAB_036b4f48;
          uVar7 = System_String__IndexOf(pSVar10,StringLiteral_22230/*"{"*/,(MethodInfo *)0x0);
          while (uVar7 != 0xffffffff) {
            iVar1 = uVar7 + 1;
            iVar8 = System_String__IndexOf(pSVar10,0x7d,iVar1,(MethodInfo *)0x0);
            iVar9 = System_String__IndexOf(pSVar10,0x7b,iVar1,(MethodInfo *)0x0);
            if (iVar9 < iVar8) {
              iVar9 = System_String__IndexOf(pSVar10,0x7b,iVar1,(MethodInfo *)0x0);
              if ((iVar8 == -1) || (iVar9 != -1)) goto LAB_036b4f00;
            }
            else if (iVar8 == -1) {
LAB_036b4f00:
                    /* catch() { ... } // from try @ 036b4b10 with catch @ 036b4f00 */
                    /* catch() { ... } // from try @ 036b4ce0 with catch @ 036b4f04 */
                    /* catch() { ... } // from try @ 036b4d68 with catch @ 036b4f08 */
                    /* catch() { ... } // from try @ 036b4bf4 with catch @ 036b4f0c */
                    /* catch() { ... } // from try @ 036b4b70 with catch @ 036b4f10 */
                    /* catch() { ... } // from try @ 036b4aec with catch @ 036b4f14
                       catch() { ... } // from try @ 036b4e30 with catch @ 036b4f14 */
              method_00 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 036b4ab8 with catch @ 036b4f18 */
                    /* catch() { ... } // from try @ 036b4dd8 with catch @ 036b4f1c
                       catch() { ... } // from try @ 036b4e8c with catch @ 036b4f1c */
                    /* catch() { ... } // from try @ 036b4d28 with catch @ 036b4f20
                       catch() { ... } // from try @ 036b4e88 with catch @ 036b4f20 */
              pSVar12 = System_String__Concat
                                  (StringLiteral_6829/*"GetString: parameters brackets broken in content of title '"*/,JEHFOBHMGJM,StringLiteral_853/*"'!"*/,
                                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036b4c64 with catch @ 036b4f24
                       catch() { ... } // from try @ 036b4e38 with catch @ 036b4f24 */
                    /* catch() { ... } // from try @ 036b4d80 with catch @ 036b4f28 */
                    /* catch() { ... } // from try @ 036b4c0c with catch @ 036b4f2c */
                    /* catch() { ... } // from try @ 036b4b94 with catch @ 036b4f30
                       catch() { ... } // from try @ 036b4e34 with catch @ 036b4f30 */
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar12,(MethodInfo *)0x0);
              break;
            }
            pSVar12 = System_String__Substring(pSVar10,iVar1,iVar8 + ~uVar7,(MethodInfo *)0x0);
            bVar4 = System_Int32__TryParse(pSVar12,&local_64,(MethodInfo *)0x0);
            if (!bVar4) {
              if (pSVar12 == (System_String_o *)0x0) goto LAB_036b4f48;
                    /* try { // try from 036b4ab8 to 037b4acf has its CatchHandler @ 036b4f18 */
              pSVar13 = System_String__ToUpper(pSVar12,(MethodInfo *)0x0);
              if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
              }
              if (pSVar13 == (System_String_o *)0x0) goto LAB_036b4f48;
                    /* try { // try from 036b4aec to 037b4af7 has its CatchHandler @ 036b4f14 */
              pSVar13 = System_String__Trim(pSVar13,BHEDGAKGKPO_TypeInfo->static_fields->IGMHFJCDAIL
                                            ,(MethodInfo *)0x0);
                    /* try { // try from 036b4b10 to 037b4b1b has its CatchHandler @ 036b4f00 */
              System_Int32__TryParse(pSVar13,&local_64,(MethodInfo *)0x0);
            }
                    /* try { // try from 036b4b2c to 037b4b37 has its CatchHandler @ 036b4efc */
            pSVar13 = System_String__Concat
                                (StringLiteral_22230/*"{"*/,pSVar12,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
            pSVar12 = StringLiteral_1/*""*/;
                    /* try { // try from 036b4b44 to 037b4b4b has its CatchHandler @ 036b4ef8 */
            if ((local_64 < 0) || ((__this_00->fields)._size <= local_64)) {
                    /* try { // try from 036b4b70 to 037b4b87 has its CatchHandler @ 036b4f10 */
              pSVar14 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
              if (pSVar14 == (System_Object_array *)0x0) goto LAB_036b4f48;
                    /* try { // try from 036b4b94 to 037b4bd3 has its CatchHandler @ 036b4f30 */
              if (StringLiteral_6827/*"GetString"*/ == (Il2CppObject *)0x0) {
                pIVar16 = (Il2CppObject *)0x0;
              }
              else {
                lVar15 = thunk_FUN_01bda71c(StringLiteral_6827/*"GetString"*/,
                                            (((pSVar14->obj).klass)->_1).element_class);
                pIVar16 = StringLiteral_6827/*"GetString"*/;
                if (lVar15 == 0) goto LAB_036b4f50;
              }
              if ((int)pSVar14->max_length == 0) {
LAB_036b4f4c:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar14->m_Items[0] = pIVar16;
              thunk_FUN_01c20e04();
                    /* try { // try from 036b4be0 to 037b4beb has its CatchHandler @ 036b4ef0 */
              lVar15 = thunk_FUN_01bda71c(JEHFOBHMGJM,(((pSVar14->obj).klass)->_1).element_class);
              if (lVar15 == 0) {
LAB_036b4f50:
                uVar18 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar18,0);
              }
              if ((uint)pSVar14->max_length < 2) goto LAB_036b4f4c;
                    /* try { // try from 036b4bf4 to 037b4c0b has its CatchHandler @ 036b4f0c */
              pSVar14->m_Items[1] = (Il2CppObject *)JEHFOBHMGJM;
              thunk_FUN_01c20e04(pSVar14->m_Items + 1,JEHFOBHMGJM);
                    /* try { // try from 036b4c0c to 037b4c5b has its CatchHandler @ 036b4f2c */
              local_70 = CONCAT44(local_70._4_4_,local_64);
              pIVar16 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_70);
              if ((pIVar16 != (Il2CppObject *)0x0) &&
                 (lVar15 = thunk_FUN_01bda71c(pIVar16,(((pSVar14->obj).klass)->_1).element_class),
                 lVar15 == 0)) goto LAB_036b4f50;
              if ((uint)pSVar14->max_length < 3) goto LAB_036b4f4c;
              pSVar14->m_Items[2] = pIVar16;
              thunk_FUN_01c20e04(pSVar14->m_Items + 2,pIVar16);
              pSVar17 = StringLiteral_22381/*"{0}: can't extract parameter for title '{1}', param.Id {2}, params.Count {3}!"*/;
                    /* try { // try from 036b4c64 to 037b4c8b has its CatchHandler @ 036b4f24 */
              if (OKBIKHHKOEN == (System_String_array *)0x0) {
                local_70 = 0;
              }
              else {
                local_70 = 0;
                System_Nullable<int>___ctor
                          ((System_Nullable_int__o)&local_70,(int32_t)OKBIKHHKOEN->max_length,
                           Method_System_Nullable<int>__ctor__);
              }
              pIVar16 = (Il2CppObject *)thunk_FUN_01bda448(System_Nullable<int>_TypeInfo,&local_70);
                    /* try { // try from 036b4cac to 037b4cbb has its CatchHandler @ 036b4ee4 */
              if ((pIVar16 != (Il2CppObject *)0x0) &&
                 (lVar15 = thunk_FUN_01bda71c(pIVar16,(((pSVar14->obj).klass)->_1).element_class),
                 lVar15 == 0)) goto LAB_036b4f50;
                    /* try { // try from 036b4cc8 to 037b4cdf has its CatchHandler @ 036b4ee0 */
              if ((uint)pSVar14->max_length < 4) goto LAB_036b4f4c;
              pSVar14->m_Items[3] = pIVar16;
              thunk_FUN_01c20e04(pSVar14->m_Items + 3,pIVar16);
                    /* try { // try from 036b4ce0 to 037b4d17 has its CatchHandler @ 036b4f04 */
              pSVar17 = System_String__Format(pSVar17,pSVar14,(MethodInfo *)0x0);
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar17,(MethodInfo *)0x0);
            }
            else {
                    /* try { // try from 036b4b58 to 037b4b63 has its CatchHandler @ 036b4ef4 */
              pSVar12 = (System_String_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  (__this_00,local_64,
                                   Method_System_Collections_Generic_List<string>_get_Item__);
            }
            if (pSVar12 == (System_String_o *)0x0) goto LAB_036b4f48;
            bVar4 = System_String__StartsWith(pSVar12,StringLiteral_18941/*"img::"*/,(MethodInfo *)0x0);
                    /* try { // try from 036b4d28 to 037b4d4f has its CatchHandler @ 036b4f20 */
            bVar5 = System_String__StartsWith(pSVar12,StringLiteral_20269/*"prefabid::"*/,(MethodInfo *)0x0);
                    /* try { // try from 036b4d54 to 037b4d5f has its CatchHandler @ 036b4edc */
            bVar6 = System_String__StartsWith(pSVar12,StringLiteral_21266/*"strike::"*/,(MethodInfo *)0x0);
            if (((bVar4) || (bVar5)) || (bVar6)) {
                    /* try { // try from 036b4d68 to 037b4d7f has its CatchHandler @ 036b4f08 */
              if ((bVar4 || bVar5) || bVar6) {
                    /* try { // try from 036b4d80 to 037b4dcf has its CatchHandler @ 036b4f28 */
                puVar2 = &StringLiteral_2422/*"<quad name="*/;
                if (!bVar4) {
                  puVar2 = &StringLiteral_2445/*"<quad name=none prefabid="*/;
                }
                puVar3 = &StringLiteral_18941/*"img::"*/;
                if (!bVar4) {
                  puVar3 = &StringLiteral_20269/*"prefabid::"*/;
                }
                if (!bVar4 && !bVar5) {
                  puVar2 = &StringLiteral_2457/*"<strike "*/;
                }
                if (!bVar4 && !bVar5) {
                  puVar3 = &StringLiteral_21266/*"strike::"*/;
                }
                pSVar12 = System_String__Replace
                                    (pSVar12,(System_String_o *)*puVar3,(System_String_o *)*puVar2,
                                     (MethodInfo *)0x0);
                if (pSVar12 == (System_String_o *)0x0) goto LAB_036b4f48;
              }
                    /* try { // try from 036b4dd8 to 037b4dff has its CatchHandler @ 036b4f1c */
              pSVar12 = System_String__Replace
                                  (pSVar12,StringLiteral_15810/*"^"*/,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
                    /* try { // try from 036b4e30 to 037b4e33 has its CatchHandler @ 036b4f14 */
                    /* try { // try from 036b4e34 to 037b4e37 has its CatchHandler @ 036b4f30 */
                    /* try { // try from 036b4e38 to 037b4e3b has its CatchHandler @ 036b4f24 */
                    /* try { // try from 036b4e3c to 037b4e83 has its CatchHandler @ 036b4eec */
              if (((pSVar12 == (System_String_o *)0x0) ||
                  (pSVar12 = System_String__Replace
                                       (pSVar12,StringLiteral_2102/*"::"*/,StringLiteral_2470/*"="*/,
                                        (MethodInfo *)0x0), pSVar12 == (System_String_o *)0x0)) ||
                 ((bVar4 = System_String__Contains(pSVar12,StringLiteral_528/*" size="*/,(MethodInfo *)0x0),
                  !bVar4 && (pSVar12 = System_String__Concat
                                                 (pSVar12,StringLiteral_529/*" size=1 "*/,(MethodInfo *)0x0),
                            pSVar12 == (System_String_o *)0x0)))) goto LAB_036b4f48;
              bVar4 = System_String__Contains(pSVar12,StringLiteral_561/*" width="*/,(MethodInfo *)0x0);
              if (!bVar4) {
                    /* try { // try from 036b4e84 to 037b4e87 has its CatchHandler @ 036b4ee8 */
                    /* try { // try from 036b4e88 to 037b4e8b has its CatchHandler @ 036b4f20 */
                    /* try { // try from 036b4e8c to 037b4e8f has its CatchHandler @ 036b4f1c */
                    /* try { // try from 036b4e90 to 037b4ed7 has its CatchHandler @ 036b4ed8 */
                pSVar12 = System_String__Concat(pSVar12,StringLiteral_562/*" width=1 "*/,(MethodInfo *)0x0);
              }
              pSVar12 = System_String__Concat(pSVar12,StringLiteral_270/*" >"*/,(MethodInfo *)0x0);
            }
            method_00 = (MethodInfo *)0x0;
            pSVar10 = System_String__Replace(pSVar10,pSVar13,pSVar12,(MethodInfo *)0x0);
            if (pSVar10 == (System_String_o *)0x0) goto LAB_036b4f48;
                    /* catch() { ... } // from try @ 036b4e90 with catch @ 036b4ed8
                       try { // try from 036b4ed8 to 037b4f47 has its CatchHandler @ 036b49b0 */
            if ((pSVar10->fields)._stringLength <= iVar1) break;
                    /* catch() { ... } // from try @ 036b4d54 with catch @ 036b4edc */
                    /* catch() { ... } // from try @ 036b4cc8 with catch @ 036b4ee0 */
                    /* catch() { ... } // from try @ 036b4cac with catch @ 036b4ee4 */
                    /* catch() { ... } // from try @ 036b4e84 with catch @ 036b4ee8 */
            method_00 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 036b4e3c with catch @ 036b4eec */
            uVar7 = System_String__IndexOf(pSVar10,0x7b,iVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036b4be0 with catch @ 036b4ef0 */
                    /* catch() { ... } // from try @ 036b4b58 with catch @ 036b4ef4 */
                    /* catch() { ... } // from try @ 036b4b44 with catch @ 036b4ef8 */
          }
        }
        pSVar10 = FDJKKAFIEFB__GFGNEFOPAGP(__this,pSVar10,JEHFOBHMGJM,method_00);
        return pSVar10;
      }
    }
  }
LAB_036b4f48:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036b4f48 to 037b4f5f has its CatchHandler @ 036b4fc4 */
  FUN_01bab8c8();
}


// ===== public float DKOAKEBKHKM()  [RVA 0x35B5208]
// FDJKKAFIEFB$$DKOAKEBKHKM @ RVA 0x35B5208

float FDJKKAFIEFB__DKOAKEBKHKM(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).DHMKKNFGGHN;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HashSet<char> LFPOONMCPAI()  [RVA 0x35B5234]
// FDJKKAFIEFB$$LFPOONMCPAI @ RVA 0x35B5234

System_Collections_Generic_HashSet_char__o *
FDJKKAFIEFB__LFPOONMCPAI(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (__this->fields)._IECIBAIEONL_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x35B523C]
// FDJKKAFIEFB$$.ctor @ RVA 0x35B523C

void FDJKKAFIEFB___ctor(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_char__o *pSVar1;
  System_Collections_Generic_HashSet_char__o **ppSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar3;
  System_Collections_Generic_List_DBNEEHGBCJD__o *__this_01;
  System_Collections_Generic_List_DBNEEHGBCJD__o **ppSVar4;
  UniRx_ReactiveCollection_GIDPGJAAOJA__o *__this_02;
  UniRx_ReactiveCollection_GIDPGJAAOJA__o **ppUVar5;
  UniRx_CompositeDisposable_o *__this_03;
  UniRx_CompositeDisposable_o **ppUVar6;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568eb0 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<char>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveCollection<GIDPGJAAOJA>__ctor__);
    FUN_01bab630(&UniRx_ReactiveCollection<GIDPGJAAOJA>_TypeInfo);
    DAT_04568eb0 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_HashSet_char__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<char>_TypeInfo,method);
  System_Collections_Generic_HashSet<char>___ctor
            (pSVar1,Method_System_Collections_Generic_HashSet<char>__ctor__);
  ppSVar2 = &(__this->fields)._MMDFLMEALLK_k__BackingField;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_char__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<char>_TypeInfo);
  System_Collections_Generic_HashSet<char>___ctor
            (pSVar1,Method_System_Collections_Generic_HashSet<char>__ctor__);
  ppSVar2 = &(__this->fields)._HDMPOOPGLIC_k__BackingField;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_char__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<char>_TypeInfo);
  System_Collections_Generic_HashSet<char>___ctor
            (pSVar1,Method_System_Collections_Generic_HashSet<char>__ctor__);
  ppSVar2 = &(__this->fields)._IECIBAIEONL_k__BackingField;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar3 = &(__this->fields).ELBMCMNELDD;
  *ppSVar3 = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  __this_01 = (System_Collections_Generic_List_DBNEEHGBCJD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DBNEEHGBCJD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<DBNEEHGBCJD>__ctor__);
  ppSVar4 = &(__this->fields).DIKCNPKCGJP;
  *ppSVar4 = __this_01;
  thunk_FUN_01c20e04(ppSVar4,__this_01);
  __this_02 = (UniRx_ReactiveCollection_GIDPGJAAOJA__o *)
              thunk_FUN_01bda818(UniRx_ReactiveCollection<GIDPGJAAOJA>_TypeInfo);
  UniRx_ReactiveCollection<object>___ctor
            ((UniRx_ReactiveCollection_T__o *)__this_02,
             Method_UniRx_ReactiveCollection<GIDPGJAAOJA>__ctor__);
  ppUVar5 = &(__this->fields).IEPHFPONOOO;
  *ppUVar5 = __this_02;
  thunk_FUN_01c20e04(ppUVar5,__this_02);
  __this_03 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_03,(MethodInfo *)0x0);
  ppUVar6 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar6 = __this_03;
  thunk_FUN_01c20e04(ppUVar6,__this_03);
  (__this->fields).DEKBMBADCIE = 1.0;
  EHOFKBDKGBK<object,_object>___ctor
            ((EHOFKBDKGBK_T__TInterface__o *)__this,
             Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>__ctor__);
  return;
}


// ===== public Font OCDIPPBPKOI()  [RVA 0x35B545C]
// FDJKKAFIEFB$$OCDIPPBPKOI @ RVA 0x35B545C

UnityEngine_Font_o * FDJKKAFIEFB__OCDIPPBPKOI(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).JMKKDKBAMMD;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TMP_FontAsset NGBPEBDOAMP()  [RVA 0x35B5488]
// FDJKKAFIEFB$$NGBPEBDOAMP @ RVA 0x35B5488

TMPro_TMP_FontAsset_o * FDJKKAFIEFB__NGBPEBDOAMP(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).GDONOAAGBEP;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string GFGNEFOPAGP(string JEGADCHPBOO, string JEHFOBHMGJM)  [RVA 0x35B4F5C]
// FDJKKAFIEFB$$GFGNEFOPAGP @ RVA 0x35B4F5C

System_String_o *
FDJKKAFIEFB__GFGNEFOPAGP
          (FDJKKAFIEFB_o *__this,System_String_o *JEGADCHPBOO,System_String_o *JEHFOBHMGJM,
          MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  uint BJODBCJIGHH;
  int32_t iVar3;
  System_String_o *pSVar4;
  long lVar5;
  System_String_o *newValue;
  MethodInfo *pMVar6;
  long lVar7;
  uint index;
  
                    /* try { // try from 036b4f60 to 037b4faf has its CatchHandler @ 036b49b0 */
  if ((DAT_04568eb1 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&StringLiteral_762/*"%%ERROR%%"*/);
                    /* try { // try from 036b4fb0 to 037b4fbf has its CatchHandler @ 036b4fc4 */
    FUN_01bab630(&StringLiteral_4313/*"CheckPercentInclusions: one symbol '%' without alias in the content of title '"*/);
                    /* try { // try from 036b4fc0 to 037b4fc7 has its CatchHandler @ 036b49b0 */
                    /* catch() { ... } // from try @ 036b4f48 with catch @ 036b4fc4
                       catch() { ... } // from try @ 036b4fb0 with catch @ 036b4fc4 */
    FUN_01bab630(&StringLiteral_756/*"%"*/);
                    /* try { // try from 036b4fc8 to 037b4fcb has its CatchHandler @ 036b4fd4 */
                    /* try { // try from 036b4fcc to 037b4fd7 has its CatchHandler @ 036b49b0 */
    FUN_01bab630(&StringLiteral_803/*"'\nTo use symbol '%' as a part of a text you must double it (i.e. %%)"*/);
                    /* catch() { ... } // from try @ 036b4fc8 with catch @ 036b4fd4 */
    DAT_04568eb1 = 1;
  }
  if (JEGADCHPBOO != (System_String_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
    BJODBCJIGHH = System_String__IndexOf(JEGADCHPBOO,0x25,(MethodInfo *)0x0);
    do {
      if (BJODBCJIGHH == 0xffffffff) {
        return JEGADCHPBOO;
      }
      index = BJODBCJIGHH + 1;
      if ((int)index < (JEGADCHPBOO->fields)._stringLength) {
        pMVar6 = (MethodInfo *)0x0;
        uVar2 = System_String__get_Chars(JEGADCHPBOO,index,(MethodInfo *)0x0);
        if (uVar2 != 0x25) goto LAB_036b506c;
        JEGADCHPBOO = System_String__Remove(JEGADCHPBOO,BJODBCJIGHH,1,(MethodInfo *)0x0);
      }
      else {
LAB_036b506c:
        if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = FDJKKAFIEFB__LKBOKHMGDFE(JEGADCHPBOO,BJODBCJIGHH,pMVar6);
        pMVar6 = (MethodInfo *)0x0;
        pSVar4 = System_String__Substring(JEGADCHPBOO,index,iVar3 + ~BJODBCJIGHH,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        lVar5 = Method_System_Array_Empty<string>__;
        if (bVar1) {
          pSVar4 = System_String__Remove(JEGADCHPBOO,BJODBCJIGHH,1,(MethodInfo *)0x0);
          if (pSVar4 == (System_String_o *)0x0) break;
          JEGADCHPBOO = System_String__Insert
                                  (pSVar4,BJODBCJIGHH,StringLiteral_762/*"%%ERROR%%"*/,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat
                             (StringLiteral_4313/*"CheckPercentInclusions: one symbol '%' without alias in the content of title '"*/,JEHFOBHMGJM,StringLiteral_803/*"'\nTo use symbol '%' as a part of a text you must double it (i.e. %%)"*/,(MethodInfo *)0x0);
          KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
          if (StringLiteral_762/*"%%ERROR%%"*/ == (System_String_o *)0x0) break;
          iVar3 = (StringLiteral_762/*"%%ERROR%%"*/->fields)._stringLength;
        }
        else {
          lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar7 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar7 = *(long *)(lVar5 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01b81620();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01b81620();
          }
          newValue = FDJKKAFIEFB__FFNEBCPLKDN
                               (__this,pSVar4,(System_String_array *)**(undefined8 **)(lVar5 + 0xb8)
                                ,pMVar6);
          pSVar4 = System_String__Concat(StringLiteral_756/*"%"*/,pSVar4,(MethodInfo *)0x0);
          JEGADCHPBOO = System_String__Replace(JEGADCHPBOO,pSVar4,newValue,(MethodInfo *)0x0);
          if (newValue == (System_String_o *)0x0) break;
          iVar3 = (newValue->fields)._stringLength;
        }
        index = iVar3 + BJODBCJIGHH;
      }
      if (JEGADCHPBOO == (System_String_o *)0x0) break;
      if ((JEGADCHPBOO->fields)._stringLength <= (int)index) {
        return JEGADCHPBOO;
      }
      pMVar6 = (MethodInfo *)(ulong)index;
      BJODBCJIGHH = System_String__IndexOf(JEGADCHPBOO,0x25,index,(MethodInfo *)0x0);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DBNEEHGBCJD JLFIDNOPECP(DBNEEHGBCJD NFDKMBAGHPD)  [RVA 0x35B5540]
// FDJKKAFIEFB$$JLFIDNOPECP @ RVA 0x35B5540

DBNEEHGBCJD_o *
FDJKKAFIEFB__JLFIDNOPECP(FDJKKAFIEFB_o *__this,DBNEEHGBCJD_o *NFDKMBAGHPD,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  DBNEEHGBCJD_o *pDVar7;
  System_Collections_Generic_List_DBNEEHGBCJD__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_Generic_List_DBNEEHGBCJD__o *pSVar11;
  
  if ((DAT_04568eb2 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo);
    DAT_04568eb2 = 1;
  }
  if (((NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0) ||
      (NFDKMBAGHPD = (__this->fields)._ELDCPOBNFJJ_k__BackingField,
      NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0)) &&
     (pSVar11 = (__this->fields).DIKCNPKCGJP,
     pSVar11 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0)) {
    pSVar8 = pSVar11->klass;
    iVar1 = (NFDKMBAGHPD->fields)._HBPAJOBFMLH_k__BackingField;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo) {
          pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
          goto LAB_036b55e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(pSVar11,
                          System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo,0);
LAB_036b55e8:
    iVar5 = (*pVVar6->methodPtr)(pSVar11,pVVar6->method);
    pSVar11 = (__this->fields).DIKCNPKCGJP;
    if (pSVar11 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
      pSVar8 = pSVar11->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo) {
            pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
            goto LAB_036b5654;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar11,System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo,0
                           );
LAB_036b5654:
      iVar1 = iVar1 + 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar1 / iVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x036b5670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pDVar7 = (DBNEEHGBCJD_o *)
               (*pVVar6->methodPtr)(pSVar11,(ulong)(uint)(iVar1 - iVar4 * iVar5),pVVar6->method);
      return pDVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator PCEOOHNIJBJ()  [RVA 0x35B5678]
// FDJKKAFIEFB$$PCEOOHNIJBJ @ RVA 0x35B5678

System_Collections_IEnumerator_o *
FDJKKAFIEFB__PCEOOHNIJBJ(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568eb3 & 1) == 0) {
    FUN_01bab630(&FDJKKAFIEFB_FJOGHDMHAIL_TypeInfo);
    DAT_04568eb3 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FDJKKAFIEFB_FJOGHDMHAIL_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public bool HCPLEOIKIEH(DBNEEHGBCJD NFDKMBAGHPD, bool HBOEDCODABJ = True, bool BEPHNFAELEI = True)  [RVA 0x35B570C]
// FDJKKAFIEFB$$HCPLEOIKIEH @ RVA 0x35B570C

bool FDJKKAFIEFB__HCPLEOIKIEH
               (FDJKKAFIEFB_o *__this,DBNEEHGBCJD_o *NFDKMBAGHPD,bool HBOEDCODABJ,bool BEPHNFAELEI,
               MethodInfo *method)

{
  bool bVar1;
  Roster_o *__this_00;
  MainSettings_o *__this_01;
  InitSettings_o *__this_02;
  MethodInfo *method_00;
  System_Action_o *pSVar2;
  DBNEEHGBCJD_o **ppDVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = NFDKMBAGHPD;
  auVar4._0_8_ = __this;
  method_00 = (MethodInfo *)(ulong)HBOEDCODABJ;
  if ((DAT_04568eb4 & 1) == 0) {
    auVar4 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568eb4 = 1;
  }
  if (NFDKMBAGHPD == (DBNEEHGBCJD_o *)0x0) {
    bVar1 = false;
  }
  else {
    if (BEPHNFAELEI) {
      FDJKKAFIEFB__PCCPIHPECMA(auVar4._0_8_,auVar4._8_8_);
    }
    ppDVar3 = &(__this->fields)._ELDCPOBNFJJ_k__BackingField;
    *ppDVar3 = NFDKMBAGHPD;
    thunk_FUN_01c20e04(ppDVar3,NFDKMBAGHPD);
    FDJKKAFIEFB__PGAOEMFNKCA(__this,*ppDVar3,method_00);
    if (HBOEDCODABJ) {
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (Roster_o *)0x0)
      {
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
        if ((*ppDVar3 == (DBNEEHGBCJD_o *)0x0) ||
           (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
           __this_00 == (Roster_o *)0x0)) goto LAB_036b58dc;
        Roster__GLMMCDPNLBG
                  (__this_00,((*ppDVar3)->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        if (__this_01 == (MainSettings_o *)0x0) goto LAB_036b58dc;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,false,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
      if ((*ppDVar3 == (DBNEEHGBCJD_o *)0x0) || (__this_02 == (InitSettings_o *)0x0)) {
LAB_036b58dc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      InitSettings__DLLHOLJPNNJ
                (__this_02,((*ppDVar3)->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).GBPDDFOIDPG;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    }
    bVar1 = true;
  }
  return bVar1;
}


// ===== internal static void GIJOGIIDEGO(HashSet<char> IIJNDCLFEFC, XmlNode AHDGNOJPPIB)  [RVA 0x35B4314]
// FDJKKAFIEFB$$GIJOGIIDEGO @ RVA 0x35B4314

void FDJKKAFIEFB__GIJOGIIDEGO
               (System_Collections_Generic_HashSet_char__o *IIJNDCLFEFC,
               System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint16_t item;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  int index;
  
  if ((DAT_04568eb5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Clear__);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568eb5 = 1;
  }
  if (IIJNDCLFEFC != (System_Collections_Generic_HashSet_char__o *)0x0) {
    System_Collections_Generic_HashSet<char>__Clear
              (IIJNDCLFEFC,Method_System_Collections_Generic_HashSet<char>_Clear__);
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      if ((pSVar1 != (System_String_o *)0x0) &&
         (pSVar1 = System_String__Replace
                             (pSVar1,StringLiteral_167/*" "*/,StringLiteral_1/*""*/,(MethodInfo *)0x0),
         pSVar1 != (System_String_o *)0x0)) {
        if ((pSVar1->fields)._stringLength < 1) {
          return;
        }
        index = 0;
        do {
          item = System_String__get_Chars(pSVar1,index,(MethodInfo *)0x0);
          System_Collections_Generic_HashSet<char>__Add
                    (IIJNDCLFEFC,item,Method_System_Collections_Generic_HashSet<char>_Add__);
          index = index + 1;
        } while (index < (pSVar1->fields)._stringLength);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AEBLGOHMFFF(Action CJNHFNHJHPE)  [RVA 0x35B5920]
// FDJKKAFIEFB$$AEBLGOHMFFF @ RVA 0x35B5920

void FDJKKAFIEFB__AEBLGOHMFFF(FDJKKAFIEFB_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_04568eb6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568eb6 = 1;
  }
  a = (__this->fields).GBPDDFOIDPG;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void PGAOEMFNKCA(DBNEEHGBCJD NFDKMBAGHPD)  [RVA 0x35B58E0]
// FDJKKAFIEFB$$PGAOEMFNKCA @ RVA 0x35B58E0

void FDJKKAFIEFB__PGAOEMFNKCA(FDJKKAFIEFB_o *__this,DBNEEHGBCJD_o *NFDKMBAGHPD,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  
  bVar1 = FDJKKAFIEFB__GCGNFLHOGPA(__this,NFDKMBAGHPD,method);
  if (NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0) {
    FDJKKAFIEFB__PGAOEMFNKCA
              (__this,(NFDKMBAGHPD->fields)._COIPKAKHDFP_k__BackingField,
               (NFDKMBAGHPD->fields)._GPEFIOMJHNN_k__BackingField,in_x3);
    DBNEEHGBCJD__FBHBFAAMLNG(NFDKMBAGHPD,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}


// ===== public float KBBCBDHBEDK()  [RVA 0x35B59BC]
// FDJKKAFIEFB$$KBBCBDHBEDK @ RVA 0x35B59BC

float FDJKKAFIEFB__KBBCBDHBEDK(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  ulong uVar1;
  DBNEEHGBCJD_o *pDVar2;
  JBEHJGDKPHL_o *pJVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong local_28;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04568eb7 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    auVar5 = FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    DAT_04568eb7 = 1;
  }
  pDVar2 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar2 != (DBNEEHGBCJD_o *)0x0) {
    pJVar3 = (pDVar2->fields)._DFMPDPJGPLL_k__BackingField;
    if (pJVar3 == (JBEHJGDKPHL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    fVar4 = (__this->fields).DEKBMBADCIE;
    local_28 = 0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_28,(pJVar3->fields).PFHPMEPMFIB,
               Method_System_Nullable<float>__ctor__);
    if ((local_28 & 0xff) != 0) {
      uVar1 = local_28 >> 0x20;
      local_28 = 0;
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&local_28,fVar4 * (float)uVar1,
                 Method_System_Nullable<float>__ctor__);
      if ((local_28 & 0xff) != 0) {
        return (float)(local_28 >> 0x20);
      }
    }
  }
  return (__this->fields).DEKBMBADCIE;
}


// ===== public bool CAKKENHNCBO()  [RVA 0x35B5A94]
// FDJKKAFIEFB$$CAKKENHNCBO @ RVA 0x35B5A94

bool FDJKKAFIEFB__CAKKENHNCBO(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (__this->fields)._LDHHEDNNHJF_k__BackingField;
}


// ===== private static int LKBOKHMGDFE(string JEGADCHPBOO, int BJODBCJIGHH)  [RVA 0x35B54B4]
// FDJKKAFIEFB$$LKBOKHMGDFE @ RVA 0x35B54B4

int32_t FDJKKAFIEFB__LKBOKHMGDFE
                  (System_String_o *JEGADCHPBOO,int32_t BJODBCJIGHH,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_04568eb8 & 1) == 0) {
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    DAT_04568eb8 = 1;
  }
  if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (JEGADCHPBOO != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOfAny
                      (JEGADCHPBOO,FDJKKAFIEFB_TypeInfo->static_fields->NIFEBLPCLFG,BJODBCJIGHH,
                       (MethodInfo *)0x0);
    if (iVar1 == -1) {
      iVar1 = (JEGADCHPBOO->fields)._stringLength;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NLMDOKJJNPL(HashSet<char> CJNHFNHJHPE)  [RVA 0x35B5A9C]
// FDJKKAFIEFB$$NLMDOKJJNPL @ RVA 0x35B5A9C

void FDJKKAFIEFB__NLMDOKJJNPL
               (FDJKKAFIEFB_o *__this,System_Collections_Generic_HashSet_char__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._IECIBAIEONL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void NALDEDNMGII(bool CJNHFNHJHPE)  [RVA 0x35B5AA4]
// FDJKKAFIEFB$$NALDEDNMGII @ RVA 0x35B5AA4

void FDJKKAFIEFB__NALDEDNMGII(FDJKKAFIEFB_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LDHHEDNNHJF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public HashSet<char> IFEEFEFJHKH()  [RVA 0x35B5AB0]
// FDJKKAFIEFB$$IFEEFEFJHKH @ RVA 0x35B5AB0

System_Collections_Generic_HashSet_char__o *
FDJKKAFIEFB__IFEEFEFJHKH(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (__this->fields)._HDMPOOPGLIC_k__BackingField;
}


// ===== public HashSet<char> MECNENEHEIA()  [RVA 0x35B5AB8]
// FDJKKAFIEFB$$MECNENEHEIA @ RVA 0x35B5AB8

System_Collections_Generic_HashSet_char__o *
FDJKKAFIEFB__MECNENEHEIA(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (__this->fields)._MMDFLMEALLK_k__BackingField;
}


// ===== private void GFPNNEPMIMJ(string CJNHFNHJHPE)  [RVA 0x35B5AC0]
// FDJKKAFIEFB$$GFPNNEPMIMJ @ RVA 0x35B5AC0

void FDJKKAFIEFB__GFPNNEPMIMJ(FDJKKAFIEFB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PDKPBHDALBH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private bool PHOGJJDCFEJ(DBNEEHGBCJD NFDKMBAGHPD)  [RVA 0x35B5AC8]
// FDJKKAFIEFB$$PHOGJJDCFEJ @ RVA 0x35B5AC8

bool FDJKKAFIEFB__PHOGJJDCFEJ(FDJKKAFIEFB_o *__this,DBNEEHGBCJD_o *NFDKMBAGHPD,MethodInfo *method)

{
  bool bVar1;
  
  if (NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((NFDKMBAGHPD->fields)._COIPKAKHDFP_k__BackingField,
                       (__this->fields)._PDKPBHDALBH_k__BackingField,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Font FLPKLFEBBCO()  [RVA 0x35B5AEC]
// FDJKKAFIEFB$$FLPKLFEBBCO @ RVA 0x35B5AEC

UnityEngine_Font_o * FDJKKAFIEFB__FLPKLFEBBCO(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).AKHNPENIJKJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Font CHNLOLHHGIF()  [RVA 0x35B5B18]
// FDJKKAFIEFB$$CHNLOLHHGIF @ RVA 0x35B5B18

UnityEngine_Font_o * FDJKKAFIEFB__CHNLOLHHGIF(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).LGJBPLPKHPN;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ICollection<GIDPGJAAOJA> LELONKBCNBD()  [RVA 0x35B5B44]
// FDJKKAFIEFB$$LELONKBCNBD @ RVA 0x35B5B44

System_Collections_Generic_ICollection_GIDPGJAAOJA__o *
FDJKKAFIEFB__LELONKBCNBD(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_ICollection_GIDPGJAAOJA__o *)(__this->fields).IEPHFPONOOO;
}


// ===== private void JEGMGLPMFCJ(HashSet<char> CJNHFNHJHPE)  [RVA 0x35B5B4C]
// FDJKKAFIEFB$$JEGMGLPMFCJ @ RVA 0x35B5B4C

void FDJKKAFIEFB__JEGMGLPMFCJ
               (FDJKKAFIEFB_o *__this,System_Collections_Generic_HashSet_char__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._MMDFLMEALLK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public TMP_FontAsset AAOAPOEEGPG()  [RVA 0x35B5B54]
// FDJKKAFIEFB$$AAOAPOEEGPG @ RVA 0x35B5B54

TMPro_TMP_FontAsset_o * FDJKKAFIEFB__AAOAPOEEGPG(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).CBFDFBILBMC;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TMP_FontAsset PDKCHFFBLEC()  [RVA 0x35B5B80]
// FDJKKAFIEFB$$PDKCHFFBLEC @ RVA 0x35B5B80

TMPro_TMP_FontAsset_o * FDJKKAFIEFB__PDKCHFFBLEC(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).AJMJJOAGGLE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EIHFEKJKPHE(HashSet<char> CJNHFNHJHPE)  [RVA 0x35B5BAC]
// FDJKKAFIEFB$$EIHFEKJKPHE @ RVA 0x35B5BAC

void FDJKKAFIEFB__EIHFEKJKPHE
               (FDJKKAFIEFB_o *__this,System_Collections_Generic_HashSet_char__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._HDMPOOPGLIC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public DBNEEHGBCJD JHCDEOMOGBP()  [RVA 0x35B5BB4]
// FDJKKAFIEFB$$JHCDEOMOGBP @ RVA 0x35B5BB4

DBNEEHGBCJD_o * FDJKKAFIEFB__JHCDEOMOGBP(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  return (__this->fields)._ELDCPOBNFJJ_k__BackingField;
}


// ===== public bool OEAAABPOILN(string JEHFOBHMGJM)  [RVA 0x35B5BBC]
// FDJKKAFIEFB$$OEAAABPOILN @ RVA 0x35B5BBC

bool FDJKKAFIEFB__OEAAABPOILN(FDJKKAFIEFB_o *__this,System_String_o *JEHFOBHMGJM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568eb9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
    DAT_04568eb9 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(JEHFOBHMGJM,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields)._ELDCPOBNFJJ_k__BackingField != (DBNEEHGBCJD_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).ELBMCMNELDD;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (__this_00,(Il2CppObject *)JEHFOBHMGJM,
                         Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__)
      ;
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private void NLEKIDMGLIF(XmlNode BKLLAGBLCDB)  [RVA 0x35B3EAC]
// FDJKKAFIEFB$$NLEKIDMGLIF @ RVA 0x35B3EAC

/* WARNING: Removing unreachable block (ram,0x036b4244) */

void FDJKKAFIEFB__NLEKIDMGLIF
               (FDJKKAFIEFB_o *__this,System_Xml_XmlNode_o *BKLLAGBLCDB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  DBNEEHGBCJD_o *__this_01;
  System_Collections_Generic_List_DBNEEHGBCJD__o *pSVar6;
  long lVar7;
  DBNEEHGBCJD_array *pDVar8;
  ulong uVar9;
  int *piVar10;
  int JJMCKHDALCF;
  System_String_o **ppSVar11;
  JBEHJGDKPHL_o *HPBCDOJPOAL;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036b3e40 with catch @ 036b3eac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036b3ea4 with catch @ 036b3eb0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036b3e24 with catch @ 036b3eb4
                        */
                    /* try { // try from 036b3ecc to 037b3ecf has its CatchHandler @ 036b3ef0 */
                    /* try { // try from 036b3ed0 to 037b3ef7 has its CatchHandler @ 036b3d90 */
  if ((DAT_04568eba & 1) == 0) {
    FUN_01bab630(&DBNEEHGBCJD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* catch() { ... } // from try @ 036b3ecc with catch @ 036b3ef0 */
                    /* try { // try from 036b3ef8 to 037b3eff has its CatchHandler @ 036b3f14 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 036b3f00 to 037b3f0b has its CatchHandler @ 036b3d90 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Add__);
                    /* try { // try from 036b3f0c to 037b3f13 has its CatchHandler @ 036b3f14 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Clear__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036b3ef8 with catch @ 036b3f14
                       catch(type#2 @ 00000000) { ... } // from try @ 036b3f0c with catch @ 036b3f14
                        */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5245/*"Default"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568eba = 1;
  }
  if ((BKLLAGBLCDB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(BKLLAGBLCDB->klass->vtable)._16_get_Attributes.methodPtr)
                            (BKLLAGBLCDB,(BKLLAGBLCDB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_5245/*"Default"*/,(MethodInfo *)0x0);
    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    ppSVar11 = &(__this->fields)._PDKPBHDALBH_k__BackingField;
    *ppSVar11 = pSVar3;
    thunk_FUN_01c20e04(ppSVar11,pSVar3);
    pSVar6 = (__this->fields).DIKCNPKCGJP;
    if (pSVar6 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
      length = (pSVar6->fields)._size;
      (pSVar6->fields)._size = 0;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
      }
      plVar4 = (long *)(*(BKLLAGBLCDB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (BKLLAGBLCDB,(BKLLAGBLCDB->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        JJMCKHDALCF = 0;
        do {
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_036b4068;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036b4068:
          uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar9 & 1) == 0) {
            plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
            if (plVar4 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_036b41e4;
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_036b41cc;
          }
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_036b40c8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_036b40c8:
          JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          HPBCDOJPOAL = (__this->fields).DEPJPOIKLFL;
          __this_01 = (DBNEEHGBCJD_o *)thunk_FUN_01bda818(DBNEEHGBCJD_TypeInfo);
          if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
               ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(JHMENEKPIBO);
            }
          }
          DBNEEHGBCJD___ctor(__this_01,JHMENEKPIBO,JJMCKHDALCF,HPBCDOJPOAL,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<DBNEEHGBCJD>_Add__;
          pSVar6 = (__this->fields).DIKCNPKCGJP;
          if (pSVar6 == (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pDVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pDVar8 == (DBNEEHGBCJD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pDVar8->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pDVar8->m_Items[(int)uVar2] = __this_01;
            thunk_FUN_01c20e04(pDVar8->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_01
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          JJMCKHDALCF = JJMCKHDALCF + 1;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_036b41cc:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036b4200;
    }
  }
LAB_036b41e4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036b4200:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== private bool GCGNFLHOGPA(DBNEEHGBCJD NFDKMBAGHPD)  [RVA 0x35B3560]
// FDJKKAFIEFB$$GCGNFLHOGPA @ RVA 0x35B3560

bool FDJKKAFIEFB__GCGNFLHOGPA(FDJKKAFIEFB_o *__this,DBNEEHGBCJD_o *NFDKMBAGHPD,MethodInfo *method)

{
  bool bVar1;
  JBEHJGDKPHL_o *__this_00;
  
  if (NFDKMBAGHPD == (DBNEEHGBCJD_o *)0x0) {
    bVar1 = false;
  }
  else {
    __this_00 = (NFDKMBAGHPD->fields)._DFMPDPJGPLL_k__BackingField;
    if (__this_00 == (JBEHJGDKPHL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = JBEHJGDKPHL__BMCHKGBBNBK(__this_00,(MethodInfo *)0x0);
    bVar1 = !bVar1;
  }
  return bVar1;
}


// ===== private void AJKJDLLNCNM(string LNGCJJNKOID, string AJNKKPBBGKG)  [RVA 0x35B2BB4]
// FDJKKAFIEFB$$AJKJDLLNCNM @ RVA 0x35B2BB4

void FDJKKAFIEFB__AJKJDLLNCNM
               (FDJKKAFIEFB_o *__this,System_String_o *LNGCJJNKOID,System_String_o *AJNKKPBBGKG,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *JLNPKGGFFDD;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568ebb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&StringLiteral_2758/*"AddLocale: detected empty localeAlias with text '"*/);
    FUN_01bab630(&StringLiteral_855/*"'! Skip..."*/);
    DAT_04568ebb = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(LNGCJJNKOID,(MethodInfo *)0x0);
  if (bVar1) {
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_2758/*"AddLocale: detected empty localeAlias with text '"*/,AJNKKPBBGKG,StringLiteral_855/*"'! Skip..."*/,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).ELBMCMNELDD;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this_00,(Il2CppObject *)LNGCJJNKOID,(Il2CppObject *)AJNKKPBBGKG,
               Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float JKADCICAPDE()  [RVA 0x35B5C3C]
// FDJKKAFIEFB$$JKADCICAPDE @ RVA 0x35B5C3C

float FDJKKAFIEFB__JKADCICAPDE(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  DBNEEHGBCJD_o *pDVar1;
  JBEHJGDKPHL_o *pJVar2;
  
  pDVar1 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar1 == (DBNEEHGBCJD_o *)0x0) {
    pJVar2 = (__this->fields).DEPJPOIKLFL;
  }
  else {
    pJVar2 = (pDVar1->fields)._DFMPDPJGPLL_k__BackingField;
  }
  if (pJVar2 != (JBEHJGDKPHL_o *)0x0) {
    return (pJVar2->fields).LPOMGFMFKND;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HCPLEOIKIEH(string DDMGAEHAGMN, bool HBOEDCODABJ = True, bool BEPHNFAELEI = True)  [RVA 0x35B5C68]
// FDJKKAFIEFB$$HCPLEOIKIEH @ RVA 0x35B5C68

bool FDJKKAFIEFB__HCPLEOIKIEH
               (FDJKKAFIEFB_o *__this,System_String_o *DDMGAEHAGMN,bool HBOEDCODABJ,bool BEPHNFAELEI
               ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  DBNEEHGBCJD_o *NFDKMBAGHPD;
  System_Collections_Generic_List_DBNEEHGBCJD__o *__this_01;
  
  if ((DAT_04568ebc & 1) == 0) {
    FUN_01bab630(&Method_FDJKKAFIEFB_KGEIAOABALL_LFAIKJHPNDH__);
    FUN_01bab630(&FDJKKAFIEFB_KGEIAOABALL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    FUN_01bab630(&System_Predicate<DBNEEHGBCJD>_TypeInfo);
    DAT_04568ebc = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FDJKKAFIEFB_KGEIAOABALL_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)DDMGAEHAGMN;
    thunk_FUN_01c20e04(__this_00 + 1,DDMGAEHAGMN);
    __this_01 = (__this->fields).DIKCNPKCGJP;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
      NFDKMBAGHPD = (DBNEEHGBCJD_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_01,match,
                               Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
      bVar1 = FDJKKAFIEFB__HCPLEOIKIEH(__this,NFDKMBAGHPD,HBOEDCODABJ,BEPHNFAELEI,method);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CLPOJCICJOF()  [RVA 0x35B32BC]
// FDJKKAFIEFB$$CLPOJCICJOF @ RVA 0x35B32BC

void FDJKKAFIEFB__CLPOJCICJOF(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  FDJKKAFIEFB__PGAOEMFNKCA(__this,(__this->fields)._ELDCPOBNFJJ_k__BackingField,in_x2);
  return;
}

