// TypeDefIndex 1348
// Namespace: 
// public class MFLHNKGKEGA : HCOKCPNMKFK, FGAPCBMFKEB, IDisposable
// Fields:
//   private readonly SerialDisposable FMLPNCFMLCI; // 0x10
//   private readonly NFHJEHCAGBD CGDMPPJGIPH; // 0x18
//   private readonly ReactiveProperty<string[]> IDPIHPBEHFC; // 0x20
//   private int JLGMCFKNPAK; // 0x28

// ===== public void IELLEFEFFJD()  [RVA 0x3163F4C]
// MFLHNKGKEGA$$IELLEFEFFJD @ RVA 0x3163F4C

void MFLHNKGKEGA__IELLEFEFFJD(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  System_Action_Exception__o *onError;
  System_IDisposable_o *value;
  NFHJEHCAGBD_c *pNVar3;
  ulong uVar4;
  int32_t *piVar5;
  UniRx_SerialDisposable_o *__this_00;
  NFHJEHCAGBD_o *pNVar6;
  
  if ((DAT_0456689b & 1) == 0) {
    FUN_01bab630(&System_Action<string[]>_TypeInfo);
    FUN_01bab630(&System_Action<Exception>_TypeInfo);
    FUN_01bab630(&Method_MFLHNKGKEGA_GFDCGNNBDLH__);
    FUN_01bab630(&Method_MFLHNKGKEGA_MMFLJBDEHAD__);
    FUN_01bab630(&NFHJEHCAGBD_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string[]>__);
    DAT_0456689b = 1;
  }
  pNVar6 = (__this->fields).CGDMPPJGIPH;
  if (pNVar6 != (NFHJEHCAGBD_o *)0x0) {
    pNVar3 = pNVar6->klass;
    __this_00 = (__this->fields).FMLPNCFMLCI;
    uVar1._0_1_ = (pNVar3->_2).rank;
    uVar1._1_1_ = (pNVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pNVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)NFHJEHCAGBD_TypeInfo) {
          pVVar2 = pNVar3->vtable + *piVar5;
          goto LAB_0326404c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pNVar6,NFHJEHCAGBD_TypeInfo,0);
LAB_0326404c:
    source = (System_IObservable_T__o *)(*pVVar2->methodPtr)(pNVar6,pVVar2->method);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string[]>_TypeInfo);
    System_Action<object>___ctor();
    onError = (System_Action_Exception__o *)thunk_FUN_01bda818(System_Action<Exception>_TypeInfo);
    System_Action<object>___ctor();
    value = UniRx_ObservableExtensions__Subscribe<object>
                      (source,onNext,onError,Method_UniRx_ObservableExtensions_Subscribe<string[]>__
                      );
    if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KAJLNAAGGED()  [RVA 0x3163F50]
// MFLHNKGKEGA$$KAJLNAAGGED @ RVA 0x3163F50

void MFLHNKGKEGA__KAJLNAAGGED(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  System_Action_Exception__o *onError;
  System_IDisposable_o *value;
  NFHJEHCAGBD_c *pNVar3;
  ulong uVar4;
  int32_t *piVar5;
  UniRx_SerialDisposable_o *__this_00;
  NFHJEHCAGBD_o *pNVar6;
  
  if ((DAT_0456689b & 1) == 0) {
    FUN_01bab630(&System_Action<string[]>_TypeInfo);
    FUN_01bab630(&System_Action<Exception>_TypeInfo);
    FUN_01bab630(&Method_MFLHNKGKEGA_GFDCGNNBDLH__);
    FUN_01bab630(&Method_MFLHNKGKEGA_MMFLJBDEHAD__);
    FUN_01bab630(&NFHJEHCAGBD_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string[]>__);
    DAT_0456689b = 1;
  }
  pNVar6 = (__this->fields).CGDMPPJGIPH;
  if (pNVar6 != (NFHJEHCAGBD_o *)0x0) {
    pNVar3 = pNVar6->klass;
    __this_00 = (__this->fields).FMLPNCFMLCI;
    uVar1._0_1_ = (pNVar3->_2).rank;
    uVar1._1_1_ = (pNVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pNVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)NFHJEHCAGBD_TypeInfo) {
          pVVar2 = pNVar3->vtable + *piVar5;
          goto LAB_0326404c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pNVar6,NFHJEHCAGBD_TypeInfo,0);
LAB_0326404c:
    source = (System_IObservable_T__o *)(*pVVar2->methodPtr)(pNVar6,pVVar2->method);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string[]>_TypeInfo);
    System_Action<object>___ctor();
    onError = (System_Action_Exception__o *)thunk_FUN_01bda818(System_Action<Exception>_TypeInfo);
    System_Action<object>___ctor();
    value = UniRx_ObservableExtensions__Subscribe<object>
                      (source,onNext,onError,Method_UniRx_ObservableExtensions_Subscribe<string[]>__
                      );
    if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KJKKNEIENKA()  [RVA 0x31640D8]
// MFLHNKGKEGA$$KJKKNEIENKA @ RVA 0x31640D8

void MFLHNKGKEGA__KJKKNEIENKA(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  MethodInfo *extraout_x1;
  UniRx_ReactiveProperty_string____o *pUVar5;
  System_String_array *pSVar6;
  
  if ((DAT_0456689c & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    DAT_0456689c = 1;
    method = extraout_x1;
  }
  bVar4 = MFLHNKGKEGA__BNNOJJPPGBM(__this,method);
  if (bVar4) {
    pUVar5 = (__this->fields).IDPIHPBEHFC;
    if ((pUVar5 == (UniRx_ReactiveProperty_string____o *)0x0) ||
       (pSVar6 = (pUVar5->fields).value, pSVar6 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (int)pSVar6->max_length;
    iVar1 = (__this->fields).JLGMCFKNPAK + 1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    (__this->fields).JLGMCFKNPAK = iVar1 - iVar3 * iVar2;
  }
  return;
}


// ===== private void GFDCGNNBDLH(string[] JLFFJLLAEEB)  [RVA 0x31641AC]
// MFLHNKGKEGA$$GFDCGNNBDLH @ RVA 0x31641AC

void MFLHNKGKEGA__GFDCGNNBDLH
               (MFLHNKGKEGA_o *__this,System_String_array *JLFFJLLAEEB,MethodInfo *method)

{
  UniRx_ReactiveProperty_string____o *__this_00;
  
  if ((DAT_0456689d & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_set_Value__);
    DAT_0456689d = 1;
  }
  __this_00 = (__this->fields).IDPIHPBEHFC;
  if (__this_00 != (UniRx_ReactiveProperty_string____o *)0x0) {
    UniRx_ReactiveProperty<object>__set_Value
              ((UniRx_ReactiveProperty_T__o *)__this_00,&JLFFJLLAEEB->obj,
               Method_UniRx_ReactiveProperty<string[]>_set_Value__);
    (__this->fields).JLGMCFKNPAK = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IObservable<Unit> HLMFKEBLCFN()  [RVA 0x316420C]
// MFLHNKGKEGA$$HLMFKEBLCFN @ RVA 0x316420C

System_IObservable_Unit__o * MFLHNKGKEGA__HLMFKEBLCFN(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  System_Func_string____bool__o **ppSVar1;
  System_IObservable_T__o *source;
  System_IObservable_Unit__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  UniRx_ReactiveProperty_string____o *source_00;
  System_Func_string____bool__o *predicate;
  
  if ((DAT_0456689e & 1) == 0) {
    FUN_01bab630(&System_Func<string[],_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_AsUnitObservable<string[]>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<string[]>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_MFLHNKGKEGA_<>c_MHFLDBDFDJB__);
    FUN_01bab630(&MFLHNKGKEGA_<>c_TypeInfo);
    DAT_0456689e = 1;
    method = extraout_x1;
  }
  source_00 = (__this->fields).IDPIHPBEHFC;
  if ((MFLHNKGKEGA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MFLHNKGKEGA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = MFLHNKGKEGA_<>c_TypeInfo->static_fields->__9__11_0;
  if (predicate == (System_Func_string____bool__o *)0x0) {
    if ((MFLHNKGKEGA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MFLHNKGKEGA_<>c_TypeInfo,method);
    }
    predicate = (System_Func_string____bool__o *)
                thunk_FUN_01bda818(System_Func<string[],_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &MFLHNKGKEGA_<>c_TypeInfo->static_fields->__9__11_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
    method = extraout_x1_01;
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  source = UniRx_Observable__Where<object>
                     ((System_IObservable_T__o *)source_00,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<string[]>__);
  pSVar2 = UniRx_Observable__AsUnitObservable<object>
                     (source,Method_UniRx_Observable_AsUnitObservable<string[]>__);
  return pSVar2;
}


// ===== private void MMFLJBDEHAD(Exception BPKHJMDEHED)  [RVA 0x3164348]
// MFLHNKGKEGA$$MMFLJBDEHAD @ RVA 0x3164348

void MFLHNKGKEGA__MMFLJBDEHAD
               (MFLHNKGKEGA_o *__this,System_Exception_o *BPKHJMDEHED,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  
  if ((DAT_0456689f & 1) == 0) {
    FUN_01bab630(&StringLiteral_6804/*"GetMirrors failed. Details:\n{0}"*/);
    DAT_0456689f = 1;
  }
  JLNPKGGFFDD = System_String__Format
                          (StringLiteral_6804/*"GetMirrors failed. Details:\n{0}"*/,(Il2CppObject *)BPKHJMDEHED,(MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== public bool DNFKCGGGJFB(string CJFAPGEEPLM)  [RVA 0x31643B0]
// MFLHNKGKEGA$$DNFKCGGGJFB @ RVA 0x31643B0

bool MFLHNKGKEGA__DNFKCGGGJFB(MFLHNKGKEGA_o *__this,System_String_o *CJFAPGEEPLM,MethodInfo *method)

{
  bool bVar1;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *extraout_x1;
  UniRx_ReactiveProperty_string____o *pUVar2;
  System_String_array *source;
  
  if ((DAT_045668a0 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<string>__);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    FUN_01bab630(&Method_System_String_StartsWith__);
    DAT_045668a0 = 1;
    CJFAPGEEPLM = (System_String_o *)extraout_x1;
  }
  bVar1 = MFLHNKGKEGA__BNNOJJPPGBM(__this,(MethodInfo *)CJFAPGEEPLM);
  if (bVar1) {
    pUVar2 = (__this->fields).IDPIHPBEHFC;
    if (pUVar2 != (UniRx_ReactiveProperty_string____o *)0x0) {
      source = (pUVar2->fields).value;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      bVar1 = System_Linq_Enumerable__Any<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                         Method_System_Linq_Enumerable_Any<string>__);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== public void .ctor(NFHJEHCAGBD MMOHDGFFADJ)  [RVA 0x316447C]
// MFLHNKGKEGA$$.ctor @ RVA 0x316447C

void MFLHNKGKEGA___ctor(MFLHNKGKEGA_o *__this,NFHJEHCAGBD_o *MMOHDGFFADJ,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_string____o *__this_01;
  UniRx_ReactiveProperty_string____o **ppUVar1;
  NFHJEHCAGBD_o **ppNVar2;
  
  if ((DAT_045668a1 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<string[]>_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_045668a1 = 1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).FMLPNCFMLCI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_ReactiveProperty_string____o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<string[]>_TypeInfo);
  UniRx_ReactiveProperty<object>___ctor
            ((UniRx_ReactiveProperty_T__o *)__this_01,
             Method_UniRx_ReactiveProperty<string[]>__ctor__);
  ppUVar1 = &(__this->fields).IDPIHPBEHFC;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).CGDMPPJGIPH;
  *ppNVar2 = MMOHDGFFADJ;
  thunk_FUN_01c20e04(ppNVar2,MMOHDGFFADJ);
  return;
}


// ===== public bool MJDCKODLHLK()  [RVA 0x3164558]
// MFLHNKGKEGA$$MJDCKODLHLK @ RVA 0x3164558

bool MFLHNKGKEGA__MJDCKODLHLK(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  bool bVar1;
  UniRx_ReactiveProperty_string____o *pUVar2;
  System_String_array *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_045668a2 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    DAT_045668a2 = 1;
  }
  pUVar2 = (__this->fields).IDPIHPBEHFC;
  if (pUVar2 != (UniRx_ReactiveProperty_string____o *)0x0) {
    pSVar3 = (pUVar2->fields).value;
    if (pSVar3 == (System_String_array *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = 0 < (int)pSVar3->max_length;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== public string AFAMFABPLFH()  [RVA 0x31645B8]
// MFLHNKGKEGA$$AFAMFABPLFH @ RVA 0x31645B8

System_String_o * MFLHNKGKEGA__AFAMFABPLFH(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  UniRx_ReactiveProperty_string____o *pUVar4;
  System_String_array *pSVar5;
  
  if ((DAT_045668a3 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    DAT_045668a3 = 1;
    method = extraout_x1;
  }
  bVar2 = MFLHNKGKEGA__BNNOJJPPGBM(__this,method);
  if (bVar2) {
    pUVar4 = (__this->fields).IDPIHPBEHFC;
    if ((pUVar4 == (UniRx_ReactiveProperty_string____o *)0x0) ||
       (pSVar5 = (pUVar4->fields).value, pSVar5 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields).JLGMCFKNPAK;
    if ((uint)pSVar5->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar3 = pSVar5->m_Items[(int)uVar1];
  }
  else {
    pSVar3 = (System_String_o *)0x0;
  }
  return pSVar3;
}


// ===== public void Dispose()  [RVA 0x3164634]
// MFLHNKGKEGA$$Dispose @ RVA 0x3164634

void MFLHNKGKEGA__Dispose(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_string____o *__this_01;
  
  if ((DAT_045668a4 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_Dispose__);
    DAT_045668a4 = 1;
  }
  __this_00 = (__this->fields).FMLPNCFMLCI;
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IDPIHPBEHFC;
  if (__this_01 != (UniRx_ReactiveProperty_string____o *)0x0) {
    UniRx_ReactiveProperty<object>__Dispose
              ((UniRx_ReactiveProperty_T__o *)__this_01,
               Method_UniRx_ReactiveProperty<string[]>_Dispose__);
    return;
  }
  return;
}


// ===== public void OPFOIDJHPIH(string CJNHFNHJHPE)  [RVA 0x316469C]
// MFLHNKGKEGA$$OPFOIDJHPIH @ RVA 0x316469C

void MFLHNKGKEGA__OPFOIDJHPIH(MFLHNKGKEGA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  int32_t iVar1;
  UniRx_ReactiveProperty_string____o *pUVar2;
  
  if ((DAT_045668a5 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_IndexOf<string>__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    DAT_045668a5 = 1;
  }
  pUVar2 = (__this->fields).IDPIHPBEHFC;
  if ((pUVar2 != (UniRx_ReactiveProperty_string____o *)0x0) &&
     (iVar1 = System_Array__IndexOf<object>
                        ((System_Object_array *)(pUVar2->fields).value,(Il2CppObject *)CJNHFNHJHPE,
                         Method_System_Array_IndexOf<string>__), -1 < iVar1)) {
    (__this->fields).JLGMCFKNPAK = iVar1;
  }
  return;
}


// ===== private bool BNNOJJPPGBM()  [RVA 0x3164148]
// MFLHNKGKEGA$$BNNOJJPPGBM @ RVA 0x3164148

bool MFLHNKGKEGA__BNNOJJPPGBM(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045668a6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13953/*"Trying to access mirrors before set!"*/);
    DAT_045668a6 = 1;
    method = extraout_x1;
  }
  bVar1 = MFLHNKGKEGA__MJDCKODLHLK(__this,method);
  if (!bVar1) {
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_13953/*"Trying to access mirrors before set!"*/,(MethodInfo *)0x0);
  }
  return bVar1;
}

