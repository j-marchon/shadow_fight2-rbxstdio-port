// TypeDefIndex 3199
// Namespace: 
// [CompilerGenerated]
// private sealed class OLKKAIFGGAK.LOPEPAIIJKN
// Fields:
//   public HDHBGBEEKDM action; // 0x10

// ===== public void .ctor()  [RVA 0x34FA5A4]
// OLKKAIFGGAK.LOPEPAIIJKN$$.ctor @ RVA 0x34FA5A4

void OLKKAIFGGAK_LOPEPAIIJKN___ctor(OLKKAIFGGAK_LOPEPAIIJKN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool ONPCHOBFLAH(ECENNHNBAME x)  [RVA 0x34FA5AC]
// OLKKAIFGGAK.LOPEPAIIJKN$$ONPCHOBFLAH @ RVA 0x34FA5AC

bool OLKKAIFGGAK_LOPEPAIIJKN__ONPCHOBFLAH
               (OLKKAIFGGAK_LOPEPAIIJKN_o *__this,ECENNHNBAME_o *x,MethodInfo *method)

{
  bool bVar1;
  HDHBGBEEKDM_o *pHVar2;
  
  if ((x != (ECENNHNBAME_o *)0x0) &&
     (pHVar2 = (__this->fields).action, pHVar2 != (HDHBGBEEKDM_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((x->fields).JIJLBFGKNJK,(pHVar2->fields).OOAOCLGPGJJ,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

