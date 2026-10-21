// TypeDefIndex 1698
// Namespace: 
// public class LBMOOFGGPEB.OPLNJMEEOLB
// Fields:
//   public object KOANCCDDBDA; // 0x10
//   private LBMOOFGGPEB FPLAHGBDPBJ; // 0x18

// ===== public void .ctor(LBMOOFGGPEB EBCLMDNPLCA, object IMMNELPBGIF)  [RVA 0x31D353C]
// LBMOOFGGPEB.OPLNJMEEOLB$$.ctor @ RVA 0x31D353C

void LBMOOFGGPEB_OPLNJMEEOLB___ctor
               (LBMOOFGGPEB_OPLNJMEEOLB_o *__this,LBMOOFGGPEB_o *EBCLMDNPLCA,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  LBMOOFGGPEB_o **ppLVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).KOANCCDDBDA = IMMNELPBGIF;
  thunk_FUN_01c20e04(&__this->fields,IMMNELPBGIF);
  ppLVar1 = &(__this->fields).FPLAHGBDPBJ;
  *ppLVar1 = EBCLMDNPLCA;
                    /* try { // try from 032d3570 to 033d3577 has its CatchHandler @ 032d40c4 */
  thunk_FUN_01c20e04(ppLVar1,EBCLMDNPLCA);
  return;
}


// ===== public void EFDNABIEPAP(long CJNHFNHJHPE)  [RVA 0x31D3580]
// LBMOOFGGPEB.OPLNJMEEOLB$$EFDNABIEPAP @ RVA 0x31D3580

void LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP
               (LBMOOFGGPEB_OPLNJMEEOLB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  LBMOOFGGPEB_o *pLVar1;
  
                    /* try { // try from 032d3584 to 033d358b has its CatchHandler @ 032d4038 */
  pLVar1 = (__this->fields).FPLAHGBDPBJ;
  if (pLVar1 != (LBMOOFGGPEB_o *)0x0) {
    (pLVar1->fields).JAODINPKJLN = CJNHFNHJHPE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long IMAKPJNJIJF()  [RVA 0x31D359C]
// LBMOOFGGPEB.OPLNJMEEOLB$$IMAKPJNJIJF @ RVA 0x31D359C

int64_t LBMOOFGGPEB_OPLNJMEEOLB__IMAKPJNJIJF(LBMOOFGGPEB_OPLNJMEEOLB_o *__this,MethodInfo *method)

{
  LBMOOFGGPEB_o *pLVar1;
  
  pLVar1 = (__this->fields).FPLAHGBDPBJ;
  if (pLVar1 != (LBMOOFGGPEB_o *)0x0) {
                    /* try { // try from 032d35ac to 033d35b7 has its CatchHandler @ 032d40d4 */
    return (pLVar1->fields).JAODINPKJLN;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

