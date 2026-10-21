// TypeDefIndex 2384
// Namespace: 
// public sealed class NKLLKOKEMOJ : HPPHKOJNEPB
// Fields:
//   private readonly Action OFJCBIEADON; // 0x18
//   private float GPPOBKFDBBE; // 0x20

// ===== public void .ctor(Action CPECAEHDDDB, float KDNLAOJBFMH)  [RVA 0x3331030]
// NKLLKOKEMOJ$$.ctor @ RVA 0x3331030

void NKLLKOKEMOJ___ctor(NKLLKOKEMOJ_o *__this,System_Action_o *CPECAEHDDDB,float KDNLAOJBFMH,
                       MethodInfo *method)

{
  System_Action_o **ppSVar1;
  
  HPPHKOJNEPB___ctor((HPPHKOJNEPB_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).OFJCBIEADON;
  *ppSVar1 = CPECAEHDDDB;
  thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
  (__this->fields).GPPOBKFDBBE = KDNLAOJBFMH;
  return;
}


// ===== protected override void PJEOKMGNMNF(float MJPEMHDHCCJ)  [RVA 0x3331074]
// NKLLKOKEMOJ$$PJEOKMGNMNF @ RVA 0x3331074

void NKLLKOKEMOJ__PJEOKMGNMNF(NKLLKOKEMOJ_o *__this,float MJPEMHDHCCJ,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).GPPOBKFDBBE - MJPEMHDHCCJ;
  (__this->fields).GPPOBKFDBBE = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  HPPHKOJNEPB__NDLLCPOBDGE((HPPHKOJNEPB_o *)__this,(__this->fields).OFJCBIEADON,(MethodInfo *)0x0);
  return;
}

