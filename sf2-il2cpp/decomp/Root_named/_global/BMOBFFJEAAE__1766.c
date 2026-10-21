// TypeDefIndex 1766
// Namespace: 
// public class BMOBFFJEAAE : IDisposable
// Fields:
//   private readonly int KKNAMJPHOEP; // 0x10

// ===== public void .ctor()  [RVA 0x31E9944]
// BMOBFFJEAAE$$.ctor @ RVA 0x31E9944

void BMOBFFJEAAE___ctor(BMOBFFJEAAE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  iVar1 = UnityEngine_Screen__get_sleepTimeout((MethodInfo *)0x0);
  (__this->fields).KKNAMJPHOEP = iVar1;
  UnityEngine_Screen__set_sleepTimeout(-1,(MethodInfo *)0x0);
  return;
}


// ===== public void Dispose()  [RVA 0x31E9974]
// BMOBFFJEAAE$$Dispose @ RVA 0x31E9974

void BMOBFFJEAAE__Dispose(BMOBFFJEAAE_o *__this,MethodInfo *method)

{
  UnityEngine_Screen__set_sleepTimeout((__this->fields).KKNAMJPHOEP,(MethodInfo *)0x0);
  return;
}

