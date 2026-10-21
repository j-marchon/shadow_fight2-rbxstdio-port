// TypeDefIndex 2705
// Namespace: 
// public class NHOILKKCIMI : IDisposable
// Fields:
//   private readonly HashSet<LogType> IEJNCANONEC; // 0x10
//   private readonly int CIENNBPAEGH; // 0x18
//   private readonly int OHMHCOBHPCG; // 0x1C
//   private readonly KLPJOKOFLJD GAHDPKPIMHK; // 0x20
//   private readonly EOJBGBDLBKJ MOIKNMBMBBO; // 0x28
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x30

// ===== private void FAENACIILOH(NHOILKKCIMI.BGFGPENCLEA FEPLAGOGJNL)  [RVA 0x33CF92C]
// NHOILKKCIMI$$FAENACIILOH @ RVA 0x33CF92C

void NHOILKKCIMI__FAENACIILOH
               (NHOILKKCIMI_o *__this,NHOILKKCIMI_BGFGPENCLEA_o *FEPLAGOGJNL,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  KLPJOKOFLJD_o *__this_00;
  Newtonsoft_Json_Linq_JObject_o *__this_01;
  Newtonsoft_Json_Linq_JToken_o *pNVar4;
  System_Exception_o *__this_02;
  VirtualInvokeData *pVVar5;
  MethodInfo *in_x4;
  EOJBGBDLBKJ_c *pEVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o **ppSVar9;
  EOJBGBDLBKJ_o *pEVar10;
  undefined8 local_60;
  NHOILKKCIMI_BGFGPENCLEA_o **ppNStack_58;
  undefined4 *local_50;
  NHOILKKCIMI_o **ppNStack_48;
  char *local_40;
  undefined4 local_38;
  char local_34 [4];
  NHOILKKCIMI_BGFGPENCLEA_o *local_30;
  NHOILKKCIMI_o *local_28;
  
  local_30 = FEPLAGOGJNL;
  local_28 = __this;
  if ((DAT_04567e52 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&System_Exception_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Newtonsoft_Json_Linq_JObject_TypeInfo);
    FUN_01bab630(&Newtonsoft_Json_Linq_JToken_TypeInfo);
    FUN_01bab630(&StringLiteral_21600/*"trc"*/);
    FUN_01bab630(&StringLiteral_8992/*"Message size is too big : ({0}) or we got an exception and it can't be logged!"*/);
    FUN_01bab630(&StringLiteral_19767/*"msg"*/);
    DAT_04567e52 = 1;
  }
  ppNStack_58 = &local_30;
  local_50 = &local_38;
  ppNStack_48 = &local_28;
  local_40 = local_34;
  local_38 = 0;
  local_34[0] = '\x01';
  local_60 = 0;
  if (FEPLAGOGJNL == (NHOILKKCIMI_BGFGPENCLEA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppSVar9 = &(FEPLAGOGJNL->fields).JLGDKAJFDNB;
  pSVar3 = NHOILKKCIMI__CIHMPKNAGDI
                     (__this,(FEPLAGOGJNL->fields).OFONONEILPE,*ppSVar9,(__this->fields).CIENNBPAEGH
                      ,in_x4);
  *ppSVar9 = pSVar3;
  thunk_FUN_01c20e04(ppSVar9);
  FUN_01b492c8(&local_60);
  if (local_34[0] == '\0') {
    return;
  }
  if ((local_30 != (NHOILKKCIMI_BGFGPENCLEA_o *)0x0) &&
     (__this_00 = (local_28->fields).GAHDPKPIMHK, __this_00 != (KLPJOKOFLJD_o *)0x0)) {
    bVar2 = KLPJOKOFLJD__LFENGGKOJDO
                      (__this_00,(local_30->fields).OFONONEILPE,(local_30->fields).JLGDKAJFDNB,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    __this_01 = (Newtonsoft_Json_Linq_JObject_o *)
                thunk_FUN_01bda818(Newtonsoft_Json_Linq_JObject_TypeInfo);
    Newtonsoft_Json_Linq_JObject___ctor(__this_01,(MethodInfo *)0x0);
    if (local_30 != (NHOILKKCIMI_BGFGPENCLEA_o *)0x0) {
      pSVar3 = (local_30->fields).OFONONEILPE;
      if ((Newtonsoft_Json_Linq_JToken_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit(pSVar3,(MethodInfo *)0x0);
      if ((__this_01 != (Newtonsoft_Json_Linq_JObject_o *)0x0) &&
         (Newtonsoft_Json_Linq_JObject__Add(__this_01,StringLiteral_19767/*"msg"*/,pNVar4,(MethodInfo *)0x0),
         local_30 != (NHOILKKCIMI_BGFGPENCLEA_o *)0x0)) {
        pNVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit
                           ((local_30->fields).JLGDKAJFDNB,(MethodInfo *)0x0);
        Newtonsoft_Json_Linq_JObject__Add(__this_01,StringLiteral_21600/*"trc"*/,pNVar4,(MethodInfo *)0x0);
        pEVar10 = (local_28->fields).MOIKNMBMBBO;
        pSVar3 = (System_String_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        __this_02 = (System_Exception_o *)thunk_FUN_01bda818(System_Exception_TypeInfo);
        System_Exception___ctor(__this_02,pSVar3,(MethodInfo *)0x0);
        if (pEVar10 != (EOJBGBDLBKJ_o *)0x0) {
          pEVar6 = pEVar10->klass;
          uVar1._0_1_ = (pEVar6->_2).rank;
          uVar1._1_1_ = (pEVar6->_2).minimumAlignment;
          uVar7 = (ulong)uVar1;
          if (uVar7 != 0) {
            piVar8 = &((pEVar6->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
                pVVar5 = pEVar6->vtable + (*piVar8 + 4);
                goto LAB_034cfb80;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pEVar10,EOJBGBDLBKJ_TypeInfo,4);
LAB_034cfb80:
          (*pVVar5->methodPtr)(pEVar10,__this_02,pVVar5->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(EOJBGBDLBKJ LDFILBCELJC, int EMHMMKODGBL, int DJBOCGOOACA = 2147483647)  [RVA 0x33CFE38]
// NHOILKKCIMI$$.ctor @ RVA 0x33CFE38

void NHOILKKCIMI___ctor(NHOILKKCIMI_o *__this,EOJBGBDLBKJ_o *LDFILBCELJC,int32_t EMHMMKODGBL,
                       int32_t DJBOCGOOACA,MethodInfo *method)

{
  System_Collections_Generic_HashSet_LogType__o *__this_00;
  KLPJOKOFLJD_o *__this_01;
  KLPJOKOFLJD_o **ppKVar1;
  UniRx_CompositeDisposable_o *__this_02;
  UniRx_CompositeDisposable_o **ppUVar2;
  EOJBGBDLBKJ_o **ppEVar3;
  
                    /* try { // try from 034cfe5c to 035cfe63 has its CatchHandler @ 034cfef4 */
  if ((DAT_04567e53 & 1) == 0) {
                    /* try { // try from 034cfe78 to 035cfe83 has its CatchHandler @ 034cfee4 */
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>_Add__);
                    /* try { // try from 034cfe94 to 035cfe9b has its CatchHandler @ 034cfef0 */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<LogType>_TypeInfo);
                    /* try { // try from 034cfeac to 035cfeb3 has its CatchHandler @ 034cfee8 */
    FUN_01bab630(&KLPJOKOFLJD_TypeInfo);
                    /* try { // try from 034cfeb4 to 035cfed3 has its CatchHandler @ 034cfd9c */
    DAT_04567e53 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_LogType__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<LogType>_TypeInfo);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             Method_System_Collections_Generic_HashSet<LogType>__ctor__);
  if (__this_00 != (System_Collections_Generic_HashSet_LogType__o *)0x0) {
                    /* try { // try from 034cfed4 to 035cfed7 has its CatchHandler @ 034cfeec */
                    /* try { // try from 034cfed8 to 035cfedb has its CatchHandler @ 034cfee0 */
                    /* try { // try from 034cfedc to 035cff0b has its CatchHandler @ 034cfd9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfed8 with catch @ 034cfee0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfe78 with catch @ 034cfee4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfeac with catch @ 034cfee8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfed4 with catch @ 034cfeec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfe94 with catch @ 034cfef0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cfe5c with catch @ 034cfef4
                        */
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,1,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
                    /* try { // try from 034cff0c to 035cff0f has its CatchHandler @ 034cff64 */
                    /* try { // try from 034cff10 to 035cff73 has its CatchHandler @ 034cfd9c */
    (__this->fields).IEJNCANONEC = __this_00;
    thunk_FUN_01c20e04(&__this->fields,__this_00);
    __this_01 = (KLPJOKOFLJD_o *)thunk_FUN_01bda818(KLPJOKOFLJD_TypeInfo);
    KLPJOKOFLJD___ctor(__this_01,(MethodInfo *)0x0);
    ppKVar1 = &(__this->fields).GAHDPKPIMHK;
    *ppKVar1 = __this_01;
    thunk_FUN_01c20e04(ppKVar1,__this_01);
    __this_02 = (UniRx_CompositeDisposable_o *)
                thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
    UniRx_CompositeDisposable___ctor(__this_02,(MethodInfo *)0x0);
    ppUVar2 = &(__this->fields).BNAIPPCOGPE;
    *ppUVar2 = __this_02;
    thunk_FUN_01c20e04(ppUVar2,__this_02);
                    /* catch() { ... } // from try @ 034cff0c with catch @ 034cff64 */
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    ppEVar3 = &(__this->fields).MOIKNMBMBBO;
    *ppEVar3 = LDFILBCELJC;
                    /* try { // try from 034cff74 to 035cff7b has its CatchHandler @ 034cff90 */
                    /* try { // try from 034cff7c to 035cff87 has its CatchHandler @ 034cfd9c */
    thunk_FUN_01c20e04(ppEVar3,LDFILBCELJC);
    (__this->fields).CIENNBPAEGH = EMHMMKODGBL;
    (__this->fields).OHMHCOBHPCG = DJBOCGOOACA;
                    /* try { // try from 034cff88 to 035cff8f has its CatchHandler @ 034cff90 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034cff74 with catch @ 034cff90
                       catch(type#2 @ 00000000) { ... } // from try @ 034cff88 with catch @ 034cff90
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool KHJFFKKHPLA(NHOILKKCIMI.BGFGPENCLEA FEPLAGOGJNL)  [RVA 0x33CFFA0]
// NHOILKKCIMI$$KHJFFKKHPLA @ RVA 0x33CFFA0

bool NHOILKKCIMI__KHJFFKKHPLA
               (NHOILKKCIMI_o *__this,NHOILKKCIMI_BGFGPENCLEA_o *FEPLAGOGJNL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_LogType__o *__this_00;
  
  if ((DAT_04567e54 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>_Contains__);
    DAT_04567e54 = 1;
  }
  if ((FEPLAGOGJNL != (NHOILKKCIMI_BGFGPENCLEA_o *)0x0) &&
     (__this_00 = (__this->fields).IEJNCANONEC,
     __this_00 != (System_Collections_Generic_HashSet_LogType__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this_00,
                       (FEPLAGOGJNL->fields).GBGNIECFNHD,
                       Method_System_Collections_Generic_HashSet<LogType>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static int FBNBJNHDCKG(string NONPLOOOOAG, string GNLGLGHFLDD, LogType EKOFPOOMPLK)  [RVA 0x33CFFFC]
// NHOILKKCIMI$$FBNBJNHDCKG @ RVA 0x33CFFFC

int32_t NHOILKKCIMI__FBNBJNHDCKG
                  (System_String_o *NONPLOOOOAG,System_String_o *GNLGLGHFLDD,int32_t EKOFPOOMPLK,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if (NONPLOOOOAG != (System_String_o *)0x0) {
    if ((NONPLOOOOAG->fields)._stringLength + EKOFPOOMPLK == 2) {
      iVar1 = 0;
    }
    else {
      if (GNLGLGHFLDD == (System_String_o *)0x0) goto LAB_034d002c;
      iVar1 = (GNLGLGHFLDD->fields)._stringLength;
    }
    return iVar1;
  }
LAB_034d002c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIMAJOGGBHM()  [RVA 0x33D0030]
// NHOILKKCIMI$$GIMAJOGGBHM @ RVA 0x33D0030

void NHOILKKCIMI__GIMAJOGGBHM(NHOILKKCIMI_o *__this,MethodInfo *method)

{
  System_Func_Action_NHOILKKCIMI_BGFGPENCLEA___Application_LogCallback__o **ppSVar1;
  System_Action_Application_LogCallback__o **ppSVar2;
  System_IObservable_TEventArgs__o *source;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  System_Func_Action_NHOILKKCIMI_BGFGPENCLEA___Application_LogCallback__o *conversion;
  System_Action_Application_LogCallback__o *addHandler;
  System_Action_Application_LogCallback__o *removeHandler;
  
  if ((DAT_04567e55 & 1) == 0) {
    FUN_01bab630(&System_Action<Application_LogCallback>_TypeInfo);
    FUN_01bab630(&System_Action<NHOILKKCIMI_BGFGPENCLEA>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<Action<NHOILKKCIMI_BGFGPENCLEA>,_Application_LogCallback>_TypeInfo);
    FUN_01bab630(&System_Func<NHOILKKCIMI_BGFGPENCLEA,_bool>_TypeInfo);
    FUN_01bab630(&Method_NHOILKKCIMI_FAENACIILOH__);
    FUN_01bab630(&Method_NHOILKKCIMI_KHJFFKKHPLA__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<NHOILKKCIMI_BGFGPENCLEA>__);
    FUN_01bab630(&
                 Method_UniRx_Observable_FromEvent<Application_LogCallback,_NHOILKKCIMI_BGFGPENCLEA>__
                );
    FUN_01bab630(&Method_UniRx_Observable_Where<NHOILKKCIMI_BGFGPENCLEA>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_NHOILKKCIMI_<>c_EJCCNALLMGH__);
    FUN_01bab630(&Method_NHOILKKCIMI_<>c_IBCEAIKMPAB__);
    FUN_01bab630(&Method_NHOILKKCIMI_<>c_OAIAFKMMCFB__);
    FUN_01bab630(&NHOILKKCIMI_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04567e55 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  conversion = NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_0;
  if (conversion == (System_Func_Action_NHOILKKCIMI_BGFGPENCLEA___Application_LogCallback__o *)0x0)
  {
    if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    conversion = (System_Func_Action_NHOILKKCIMI_BGFGPENCLEA___Application_LogCallback__o *)
                 thunk_FUN_01bda818(
                                   System_Func<Action<NHOILKKCIMI_BGFGPENCLEA>,_Application_LogCallback>_TypeInfo
                                   );
    System_Func<object,_object>___ctor();
    ppSVar1 = &NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = conversion;
    thunk_FUN_01c20e04(ppSVar1,conversion);
  }
  if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  addHandler = NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_1;
  if (addHandler == (System_Action_Application_LogCallback__o *)0x0) {
    if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = (System_Action_Application_LogCallback__o *)
                 thunk_FUN_01bda818(System_Action<Application_LogCallback>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_1;
    *ppSVar2 = addHandler;
    thunk_FUN_01c20e04(ppSVar2,addHandler);
  }
  if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  removeHandler = NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_2;
  if (removeHandler == (System_Action_Application_LogCallback__o *)0x0) {
    if ((NHOILKKCIMI_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034d0260 to 035d0357 has its CatchHandler @ 034d0260
                       catch() { ... } // from try @ 034d0260 with catch @ 034d0260
                       catch() { ... } // from try @ 034d0380 with catch @ 034d0260
                       catch() { ... } // from try @ 034d03b0 with catch @ 034d0260
                       catch() { ... } // from try @ 034d03dc with catch @ 034d0260
                       catch() { ... } // from try @ 034d0448 with catch @ 034d0260 */
      thunk_FUN_01ba7564();
    }
    removeHandler =
         (System_Action_Application_LogCallback__o *)
         thunk_FUN_01bda818(System_Action<Application_LogCallback>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &NHOILKKCIMI_<>c_TypeInfo->static_fields->__9__8_2;
    *ppSVar2 = removeHandler;
    thunk_FUN_01c20e04(ppSVar2,removeHandler);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromEvent<object,_object>
                     ((System_Func_Action_TEventArgs___TDelegate__o *)conversion,
                      (System_Action_TDelegate__o *)addHandler,
                      (System_Action_TDelegate__o *)removeHandler,
                      Method_UniRx_Observable_FromEvent<Application_LogCallback,_NHOILKKCIMI_BGFGPENCLEA>__
                     );
  predicate = (System_Func_T__bool__o *)
              thunk_FUN_01bda818(System_Func<NHOILKKCIMI_BGFGPENCLEA,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  source_00 = UniRx_Observable__Where<object>
                        ((System_IObservable_T__o *)source,predicate,
                         Method_UniRx_Observable_Where<NHOILKKCIMI_BGFGPENCLEA>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<NHOILKKCIMI_BGFGPENCLEA>_TypeInfo)
  ;
                    /* try { // try from 034d0358 to 035d035f has its CatchHandler @ 034d03c0 */
  System_Action<object>___ctor();
                    /* try { // try from 034d036c to 035d0373 has its CatchHandler @ 034d03b4 */
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<object>
                         (source_00,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<NHOILKKCIMI_BGFGPENCLEA>__);
                    /* try { // try from 034d0374 to 035d037f has its CatchHandler @ 034d03b8 */
                    /* try { // try from 034d0380 to 035d03ab has its CatchHandler @ 034d0260 */
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== private string CIHMPKNAGDI(string NONPLOOOOAG, string GNLGLGHFLDD, int EMHMMKODGBL)  [RVA 0x33CFCF4]
// NHOILKKCIMI$$CIHMPKNAGDI @ RVA 0x33CFCF4

System_String_o *
NHOILKKCIMI__CIHMPKNAGDI
          (NHOILKKCIMI_o *__this,System_String_o *NONPLOOOOAG,System_String_o *GNLGLGHFLDD,
          int32_t EMHMMKODGBL,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Char_array *separator;
  System_String_array *pSVar4;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  System_Object_array *source;
  int iVar6;
  uint uVar7;
  uint count;
  
  if ((DAT_04567e56 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Take<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
    DAT_04567e56 = 1;
  }
  pSVar3 = System_Environment__get_NewLine((MethodInfo *)0x0);
  if ((pSVar3 != (System_String_o *)0x0) &&
     (separator = System_String__ToCharArray(pSVar3,(MethodInfo *)0x0),
     GNLGLGHFLDD != (System_String_o *)0x0)) {
    pSVar4 = System_String__Split(GNLGLGHFLDD,separator,(MethodInfo *)0x0);
    pSVar5 = System_Linq_Enumerable__Take<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,EMHMMKODGBL,
                        Method_System_Linq_Enumerable_Take<string>__);
    source = System_Linq_Enumerable__ToArray<object>
                       (pSVar5,Method_System_Linq_Enumerable_ToArray<string>__);
    if ((NONPLOOOOAG != (System_String_o *)0x0) && (source != (System_Object_array *)0x0)) {
      uVar2 = (uint)source->max_length;
                    /* try { // try from 034cfd9c to 035cfe5b has its CatchHandler @ 034cfd9c
                       catch() { ... } // from try @ 034cfd9c with catch @ 034cfd9c
                       catch() { ... } // from try @ 034cfeb4 with catch @ 034cfd9c
                       catch() { ... } // from try @ 034cfedc with catch @ 034cfd9c
                       catch() { ... } // from try @ 034cff10 with catch @ 034cfd9c
                       catch() { ... } // from try @ 034cff7c with catch @ 034cfd9c */
      uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      count = uVar1;
      if (0 < (int)uVar2) {
        iVar6 = (NONPLOOOOAG->fields)._stringLength;
        uVar7 = 0;
        do {
          if (uVar2 == uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (source->m_Items[(int)uVar7] == (Il2CppObject *)0x0) goto LAB_034cfe30;
          iVar6 = *(int *)&source->m_Items[(int)uVar7][1].klass + iVar6;
          count = uVar7;
        } while ((iVar6 <= (__this->fields).OHMHCOBHPCG) &&
                (uVar7 = uVar7 + 1, count = uVar1, uVar1 != uVar7));
      }
      pSVar3 = System_Environment__get_NewLine((MethodInfo *)0x0);
      pSVar5 = System_Linq_Enumerable__Take<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,count,
                          Method_System_Linq_Enumerable_Take<string>__);
      pSVar4 = (System_String_array *)
               System_Linq_Enumerable__ToArray<object>
                         (pSVar5,Method_System_Linq_Enumerable_ToArray<string>__);
      pSVar3 = System_String__Join(pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
LAB_034cfe30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Dispose()  [RVA 0x33D03A0]
// NHOILKKCIMI$$Dispose @ RVA 0x33D03A0

void NHOILKKCIMI__Dispose(NHOILKKCIMI_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
                    /* try { // try from 034d03ac to 035d03af has its CatchHandler @ 034d03bc */
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 034d03b0 to 035d03d7 has its CatchHandler @ 034d0260 */
  return;
}

