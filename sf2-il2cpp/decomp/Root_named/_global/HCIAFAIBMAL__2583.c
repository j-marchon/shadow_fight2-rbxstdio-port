// TypeDefIndex 2583
// Namespace: 
// public static class HCIAFAIBMAL
// Fields:
//   private static readonly DateTime JCKCKDLGKIG; // 0x0
//   private static readonly Dictionary<string, double> IEJADJDIMME; // 0x8
//   private static long KIHALELCOMO; // 0x10

// ===== private static void .cctor()  [RVA 0x33A2D78]
// HCIAFAIBMAL$$.cctor @ RVA 0x33A2D78

void HCIAFAIBMAL___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__double__o *__this;
  System_Collections_Generic_Dictionary_string__double__o **ppSVar1;
  uint64_t local_28;
  
                    /* catch() { ... } // from try @ 034a2d60 with catch @ 034a2d84 */
                    /* try { // try from 034a2d8c to 035a2d9f has its CatchHandler @ 034a2e0c */
                    /* catch() { ... } // from try @ 034a2d1c with catch @ 034a2da0
                       try { // try from 034a2da0 to 035a2dc3 has its CatchHandler @ 034a2aa8 */
                    /* catch() { ... } // from try @ 034a2d18 with catch @ 034a2da4 */
                    /* catch() { ... } // from try @ 034a2c30 with catch @ 034a2da8 */
  if ((DAT_04567cc7 & 1) == 0) {
                    /* catch() { ... } // from try @ 034a2c0c with catch @ 034a2dac */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_double>_TypeInfo);
                    /* try { // try from 034a2dc4 to 035a2dc7 has its CatchHandler @ 034a2de8 */
                    /* try { // try from 034a2dc8 to 035a2def has its CatchHandler @ 034a2aa8 */
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    DAT_04567cc7 = 1;
  }
                    /* catch() { ... } // from try @ 034a2dc4 with catch @ 034a2de8 */
                    /* try { // try from 034a2df0 to 035a2df7 has its CatchHandler @ 034a2e0c */
                    /* try { // try from 034a2df8 to 035a2e03 has its CatchHandler @ 034a2aa8 */
  local_28 = 0;
  System_DateTime___ctor((System_DateTime_o)&local_28,0x7b2,1,1,8,0,0,1,(MethodInfo *)0x0);
                    /* try { // try from 034a2e04 to 035a2e0b has its CatchHandler @ 034a2e0c */
                    /* catch() { ... } // from try @ 034a2d8c with catch @ 034a2e0c
                       catch() { ... } // from try @ 034a2df0 with catch @ 034a2e0c
                       catch() { ... } // from try @ 034a2e04 with catch @ 034a2e0c */
  (HCIAFAIBMAL_TypeInfo->static_fields->JCKCKDLGKIG).fields._dateData = local_28;
  __this = (System_Collections_Generic_Dictionary_string__double__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_double>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_double>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<string,_double>__ctor__);
  ppSVar1 = &HCIAFAIBMAL_TypeInfo->static_fields->IEJADJDIMME;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}


// ===== public static double IOEHKDBENCJ(string KKJPPDNKGAI = "")  [RVA 0x33A2E50]
// HCIAFAIBMAL$$IOEHKDBENCJ @ RVA 0x33A2E50

double HCIAFAIBMAL__IOEHKDBENCJ(System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppMethodPointer local_28;
  
  if ((DAT_04567cc8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    FUN_01bab630(&StringLiteral_13787/*"Time: "*/);
    DAT_04567cc8 = 1;
    method = extraout_x1;
  }
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  local_28 = (Il2CppMethodPointer)HCIAFAIBMAL__NJGHLMLNGFD(KKJPPDNKGAI,method);
  pSVar1 = System_Double__ToString((double)local_28,(MethodInfo *)&stack0xffffffffffffffd8);
  pSVar1 = System_String__Concat(StringLiteral_13787/*"Time: "*/,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return (double)local_28;
}


// ===== public static void IBJPMKDLAHL(string HONFNFNIBOB, string KKJPPDNKGAI = "")  [RVA 0x33A2FC4]
// HCIAFAIBMAL$$IBJPMKDLAHL @ RVA 0x33A2FC4

void HCIAFAIBMAL__IBJPMKDLAHL
               (System_String_o *HONFNFNIBOB,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_04567cc9 & 1) == 0) {
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    DAT_04567cc9 = 1;
  }
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  HCIAFAIBMAL__CPEFDADDBKD(HONFNFNIBOB,KKJPPDNKGAI,method);
  HCIAFAIBMAL__BJMKPONFOPK(KKJPPDNKGAI,method_00);
  return;
}


// ===== public static void BJMKPONFOPK(string KKJPPDNKGAI = "")  [RVA 0x33A312C]
// HCIAFAIBMAL$$BJMKPONFOPK @ RVA 0x33A312C

void HCIAFAIBMAL__BJMKPONFOPK(System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__double__o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  double value;
  
  if ((DAT_04567cca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>_set_Item__);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    DAT_04567cca = 1;
    method = extraout_x1;
  }
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo,method);
  }
  pSVar2 = HCIAFAIBMAL_TypeInfo->static_fields->IEJADJDIMME;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__double__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_double>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                       (Il2CppObject *)KKJPPDNKGAI,
                       Method_System_Collections_Generic_Dictionary<string,_double>_ContainsKey__);
    method_00 = (MethodInfo *)(ulong)bVar1;
    if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo);
    }
    pSVar2 = HCIAFAIBMAL_TypeInfo->static_fields->IEJADJDIMME;
    value = HCIAFAIBMAL__GHPDCPMLHFJ(method_00);
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__double__o *)0x0) {
      if (bVar1) {
        System_Collections_Generic_Dictionary<object,_double>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                   (Il2CppObject *)KKJPPDNKGAI,value,
                   Method_System_Collections_Generic_Dictionary<string,_double>_set_Item__);
        return;
      }
      System_Collections_Generic_Dictionary<object,_double>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)KKJPPDNKGAI,value,
                 Method_System_Collections_Generic_Dictionary<string,_double>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void KGBLJKOFFIF()  [RVA 0x33A3308]
// HCIAFAIBMAL$$KGBLJKOFFIF @ RVA 0x33A3308

void HCIAFAIBMAL__KGBLJKOFFIF(MethodInfo *method)

{
  int64_t iVar1;
  
  if ((DAT_04567ccb & 1) == 0) {
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
                    /* try { // try from 034a3340 to 035a3353 has its CatchHandler @ 034a35fc */
    DAT_04567ccb = 1;
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034a3360 to 035a3373 has its CatchHandler @ 034a35f8 */
  System_GC__Collect((MethodInfo *)0x0);
  iVar1 = System_GC__GetTotalMemory(true,(MethodInfo *)0x0);
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a3380 to 035a338b has its CatchHandler @ 034a3540 */
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo);
  }
  HCIAFAIBMAL_TypeInfo->static_fields->KIHALELCOMO = iVar1;
  return;
}


// ===== public static double CPEFDADDBKD(string HONFNFNIBOB, string KKJPPDNKGAI = "")  [RVA 0x33A3030]
// HCIAFAIBMAL$$CPEFDADDBKD @ RVA 0x33A3030

double HCIAFAIBMAL__CPEFDADDBKD
                 (System_String_o *HONFNFNIBOB,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  double dVar1;
  double local_38;
  
  method_00 = (MethodInfo *)KKJPPDNKGAI;
  if ((DAT_04567ccc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    FUN_01bab630(&StringLiteral_13784/*"Time({0}): {1}"*/);
    DAT_04567ccc = 1;
    method_00 = extraout_x1;
  }
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  dVar1 = HCIAFAIBMAL__NJGHLMLNGFD(KKJPPDNKGAI,method_00);
  local_38 = dVar1;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_38);
  message = System_String__Format
                      (StringLiteral_13784/*"Time({0}): {1}"*/,(Il2CppObject *)HONFNFNIBOB,arg1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return dVar1;
}


// ===== public static double GHPDCPMLHFJ()  [RVA 0x33A322C]
// HCIAFAIBMAL$$GHPDCPMLHFJ @ RVA 0x33A322C

double HCIAFAIBMAL__GHPDCPMLHFJ(MethodInfo *method)

{
  System_DateTime_o d1;
  double dVar1;
  System_TimeSpan_Fields local_28;
  
  if ((DAT_04567ccd & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04567ccd = 1;
  }
  local_28._ticks = 0;
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a32b4 to 035a333f has its CatchHandler @ 034a32b4
                       catch() { ... } // from try @ 034a32b4 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a3488 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a3538 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a35e8 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a3690 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a3730 with catch @ 034a32b4 */
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo);
  }
  local_28._ticks =
       (int64_t)System_DateTime__op_Subtraction
                          (d1,(System_DateTime_o)
                              (HCIAFAIBMAL_TypeInfo->static_fields->JCKCKDLGKIG).fields._dateData,
                           (MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar1 = System_TimeSpan__get_TotalMilliseconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
  return dVar1;
}


// ===== public static double NJGHLMLNGFD(string KKJPPDNKGAI = "")  [RVA 0x33A2F24]
// HCIAFAIBMAL$$NJGHLMLNGFD @ RVA 0x33A2F24

double HCIAFAIBMAL__NJGHLMLNGFD(System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__double__o *__this;
  MethodInfo *extraout_x1;
  double dVar2;
  double local_28;
  
  if ((DAT_04567cce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>_TryGetValue__);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    DAT_04567cce = 1;
    method = extraout_x1;
  }
  local_28 = 0.0;
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo,method);
  }
  __this = HCIAFAIBMAL_TypeInfo->static_fields->IEJADJDIMME;
  if (__this != (System_Collections_Generic_Dictionary_string__double__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_double>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)KKJPPDNKGAI,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_double>_TryGetValue__);
    dVar2 = HCIAFAIBMAL__GHPDCPMLHFJ((MethodInfo *)(ulong)bVar1);
    return dVar2 - local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OKBBEOLOPKL(string IDABBGFDAPE)  [RVA 0x33A33A0]
// HCIAFAIBMAL$$OKBBEOLOPKL @ RVA 0x33A33A0

void HCIAFAIBMAL__OKBBEOLOPKL(System_String_o *IDABBGFDAPE,MethodInfo *method)

{
  System_String_o *arg0;
  int64_t iVar1;
  Il2CppObject *arg1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  float local_34;
  
  if ((DAT_04567ccf & 1) == 0) {
                    /* try { // try from 034a33c8 to 035a33ef has its CatchHandler @ 034a360c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    FUN_01bab630(&StringLiteral_1121/*"): "*/);
    FUN_01bab630(&StringLiteral_8948/*"Mem{0}{1}"*/);
    FUN_01bab630(&StringLiteral_981/*"("*/);
    DAT_04567ccf = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034a3438 to 035a345f has its CatchHandler @ 034a3600 */
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_GC_TypeInfo,method);
  }
  System_GC__Collect((MethodInfo *)0x0);
  pSVar2 = StringLiteral_8948/*"Mem{0}{1}"*/;
  arg0 = StringLiteral_2088/*": "*/;
  if (IDABBGFDAPE != (System_String_o *)0x0) {
    arg0 = System_String__Concat(StringLiteral_981/*"("*/,IDABBGFDAPE,StringLiteral_1121/*"): "*/,(MethodInfo *)0x0)
    ;
                    /* try { // try from 034a3480 to 035a3487 has its CatchHandler @ 034a3538 */
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = System_GC__GetTotalMemory(true,(MethodInfo *)0x0);
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo);
  }
  local_34 = (float)(iVar1 - HCIAFAIBMAL_TypeInfo->static_fields->KIHALELCOMO) * 9.536743e-07;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_34);
  pSVar2 = System_String__Format(pSVar2,(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
                    /* try { // try from 034a3520 to 035a3523 has its CatchHandler @ 034a3540 */
                    /* try { // try from 034a3524 to 035a352b has its CatchHandler @ 034a3600 */
                    /* try { // try from 034a352c to 035a3533 has its CatchHandler @ 034a360c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a3534 to 035a3537 has its CatchHandler @ 034a353c */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* catch() { ... } // from try @ 034a3480 with catch @ 034a3538
                       try { // try from 034a3538 to 035a355f has its CatchHandler @ 034a32b4 */
                    /* catch() { ... } // from try @ 034a3534 with catch @ 034a353c */
                    /* catch() { ... } // from try @ 034a3380 with catch @ 034a3540
                       catch() { ... } // from try @ 034a3520 with catch @ 034a3540 */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  return;
}

