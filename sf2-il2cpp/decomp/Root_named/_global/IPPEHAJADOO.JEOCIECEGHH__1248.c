// TypeDefIndex 1248
// Namespace: 
// public class EventTriggers.JEOCIECEGHH
// Fields:
//   public InfoAnimation BNGDONJEHMH; // 0x10
//   public int HIHFJJOMDBF; // 0x18
//   public bool CANHKPJGDFO; // 0x1C
//   public bool KHKEGAKGNCN; // 0x1D
//   public int HLFBMBHOPMI; // 0x20
//   public EventAnimation.MIFHAKDMDJH NAPEFFFIIFE; // 0x24
//   public EventAnimation OMFKEBCFIIK; // 0x28

// ===== public void .ctor()  [RVA 0x314306C]
// EventTriggers.JEOCIECEGHH$$.ctor @ RVA 0x314306C

void EventTriggers_JEOCIECEGHH___ctor(EventTriggers_JEOCIECEGHH_o *__this,MethodInfo *method)

{
  EventAnimation_o **ppKVar1;
  
                    /* catch() { ... } // from try @ 03243054 with catch @ 03243078 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03243080 to 03343087 has its CatchHandler @ 0324309c */
  (__this->fields).BNGDONJEHMH = (InfoAnimation_o *)0x0;
                    /* try { // try from 03243088 to 03343093 has its CatchHandler @ 03242da0 */
  thunk_FUN_01c20e04(&__this->fields,0);
  ppKVar1 = &(__this->fields).OMFKEBCFIIK;
  *ppKVar1 = (EventAnimation_o *)0x0;
                    /* try { // try from 03243094 to 0334309b has its CatchHandler @ 0324309c */
  (__this->fields).HIHFJJOMDBF = 0;
                    /* catch() { ... } // from try @ 03243080 with catch @ 0324309c
                       catch() { ... } // from try @ 03243094 with catch @ 0324309c */
  (__this->fields).CANHKPJGDFO = false;
  (__this->fields).KHKEGAKGNCN = false;
                    /* try { // try from 032430a0 to 033431c3 has its CatchHandler @ 032430a0
                       catch() { ... } // from try @ 032430a0 with catch @ 032430a0
                       catch() { ... } // from try @ 03243314 with catch @ 032430a0
                       catch() { ... } // from try @ 03243350 with catch @ 032430a0
                       catch() { ... } // from try @ 032433d4 with catch @ 032430a0
                       catch() { ... } // from try @ 0324341c with catch @ 032430a0
                       catch() { ... } // from try @ 0324345c with catch @ 032430a0 */
  (__this->fields).HLFBMBHOPMI = 0;
  thunk_FUN_01c20e04(ppKVar1,0);
  (__this->fields).NAPEFFFIIFE = 0;
  return;
}

