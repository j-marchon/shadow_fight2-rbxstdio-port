// TypeDefIndex 567
// Namespace: 
// public sealed class GIMHCFFEEJN : HPPHKOJNEPB
// Fields:
//   private readonly Action OFJCBIEADON; // 0x18
//   private readonly Func<bool> IHHOLOMNHHB; // 0x20

// ===== protected override void PJEOKMGNMNF(float MJPEMHDHCCJ)  [RVA 0x35AD578]
// GIMHCFFEEJN$$PJEOKMGNMNF @ RVA 0x35AD578

void GIMHCFFEEJN__PJEOKMGNMNF(GIMHCFFEEJN_o *__this,float MJPEMHDHCCJ,MethodInfo *method)

{
  ulong uVar1;
  System_Func_bool__o *pSVar2;
  
  pSVar2 = (__this->fields).IHHOLOMNHHB;
  if (pSVar2 == (System_Func_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (*(code *)(pSVar2->fields).super.super.invoke_impl)
                    ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
  if ((uVar1 & 1) != 0) {
    HPPHKOJNEPB__NDLLCPOBDGE((HPPHKOJNEPB_o *)__this,(__this->fields).OFJCBIEADON,(MethodInfo *)0x0)
    ;
    return;
  }
  return;
}


// ===== public void .ctor(Action CPECAEHDDDB, Func<bool> OIIPBHPGODN)  [RVA 0x35AD5BC]
// GIMHCFFEEJN$$.ctor @ RVA 0x35AD5BC

void GIMHCFFEEJN___ctor(GIMHCFFEEJN_o *__this,System_Action_o *CPECAEHDDDB,
                       System_Func_bool__o *OIIPBHPGODN,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Func_bool__o **ppSVar2;
  
  HPPHKOJNEPB___ctor((HPPHKOJNEPB_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).OFJCBIEADON;
  *ppSVar1 = CPECAEHDDDB;
  thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
  ppSVar2 = &(__this->fields).IHHOLOMNHHB;
  *ppSVar2 = OIIPBHPGODN;
  thunk_FUN_01c20e04(ppSVar2,OIIPBHPGODN);
  return;
}

