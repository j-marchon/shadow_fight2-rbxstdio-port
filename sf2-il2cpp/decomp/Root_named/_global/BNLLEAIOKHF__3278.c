// TypeDefIndex 3278
// Namespace: 
// public class BNLLEAIOKHF
// Fields:
//   public Model KPBAFNBAEAB; // 0x10
//   public Model MENGBKFCNNH; // 0x18
//   public ModelParameters LIHKNGAPNAH; // 0x20
//   public ModelParameters KJGJNPJFMKB; // 0x28
//   public Location LBKOHHHPNIP; // 0x30
//   public IBCHOCDIMIP LDOOMGABFME; // 0x38

// ===== public void .ctor(Model MAODNBMLDEG, Model BGPBFLNNCJJ, Location CNHHLPPHNCO, IBCHOCDIMIP JOOGNNJOONJ)  [RVA 0x351A940]
// BNLLEAIOKHF$$.ctor @ RVA 0x351A940

void BNLLEAIOKHF___ctor(BNLLEAIOKHF_o *__this,Model_o *MAODNBMLDEG,Model_o *BGPBFLNNCJJ,
                       Location_o *CNHHLPPHNCO,IBCHOCDIMIP_o *JOOGNNJOONJ,MethodInfo *method)

{
  Model_o **ppOVar1;
  Location_o **ppNVar2;
  IBCHOCDIMIP_o **ppIVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).MENGBKFCNNH;
  *ppOVar1 = MAODNBMLDEG;
  thunk_FUN_01c20e04(ppOVar1,MAODNBMLDEG);
  (__this->fields).KPBAFNBAEAB = BGPBFLNNCJJ;
  thunk_FUN_01c20e04(&__this->fields,BGPBFLNNCJJ);
  ppNVar2 = &(__this->fields).LBKOHHHPNIP;
  *ppNVar2 = CNHHLPPHNCO;
  thunk_FUN_01c20e04(ppNVar2,CNHHLPPHNCO);
  ppIVar3 = &(__this->fields).LDOOMGABFME;
  *ppIVar3 = JOOGNNJOONJ;
  thunk_FUN_01c20e04(ppIVar3,JOOGNNJOONJ);
  return;
}

