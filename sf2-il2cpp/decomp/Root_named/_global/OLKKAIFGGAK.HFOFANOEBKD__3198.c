// TypeDefIndex 3198
// Namespace: 
// [CompilerGenerated]
// private sealed class Model.HFOFANOEBKD
// Fields:
//   public ActionPlayAnimation action; // 0x10

// ===== internal bool ONPCHOBFLAH(InfoAnimation x)  [RVA 0x34FA574]
// Model.HFOFANOEBKD$$ONPCHOBFLAH @ RVA 0x34FA574

bool Model_HFOFANOEBKD__ONPCHOBFLAH
               (Model_HFOFANOEBKD_o *__this,InfoAnimation_o *x,MethodInfo *method)

{
  bool bVar1;
  ActionPlayAnimation_o *pBVar2;
  
  if ((x != (InfoAnimation_o *)0x0) &&
     (pBVar2 = (__this->fields).action, pBVar2 != (ActionPlayAnimation_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((x->fields).JIJLBFGKNJK,(pBVar2->fields).PMECMPHLIAC,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34FA59C]
// Model.HFOFANOEBKD$$.ctor @ RVA 0x34FA59C

void Model_HFOFANOEBKD___ctor(Model_HFOFANOEBKD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

