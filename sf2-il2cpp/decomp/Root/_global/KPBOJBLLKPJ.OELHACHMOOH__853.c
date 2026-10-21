// TypeDefIndex 853
// Namespace: 
// [CompilerGenerated]
// private sealed class KPBOJBLLKPJ.OELHACHMOOH
// Fields:
//   public CKLIGNAPKFO channel; // 0x10
//   public KOPGBBHMPDP listener; // 0x18

// ===== public void .ctor()  [RVA 0x3089030]
// KPBOJBLLKPJ.OELHACHMOOH$$.ctor @ RVA 0x3089030

void KPBOJBLLKPJ_OELHACHMOOH___ctor(KPBOJBLLKPJ_OELHACHMOOH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool LJCAIHKOGBL(KeyValuePair<CKLIGNAPKFO, KOPGBBHMPDP> t)  [RVA 0x3089290]
// KPBOJBLLKPJ.OELHACHMOOH$$LJCAIHKOGBL @ RVA 0x3089290

bool KPBOJBLLKPJ_OELHACHMOOH__LJCAIHKOGBL
               (KPBOJBLLKPJ_OELHACHMOOH_o *__this,
               System_Collections_Generic_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP__o t,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456603c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Value__
                );
    DAT_0456603c = 1;
  }
  if ((__this->fields).channel == t.fields.key) {
    bVar1 = (__this->fields).listener == t.fields.value;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

