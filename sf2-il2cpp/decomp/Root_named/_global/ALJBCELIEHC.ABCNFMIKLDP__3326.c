// TypeDefIndex 3326
// Namespace: 
// [CompilerGenerated]
// private sealed class ALJBCELIEHC.ABCNFMIKLDP
// Fields:
//   public int level; // 0x10

// ===== internal bool CBKKFKKIJEB(NFEOGKEAFHL x)  [RVA 0x352B510]
// ALJBCELIEHC.ABCNFMIKLDP$$CBKKFKKIJEB @ RVA 0x352B510

bool ALJBCELIEHC_ABCNFMIKLDP__CBKKFKKIJEB
               (ALJBCELIEHC_ABCNFMIKLDP_o *__this,NFEOGKEAFHL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  
  if ((DAT_04568a27 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    DAT_04568a27 = 1;
  }
  if ((x != (NFEOGKEAFHL_o *)0x0) &&
     (__this_00 = (x->fields).GPNNHMIJLGL,
     __this_00 != (System_Collections_Generic_List_int__o *)0x0)) {
    bVar1 = System_Collections_Generic_List<int>__Contains
                      (__this_00,(__this->fields).level,
                       Method_System_Collections_Generic_List<int>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x352A968]
// ALJBCELIEHC.ABCNFMIKLDP$$.ctor @ RVA 0x352A968

void ALJBCELIEHC_ABCNFMIKLDP___ctor(ALJBCELIEHC_ABCNFMIKLDP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

