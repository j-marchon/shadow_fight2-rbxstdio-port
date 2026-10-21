// TypeDefIndex 181
// Namespace: 
// public class FMOAMIIOKNP
// Fields:
//   private readonly long <EPMGDFKEOOJ>k__BackingField; // 0x10
//   private readonly IReadOnlyList<OPHDIHJPHDE> <APDMACJCLEG>k__BackingField; // 0x18

// ===== public void .ctor(long NMECKCPAKAA, IReadOnlyList<OPHDIHJPHDE> GIAHCGHPBBA)  [RVA 0x3113128]
// FMOAMIIOKNP$$.ctor @ RVA 0x3113128

void FMOAMIIOKNP___ctor(FMOAMIIOKNP_o *__this,int64_t NMECKCPAKAA,
                       System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *GIAHCGHPBBA,
                       MethodInfo *method)

{
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._APDMACJCLEG_k__BackingField;
  *ppSVar1 = GIAHCGHPBBA;
  (__this->fields)._EPMGDFKEOOJ_k__BackingField = NMECKCPAKAA;
  thunk_FUN_01c20e04(ppSVar1,GIAHCGHPBBA);
  return;
}


// ===== public long FHMOKDNBLAI()  [RVA 0x3113160]
// FMOAMIIOKNP$$FHMOKDNBLAI @ RVA 0x3113160

int64_t FMOAMIIOKNP__FHMOKDNBLAI(FMOAMIIOKNP_o *__this,MethodInfo *method)

{
  return (__this->fields)._EPMGDFKEOOJ_k__BackingField;
}


// ===== public IReadOnlyList<OPHDIHJPHDE> CFGOMKKHOML()  [RVA 0x3113168]
// FMOAMIIOKNP$$CFGOMKKHOML @ RVA 0x3113168

System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *
FMOAMIIOKNP__CFGOMKKHOML(FMOAMIIOKNP_o *__this,MethodInfo *method)

{
  return (__this->fields)._APDMACJCLEG_k__BackingField;
}

