// TypeDefIndex 2783
// Namespace: 
// [CompilerGenerated]
// private sealed class MGNPHCAAEIO.MHMMMMFMCHA
// Fields:
//   public string attrName; // 0x10

// ===== public void .ctor()  [RVA 0x3413720]
// MGNPHCAAEIO.MHMMMMFMCHA$$.ctor @ RVA 0x3413720

void MGNPHCAAEIO_MHMMMMFMCHA___ctor(MGNPHCAAEIO_MHMMMMFMCHA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool GFBMAJEICPE(JGIFDELCGOJ x)  [RVA 0x3413728]
// MGNPHCAAEIO.MHMMMMFMCHA$$GFBMAJEICPE @ RVA 0x3413728

bool MGNPHCAAEIO_MHMMMMFMCHA__GFBMAJEICPE
               (MGNPHCAAEIO_MHMMMMFMCHA_o *__this,JGIFDELCGOJ_o *x,MethodInfo *method)

{
  bool bVar1;
  
  if (x != (JGIFDELCGOJ_o *)0x0) {
                    /* try { // try from 0351373c to 0361373f has its CatchHandler @ 03513768 */
                    /* try { // try from 03513740 to 03613777 has its CatchHandler @ 03512c08 */
    bVar1 = System_String__op_Equality
                      ((x->fields).JIJLBFGKNJK,(__this->fields).attrName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

