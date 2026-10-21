// TypeDefIndex 2882
// Namespace: 
// [CompilerGenerated]
// private sealed class DNICJALNLEB.BDPIPADNFGH
// Fields:
//   public string name; // 0x10

// ===== public void .ctor()  [RVA 0x343EA30]
// DNICJALNLEB.BDPIPADNFGH$$.ctor @ RVA 0x343EA30

void DNICJALNLEB_BDPIPADNFGH___ctor(DNICJALNLEB_BDPIPADNFGH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool EAMKBFINIFC(ALJBCELIEHC x)  [RVA 0x343F0F0]
// DNICJALNLEB.BDPIPADNFGH$$EAMKBFINIFC @ RVA 0x343F0F0

bool DNICJALNLEB_BDPIPADNFGH__EAMKBFINIFC
               (DNICJALNLEB_BDPIPADNFGH_o *__this,ALJBCELIEHC_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((x != (ALJBCELIEHC_o *)0x0) &&
     (__this_00 = (x->fields).JIJLBFGKNJK, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

