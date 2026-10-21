// TypeDefIndex 2647
// Namespace: 
// [CompilerGenerated]
// private sealed class GGHCLMEFIGO.EJDCADKBLOG
// Fields:
//   public string name; // 0x10

// ===== public void .ctor()  [RVA 0x33B82F8]
// GGHCLMEFIGO.EJDCADKBLOG$$.ctor @ RVA 0x33B82F8

void GGHCLMEFIGO_EJDCADKBLOG___ctor(GGHCLMEFIGO_EJDCADKBLOG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool NHNJIAKFLLD(IGFGDDANEPE item)  [RVA 0x33B8300]
// GGHCLMEFIGO.EJDCADKBLOG$$NHNJIAKFLLD @ RVA 0x33B8300

bool GGHCLMEFIGO_EJDCADKBLOG__NHNJIAKFLLD
               (GGHCLMEFIGO_EJDCADKBLOG_o *__this,IGFGDDANEPE_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (item != (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 034b8310 to 035b8443 has its CatchHandler @ 034b8310
                       catch() { ... } // from try @ 034b8310 with catch @ 034b8310
                       catch() { ... } // from try @ 034b84e4 with catch @ 034b8310
                       catch() { ... } // from try @ 034b8514 with catch @ 034b8310
                       catch() { ... } // from try @ 034b8548 with catch @ 034b8310
                       catch() { ... } // from try @ 034b8578 with catch @ 034b8310 */
    bVar1 = System_String__op_Equality
                      ((item->fields).NPFMOEOIEKM,(__this->fields).name,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

