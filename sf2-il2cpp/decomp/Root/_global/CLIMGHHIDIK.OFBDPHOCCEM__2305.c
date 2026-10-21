// TypeDefIndex 2305
// Namespace: 
// [CompilerGenerated]
// private sealed class CLIMGHHIDIK.OFBDPHOCCEM
// Fields:
//   public string questName; // 0x10

// ===== internal bool LMIOJODJCIM(FPPKHNNABAD q)  [RVA 0x33137A8]
// CLIMGHHIDIK.OFBDPHOCCEM$$LMIOJODJCIM @ RVA 0x33137A8

bool CLIMGHHIDIK_OFBDPHOCCEM__LMIOJODJCIM
               (CLIMGHHIDIK_OFBDPHOCCEM_o *__this,FPPKHNNABAD_o *q,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
                    /* try { // try from 034137b0 to 035137b7 has its CatchHandler @ 03413c04 */
  if ((q != (FPPKHNNABAD_o *)0x0) &&
     (__this_00 = (q->fields)._COIPKAKHDFP_k__BackingField, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(__this->fields).questName,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3313798]
// CLIMGHHIDIK.OFBDPHOCCEM$$.ctor @ RVA 0x3313798

void CLIMGHHIDIK_OFBDPHOCCEM___ctor(CLIMGHHIDIK_OFBDPHOCCEM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

