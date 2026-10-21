// TypeDefIndex 831
// Namespace: 
// public sealed class OOGBHOMNILJ : HPPHKOJNEPB
// Fields:
//   private readonly Action OFJCBIEADON; // 0x18
//   private readonly int MLDMFNCOKLG; // 0x20
//   private int EKEJMKEFJIO; // 0x24

// ===== protected override void PJEOKMGNMNF(float MJPEMHDHCCJ)  [RVA 0x30805FC]
// OOGBHOMNILJ$$PJEOKMGNMNF @ RVA 0x30805FC

void OOGBHOMNILJ__PJEOKMGNMNF(OOGBHOMNILJ_o *__this,float MJPEMHDHCCJ,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).EKEJMKEFJIO;
  if (iVar1 == (__this->fields).MLDMFNCOKLG) {
    HPPHKOJNEPB__NDLLCPOBDGE((HPPHKOJNEPB_o *)__this,(__this->fields).OFJCBIEADON,(MethodInfo *)0x0)
    ;
    return;
  }
  (__this->fields).EKEJMKEFJIO = iVar1 + 1;
  return;
}


// ===== public void .ctor(Action CPECAEHDDDB, int HLFBBLPFKEO)  [RVA 0x3080620]
// OOGBHOMNILJ$$.ctor @ RVA 0x3080620

void OOGBHOMNILJ___ctor(OOGBHOMNILJ_o *__this,System_Action_o *CPECAEHDDDB,int32_t HLFBBLPFKEO,
                       MethodInfo *method)

{
  System_Action_o **ppSVar1;
  
  HPPHKOJNEPB___ctor((HPPHKOJNEPB_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).OFJCBIEADON;
  *ppSVar1 = CPECAEHDDDB;
  thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
  (__this->fields).MLDMFNCOKLG = HLFBBLPFKEO;
  return;
}

