// TypeDefIndex 3287
// Namespace: 
// [CompilerGenerated]
// private sealed class KJLBJAOALEO.LNPANPEKHGK
// Fields:
//   public KJLBJAOALEO <>4__this; // 0x10
//   public ValueTuple<LevelPlayAdInfo, LevelPlayReward> eventData; // 0x18

// ===== internal void HCOEPHNCBJI()  [RVA 0x351CDE0]
// KJLBJAOALEO.LNPANPEKHGK$$HCOEPHNCBJI @ RVA 0x351CDE0

void KJLBJAOALEO_LNPANPEKHGK__HCOEPHNCBJI(KJLBJAOALEO_LNPANPEKHGK_o *__this,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  Unity_Services_LevelPlay_LevelPlayReward_o *pUVar2;
  System_Action_MPAKDCNMLEG__o *pSVar3;
  System_String_o *pSVar4;
  KJLBJAOALEO_o *pKVar5;
  System_String_o *pSVar6;
  int32_t local_24;
  
                    /* try { // try from 0361cdf0 to 0371cdfb has its CatchHandler @ 0361cedc */
  if ((DAT_0456899a & 1) == 0) {
                    /* try { // try from 0361ce08 to 0371ce13 has its CatchHandler @ 0361ced8 */
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 0361ce14 to 0371cecf has its CatchHandler @ 0361cc80 */
    FUN_01bab630(&StringLiteral_9843/*"OnAdReward - Type='{0}', Amount='{1}'"*/);
    FUN_01bab630(&StringLiteral_19928/*"null reward"*/);
    DAT_0456899a = 1;
  }
  pSVar1 = StringLiteral_9843/*"OnAdReward - Type='{0}', Amount='{1}'"*/;
  pKVar5 = (__this->fields).__4__this;
  pUVar2 = (__this->fields).eventData.fields.Item2;
  pSVar6 = StringLiteral_19928/*"null reward"*/;
  if (pUVar2 == (Unity_Services_LevelPlay_LevelPlayReward_o *)0x0) {
    local_24 = 0;
  }
  else {
    pSVar4 = (pUVar2->fields)._Name_k__BackingField;
    local_24 = (pUVar2->fields)._Amount_k__BackingField;
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar6 = pSVar4;
    }
  }
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  pSVar1 = System_String__Format(pSVar1,(Il2CppObject *)pSVar6,arg1,(MethodInfo *)0x0);
  if (pKVar5 != (KJLBJAOALEO_o *)0x0) {
    FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)pKVar5,pSVar1,(MethodInfo *)0x0);
    pKVar5 = (__this->fields).__4__this;
    if (pKVar5 != (KJLBJAOALEO_o *)0x0) {
      pSVar3 = (pKVar5->fields).super.super.MNEPPPPEJKF;
      if (pSVar3 != (System_Action_MPAKDCNMLEG__o *)0x0) {
        (*(code *)(pSVar3->fields).super.super.invoke_impl)
                  ((pSVar3->fields).super.super.method_code,(pKVar5->fields).super.super.JBNGADJBDHB
                   ,(pSVar3->fields).super.super.method);
      }
                    /* try { // try from 0361ced0 to 0371ced3 has its CatchHandler @ 0361cee0 */
                    /* try { // try from 0361ced4 to 0371cefb has its CatchHandler @ 0361cc80 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361ce08 with catch @ 0361ced8
                        */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x351BF6C]
// KJLBJAOALEO.LNPANPEKHGK$$.ctor @ RVA 0x351BF6C

void KJLBJAOALEO_LNPANPEKHGK___ctor(KJLBJAOALEO_LNPANPEKHGK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

