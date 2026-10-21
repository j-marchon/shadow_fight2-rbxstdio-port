// TypeDefIndex 3126
// Namespace: 
// public class DMKKAPNMDKJ
// Fields:
//   public readonly bool PEKGJKIHHKJ; // 0x10
//   public readonly string BEIPGOKBAEI; // 0x18
//   public readonly long MNPPNIGBPBD; // 0x20
//   public readonly object OGFMJIABHHI; // 0x28

// ===== public void .ctor(bool IBEBJHMKFGE, string IDCGLBOIAFJ, long EAJPLEMEEAB, object OKECKCEAHNA)  [RVA 0x34D0D18]
// DMKKAPNMDKJ$$.ctor @ RVA 0x34D0D18

void DMKKAPNMDKJ___ctor(DMKKAPNMDKJ_o *__this,bool IBEBJHMKFGE,System_String_o *IDCGLBOIAFJ,
                       int64_t EAJPLEMEEAB,Il2CppObject *OKECKCEAHNA,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Il2CppObject **ppIVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PEKGJKIHHKJ = IBEBJHMKFGE;
  ppSVar1 = &(__this->fields).BEIPGOKBAEI;
  *ppSVar1 = IDCGLBOIAFJ;
  thunk_FUN_01c20e04(ppSVar1,IDCGLBOIAFJ);
  ppIVar2 = &(__this->fields).OGFMJIABHHI;
  *ppIVar2 = OKECKCEAHNA;
  (__this->fields).MNPPNIGBPBD = EAJPLEMEEAB;
  thunk_FUN_01c20e04(ppIVar2,OKECKCEAHNA);
  return;
}

