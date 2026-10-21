// TypeDefIndex 1888
// Namespace: 
// public class BMBFOPNOLCF : CEDLOJLIFCL
// Fields:
//   private readonly Dictionary<Type, HIMHPFNABJN> NOPAPOLFKLJ; // 0x10
//   private HIMHPFNABJN FFOLFLCMFCH; // 0x18

// ===== public void LLCONNGHGKD()  [RVA 0x3251628]
// BMBFOPNOLCF$$LLCONNGHGKD @ RVA 0x3251628

void BMBFOPNOLCF__LLCONNGHGKD(BMBFOPNOLCF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  HIMHPFNABJN_c *pHVar3;
  ulong uVar4;
  int32_t *piVar5;
  HIMHPFNABJN_o *pHVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_04567138 & 1) == 0) {
                    /* try { // try from 03351644 to 0345164b has its CatchHandler @ 03351694 */
    auVar7 = FUN_01bab630(&HIMHPFNABJN_TypeInfo);
    DAT_04567138 = 1;
  }
  pHVar6 = (__this->fields).FFOLFLCMFCH;
                    /* try { // try from 03351658 to 03451663 has its CatchHandler @ 03351690 */
  if (pHVar6 == (HIMHPFNABJN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pHVar3 = pHVar6->klass;
  uVar1._0_1_ = (pHVar3->_2).rank;
  uVar1._1_1_ = (pHVar3->_2).minimumAlignment;
                    /* try { // try from 03351664 to 03451683 has its CatchHandler @ 033515b0 */
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pHVar3->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03351684 to 03451687 has its CatchHandler @ 0335168c */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)HIMHPFNABJN_TypeInfo) {
                    /* try { // try from 033516ac to 034516af has its CatchHandler @ 033516d8 */
        pVVar2 = pHVar3->vtable + *piVar5;
        goto LAB_033516b0;
      }
                    /* try { // try from 03351688 to 034516ab has its CatchHandler @ 033515b0 */
      uVar4 = uVar4 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351684 with catch @ 0335168c
                        */
      piVar5 = piVar5 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351658 with catch @ 03351690
                        */
    } while (uVar4 != 0);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351644 with catch @ 03351694
                        */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pHVar6,HIMHPFNABJN_TypeInfo,0);
LAB_033516b0:
                    /* try { // try from 033516b0 to 034516e7 has its CatchHandler @ 033515b0 */
                    /* WARNING: Could not recover jumptable at 0x033516c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pHVar6,pVVar2->method);
  return;
}


// ===== public void .ctor()  [RVA 0x32516C8]
// BMBFOPNOLCF$$.ctor @ RVA 0x32516C8

void BMBFOPNOLCF___ctor(BMBFOPNOLCF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  KFHIPIPCOHK_o *__this_01;
  HIMHPFNABJN_o **ppHVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 033516ac with catch @ 033516d8 */
                    /* try { // try from 033516e8 to 034516ef has its CatchHandler @ 03351704 */
                    /* try { // try from 033516f0 to 034516fb has its CatchHandler @ 033515b0 */
  if ((DAT_04567139 & 1) == 0) {
                    /* try { // try from 033516fc to 03451703 has its CatchHandler @ 03351704 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033516e8 with catch @ 03351704
                       catch(type#2 @ 00000000) { ... } // from try @ 033516fc with catch @ 03351704
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>__ctor__);
                    /* try { // try from 03351710 to 034517ff has its CatchHandler @ 03351710
                       catch() { ... } // from try @ 03351710 with catch @ 03351710
                       catch() { ... } // from try @ 03351880 with catch @ 03351710
                       catch() { ... } // from try @ 033518b8 with catch @ 03351710
                       catch() { ... } // from try @ 033518e0 with catch @ 03351710
                       catch() { ... } // from try @ 03351914 with catch @ 03351710 */
    FUN_01bab630(&System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>_TypeInfo);
    FUN_01bab630(&KFHIPIPCOHK_TypeInfo);
    DAT_04567139 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>__ctor__);
  (__this->fields).NOPAPOLFKLJ =
       (System_Collections_Generic_Dictionary_Type__HIMHPFNABJN__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (KFHIPIPCOHK_o *)thunk_FUN_01bda818(KFHIPIPCOHK_TypeInfo);
  KFHIPIPCOHK___ctor(__this_01,(MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).FFOLFLCMFCH;
  *ppHVar1 = (HIMHPFNABJN_o *)__this_01;
  thunk_FUN_01c20e04(ppHVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void PHECIGEPFPJ(HIMHPFNABJN HJEBKCDDBAB)  [RVA 0x3251788]
// BMBFOPNOLCF$$PHECIGEPFPJ @ RVA 0x3251788

void BMBFOPNOLCF__PHECIGEPFPJ(BMBFOPNOLCF_o *__this,HIMHPFNABJN_o *HJEBKCDDBAB,MethodInfo *method)

{
  System_Type_o *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_0456713a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>_Add__);
    DAT_0456713a = 1;
  }
  if (HJEBKCDDBAB != (HIMHPFNABJN_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).NOPAPOLFKLJ;
    key = System_Object__GetType((Il2CppObject *)HJEBKCDDBAB,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,(Il2CppObject *)key,(Il2CppObject *)HJEBKCDDBAB,
                 Method_System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

