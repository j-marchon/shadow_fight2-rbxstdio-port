// TypeDefIndex 3088
// Namespace: 
// public class GPBHNPOEFDO
// Fields:
//   public readonly string KOANCCDDBDA; // 0x10
//   public readonly string GFGEOMECLKC; // 0x18
//   public readonly long MNPPNIGBPBD; // 0x20
//   public readonly object OGFMJIABHHI; // 0x28

// ===== public void .ctor(string IMMNELPBGIF, string EHKEOHNBLCK, long EAJPLEMEEAB, object OKECKCEAHNA)  [RVA 0x34C9A04]
// GPBHNPOEFDO$$.ctor @ RVA 0x34C9A04

void GPBHNPOEFDO___ctor(GPBHNPOEFDO_o *__this,System_String_o *IMMNELPBGIF,
                       System_String_o *EHKEOHNBLCK,int64_t EAJPLEMEEAB,Il2CppObject *OKECKCEAHNA,
                       MethodInfo *method)

{
  System_String_o **ppSVar1;
  Il2CppObject **ppIVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).KOANCCDDBDA = IMMNELPBGIF;
  thunk_FUN_01c20e04(&__this->fields,IMMNELPBGIF);
  ppSVar1 = &(__this->fields).GFGEOMECLKC;
  *ppSVar1 = EHKEOHNBLCK;
  thunk_FUN_01c20e04(ppSVar1,EHKEOHNBLCK);
  ppIVar2 = &(__this->fields).OGFMJIABHHI;
  *ppIVar2 = OKECKCEAHNA;
  (__this->fields).MNPPNIGBPBD = EAJPLEMEEAB;
  thunk_FUN_01c20e04(ppIVar2,OKECKCEAHNA);
  return;
}

