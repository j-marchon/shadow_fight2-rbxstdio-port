// TypeDefIndex 1005
// Namespace: 
// public sealed class PKHMIGFEJCL.PLLEKFKIIME : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x30C2390]
// PKHMIGFEJCL.PLLEKFKIIME$$.ctor @ RVA 0x30C2390

void PKHMIGFEJCL_PLLEKFKIIME___ctor
               (PKHMIGFEJCL_PLLEKFKIIME_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
               MethodInfo *method)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  intptr_t iVar5;
  code *pcVar6;
  Il2CppObject *pIVar7;
  
                    /* try { // try from 031c2398 to 032c239b has its CatchHandler @ 031c23b0 */
                    /* try { // try from 031c239c to 032c239f has its CatchHandler @ 031c2018 */
  iVar5 = *(intptr_t *)(IHJHOFMNAOA + 8);
                    /* try { // try from 031c23a0 to 032c23a3 has its CatchHandler @ 031c23ac */
                    /* try { // try from 031c23a4 to 032c23cf has its CatchHandler @ 031c2018 */
  (__this->fields).super.super.method = IHJHOFMNAOA;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c23a0 with catch @ 031c23ac
                        */
  (__this->fields).super.super.method_ptr = iVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c2398 with catch @ 031c23b0
                        */
  (__this->fields).super.super.m_target = LPDENCPICOM;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c21fc with catch @ 031c23b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c21c4 with catch @ 031c23b8
                        */
  thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c2168 with catch @ 031c23bc
                        */
  cVar1 = *(char *)(IHJHOFMNAOA + 0x52);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c220c with catch @ 031c23c0
                        */
  (__this->fields).super.super.method_code = (intptr_t)__this;
  uVar2 = FUN_01bab730(IHJHOFMNAOA);
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 031c23d0 with catch @ 031c23e4 */
    if (cVar1 != '\0') {
      if (LPDENCPICOM == (Il2CppObject *)0x0) {
        uVar4 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      goto LAB_031c23ec;
    }
    if ((__this->fields).super.super.method_is_virtual == false) {
      pcVar6 = FUN_01b48174;
    }
    else {
      uVar2 = thunk_FUN_01bf510c(IHJHOFMNAOA);
      uVar3 = FUN_01babcbc(IHJHOFMNAOA);
                    /* try { // try from 031c241c to 032c2443 has its CatchHandler @ 031c2458 */
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c241c with catch @ 031c2458
                       catch(type#2 @ 00000000) { ... } // from try @ 031c2450 with catch @ 031c2458
                        */
          pcVar6 = FUN_01b481a4;
        }
        else {
                    /* try { // try from 031c2444 to 032c244f has its CatchHandler @ 031c2018 */
          pcVar6 = FUN_01b481d0;
        }
      }
      else if ((uVar3 & 1) == 0) {
                    /* try { // try from 031c2450 to 032c2457 has its CatchHandler @ 031c2458 */
        pcVar6 = FUN_01b48254;
      }
      else {
        pcVar6 = FUN_01b48290;
      }
    }
  }
  else {
                    /* try { // try from 031c23d0 to 032c23d3 has its CatchHandler @ 031c23e4 */
    if (cVar1 != '\x01') {
LAB_031c23ec:
      pIVar7 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar7;
      goto LAB_031c2464;
    }
    pcVar6 = FUN_01b48194;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar6;
LAB_031c2464:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b4812c;
  return;
}


// ===== public virtual void Invoke(IReadOnlyList<GEIHBHEDJJM> OPAEPDIIOEB)  [RVA 0x30C2498]
// PKHMIGFEJCL.PLLEKFKIIME$$Invoke @ RVA 0x30C2498

void PKHMIGFEJCL_PLLEKFKIIME__Invoke
               (PKHMIGFEJCL_PLLEKFKIIME_o *__this,
               System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *OPAEPDIIOEB,
               MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x031c24a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,OPAEPDIIOEB,
             (__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(IReadOnlyList<GEIHBHEDJJM> OPAEPDIIOEB, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x30C24AC]
// PKHMIGFEJCL.PLLEKFKIIME$$BeginInvoke @ RVA 0x30C24AC

System_IAsyncResult_o *
PKHMIGFEJCL_PLLEKFKIIME__BeginInvoke
          (PKHMIGFEJCL_PLLEKFKIIME_o *__this,
          System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *OPAEPDIIOEB,
          System_AsyncCallback_o *BLMFLPJJMPF,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = OPAEPDIIOEB;
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_20);
  return pSVar1;
}


// ===== public virtual void EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x30C24CC]
// PKHMIGFEJCL.PLLEKFKIIME$$EndInvoke @ RVA 0x30C24CC

void PKHMIGFEJCL_PLLEKFKIIME__EndInvoke
               (PKHMIGFEJCL_PLLEKFKIIME_o *__this,System_IAsyncResult_o *HPACPFLKHPK,
               MethodInfo *method)

{
  thunk_FUN_01baa628(HPACPFLKHPK,0);
  return;
}

