// TypeDefIndex 854
// Namespace: 
// [CompilerGenerated]
// private sealed class KPBOJBLLKPJ.GANGLJMEKOF
// Fields:
//   public CKLIGNAPKFO channel; // 0x10
//   public KOPGBBHMPDP listener; // 0x18

// ===== internal bool ODGFHIJGLPJ(KeyValuePair<CKLIGNAPKFO, KOPGBBHMPDP> t)  [RVA 0x3089304]
// KPBOJBLLKPJ.GANGLJMEKOF$$ODGFHIJGLPJ @ RVA 0x3089304

bool KPBOJBLLKPJ_GANGLJMEKOF__ODGFHIJGLPJ
               (KPBOJBLLKPJ_GANGLJMEKOF_o *__this,
               System_Collections_Generic_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP__o t,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456603d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Value__
                );
    DAT_0456603d = 1;
  }
  if ((__this->fields).channel == t.fields.key) {
    bVar1 = (__this->fields).listener == t.fields.value;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x3089288]
// KPBOJBLLKPJ.GANGLJMEKOF$$.ctor @ RVA 0x3089288

void KPBOJBLLKPJ_GANGLJMEKOF___ctor(KPBOJBLLKPJ_GANGLJMEKOF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

