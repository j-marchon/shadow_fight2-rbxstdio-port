// TypeDefIndex 2783
// Namespace: 
// [CompilerGenerated]
// private sealed class GameUtils.MHMMMMFMCHA
// Fields:
//   public string attrName; // 0x10

// ===== public void .ctor()  [RVA 0x3413720]
// GameUtils.MHMMMMFMCHA$$.ctor @ RVA 0x3413720

void GameUtils_MHMMMMFMCHA___ctor(GameUtils_MHMMMMFMCHA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool GFBMAJEICPE(JGIFDELCGOJ x)  [RVA 0x3413728]
// GameUtils.MHMMMMFMCHA$$GFBMAJEICPE @ RVA 0x3413728

bool GameUtils_MHMMMMFMCHA__GFBMAJEICPE
               (GameUtils_MHMMMMFMCHA_o *__this,JGIFDELCGOJ_o *x,MethodInfo *method)

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

