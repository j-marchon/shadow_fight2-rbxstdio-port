// TypeDefIndex 3276
// Namespace: 
// public class GOLIJCLCCBA
// Fields:
//   public readonly string PHONOLEMBHN; // 0x10
//   public readonly Action MIMKJIKCPGP; // 0x18
//   public readonly IList<string> PPOHBBJFABG; // 0x20
//   public readonly bool FCLKPJIKDNJ; // 0x28

// ===== public void .ctor(string CJFAPGEEPLM, Action BLMFLPJJMPF, IList<string> DLKPNGAHJMN, bool PDMDIJNKICM = True)  [RVA 0x351A8D4]
// GOLIJCLCCBA$$.ctor @ RVA 0x351A8D4

void GOLIJCLCCBA___ctor(GOLIJCLCCBA_o *__this,System_String_o *CJFAPGEEPLM,
                       System_Action_o *BLMFLPJJMPF,
                       System_Collections_Generic_IList_string__o *DLKPNGAHJMN,bool PDMDIJNKICM,
                       MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_IList_string__o **ppSVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PHONOLEMBHN = CJFAPGEEPLM;
  thunk_FUN_01c20e04(&__this->fields,CJFAPGEEPLM);
  ppSVar1 = &(__this->fields).MIMKJIKCPGP;
  *ppSVar1 = BLMFLPJJMPF;
  thunk_FUN_01c20e04(ppSVar1,BLMFLPJJMPF);
  ppSVar2 = &(__this->fields).PPOHBBJFABG;
  *ppSVar2 = DLKPNGAHJMN;
  thunk_FUN_01c20e04(ppSVar2,DLKPNGAHJMN);
  (__this->fields).FCLKPJIKDNJ = PDMDIJNKICM;
  return;
}

