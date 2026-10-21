// TypeDefIndex 3199
// Namespace: 
// [CompilerGenerated]
// private sealed class Model.LOPEPAIIJKN
// Fields:
//   public ActionCreateModel action; // 0x10

// ===== public void .ctor()  [RVA 0x34FA5A4]
// Model.LOPEPAIIJKN$$.ctor @ RVA 0x34FA5A4

void Model_LOPEPAIIJKN___ctor(Model_LOPEPAIIJKN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool ONPCHOBFLAH(InfoAnimation x)  [RVA 0x34FA5AC]
// Model.LOPEPAIIJKN$$ONPCHOBFLAH @ RVA 0x34FA5AC

bool Model_LOPEPAIIJKN__ONPCHOBFLAH
               (Model_LOPEPAIIJKN_o *__this,InfoAnimation_o *x,MethodInfo *method)

{
  bool bVar1;
  ActionCreateModel_o *pHVar2;
  
  if ((x != (InfoAnimation_o *)0x0) &&
     (pHVar2 = (__this->fields).action, pHVar2 != (ActionCreateModel_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((x->fields).JIJLBFGKNJK,(pHVar2->fields).OOAOCLGPGJJ,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

