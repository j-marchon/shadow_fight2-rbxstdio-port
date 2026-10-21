// PNHGEFAOFFE$$CJJPGMCEFIN @ RVA 0x31824C4

void PNHGEFAOFFE__CJJPGMCEFIN(PNHGEFAOFFE_o *__this,MJPLIICMMGK_o *MIECPNGDLMG,MethodInfo *method)

{
  System_Lazy_PHGPILAOJBI__o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Purchasing_ProductDefinition_array *MOJLFMJLBDH;
  Core_Network_ServerProvider_o *OGNEKPMJCFN;
  DGGBFKNKEAH_o *pDVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_Product__ProductDefinition__o **ppSVar4;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  UnityEngine_Purchasing_ProductDefinition_array *pUVar5;
  UnityEngine_Purchasing_ProductDefinition_array **ppUVar6;
  System_IObservable_string__o *pSVar7;
  System_Action_T__o *pSVar8;
  System_IObservable_CFEFALDOEMD__o *pSVar9;
  System_IObservable_BKLDKOMCOPN__o *source_01;
  System_IObservable_Unit__o *source_02;
  UniRx_BehaviorSubject_DGGBFKNKEAH__o *__this_00;
  FBMGMPIFMNH_o *FMOGLBLBHCO;
  System_Func_Product__ProductDefinition__o *selector;
  undefined1 auVar10 [16];
  
  if ((DAT_045669c3 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_UniRx_BehaviorSubject<DGGBFKNKEAH>_OnNext__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<Product,_ProductDefinition>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<ProductDefinition>__);
    FUN_01bab630(&System_Func<Product,_ProductDefinition>_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<PHGPILAOJBI>_get_Value__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<BKLDKOMCOPN>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_PNHGEFAOFFE_AICJJLCHHJM__);
    FUN_01bab630(&Method_PNHGEFAOFFE_DPFHMOOGDKE__);
    FUN_01bab630(&Method_PNHGEFAOFFE_EIPLHPEPGDN__);
    FUN_01bab630(&Method_PNHGEFAOFFE_HJAIGFGKNBM__);
    FUN_01bab630(&Method_PNHGEFAOFFE_IGFINJAHHNB__);
    FUN_01bab630(&Method_PNHGEFAOFFE_IHKHIJONLCM__);
    FUN_01bab630(&Method_PNHGEFAOFFE_JCLPLBEJHGM__);
    FUN_01bab630(&Method_PNHGEFAOFFE_MDOLAKDEBCL__);
    FUN_01bab630(&Method_PNHGEFAOFFE_POGAGHOPPEI__);
    FUN_01bab630(&PNHGEFAOFFE_TypeInfo);
    FUN_01bab630(&Method_PNHGEFAOFFE_<>c_FDAJPCJCOIO__);
    FUN_01bab630(&PNHGEFAOFFE_<>c_TypeInfo);
    DAT_045669c3 = 1;
  }
  if ((__this->fields).JJCPICJKPHD != false) {
    return;
  }
  (__this->fields).JJCPICJKPHD = true;
  if ((PNHGEFAOFFE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = PNHGEFAOFFE_TypeInfo->static_fields->CCFCNKAIFBM;
  if (pSVar1 != (System_Lazy_PHGPILAOJBI__o *)0x0) {
    pIVar2 = System_Lazy<object>__get_Value
                       ((System_Lazy_object__o *)pSVar1,Method_System_Lazy<PHGPILAOJBI>_get_Value__)
    ;
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar2[1].klass = (Il2CppClass *)MIECPNGDLMG;
      auVar10 = thunk_FUN_01c20e04(pIVar2 + 1,MIECPNGDLMG);
      MOJLFMJLBDH = PNHGEFAOFFE__GLFEHJCJOPD(auVar10._0_8_,auVar10._8_8_);
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(ACHLOMELAJE_TypeInfo);
      }
      FMOGLBLBHCO = (FBMGMPIFMNH_o *)ACHLOMELAJE_TypeInfo->static_fields->HAEGJFPKIAD;
      OGNEKPMJCFN = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
      pSVar1 = PNHGEFAOFFE_TypeInfo->static_fields->CCFCNKAIFBM;
      if (pSVar1 != (System_Lazy_PHGPILAOJBI__o *)0x0) {
        pIVar2 = System_Lazy<object>__get_Value
                           ((System_Lazy_object__o *)pSVar1,
                            Method_System_Lazy<PHGPILAOJBI>_get_Value__);
        KMFFBHPKMLE__GIENGNEGHPJ
                  (FMOGLBLBHCO,MOJLFMJLBDH,(EPEKNNLDOJO_o *)OGNEKPMJCFN,(FBNLMDFIPNE_o *)pIVar2,
                   (MethodInfo *)0x0);
        if (DAT_045655e8 == '\0') {
          FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
          DAT_045655e8 = '\x01';
        }
        pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
        if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
          source = (System_Collections_Generic_IEnumerable_TSource__o *)
                   (*(pDVar3->klass->vtable)._10_NMGFAJBFPNI.methodPtr)
                             (pDVar3,(pDVar3->klass->vtable)._10_NMGFAJBFPNI.method);
          if (source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
            if ((PNHGEFAOFFE_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            selector = PNHGEFAOFFE_<>c_TypeInfo->static_fields->__9__16_0;
            if (selector == (System_Func_Product__ProductDefinition__o *)0x0) {
              if ((PNHGEFAOFFE_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              selector = (System_Func_Product__ProductDefinition__o *)
                         thunk_FUN_01bda818(System_Func<Product,_ProductDefinition>_TypeInfo);
              System_Func<object,_object>___ctor();
              ppSVar4 = &PNHGEFAOFFE_<>c_TypeInfo->static_fields->__9__16_0;
              *ppSVar4 = selector;
              thunk_FUN_01c20e04(ppSVar4,selector);
            }
            source_00 = System_Linq_Enumerable__Select<object,_object>
                                  (source,(System_Func_TSource__TResult__o *)selector,
                                   Method_System_Linq_Enumerable_Select<Product,_ProductDefinition>__
                                  );
            pUVar5 = (UnityEngine_Purchasing_ProductDefinition_array *)
                     System_Linq_Enumerable__ToArray<object>
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                                Method_System_Linq_Enumerable_ToArray<ProductDefinition>__);
            if (pUVar5 != (UnityEngine_Purchasing_ProductDefinition_array *)0x0) {
              MOJLFMJLBDH = pUVar5;
            }
            if ((source == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) ||
               (__this == (PNHGEFAOFFE_o *)0x0)) goto LAB_03282d04;
          }
          ppUVar6 = &(__this->fields).MAKBKOLFDDM;
          *ppUVar6 = MOJLFMJLBDH;
          thunk_FUN_01c20e04(ppUVar6,MOJLFMJLBDH);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pSVar7 = LKHEKMAGHDH__IMODPMIFOOL
                             (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                              (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
          System_Action<object>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             ((System_IObservable_T__o *)pSVar7,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<string>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pSVar7 = LKHEKMAGHDH__FOOGEAMKBLG
                             (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                              (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
          System_Action<object>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             ((System_IObservable_T__o *)pSVar7,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<string>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pSVar9 = LKHEKMAGHDH__MBNHFJCHHAH
                             (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                              (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
          System_Action<object>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             ((System_IObservable_T__o *)pSVar9,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          source_01 = LKHEKMAGHDH__LLFMBHNEGEM
                                (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                                 (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
          System_Action<object>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             ((System_IObservable_T__o *)source_01,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<BKLDKOMCOPN>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pSVar9 = LKHEKMAGHDH__CBFEFDALPNB
                             (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                              (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
          System_Action<object>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             ((System_IObservable_T__o *)pSVar9,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pSVar9 = LKHEKMAGHDH__FECFIDABMGI
                             (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                              (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
          System_Action<object>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             ((System_IObservable_T__o *)pSVar9,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pSVar9 = LKHEKMAGHDH__EFFANCCFJFE
                             (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                              (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
          System_Action<object>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             ((System_IObservable_T__o *)pSVar9,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pSVar9 = LKHEKMAGHDH__LJHFCDAMPJG
                             (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                              (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
          System_Action<object>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             ((System_IObservable_T__o *)pSVar9,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          source_02 = LKHEKMAGHDH__NEDPHBPCNGF
                                (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                                 (MethodInfo *)0x0);
          pSVar8 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
          System_Action<Unit>___ctor();
          pIVar2 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<Unit>
                             ((System_IObservable_T__o *)source_02,pSVar8,
                              Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar2,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          __this_00 = (__this->fields).ELFMJMIENON;
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          if (__this_00 != (UniRx_BehaviorSubject_DGGBFKNKEAH__o *)0x0) {
            UniRx_BehaviorSubject<object>__OnNext
                      ((UniRx_BehaviorSubject_T__o *)__this_00,
                       (Il2CppObject *)
                       KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                       Method_UniRx_BehaviorSubject<DGGBFKNKEAH>_OnNext__);
            return;
          }
        }
      }
    }
  }
LAB_03282d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

