// TypeDefIndex 2177
// Namespace: 
// public abstract class BMNKDDCJACM
// Fields:

// ===== public static BMNKDDCJACM EOHMFJFFFIN(GameObject CMMIJCJOBBF, bool NFHILKEHKML)  [RVA 0x32DDAB0]
// BMNKDDCJACM$$EOHMFJFFFIN @ RVA 0x32DDAB0

BMNKDDCJACM_o *
BMNKDDCJACM__EOHMFJFFFIN(UnityEngine_GameObject_o *CMMIJCJOBBF,bool NFHILKEHKML,MethodInfo *method)

{
  EIILGPAPGMJ_o *__this;
  
  if ((DAT_045675d6 & 1) == 0) {
    FUN_01bab630(&EIILGPAPGMJ_TypeInfo);
    FUN_01bab630(&KKKHGGHNHLO_TypeInfo);
    DAT_045675d6 = 1;
  }
  if (NFHILKEHKML) {
    __this = (EIILGPAPGMJ_o *)thunk_FUN_01bda818(EIILGPAPGMJ_TypeInfo);
    EIILGPAPGMJ___ctor(__this,CMMIJCJOBBF,(MethodInfo *)0x0);
  }
  else {
    __this = (EIILGPAPGMJ_o *)thunk_FUN_01bda818(KKKHGGHNHLO_TypeInfo);
    KKKHGGHNHLO___ctor((KKKHGGHNHLO_o *)__this,CMMIJCJOBBF,(MethodInfo *)0x0);
  }
  return (BMNKDDCJACM_o *)__this;
}


// ===== protected void .ctor()  [RVA 0x32DDB44]
// BMNKDDCJACM$$.ctor @ RVA 0x32DDB44

void BMNKDDCJACM___ctor(BMNKDDCJACM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

